import { Component } from "react";

class button extends Component {
    constructor(){
        super();
        this.state={
          x: 0
        };
      }
  render() {
    let style = {
      color: "red",
      backgroundColor: "dodgerblue",
      fontSize: "72px",
    };
    return( 
        <p style={style}>
            {this.state.x}
        </p>
    );
  }
}

export default button;
