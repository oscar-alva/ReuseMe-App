#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //Folowing Code sets images to the tab widget
    QPixmap pic(":/images/Images/BottleMedium.png");
    ui->labelpic->setPixmap(pic);

    QPixmap pic2(":/images/Images/BagMedium.png");
    ui->labelpic2->setPixmap(pic2);

    QPixmap pic3(":/images/Images/Container Medium.png");
    ui->labelpic3->setPixmap(pic3);

    QPixmap pic4(":/images/Images/NapkinMedium.png");
    ui->labelpic4->setPixmap(pic4);

    QPixmap pic5(":/images/Images/PaperTowelMedium.png");
    ui->labelpic5->setPixmap(pic5);

    QPixmap pic6(":/images/Images/TshirtMedium.png");
    ui->labelpic6->setPixmap(pic6);
}

MainWindow::~MainWindow()
{
    delete ui;
}


// When the button is clicked, this function will open a message
// box that reads input from ReusableBottles.txt and displays it to
// the user and then closes it when the user clicks "ok".
void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox *message = new QMessageBox;
    QFile *file = new QFile (":/Text/ReusableBottles.txt");
    if (file->open (QIODevice::ReadOnly) == true)
    {
        message->setText(QString(file->readAll()));
        file->close();
    }
    message->exec();
}

// When the button is clicked, this function will open a message
// box that reads input from ReusableBags.txt and displays it to
// the user and then closes it when the user clicks "ok".
void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox *message = new QMessageBox;
    QFile *file = new QFile (":/Text/ReusableBags.txt");
    if (file->open (QIODevice::ReadOnly) == true)
    {
        message->setText(QString(file->readAll()));
        file->close();
    }
    message->exec();
}

// When the button is clicked, this function will open a message
// box that reads input from ReusableFoodContainers.txt and displays it to
// the user and then closes it when the user clicks "ok".
void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox *message = new QMessageBox;
    QFile *file = new QFile (":/Text/ReusableFoodContainers.txt");
    if (file->open (QIODevice::ReadOnly) == true)
    {
        message->setText(QString(file->readAll()));
        file->close();
    }
    message->exec();
}

// opens a link
void MainWindow::on_pushButton_clicked()
{
    QString link = "https://www.amazon.com/dp/B08F2TGJJH/ref=cm_sw_r_cp_api_glt_fabc_PJAVK1ZYV7AZ4Z93MW3C?_encoding=UTF8&psc=1";
    QDesktopServices::openUrl(QUrl(link));
}

// opens a link
void MainWindow::on_pushButton_3_clicked()
{
    QString link = "https://www.amazon.com/dp/B087BP9V2F/ref=cm_sw_r_em_api_glt_fabc_dl_GNA1J7KAN94BX334DBZY";
    QDesktopServices::openUrl(QUrl(link));
}

// opens a link
void MainWindow::on_pushButton_5_clicked()
{
    QString link = "https://www.amazon.com/dp/B07XSJDYL1/ref=cm_sw_r_em_api_glt_fabc_YX9GYYAE4S7BTTXG5GQ8?psc=1";
    QDesktopServices::openUrl(QUrl(link));
}

// opens a link
void MainWindow::on_pushButton_10_clicked()
{
    QString link = "https://www.unep.org/interactive/beat-plastic-pollution/";
    QDesktopServices::openUrl(QUrl(link));
}

// opens a link
void MainWindow::on_pushButton_9_clicked()
{
    QString link = "https://www.amazon.com/dp/B07B2VGJZ9/ref=cm_sw_r_em_api_glt_fabc_FFCKWVAP2T41WEWEA1QW?_encoding=UTF8&th=1";
    QDesktopServices::openUrl(QUrl(link));
}

// opens a link
void MainWindow::on_pushButton_12_clicked()
{
    QString link = "https://www.amazon.com/dp/B08RJJ5LX2/ref=cm_sw_r_em_api_glt_fabc_F312E14G2VSVNAS2C2E0?_encoding=UTF8&psc=1";
    QDesktopServices::openUrl(QUrl(link));
}

// When the button is clicked, this function will open a message
// box that reads input from Paper.txt and displays it to
// the user and then closes it when the user clicks "ok".
void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox *message = new QMessageBox;
    QFile *file = new QFile (":/Text/Paper.txt");
    if (file->open (QIODevice::ReadOnly) == true)
    {
        message->setText(QString(file->readAll()));
        file->close();
    }
    message->exec();
}

// opens two links
void MainWindow::on_pushButton_8_clicked()
{
    QString link = "https://community.aiim.org/blogs/dennis-kempner/2016/12/06/impacts-of-paper-on-the-environment";
    QString link2 = "https://www.greenamerica.org/sites/default/files/inline-files/Paper%20Facts%202017.pdf";
    QDesktopServices::openUrl(QUrl(link));
    QDesktopServices::openUrl(QUrl(link2));
}

// opens a link
void MainWindow::on_pushButton_11_clicked()
{
    QString link = "https://www1.nyc.gov/assets/donate/site/Directory";
    QDesktopServices::openUrl(QUrl(link));
}

// when the button is clicked, it checks for which check
// boxes have been checked. The ones that are checked are
// assigned to print an element from myProducts1 or
// myProducts2 to list.txt. The function then reads the
// file and displays it to the user.
void MainWindow::on_pushButton_13_clicked()
{
    if(ui->checkBox1->isChecked())
    {
        myProducts1.print(0);
    }

    if(ui->checkBox2->isChecked())
    {
        myProducts1.print(1);
    }

    if(ui->checkBox3->isChecked())
    {
        myProducts1.print(2);
    }

    if(ui->checkBox4->isChecked())
    {
        myProducts2.print(0);
    }

    if(ui->checkBox5->isChecked())
    {
        myProducts2.print(1);
    }

    //Creates a dynamic QMessageBox object
    QMessageBox *message = new QMessageBox;

    //Creates a dynamic QFile object with the path to list.txt
    // *** CHANGE PATH ADDRESS TO THE PATH ADDRESS OF LIST.TXT IN YOUR COMPUTER ***
    QFile *file = new QFile ("/Users/butters/ReuseMeApp/list.txt");

    //checks if file has been open tjhen proceeds to read the file
    //to a message box.
    if (file->open (QIODevice::ReadOnly) == true)
    {
        message->setText(QString(file->readAll()));
        file->close();
    }

    //executes message box.
    message->exec();
}

