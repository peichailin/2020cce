import processing.sound.*;
SoundFile player;
void setup()
{
    size(400,200);
    textSize(40);//�j�r
    player = new SoundFile(this ,"tada.mp3");//�p�G�S���ɷ|��
}
void draw()//�C��60��
{
    int s=second();//s�|�W�[,0~59
    background(58,114,191);
    //text(59-s,100,100);//59~0 ���
    text(10-s%11,100,100);
    if(10-s%11 ==0 && !player.isPlaying())//�p�G���@�ӦA��,��L�B�n���X��
    {
      
        player.play();//�o�˦P�ɷ|��60���n��
    }
    //10.9.8.7.6.5.4.3.2.1�@11�ӼƦr,�Q�ξl�ƩM��k���˼ƭp��
}