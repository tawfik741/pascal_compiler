
from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(700, 600)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.centralwidget)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        
        # text layout
        self.textLayout = QtWidgets.QVBoxLayout()
        self.textLayout.setContentsMargins(20, 20, 20, 0)
        self.textLayout.setObjectName("textLayout")
        #code label
        self.codeLabel = QtWidgets.QLabel(self.centralwidget)
        self.codeLabel.setFrameShape(QtWidgets.QFrame.NoFrame)
        self.codeLabel.setObjectName("codeLabel")
        self.textLayout.addWidget(self.codeLabel)
        #code text
        self.codeText = QtWidgets.QTextEdit(self.centralwidget)
        self.codeText.setFrameShadow(QtWidgets.QFrame.Raised)
        self.codeText.setObjectName("codeText")
        self.textLayout.addWidget(self.codeText)
        #spacer
        spacerItem = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.textLayout.addItem(spacerItem)
        # result label
        self.resutLabel = QtWidgets.QLabel(self.centralwidget)
        self.resutLabel.setObjectName("resutLabel")
        self.textLayout.addWidget(self.resutLabel)
        #result text
        self.resultText = QtWidgets.QTextEdit(self.centralwidget)
        self.resultText.setObjectName("resultText")
        self.textLayout.addWidget(self.resultText)
        self.horizontalLayout.addLayout(self.textLayout)
        #button layout
        self.buttonLayout = QtWidgets.QVBoxLayout()
        self.buttonLayout.setSizeConstraint(QtWidgets.QLayout.SetNoConstraint)
        self.buttonLayout.setContentsMargins(-1, -1, 10, -1)
        self.buttonLayout.setSpacing(0)
        self.buttonLayout.setObjectName("buttonLayout")
        #new button
        self.newButton = QtWidgets.QPushButton(self.centralwidget)
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("icons/new.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.newButton.setIcon(icon)
        self.newButton.setIconSize(QtCore.QSize(24, 24))
        self.newButton.setObjectName("newButton")
        self.buttonLayout.addWidget(self.newButton)
        self.newButton.clicked.connect(self.new)
        #analyse button
        self.analyseButton = QtWidgets.QPushButton(self.centralwidget)
        icon1 = QtGui.QIcon()
        icon1.addPixmap(QtGui.QPixmap("icons/analyse.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.analyseButton.setIcon(icon1)
        self.analyseButton.setIconSize(QtCore.QSize(24, 24))
        self.analyseButton.setObjectName("analyseButton")
        self.buttonLayout.addWidget(self.analyseButton)
        self.analyseButton.clicked.connect(self.analyse)
        #compile button
        self.compileButton = QtWidgets.QPushButton(self.centralwidget)
        icon2 = QtGui.QIcon()
        icon2.addPixmap(QtGui.QPixmap("icons/compile.png"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.compileButton.setIcon(icon2)
        self.compileButton.setIconSize(QtCore.QSize(24, 24))
        self.compileButton.setObjectName("compileButton")
        self.buttonLayout.addWidget(self.compileButton)        
        self.compileButton.clicked.connect(self.runCompile)

        self.horizontalLayout.addLayout(self.buttonLayout)
        self.horizontalLayout_2.addLayout(self.horizontalLayout)
        MainWindow.setCentralWidget(self.centralwidget)

        

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.codeLabel.setText(_translate("MainWindow", "Code goes here"))
        self.codeText.setToolTip(_translate("MainWindow", "Type Code here"))
        self.resutLabel.setText(_translate("MainWindow", "Result"))
        self.newButton.setText(_translate("MainWindow", "New"))
        self.analyseButton.setText(_translate("MainWindow", "Analyse"))
        self.compileButton.setText(_translate("MainWindow", "Compile"))
    
    def new (self):
        self.codeText.clear()
        self.resultText.clear()
    
    def analyse(self):
        self.resultText.clear()
        self.resultText.setText(self.codeText.toPlainText())
    
    def runCompile(self):
        self.resultText.clear()
        #run compile
        #self.resultText.setText("something")


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
