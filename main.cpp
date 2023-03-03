#include "ui_SyncSettingsDlgMin.h"

#include <QApplication>


class CSyncSettingsDlgMin : public QDialog
{
public:
    CSyncSettingsDlgMin( QWidget *parent = 0 );
    ~CSyncSettingsDlgMin();
private:
    std::unique_ptr< Ui::CSyncSettingsDlgMin > fImpl;
};

CSyncSettingsDlgMin::CSyncSettingsDlgMin( QWidget *parent ) :
    QDialog( parent ),
    fImpl( new Ui::CSyncSettingsDlgMin )
{
    fImpl->setupUi( this );
}

CSyncSettingsDlgMin::~CSyncSettingsDlgMin()
{
}


int main( int argc, char **argv )
{
    QApplication appl( argc, argv );

    CSyncSettingsDlgMin dlg;
    return dlg.exec();
}
