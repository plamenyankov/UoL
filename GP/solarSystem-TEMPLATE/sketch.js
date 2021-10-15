var speed;

function setup() {
    createCanvas(1200, 1200);
}

function draw() {
    background(0);
    speed = frameCount;

   
    translate(width/2, height/2);
    rotate(radians(speed/3))
    celestialObj(color(255,150,0), 200); // SUN
    
    // Adding the Earth with the moons
    push()
    rotate(radians(speed))
    translate(300, 300);
    rotate(radians(speed))
    celestialObj(color(0,0,255), 80); // Earth
    // First Moon 100px from the center of the Earth
        push()
        rotate(radians((-speed)*4))
        translate(100, 100);
        fill(255)
        celestialObj(color(255), 30); // Moon
        pop()
    // Second Moon 60px from the center of the Earth, spinning faster
        push()
        rotate(radians((-speed)*5))
        translate(60, 60);
        fill(255)
        celestialObj(color(255,0,0), 30); // Moon 2
        pop()
    pop()
}

function celestialObj(c, size){
    strokeWeight(5);
    fill(c);
    stroke(0);
    ellipse(0, 0, size, size);
    line(0, 0, size/2, 0);
}

