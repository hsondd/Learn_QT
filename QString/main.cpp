//#include <QCoreApplication>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream out(stdout);

    QString a = "pho";
    a.append("Code");
    a.prepend("hi");

    out << a << endl;
    std::cout << "chuoi a co " << a << " ky tu" << endl;
    out << a.toUpper() << endl;
    out << a.toLower() << endl;

    return a.exec();
}

//single responsibility: moi class chi nen dung de thuc hien mot chuc nang duy nhat
//open/closed: cos the thoai mai mo rong mot class nhung khong thay doi class cu, chi nen viet them vao
//liskov subsituation: cac object con co the thay the object cha ma ko lam thay doi ttitnh dung danh cua chuong tri
//interface segeration: thay vi dung class lon, co the phan tach thanh tung interface nho
//depedency inversion: module cap cao ko nen phu thuoc vao module cap thap va nguoc lai, ca 2 nen phu thuoc vao abstraction
//                     abstraction ko nen phu thuoc vao chi tiet
