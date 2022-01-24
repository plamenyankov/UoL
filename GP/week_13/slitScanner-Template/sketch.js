var video,w,x;

function setup() {
    createCanvas(640 * 2, 480);
    pixelDensity(1);
    video = createCapture(VIDEO);
    video.hide();
    w = 640;
    x = w;
}

function draw() {
    image(video, 0, 0);

    // STEP 1 - write your code below
    var c = get(video.width / 2, 0,1, height);

    push();
    stroke(255, 0, 0);
    line(video.width / 2, 0, video.width / 2, video.height);
    pop();

    // STEP 2 - write your code below


        push();
        translate(x, 0);
        image(c,0,0);
        pop();
        x+=1;
        if(x == (w*2)){
            x = w;
        }

}
