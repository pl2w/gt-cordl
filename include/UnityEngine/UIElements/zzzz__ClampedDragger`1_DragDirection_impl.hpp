#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ClampedDragger`1_DragDirection.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger`1_DragDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ClampedDragger_1_DragDirection<T>::ClampedDragger_1_DragDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ClampedDragger_1_DragDirection<T>::ClampedDragger_1_DragDirection()   {
}
template<typename T>
constexpr ::GlobalNamespace::ClampedDragger_1_DragDirection<T>  GlobalNamespace::ClampedDragger_1_DragDirection<T>::None{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::GlobalNamespace::ClampedDragger_1_DragDirection<T>  GlobalNamespace::ClampedDragger_1_DragDirection<T>::LowToHigh{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::GlobalNamespace::ClampedDragger_1_DragDirection<T>  GlobalNamespace::ClampedDragger_1_DragDirection<T>::HighToLow{static_cast<int32_t>(0x2)};
template<typename T>
constexpr ::GlobalNamespace::ClampedDragger_1_DragDirection<T>  GlobalNamespace::ClampedDragger_1_DragDirection<T>::Free{static_cast<int32_t>(0x4)};
