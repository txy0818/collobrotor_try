//mciSendString    音乐的播放与窗体的创建有关，没有窗体播放不了音乐
//mciSendString是用来播放多媒体文件的API指令，可以播放MPEG,AVI,WAV,MP3,等等
//我主要使用了WAV和MP3
//碰撞声结束应关闭再开启  记得要先关闭音频后才能够再次播放

//mciSendString("open ./金币.wav repeat ", 0, 0, 0);
//wav文件不能满足以上写法
//mciSendString("open ./金币.mp3 repeat ", 0, 0, 0); 

//注意：
//mciSendString(_T("open ./music/bkmusic.mp3"), 0, 0, 0);
//mciSendString(_T("play ./music/bkmusic.mp3"), 0, 0, 0);
//mciSendString(_T("close ./music/bkmusic.mp3"), 0, 0, 0); 不能连着写  因为还没play就close  音乐播放不了

//#include<iostream>
//#include<easyx.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")//导入静态库
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
//	// （1）
//	mciSendString(_T("play ./music/bkmusic.mp3 repeat"), 0, 0, 0);
//	// （2）
//	//mciSendString(_T("play bkmusic repeat"), 0, 0, 0);
//
//	//(1)play完关闭
//	//mciSendString(_T("open ./music/bkmusic.mp3"), 0, 0, 0);
//	//mciSendString(_T("play ./music/bkmusic.mp3"), 0, 0, 0);
//  //一系列操作之后再写close
//	//mciSendString(_T("close ./music/bkmusic.mp3"), 0, 0, 0);
//
//	//为文件名称（文件路径）取别名
//	//mciSendString(_T("open ./music/bkmusic.mp3 alias bkmusic"), 0, 0, 0);
//	//mciSendString(_T("play bkmusic"), 0, 0, 0);
//	//一系列操作之后再写close
//	//mciSendString(_T("close bkmusic"), 0, 0, 0);
//
//	//(2)play并repeat  wav不行（直接没声音）  mp3可以
//	//mciSendString(_T("open ./music/bkmusic.mp3 alias bkmusic"), 0, 0, 0);
//	//mciSendString(_T("play ./music/bkmusic.mp3 repeat"), 0, 0, 0);
//
//	//mciSendString(_T("open ./music/金币.wav"), 0, 0, 0);
//	//mciSendString(_T("play ./music/金币.wav repeat"), 0, 0, 0);//错误
//
//
//	getchar();
//	closegraph();
//
//}



