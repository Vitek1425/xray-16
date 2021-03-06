#pragma once

#include "Common/Common.hpp"

#include "xrCore/xrCore.h"

#define _BCL
#define ENGINE_API

enum TMsgDlgType
{
    mtWarning,
    mtError,
    mtInformation,
    mtConfirmation,
    mtCustom
};
enum TMsgDlgBtn
{
    mbYes,
    mbNo,
    mbOK,
    mbCancel,
    mbAbort,
    mbRetry,
    mbIgnore,
    mbAll,
    mbNoToAll,
    mbYesToAll,
    mbHelp
};
typedef TMsgDlgBtn TMsgDlgButtons[mbHelp];

#define ECORE_API

#include "plugins/Shared/ELog.h"
#include <d3d9types.h>
#include <time.h>
#include <string>
#include <lwsdk/lwrender.h>
#include <lwsdk/lwenvel.h>
#include <lwsdk/lwdisplay.h>
#include <lwsdk/lwmeshes.h>
#include <lwsdk/lwhost.h>
#include <lwsdk/lwserver.h>

#define AnsiString std::string

using AStringVec = xr_vector<std::string>;

#define THROW R_ASSERT(0)

#ifdef _LW_SHADER
#define _EDITOR_FILE_NAME_ "lw_shader"
#else
#ifdef _LW_EXPORT
#define _EDITOR_FILE_NAME_ "lw_export"
#else
#ifdef _LW_IMPORT
#define _EDITOR_FILE_NAME_ "lw_import"
#endif
#endif
#endif

#define GAMEMTL_NONE u32(-1)
#define _game_data_ "$game_data$"
