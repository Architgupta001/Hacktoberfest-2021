import React from 'react';

class ImageCard extends React.Component{
    
    constructor(props)
    {
        super(props);
        this.state = {spans  : 0};
        this.imageref = React.createRef();
    }

    componentDidMount()
    {
        this.imageref.current.addEventListener('load',this.setSpans);
    }
    
    setSpans = () =>
    {
         const height = this.imageref.current.clientHeight;
         const spans = Math.ceil(height / 10);
         this.setState({spans});    
   } 
  
    render() {
        return (
            <div  style={{gridRowEnd : `span ${this.state.spans}`}} >
                <img ref={this.imageref} alt={this.props.image.description} key={this.props.image.id} src={this.props.image.urls.small} ></img>
            </div>
        );
    }
}

export default ImageCard;