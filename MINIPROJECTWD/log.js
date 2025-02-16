const swapButtons = document.querySelectorAll("#c");
const slider1 = document.getElementsByClassName("slider1")[0];
const slider2 = document.getElementsByClassName("slider2")[0];
const body = document.getElementsByName("body");

swapButtons.forEach(swap => {
  swap.addEventListener("click", function() {
    if (swap.innerHTML === "Sign Up") {
      slider1.style.animation = "slides 1.5s forwards";
      slider2.style.animation = "slides2 1.5s forwards";
      
    } else {
      slider1.style.animation = "slides3 1.5s forwards";
      slider2.style.animation = "slides4 1.5s forwards";
    }
  });
});

