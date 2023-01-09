import React from 'react'
import {useParams} from 'react-router-dom';
export default function Player() {
  const {moviename} = useParams();
  return (
    <div>Player 👋 {moviename} </div>
  )
}
