import React from 'react';
import './cardlist.style.css';
export const CardList = (props) => {
    return <div className='card-list'>{props.children}</div>;
}