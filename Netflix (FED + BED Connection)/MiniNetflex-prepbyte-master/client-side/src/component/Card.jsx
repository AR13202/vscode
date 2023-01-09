import React from 'react'
import {Link} from 'react-router-dom';
export default function Card(props) {
  return (
    <>
        <Link to={`player/${props.name}`} className="card">
                    <img src={props.img} className="card__image" alt="" height='300px' width='500px'/>
                    <div className="card__overlay">
                        <div className="card__header">
                            <svg className="card__arc" xmlns="http://www.w3.org/2000/svg"><path /></svg>
                            <img className="card__thumb" src={props.profile} alt="" />
                            <div className="card__header-text">
                                <h3 className="card__title"> {props.name} </h3>
                                <span className="card__status">{props.time} hour ago</span>
                            </div>
                        </div>
                        <p className="card__description">{props.desc}</p>
                    </div>
        </Link>
    </>
  )
}
