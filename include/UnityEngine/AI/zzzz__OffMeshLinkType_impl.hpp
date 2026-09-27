#pragma once
// IWYU pragma private; include "UnityEngine/AI/OffMeshLinkType.hpp"
#include "UnityEngine/AI/zzzz__OffMeshLinkType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::OffMeshLinkType::OffMeshLinkType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::OffMeshLinkType::OffMeshLinkType()   {
}
constexpr ::UnityEngine::AI::OffMeshLinkType  UnityEngine::AI::OffMeshLinkType::LinkTypeManual{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AI::OffMeshLinkType  UnityEngine::AI::OffMeshLinkType::LinkTypeDropDown{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AI::OffMeshLinkType  UnityEngine::AI::OffMeshLinkType::LinkTypeJumpAcross{static_cast<int32_t>(0x2)};
