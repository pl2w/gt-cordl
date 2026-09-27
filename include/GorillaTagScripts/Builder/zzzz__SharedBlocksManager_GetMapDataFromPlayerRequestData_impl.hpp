#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager_GetMapDataFromPlayerRequestData.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_GetMapDataFromPlayerRequestData_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_def.hpp"
// Ctor Parameters [CppParam { name: "CreatorID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MapScan", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Callback", ty: "::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData::SharedBlocksManager_GetMapDataFromPlayerRequestData(::StringW  CreatorID, ::StringW  MapScan, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  Callback) noexcept  {
this->CreatorID = CreatorID;
this->MapScan = MapScan;
this->Callback = Callback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData::SharedBlocksManager_GetMapDataFromPlayerRequestData()   {
}
