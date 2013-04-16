
#include "plugin/Plugin.h"

#include "NTP.h"

BRO_PLUGIN_BEGIN(NTP)
	BRO_PLUGIN_DESCRIPTION("NTP Analyzer");
	BRO_PLUGIN_ANALYZER("NTP", NTP_Analyzer::InstantiateAnalyzer);
	BRO_PLUGIN_BIF_FILE(events);
BRO_PLUGIN_END
