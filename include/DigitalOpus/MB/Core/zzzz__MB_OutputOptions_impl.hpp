#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_OutputOptions.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_OutputOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB_OutputOptions::MB_OutputOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_OutputOptions::MB_OutputOptions()   {
}
constexpr ::DigitalOpus::MB::Core::MB_OutputOptions  DigitalOpus::MB::Core::MB_OutputOptions::bakeIntoPrefab{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB_OutputOptions  DigitalOpus::MB::Core::MB_OutputOptions::bakeMeshsInPlace{static_cast<int32_t>(0x1)};
constexpr ::DigitalOpus::MB::Core::MB_OutputOptions  DigitalOpus::MB::Core::MB_OutputOptions::bakeTextureAtlasesOnly{static_cast<int32_t>(0x2)};
constexpr ::DigitalOpus::MB::Core::MB_OutputOptions  DigitalOpus::MB::Core::MB_OutputOptions::bakeIntoSceneObject{static_cast<int32_t>(0x3)};
