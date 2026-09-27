#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualEffectActivationBehaviour_EventState.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_AttributeType_impl.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_EventState_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
// Ctor Parameters [CppParam { name: "attribute", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "values", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_EventState::VisualEffectActivationBehaviour_EventState(::UnityEngine::VFX::Utility::ExposedProperty*  attribute, ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType  type, ::ArrayW<float_t>  values) noexcept  {
this->attribute = attribute;
this->type = type;
this->values = values;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_EventState::VisualEffectActivationBehaviour_EventState()   {
}
