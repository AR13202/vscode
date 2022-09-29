import React from 'react';
import GoogleMapReact from 'google-map-react';
import {Paper, Typography, usedMediaQuery, useMediaQuery} from '@material-ui/core';
import LocationOutlineIcon from '@material-ui/icons/LocationCityOutlined';
import Rating from '@material-ui/lab';

import useStyles from './styles';
const Map = () => {
    const classes = useStyles();
    const ismobile = useMediaQuery('(min-width:600px');
    return (
        <div className={classes.mapContainer}>
            <GoogleMapReact
                bootstrapURLKeys={{Key: ''}}
                defaultCenter={coordinates}
                center={coordinates}
                defaultZoom={14}
                margin={[50,50,50,50]}
                option = {''}
                onChange={''}
                onChildClick={''}
                ></GoogleMapReact>
        </div>
    );
}
export default Map;