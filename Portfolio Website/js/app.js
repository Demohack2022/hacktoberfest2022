// Cursor
const cursor = document.querySelector('.cursor');
let timeout;

document.addEventListener('mousemove', e => {
    cursor.style.top = (e.pageY-20)+"px";
    cursor.style.left = (e.pageX-20)+"px";
    cursor.style.display = "block";

    function mouseStopped(){
        cursor.style.display = "none";
    }

    timeout = setTimeout(() => {
        mouseStopped();
    }, 1000);
})

document.addEventListener('mouseout', () => {
    cursor.style.display = "none";
})





// Typing Animation

const texts = ["UI Designer","&","Web Developer"];
let count = 0;
let index = 0;
let currentText = "";
let letter = "";

(function type() {

    if (count === texts.length) {
        count = 0;
    }
    currentText = texts[count];
    letter = currentText.slice(0, ++index);

    document.querySelector('.nametyping').textContent = letter;
    if (letter.length === currentText.length) {
        count++;
        index = 0;
    }
    setTimeout(type, 200);
})();





// Home Section 
const tl = gsap.timeline();

tl.fromTo('.logo',{
    duration: 1.5,
    opacity: 0,
    x: -100,
    y: -100,
    ease: 'easeIn'
},{
    opacity: 1,
    x: 0,
    y: 0
})

tl.fromTo('.menu',{
    duration: 1.5,
    opacity: 0,
    x: 100,
    y: -100,
    ease: 'easeIn'
},{
    opacity: 1,
    x: 0,
    y: 0
},"-=.5")

tl.fromTo('.scroll--down, .scroll',{
    duration: 1.5,
    opacity: 0,
    x: -100,
    ease: 'easeIn'
},{
    opacity: 1,
    x: 0,
},"-=.5")

tl.fromTo('.resume',{
    duration: 1.5,
    opacity: 0,
    x: 100,
    ease: 'easeIn'
},{
    opacity: 1,
    x: 0,
},"-=.5")

tl.fromTo('.name',{
    duration: 2,
    y: -400,
    ease: 'easeIn'
},{
    y: 100
})

tl.to('.name',{
    duration: 1,
    y: 0,
    ease: 'easeOut'
})

tl.from('.nametyping',{
    duration: 2,
    y: 400,
    ease: Elastic.easeOut
})





// Navigation Links

const tl1 = gsap.timeline({
    paused: true,
    reversed: true
});

tl1.fromTo('.header--ul',{
    clipPath: 'circle(0% at 100% 0%)',
    ease: 'easeIn'
},{
    clipPath: 'circle(150% at 100% 0%)' 
})

tl1.from('.close',{
    duration: .5,
    opacity: 0,
    x: -500
})

tl1.from('.line',{
    duration: .5,
    width: 0,
    stagger: .5
})

tl1.from('.link',{
    duration: .5,
    opacity: 0,
    y: -100,
    stagger: .5
},"-=2.3")

tl1.fromTo('.links',{
    duration: .36,
    opacity: 0,
    y: -100,
},{
    opacity: 1,
    y: 0,
    stagger: .5
},"-=2.3")

const menu = document.querySelector('.menu');
const close = document.querySelector('.close');
 

menu.addEventListener('click', () => {
    tl1.play();
   
})

close.addEventListener('click', () => {
    tl1.timeScale(2)
    tl1.reverse();
  
})





// About Section

gsap.registerPlugin(ScrollTrigger);
const tla = gsap.timeline({
    scrollTrigger: {
        trigger: '.about--num, .about--text, about--line, .my--image',
        start: "bottom bottom"
    }
})

tla.fromTo('.about--num',{
    duration: 1,
    y: 400,
    opacity: 0
},{
    y: 0,
    opacity: 1
}) 

tla.from('.about--text',{
    duration: 2,
    x: -800,
    scale: 0
}) 

tla.from('.about--line',{
    duration: 2,
    scale: 0,
    opacity: 0,
},"-=1.3") 

tla.from('.my--image',{
    duration: 2,
    x: 500, 
    scale: 0
},"-=1.9") 