int []a=new int [47];//java �}�C
void setup()
{
    size(500,200);
    textSize(30);
    for(int i=0;i<47;i++) a[i]=i;//�b��l��W�������Ʀr,�n�T�w�S���ʵP
    for(int i=0;i<1000;i++)
    {
        int i1=(int) random(47);
        int i2=(int) random(47);
        int temp=a[i1]; a[i1]=a[i2];a[i2]=temp;//���洫
    }//���~�n�P,�����D�o�����X,���@�U�A�̧Ǳ��U��
}
int N=0,rolling=0;
void draw()
{
    textAlign(CENTER,CENTER);//��r�������
    background(#C47AF2);
    for(int i=0;i<N;i++)//�s�ʵ�mouse��N�M�w���U�X��
    {
        int x=i*80+40;
        if(i==N-1 && rolling>0)
        {
          x+=rolling;
          rolling-=3; //�C���y��m-3
        }
        fill(255); ellipse(x,100,55,55);//ellipse��� 55,55���j�p ,fill��m 255�զ�
        fill(0); text(a[i],x+2,100+2);
        fill(0); text(a[i],x,100);//i*80,100 �y�� ,�Ĥ@�ӼƦr+40 ���k�a40,fill��m 0�¦�

    }
}//�����]�X���G
void mousePressed ()
{
    rolling=500;
    N++;//���@��N++,�Q��MOUSE�M�w�n���X���y
}
