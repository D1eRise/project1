// ��������.cpp: ������� ���� �������.

#include "stdafx.h"
#include "teacher.h"

using namespace ��������;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew teacher());
	return 0;
}
