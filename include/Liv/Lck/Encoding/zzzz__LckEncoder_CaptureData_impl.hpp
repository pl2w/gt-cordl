#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncoder_CaptureData.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncoder_CaptureData_def.hpp"
#include "Liv/NGFX/zzzz__NativeRenderBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "nativeRenderBuffer", ty: "::Liv::NGFX::NativeRenderBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trackIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEncoder_CaptureData::LckEncoder_CaptureData(::Liv::NGFX::NativeRenderBuffer*  nativeRenderBuffer, uint32_t  trackIndex) noexcept  {
this->nativeRenderBuffer = nativeRenderBuffer;
this->trackIndex = trackIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEncoder_CaptureData::LckEncoder_CaptureData()   {
}
