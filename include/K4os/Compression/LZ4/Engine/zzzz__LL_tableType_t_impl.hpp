#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_tableType_t.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_tableType_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_tableType_t::LL_tableType_t(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_tableType_t::LL_tableType_t()   {
}
constexpr ::GlobalNamespace::LL_tableType_t  GlobalNamespace::LL_tableType_t::clearedTable{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LL_tableType_t  GlobalNamespace::LL_tableType_t::byPtr{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LL_tableType_t  GlobalNamespace::LL_tableType_t::byU32{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LL_tableType_t  GlobalNamespace::LL_tableType_t::byU16{static_cast<int32_t>(0x3)};
