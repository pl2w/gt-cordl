#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager_StartingMapConfig.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_StartingMapConfig_def.hpp"
// Ctor Parameters [CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pageSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sortMethod", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useMapID", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mapID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig::SharedBlocksManager_StartingMapConfig(int32_t  pageNumber, int32_t  pageSize, ::StringW  sortMethod, bool  useMapID, ::StringW  mapID) noexcept  {
this->pageNumber = pageNumber;
this->pageSize = pageSize;
this->sortMethod = sortMethod;
this->useMapID = useMapID;
this->mapID = mapID;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig::SharedBlocksManager_StartingMapConfig()   {
}
