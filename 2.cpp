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
int N=0;
void draw()
{
    background(#C47AF2);
    for(int i=0;i<N;i++)//�s�ʵ�mouse��N�M�w���U�X��
    {
        text(a[i],i*80,100);
    }
}//�����]�X���G
void mousePressed ()
{
    N++;//���@��N++,�Q��MOUSE�M�w�n���X���y
}
