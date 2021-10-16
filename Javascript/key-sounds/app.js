function keyPress(e) {
    //getting keystroke and playing it
    const audio = document.querySelector(`audio[data-key="${e.keyCode}"]`);
    const div = document.querySelector(`div[data-key="${e.keyCode}"]`);
    if (!audio) {
        return;//stop function form all start
    }
    audio.currentTime = 0;//revind it on click
    audio.play();
    div.classList.add('playing');
}
//applying effect on sound key
function keyStroke(e) {
    if (e.propertyName !== "transform") {
        return;
    }
    this.classList.remove('playing');
}
window.addEventListener('keydown', keyPress);
let strok = document.querySelectorAll(".strok");
strok.forEach(key => key.addEventListener('transitionend', keyStroke))