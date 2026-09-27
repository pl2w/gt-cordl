#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher_TypeTrackingFlags.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_TypeTrackingFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags::ObjectDispatcher_TypeTrackingFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags::ObjectDispatcher_TypeTrackingFlags()   {
}
constexpr ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  GlobalNamespace::ObjectDispatcher_TypeTrackingFlags::SceneObjects{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  GlobalNamespace::ObjectDispatcher_TypeTrackingFlags::Assets{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  GlobalNamespace::ObjectDispatcher_TypeTrackingFlags::EditorOnlyObjects{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  GlobalNamespace::ObjectDispatcher_TypeTrackingFlags::Default{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  GlobalNamespace::ObjectDispatcher_TypeTrackingFlags::All{static_cast<int32_t>(0x7)};
