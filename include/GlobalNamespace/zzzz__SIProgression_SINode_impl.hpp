#pragma once
// IWYU pragma private; include "GlobalNamespace/SIProgression_SINode.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "GlobalNamespace/zzzz__SIProgression_SINode_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unlocked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "costs", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parents", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::SIProgression_SINode>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "upgradeType", ty: "::GlobalNamespace::SIUpgradeType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIProgression_SINode::SIProgression_SINode(::StringW  id, bool  unlocked, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  costs, ::System::Collections::Generic::List_1<::GlobalNamespace::SIProgression_SINode>*  parents, ::GlobalNamespace::SIUpgradeType  upgradeType) noexcept  {
this->id = id;
this->unlocked = unlocked;
this->costs = costs;
this->parents = parents;
this->upgradeType = upgradeType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIProgression_SINode::SIProgression_SINode()   {
}
