/////////////////////////////////////
// COURSERA GRAPHICS PROGRAMMING
/////////////////////////////////////
function setup() {
    createCanvas(900,600);
    background(0);
    fill(255);
    angleMode(DEGREES);
}
//////////////////////////////////////////////////////////
function draw() {
    // background(0);
    

    var period = 0;
    var amplitude = 250;
    var frequency = 0.2;
    var phase = 90;
    translate(0, height/2);
    // var locX = sin(360 * frameCount/period + phase) * amplitude;
    var locX = sin(frameCount * 6 * frequency + phase) * amplitude;
    ellipse(frameCount/frequency/5, locX, 30, 30);
}
