#pragma once
// IWYU pragma private; include "Liv/Lck/LckCameraOrientation.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::LckCameraOrientation::LckCameraOrientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckCameraOrientation::LckCameraOrientation()   {
}
constexpr ::Liv::Lck::LckCameraOrientation  Liv::Lck::LckCameraOrientation::Portrait{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::LckCameraOrientation  Liv::Lck::LckCameraOrientation::Landscape{static_cast<int32_t>(0x1)};
