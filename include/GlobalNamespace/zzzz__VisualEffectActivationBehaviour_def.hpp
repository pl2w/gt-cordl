#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualEffectActivationBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_EventState_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(VisualEffectActivationBehaviour)
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_AttributeType;
}
namespace GlobalNamespace {
struct VisualEffectActivationBehaviour_EventState;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualEffectActivationBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VisualEffectActivationBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectActivationBehaviour*, "", "VisualEffectActivationBehaviour");
// Dependencies UnityEngine.Playables.PlayableBehaviour, VisualEffectActivationBehaviour::EventState
namespace GlobalNamespace {
// Is value type: false
// CS Name: VisualEffectActivationBehaviour
class CORDL_TYPE VisualEffectActivationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using AttributeType = ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType;

using EventState = ::GlobalNamespace::VisualEffectActivationBehaviour_EventState;

/// @brief Field clipEnterEventAttributes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipEnterEventAttributes, put=__cordl_internal_set_clipEnterEventAttributes)) ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  clipEnterEventAttributes;

/// @brief Field clipExitEventAttributes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipExitEventAttributes, put=__cordl_internal_set_clipExitEventAttributes)) ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  clipExitEventAttributes;

/// @brief Field onClipEnter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onClipEnter, put=__cordl_internal_set_onClipEnter)) ::UnityEngine::VFX::Utility::ExposedProperty*  onClipEnter;

/// @brief Field onClipExit, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onClipExit, put=__cordl_internal_set_onClipExit)) ::UnityEngine::VFX::Utility::ExposedProperty*  onClipExit;

static inline ::GlobalNamespace::VisualEffectActivationBehaviour* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& __cordl_internal_get_clipEnterEventAttributes() const;

constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& __cordl_internal_get_clipEnterEventAttributes() ;

constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& __cordl_internal_get_clipExitEventAttributes() const;

constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& __cordl_internal_get_clipExitEventAttributes() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_onClipEnter() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_onClipEnter() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_onClipExit() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_onClipExit() ;

constexpr void __cordl_internal_set_clipEnterEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  value) ;

constexpr void __cordl_internal_set_clipExitEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  value) ;

constexpr void __cordl_internal_set_onClipEnter(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_onClipExit(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

/// @brief Method .ctor, addr 0xb3d5718, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectActivationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectActivationBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectActivationBehaviour(VisualEffectActivationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectActivationBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectActivationBehaviour(VisualEffectActivationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29989};

/// [SerializeField]
/// @brief Field onClipEnter, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___onClipEnter;

/// [SerializeField]
/// @brief Field onClipExit, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___onClipExit;

/// [SerializeField]
/// @brief Field clipEnterEventAttributes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  ___clipEnterEventAttributes;

/// [SerializeField]
/// @brief Field clipExitEventAttributes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  ___clipExitEventAttributes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___onClipEnter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___onClipExit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___clipEnterEventAttributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectActivationBehaviour, ___clipExitEventAttributes) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectActivationBehaviour) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
