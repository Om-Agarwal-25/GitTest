const cursor = document.getElementById("cursormov")

let mouseX = 0;
let mouseY=0;
let cursorX=0;
let cursorY=0;
let delay = 0.1;

document.addEventListener('mousemove',function(e){
    mouseX=e.pageX;
    mouseY=e.pageY;
})

function ani(){

cursorX=mouseX
cursorY=mouseY

cursor.style.transform =`translate(${cursorX-10}px,${cursorY-135}px)`;
requestAnimationFrame(ani);
}

ani();

