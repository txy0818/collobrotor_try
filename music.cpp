//mciSendString    ���ֵĲ����봰��Ĵ����йأ�û�д��岥�Ų�������
//mciSendString���������Ŷ�ý���ļ���APIָ����Բ���MPEG,AVI,WAV,MP3,�ȵ�
//����Ҫʹ����WAV��MP3
//��ײ������Ӧ�ر��ٿ���  �ǵ�Ҫ�ȹر���Ƶ����ܹ��ٴβ���

//mciSendString("open ./���.wav repeat ", 0, 0, 0);
//wav�ļ�������������д��
//mciSendString("open ./���.mp3 repeat ", 0, 0, 0); 

//ע�⣺
//mciSendString(_T("open ./music/bkmusic.mp3"), 0, 0, 0);
//mciSendString(_T("play ./music/bkmusic.mp3"), 0, 0, 0);
//mciSendString(_T("close ./music/bkmusic.mp3"), 0, 0, 0); ��������д  ��Ϊ��ûplay��close  ���ֲ��Ų���

//#include<iostream>
//#include<easyx.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")//���뾲̬��
//using namespace std;
//
//int main() {
//
//	initgraph(960, 640);
//
//	HWND hwnd = GetHWnd();
//	SetWindowText(hwnd, _T("try"));
//
//	mciSendString(_T("open ./music/bkmusic.mp3 alias bkmusic"), 0, 0, 0);
//	// ��1��
//	mciSendString(_T("play ./music/bkmusic.mp3 repeat"), 0, 0, 0);
//	// ��2��
//	//mciSendString(_T("play bkmusic repeat"), 0, 0, 0);
//
//	//(1)play��ر�
//	//mciSendString(_T("open ./music/bkmusic.mp3"), 0, 0, 0);
//	//mciSendString(_T("play ./music/bkmusic.mp3"), 0, 0, 0);
//  //һϵ�в���֮����дclose
//	//mciSendString(_T("close ./music/bkmusic.mp3"), 0, 0, 0);
//
//	//Ϊ�ļ����ƣ��ļ�·����ȡ����
//	//mciSendString(_T("open ./music/bkmusic.mp3 alias bkmusic"), 0, 0, 0);
//	//mciSendString(_T("play bkmusic"), 0, 0, 0);
//	//һϵ�в���֮����дclose
//	//mciSendString(_T("close bkmusic"), 0, 0, 0);
//
//	//(2)play��repeat  wav���У�ֱ��û������  mp3����
//	//mciSendString(_T("open ./music/bkmusic.mp3 alias bkmusic"), 0, 0, 0);
//	//mciSendString(_T("play ./music/bkmusic.mp3 repeat"), 0, 0, 0);
//
//	//mciSendString(_T("open ./music/���.wav"), 0, 0, 0);
//	//mciSendString(_T("play ./music/���.wav repeat"), 0, 0, 0);//����
//
//
//	getchar();
//	closegraph();
//
//}



