#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_repeat_state_e.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_repeat_state_e_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_repeat_state_e::LL_repeat_state_e(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_repeat_state_e::LL_repeat_state_e()   {
}
constexpr ::GlobalNamespace::LL_repeat_state_e  GlobalNamespace::LL_repeat_state_e::rep_untested{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LL_repeat_state_e  GlobalNamespace::LL_repeat_state_e::rep_not{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LL_repeat_state_e  GlobalNamespace::LL_repeat_state_e::rep_confirmed{static_cast<int32_t>(0x2)};
