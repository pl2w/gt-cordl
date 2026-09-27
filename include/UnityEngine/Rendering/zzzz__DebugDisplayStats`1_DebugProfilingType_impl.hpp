#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplayStats`1_DebugProfilingType.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayStats`1_DebugProfilingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TProfileId>
constexpr ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>::DebugDisplayStats_1_DebugProfilingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename TProfileId>
constexpr ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>::DebugDisplayStats_1_DebugProfilingType()   {
}
template<typename TProfileId>
constexpr ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>  GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>::CPU{static_cast<int32_t>(0x0)};
template<typename TProfileId>
constexpr ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>  GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>::InlineCPU{static_cast<int32_t>(0x1)};
template<typename TProfileId>
constexpr ::GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>  GlobalNamespace::DebugDisplayStats_1_DebugProfilingType<TProfileId>::GPU{static_cast<int32_t>(0x2)};
