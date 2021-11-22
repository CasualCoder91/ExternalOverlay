#pragma once

#include <string> //save error
#include <Windows.h>

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#include <DxErr.h> //get error from error code
#pragma comment(lib, "dxerr.lib")
#pragma comment(lib, "legacy_stdio_definitions.lib")

class Paint{
private:
	IDirect3D9Ex* d3dObject = NULL; //used to create device
	IDirect3DDevice9Ex* d3dDevice = NULL; //contains functions like begin and end scene 
	D3DPRESENT_PARAMETERS d3dparams; //parameters for creating device
	ID3DXFont* d3dFont = 0; // font used when displaying text
	HWND targetWnd;
	int width;
	int height;

	int d3D9Init(HWND hWnd);
	void drawText(char* String, int x, int y, int a, int r, int g, int b);
public:
	Paint();
	Paint(HWND hWnd, HWND targetWnd, int width, int height);
	int render();
};