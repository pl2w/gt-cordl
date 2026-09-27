#pragma once
// IWYU pragma private; include "GorillaGameModes/ZoneGameModes.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "GorillaGameModes/zzzz__ZoneGameModes_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
// Ctor Parameters [CppParam { name: "zone", ty: "::ArrayW<::GlobalNamespace::GTZone>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modes", ty: "::ArrayW<::GorillaGameModes::GameModeType>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "privateModes", ty: "::ArrayW<::GorillaGameModes::GameModeType>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaGameModes::ZoneGameModes::ZoneGameModes(::ArrayW<::GlobalNamespace::GTZone>  zone, ::ArrayW<::GorillaGameModes::GameModeType>  modes, ::ArrayW<::GorillaGameModes::GameModeType>  privateModes) noexcept  {
this->zone = zone;
this->modes = modes;
this->privateModes = privateModes;
}
// Ctor Parameters []
constexpr ::GorillaGameModes::ZoneGameModes::ZoneGameModes()   {
}
