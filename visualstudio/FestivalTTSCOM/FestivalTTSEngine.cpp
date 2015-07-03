// FestivalTTSEngine.cpp : Implementation of CFestivalTTSEngine

#include "stdafx.h"

#include <comdef.h>
#include <comutil.h>

#include "festival.h"
#include "FestivalTTSEngine.h"


// CFestivalTTSEngine

CFestivalTTSEngine::CFestivalTTSEngine()
{
	festival_initialize(1, 7 * 1024 * 1024);
}

STDMETHODIMP CFestivalTTSEngine::say_text(BSTR inText)
{
	char *speakText = _com_util::ConvertBSTRToString(inText);
	BOOL ret = festival_say_text(speakText);
	delete [] speakText;
	if (ret == true)
		return S_OK;
	else
		return S_FALSE;
}


STDMETHODIMP CFestivalTTSEngine::eval_command(BSTR inCommand)
{
	char *command = _com_util::ConvertBSTRToString(inCommand);
	BOOL ret = festival_eval_command(command);
	delete [] command;
	if (ret == true)
		return S_OK;
	else
		return S_FALSE;
}


STDMETHODIMP CFestivalTTSEngine::text_to_wave(BSTR inText, BSTR inFile)
{
	EST_Wave wave;

	char *speakText = _com_util::ConvertBSTRToString(inText);
	char *wavFile = _com_util::ConvertBSTRToString(inFile);
	
	festival_text_to_wave(speakText, wave);
	wave.save(wavFile, "riff");

	delete[] speakText;
	delete[] wavFile;

	return S_OK;
}
