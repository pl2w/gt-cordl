#pragma once
// IWYU pragma private; include "Oculus/Interaction/SkeletonDebugGizmos_VisibilityFlags.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_VisibilityFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags::SkeletonDebugGizmos_VisibilityFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags::SkeletonDebugGizmos_VisibilityFlags()   {
}
constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags::Joints{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags::Axes{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags  GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags::Bones{static_cast<int32_t>(0x4)};
