#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DataSource`1_UpdateModeFlags.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>::DataSource_1_UpdateModeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>::DataSource_1_UpdateModeFlags()   {
}
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  GlobalNamespace::DataSource_1_UpdateModeFlags<TData>::Manual{static_cast<int32_t>(0x0)};
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  GlobalNamespace::DataSource_1_UpdateModeFlags<TData>::UnityUpdate{static_cast<int32_t>(0x1)};
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  GlobalNamespace::DataSource_1_UpdateModeFlags<TData>::UnityFixedUpdate{static_cast<int32_t>(0x2)};
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  GlobalNamespace::DataSource_1_UpdateModeFlags<TData>::UnityLateUpdate{static_cast<int32_t>(0x4)};
template<typename TData>
constexpr ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  GlobalNamespace::DataSource_1_UpdateModeFlags<TData>::AfterPreviousStep{static_cast<int32_t>(0x8)};
