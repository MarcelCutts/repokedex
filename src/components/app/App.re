let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self => <div> ("Pokedex" |> ReasonReact.string) </div>,
};