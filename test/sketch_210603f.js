function setup() {
  createCanvas(400,200);
}


function draw() {
  let s=second();//0~59秒
    if(s%2==0) 
    {
      background(255,0,0);
    }
    else 
    {
      background(58,114,191);
    }
}
