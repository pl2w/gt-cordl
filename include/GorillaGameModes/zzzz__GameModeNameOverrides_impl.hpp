#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeNameOverrides.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeNameOverrides_def.hpp"
// Ctor Parameters [CppParam { name: "mode", ty: "::GorillaGameModes::GameModeType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaGameModes::GameModeNameOverrides::GameModeNameOverrides(::GorillaGameModes::GameModeType  mode, ::StringW  displayName) noexcept  {
this->mode = mode;
this->displayName = displayName;
}
// Ctor Parameters []
constexpr ::GorillaGameModes::GameModeNameOverrides::GameModeNameOverrides()   {
}
