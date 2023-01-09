import Button from 'react-bootstrap/Button';
import Container from 'react-bootstrap/Container';
import Form from 'react-bootstrap/Form';
import Nav from 'react-bootstrap/Nav';
import Navbar from 'react-bootstrap/Navbar';
import React,{useState} from 'react';
import logpic from '../resources/login.png';

function NavScrollExample() {
  const [log,setlog]=useState(false);


  return (
    
    <Navbar bg="dark" variant="dark" expand="lg">
      <Container fluid>
        <Navbar.Brand href="#"> <img src="https://icones.pro/wp-content/uploads/2021/04/icone-netflix-symbole-logo-original.png" alt=""  height='35px'/> NetFlix Mini</Navbar.Brand>
        <Navbar.Toggle aria-controls="navbarScroll" />
        <Navbar.Collapse id="navbarScroll">
          <Nav
            className="me-auto my-2 my-lg-0"
            style={{ maxHeight: '100px' }}
            navbarScroll
          >
            <Nav.Link href="#action1">Home</Nav.Link>
            <Nav.Link href="#action2">Link</Nav.Link>
           
          </Nav>
          { (log)?<button className='btn btn-warning ml-3 mx-3'> Wallet </button> :<button className='btn btn-info mx-3'> <img src={logpic} alt="" height='30px' />  Login </button>
          
          }


          <Form className="d-flex">
            <Form.Control
              type="text"
              placeholder="Search"
              className="me-2"
              aria-label="Search"
            />
            <Button variant="warning">Search</Button>
          </Form>
        </Navbar.Collapse>
      </Container>
    </Navbar>
   
  );
}

export default NavScrollExample;