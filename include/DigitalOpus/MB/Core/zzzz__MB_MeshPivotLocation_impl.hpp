#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_MeshPivotLocation.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation::MB_MeshPivotLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation::MB_MeshPivotLocation()   {
}
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation  DigitalOpus::MB::Core::MB_MeshPivotLocation::worldOrigin{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation  DigitalOpus::MB::Core::MB_MeshPivotLocation::boundsCenter{static_cast<int32_t>(0x1)};
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation  DigitalOpus::MB::Core::MB_MeshPivotLocation::customLocation{static_cast<int32_t>(0x2)};
