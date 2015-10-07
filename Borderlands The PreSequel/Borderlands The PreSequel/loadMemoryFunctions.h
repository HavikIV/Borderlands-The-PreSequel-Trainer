// Header for the functions to get base address of a module and to read memory address for pointers
#pragma once

#include <Windows.h>
#include <SDKDDKVer.h>
#include <stdio.h>
#include <tchar.h>
#include <TlHelp32.h>

using namespace std;

//function to get the base address
DWORD dwGetModuleBaseAddress(DWORD dwProcessIdentifier, TCHAR *lpszModuleName)
{
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, dwProcessIdentifier);
	DWORD dwModuleBaseAddress = 0;
	if (hSnapshot != INVALID_HANDLE_VALUE)
	{
		MODULEENTRY32 ModuleEntry32 = { 0 };
		ModuleEntry32.dwSize = sizeof(MODULEENTRY32);
		if (Module32First(hSnapshot, &ModuleEntry32))
		{
			do
			{
				if (_tcscmp(ModuleEntry32.szModule, lpszModuleName) == 0)
				{
					dwModuleBaseAddress = (DWORD)ModuleEntry32.modBaseAddr;
					break;
				}
			} while (Module32Next(hSnapshot, &ModuleEntry32));
		}
		CloseHandle(hSnapshot);
	}
	return dwModuleBaseAddress;
}

//function to read memory for array[][4], 2 offsets
void readMemory(HANDLE hProcess, DWORD baseAddress, int offset, int list[][4], int rows)
{
	//for loop to read the memory for each pointer given an array of arrays.
	for (int i = 0; i < rows; i++)
	{
		ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + offset), &list[i][1], sizeof(list[i][1]), NULL);
		for (int j = 2; j < 4; j++)
		{
			if (j == 3)
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][0], sizeof(list[i][0]), NULL);
				list[i][1] += list[i][j];
			}
			else
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][1], sizeof(list[i][1]), NULL);
			}
		}
	}
}

//function to read memory for array[][5], 3 offsets
void readMemory(HANDLE hProcess, DWORD baseAddress, int offset, int list[][5], int rows)
{
	//for loop to read the memory for each pointer given an array of arrays.
	for (int i = 0; i < rows; i++)
	{
		ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + offset), &list[i][1], sizeof(list[i][1]), NULL);
		for (int j = 2; j < 5; j++)
		{
			if (j == 4)
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][0], sizeof(list[i][0]), NULL);
				list[i][1] += list[i][j];
			}
			else
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][1], sizeof(list[i][1]), NULL);
			}
		}
	}
}

//function to read memory for array[][6], 4 offsets
void readMemory(HANDLE hProcess, DWORD baseAddress, int offset, int list[][6], int rows)
{
	//for loop to read the memory for each pointer given an array of arrays.
	for (int i = 0; i < rows; i++)
	{
		ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + offset), &list[i][1], sizeof(list[i][1]), NULL);
		for (int j = 2; j < 6; j++)
		{
			if (j == 5)
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][0], sizeof(list[i][0]), NULL);
				list[i][1] += list[i][j];
			}
			else
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][1], sizeof(list[i][1]), NULL);
			}
		}
	}
}

//function to read memory for array[][7], 5 offsets
void readMemory(HANDLE hProcess, DWORD baseAddress, int offset, int list[][7], int rows)
{
	//for loop to read the memory for each pointer given an array of arrays.
	for (int i = 0; i < rows; i++)
	{
		ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + offset), &list[i][1], sizeof(list[i][1]), NULL);
		for (int j = 2; j < 7; j++)
		{
			if (j == 6)
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][0], sizeof(list[i][0]), NULL);
				list[i][1] += list[i][j];
			}
			else
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + list[i][j]), &list[i][1], sizeof(list[i][1]), NULL);
			}
		}
	}
}

//Function to read memory addresses for skill pointers
void readSkillsMemory(HANDLE hProcess, DWORD baseAddress, int offset, int list[][2], int rows)
{
	int skillAddress[5] = {0x2c, 0xa4, 0xc98, 0x58, 0x1c}; //array containing the first skill memory address
	for (int i = 0; i < rows; i++)
	{
		ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + offset), &list[i][1], sizeof(list[i][1]), NULL);
		for (int j = 0; j < 5; j++)
		{
			if (j == 4)
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + skillAddress[j]), &list[i][0], sizeof(list[i][0]), NULL);
				list[i][1] += skillAddress[j];
			}
			else
			{
				ReadProcessMemory(hProcess, (LPCVOID)(list[i][1] + skillAddress[j]), &list[i][1], sizeof(list[i][1]), NULL);
			}
		}
		skillAddress[4] += 0x24;
	}
}