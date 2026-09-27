#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugSpawnPointChanger_GeoTriggersGroup.hpp"
#include "GlobalNamespace/zzzz__GorillaGeoHideShowTrigger_impl.hpp"
#include "GlobalNamespace/zzzz__DebugSpawnPointChanger_GeoTriggersGroup_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGeoHideShowTrigger_def.hpp"
// Ctor Parameters [CppParam { name: "levelName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enterTrigger", ty: "::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leaveTrigger", ty: "::ArrayW<::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canJumpToIndex", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup::DebugSpawnPointChanger_GeoTriggersGroup(::StringW  levelName, ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  enterTrigger, ::ArrayW<::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>>  leaveTrigger, ::ArrayW<int32_t>  canJumpToIndex) noexcept  {
this->levelName = levelName;
this->enterTrigger = enterTrigger;
this->leaveTrigger = leaveTrigger;
this->canJumpToIndex = canJumpToIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup::DebugSpawnPointChanger_GeoTriggersGroup()   {
}
