void setup()//�u���@���]�w
{
  size(1024, 400);
}
void draw()//���ʪ���,�C��e60��
{
  if(mousePressed) background(255,0,255);//mousePressed��ƹ����U�h��,����
  else background(168,154,250);//�_�h�N�O�o���C��,�H����
  text(a,512,200);//�e�X��r,�᭱�Ʀr��ܦ�m
}//�ؼ�:��e��,mouse���U�h/���ʪ��ɭ�,�n�e�I�F��/���I�F��
int a=0;
void mousePressed()//�ƹ����U�h��a++
{
  a++;//�C���@���[1
}
