#pragma once
// IWYU pragma private; include "Fusion/LogFlags.hpp"
#include "Fusion/zzzz__LogFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LogFlags::LogFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::LogFlags::LogFlags()   {
}
constexpr ::Fusion::LogFlags  Fusion::LogFlags::Debug{static_cast<int32_t>(0x1)};
constexpr ::Fusion::LogFlags  Fusion::LogFlags::Trace{static_cast<int32_t>(0x2)};
