#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui界面设置
    //标题设置
    setWindowTitle("Pacman");
    //禁止最大化
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
    //固定大小
    //setFixedSize(AREA_COL*BLOCK_SIZE+MARGIN*5,AREA_ROW*BLOCK_SIZE+MARGIN*5);
    //设置图标
    setWindowIcon(QIcon(":/icon/images/Inky.png"));
    //设置背景音乐  还不能播放
    // QMediaPlayer *bgm = new QMediaPlayer(this);
    // QAudioOutput *audioOutput = new QAudioOutput(this);
    // bgm->setAudioOutput(audioOutput);
    // audioOutput->setVolume(1.0);
    // bgm->setSource(QUrl(":/sounds/sound/ready.mp3"));
    // bgm->play();

}

MainWindow::~MainWindow()
{
    delete ui;
}
