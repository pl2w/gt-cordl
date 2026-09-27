#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PointInPolygonResult.hpp"
#include "Unity/Cinemachine/zzzz__PointInPolygonResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::PointInPolygonResult::PointInPolygonResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PointInPolygonResult::PointInPolygonResult()   {
}
constexpr ::Unity::Cinemachine::PointInPolygonResult  Unity::Cinemachine::PointInPolygonResult::IsOn{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::PointInPolygonResult  Unity::Cinemachine::PointInPolygonResult::IsInside{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::PointInPolygonResult  Unity::Cinemachine::PointInPolygonResult::IsOutside{static_cast<int32_t>(0x2)};
