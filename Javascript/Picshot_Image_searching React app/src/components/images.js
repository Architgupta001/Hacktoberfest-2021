import './images.css';
import React from 'react';
import ImageCard from './imagecard'

const ImageList = (props) => {
    
  const images = props.images.map((image) =>{
      return <ImageCard image={image} />
  });

    return (<div className ="images" >{images}</div>);
}

export default ImageList;