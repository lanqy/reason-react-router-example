let component = ReasonReact.statelessComponent("NotFound");

let make = (~name, _children) => {
  ...component,
  render: (_self) => <div> {ReasonReact.string(name)} </div>
};