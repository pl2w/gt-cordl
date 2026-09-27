#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/FoveatedRenderingLevel.hpp"
#include "Valve/OpenXR/Utils/zzzz__FoveatedRenderingLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Valve::OpenXR::Utils::FoveatedRenderingLevel::FoveatedRenderingLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::FoveatedRenderingLevel::FoveatedRenderingLevel()   {
}
constexpr ::Valve::OpenXR::Utils::FoveatedRenderingLevel  Valve::OpenXR::Utils::FoveatedRenderingLevel::Off{static_cast<int32_t>(0x0)};
constexpr ::Valve::OpenXR::Utils::FoveatedRenderingLevel  Valve::OpenXR::Utils::FoveatedRenderingLevel::Low{static_cast<int32_t>(0x1)};
constexpr ::Valve::OpenXR::Utils::FoveatedRenderingLevel  Valve::OpenXR::Utils::FoveatedRenderingLevel::Medium{static_cast<int32_t>(0x2)};
constexpr ::Valve::OpenXR::Utils::FoveatedRenderingLevel  Valve::OpenXR::Utils::FoveatedRenderingLevel::High{static_cast<int32_t>(0x3)};
constexpr ::Valve::OpenXR::Utils::FoveatedRenderingLevel  Valve::OpenXR::Utils::FoveatedRenderingLevel::HighTop{static_cast<int32_t>(0x4)};
