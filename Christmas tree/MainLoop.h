#pragma once

class GlyphList;

class MainLoop
{
public:
	MainLoop(GlyphList* glyphList);
	~MainLoop();
private:
	GlyphList *m_glyphList;
};

