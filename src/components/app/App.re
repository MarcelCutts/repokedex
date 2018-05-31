Css.(global("html", [height(pct(100.)), width(pct(100.))]));

Css.(
  global(
    "body",
    [
      height(pct(100.)),
      width(pct(100.)),
      display(flexBox),
      alignItems(center),
      justifyContent(center),
    ],
  )
);

module Styles = {
  open Css;
  let app = style([background(red), color(white)]);
};

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self => <div className=Styles.app> ("Pokedex" |> ReasonReact.string) </div>,
};