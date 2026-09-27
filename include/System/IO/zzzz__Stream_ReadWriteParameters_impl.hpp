#pragma once
// IWYU pragma private; include "System/IO/Stream_ReadWriteParameters.hpp"
#include "System/IO/zzzz__Stream_ReadWriteParameters_def.hpp"
// Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Stream_ReadWriteParameters::Stream_ReadWriteParameters(::ArrayW<uint8_t>  Buffer, int32_t  Offset, int32_t  Count) noexcept  {
this->Buffer = Buffer;
this->Offset = Offset;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Stream_ReadWriteParameters::Stream_ReadWriteParameters()   {
}
