#include "MainLoop.h"
#include "lists.h"

MainLoop::MainLoop(GlyphList* glyphList)
{
	m_glyphList = glyphList;
}

MainLoop::~MainLoop()
{
	m_glyphList;
}
