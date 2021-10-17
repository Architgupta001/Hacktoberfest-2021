function getTime() {
    const time = new Date();
    const sec = time.getSeconds();
    const min = time.getMinutes();
    const hr = time.getHours();
    const secondDegree = (((sec / 60) * 360) + 90);
    const minuteDegree = (((min / 60) * 360) + 90);
    const hourDegree = (((hr / 12) * 360) + 90);
    // console.log(hourDegree);
    let second = document.querySelector(".second");
    second.style.transform = `rotate(${secondDegree}deg)`;
    let minute = document.querySelector(".minute");
    minute.style.transform = `rotate(${minuteDegree}deg)`;
    let hour = document.querySelector(".hour");
    hour.style.transform = `rotate(${hourDegree}deg)`;
}
setInterval(getTime, 1000);