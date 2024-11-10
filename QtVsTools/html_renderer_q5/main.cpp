//
//
//

#include "html_renderer_q5.h"
#include "../common/DebuggingConsole.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[]) {
#if _DEBUG
    attachDebugConsole();
#endif

    QApplication a(argc, argv);
    html_renderer_q5 w;
    w.show();
    return a.exec();
}
