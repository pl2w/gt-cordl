#pragma once
// IWYU pragma private; include "GlobalNamespace/ScratchSoundType.hpp"
#include "GlobalNamespace/zzzz__ScratchSoundType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScratchSoundType::ScratchSoundType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScratchSoundType::ScratchSoundType()   {
}
constexpr ::GlobalNamespace::ScratchSoundType  GlobalNamespace::ScratchSoundType::Pause{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ScratchSoundType  GlobalNamespace::ScratchSoundType::Resume{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ScratchSoundType  GlobalNamespace::ScratchSoundType::Forward{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ScratchSoundType  GlobalNamespace::ScratchSoundType::Back{static_cast<int32_t>(0x3)};
