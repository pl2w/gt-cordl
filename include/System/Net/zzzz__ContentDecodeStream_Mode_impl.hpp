#pragma once
// IWYU pragma private; include "System/Net/ContentDecodeStream_Mode.hpp"
#include "System/Net/zzzz__ContentDecodeStream_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContentDecodeStream_Mode::ContentDecodeStream_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContentDecodeStream_Mode::ContentDecodeStream_Mode()   {
}
constexpr ::GlobalNamespace::ContentDecodeStream_Mode  GlobalNamespace::ContentDecodeStream_Mode::GZip{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ContentDecodeStream_Mode  GlobalNamespace::ContentDecodeStream_Mode::Deflate{static_cast<int32_t>(0x1)};
