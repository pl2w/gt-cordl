#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualEffectActivationBehaviour_EventState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_AttributeType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VisualEffectActivationBehaviour_EventState)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_EventState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectActivationBehaviour_EventState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, "", "VisualEffectActivationBehaviour/EventState");
// Dependencies VisualEffectActivationBehaviour::AttributeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: VisualEffectActivationBehaviour/EventState
struct CORDL_TYPE VisualEffectActivationBehaviour_EventState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectActivationBehaviour_EventState() ;

// Ctor Parameters [CppParam { name: "attribute", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType", modifiers: "", def_value: None, comment: None }, CppParam { name: "values", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectActivationBehaviour_EventState(::UnityEngine::VFX::Utility::ExposedProperty*  attribute, ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType  type, ::ArrayW<float_t>  values) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29988};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field attribute, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  attribute;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType  type;

/// @brief Field values, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, attribute) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState, values) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectActivationBehaviour_EventState) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
