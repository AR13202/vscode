import React from 'react';

function Propfxn(props) {
  return <h1>{props.text}</h1>;
}
function App() {

  return(
  <>    
      <Propfxn text="abc" />
      <Propfxn text="def" />
      <Propfxn text="aryan" />
      <Propfxn text="qwerty" />
  </>
  );
}

export default App;
