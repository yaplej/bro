
#include "plugin/Plugin.h"

#include "./File.h"

BRO_PLUGIN_BEGIN(File)
	BRO_PLUGIN_DESCRIPTION("Generic File Analyzer");
	BRO_PLUGIN_ANALYZER("File", File_Analyzer::InstantiateAnalyzer);
	BRO_PLUGIN_BIF_FILE(events);
BRO_PLUGIN_END
