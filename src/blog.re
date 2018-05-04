let component = ReasonReact.statelessComponent("Blog");

let make = (~name, _children) => {
  ...component,
  render: (_self) => <div> {ReasonReact.string(name)} </div>
};