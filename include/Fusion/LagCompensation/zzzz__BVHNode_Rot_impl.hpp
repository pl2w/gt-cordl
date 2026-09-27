#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHNode_Rot.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_Rot_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BVHNode_Rot::BVHNode_Rot(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BVHNode_Rot::BVHNode_Rot()   {
}
constexpr ::GlobalNamespace::BVHNode_Rot  GlobalNamespace::BVHNode_Rot::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BVHNode_Rot  GlobalNamespace::BVHNode_Rot::L_RL{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BVHNode_Rot  GlobalNamespace::BVHNode_Rot::L_RR{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BVHNode_Rot  GlobalNamespace::BVHNode_Rot::R_LL{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BVHNode_Rot  GlobalNamespace::BVHNode_Rot::R_LR{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BVHNode_Rot  GlobalNamespace::BVHNode_Rot::LL_RR{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BVHNode_Rot  GlobalNamespace::BVHNode_Rot::LL_RL{static_cast<int32_t>(0x6)};
