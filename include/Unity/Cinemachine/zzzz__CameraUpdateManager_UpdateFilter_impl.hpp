#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraUpdateManager_UpdateFilter.hpp"
#include "Unity/Cinemachine/zzzz__CameraUpdateManager_UpdateFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CameraUpdateManager_UpdateFilter::CameraUpdateManager_UpdateFilter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraUpdateManager_UpdateFilter::CameraUpdateManager_UpdateFilter()   {
}
constexpr ::GlobalNamespace::CameraUpdateManager_UpdateFilter  GlobalNamespace::CameraUpdateManager_UpdateFilter::Fixed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CameraUpdateManager_UpdateFilter  GlobalNamespace::CameraUpdateManager_UpdateFilter::Late{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CameraUpdateManager_UpdateFilter  GlobalNamespace::CameraUpdateManager_UpdateFilter::Smart{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::CameraUpdateManager_UpdateFilter  GlobalNamespace::CameraUpdateManager_UpdateFilter::SmartFixed{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::CameraUpdateManager_UpdateFilter  GlobalNamespace::CameraUpdateManager_UpdateFilter::SmartLate{static_cast<int32_t>(0xa)};
