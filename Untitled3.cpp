void setup()//�u���@���]�w
{
  size(1024, 400);
}
void draw()//���ʪ���,�C��e60��
{
  if(mousePressed) background(255,0,255);//mousePressed��ƹ����U�h��,����
  else background(168,154,250);//�_�h�N�O�o���C��,�H����
  textSize(80);//��r���j�p
  text("�����a��Now a is" +a,212,200);//�e�X��r,�᭱�Ʀr��ܦ�m,text:��r
  //"Now a is" +a:��r���[�k,���奴���X��,�q��������Ѥ���
}//�ؼ�:��r���t�C���Ф@�U!
int a=0;
void mousePressed()//�ƹ����U�h��a++//�ؼ�:��e��,mouse���U�h/���ʪ��ɭ�,�n�e�I�F��/���I�F��
{
  a++;//�C���@���[1
}
