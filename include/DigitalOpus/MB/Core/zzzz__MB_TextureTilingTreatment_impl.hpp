#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureTilingTreatment.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment::MB_TextureTilingTreatment(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment::MB_TextureTilingTreatment()   {
}
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  DigitalOpus::MB::Core::MB_TextureTilingTreatment::none{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  DigitalOpus::MB::Core::MB_TextureTilingTreatment::considerUVs{static_cast<int32_t>(0x1)};
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  DigitalOpus::MB::Core::MB_TextureTilingTreatment::edgeToEdgeX{static_cast<int32_t>(0x2)};
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  DigitalOpus::MB::Core::MB_TextureTilingTreatment::edgeToEdgeY{static_cast<int32_t>(0x3)};
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  DigitalOpus::MB::Core::MB_TextureTilingTreatment::edgeToEdgeXY{static_cast<int32_t>(0x4)};
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  DigitalOpus::MB::Core::MB_TextureTilingTreatment::unknown{static_cast<int32_t>(0x5)};
