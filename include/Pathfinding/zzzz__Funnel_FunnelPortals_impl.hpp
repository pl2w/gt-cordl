#pragma once
// IWYU pragma private; include "Pathfinding/Funnel_FunnelPortals.hpp"
#include "Pathfinding/zzzz__Funnel_FunnelPortals_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "left", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector3>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "right", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector3>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Funnel_FunnelPortals::Funnel_FunnelPortals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right) noexcept  {
this->left = left;
this->right = right;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Funnel_FunnelPortals::Funnel_FunnelPortals()   {
}
