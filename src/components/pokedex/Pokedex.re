type state = {pokemon: string};

type action =
  | UpdatePokemon(string);

let component = ReasonReact.reducerComponent("pokedex");

let make = _children => {
  ...component,
  initialState: () => {
    pokemon: ReasonReact.Router.dangerouslyGetInitialUrl().hash,
  },
  subscriptions: self => [
    Sub(
      () =>
        ReasonReact.Router.watchUrl(url =>
          self.send(UpdatePokemon(url.hash))
        ),
      ReasonReact.Router.unwatchUrl,
    ),
  ],
  reducer: (action, state) =>
    switch (action) {
    | UpdatePokemon(p) =>
      ReasonReact.UpdateWithSideEffects(
        {pokemon: p},
        (
          _self =>
            if (p != state.pokemon) {
              ReasonReact.Router.push("/#" ++ p);
            }
        ),
      )
    },
  render: self =>
    <div>
      (self.state.pokemon |> ReasonReact.string)
      <button
        onClick=(
          _e =>
            self.send(
              UpdatePokemon(
                string_of_int(int_of_string(self.state.pokemon) + 1),
              ),
            )
        )>
        ("buttan" |> ReasonReact.string)
      </button>
    </div>,
};