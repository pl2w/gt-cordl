#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionGateUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocomotionGateUnityEventWrapper)
namespace GlobalNamespace {
struct LocomotionGate_LocomotionModeEventArgs;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionGate;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionGateUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper*, "Oculus.Interaction.Locomotion", "LocomotionGateUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionGateUnityEventWrapper
class CORDL_TYPE LocomotionGateUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field WhenChangedToTeleport, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenChangedToTeleport, put=__cordl_internal_set_WhenChangedToTeleport)) ::UnityEngine::Events::UnityEvent*  WhenChangedToTeleport;

/// @brief Field WhenChangedToTurn, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenChangedToTurn, put=__cordl_internal_set_WhenChangedToTurn)) ::UnityEngine::Events::UnityEvent*  WhenChangedToTurn;

/// @brief Field WhenEnterLocomotion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenEnterLocomotion, put=__cordl_internal_set_WhenEnterLocomotion)) ::UnityEngine::Events::UnityEvent*  WhenEnterLocomotion;

/// @brief Field WhenExitLocomotion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenExitLocomotion, put=__cordl_internal_set_WhenExitLocomotion)) ::UnityEngine::Events::UnityEvent*  WhenExitLocomotion;

/// @brief Field _locomotionGate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotionGate, put=__cordl_internal_set__locomotionGate)) ::UnityW<::Oculus::Interaction::Locomotion::LocomotionGate>  _locomotionGate;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method HandleActiveModeChanged, addr 0xa4d73a0, size 0x60, virtual false, abstract: false, final false
inline void HandleActiveModeChanged(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs  locomotionModeArgs) ;

/// @brief Method InjectAllLocomotionGateUnityEventWrapper, addr 0xa4d7400, size 0x8, virtual false, abstract: false, final false
inline void InjectAllLocomotionGateUnityEventWrapper(::Oculus::Interaction::Locomotion::LocomotionGate*  locomotionGate) ;

/// @brief Method InjectLocomotionGate, addr 0xa4d7408, size 0x8, virtual false, abstract: false, final false
inline void InjectLocomotionGate(::Oculus::Interaction::Locomotion::LocomotionGate*  locomotionGate) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d7308, size 0x98, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4d7270, size 0x98, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4d7244, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenChangedToTeleport() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenChangedToTeleport() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenChangedToTurn() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenChangedToTurn() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenEnterLocomotion() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenEnterLocomotion() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenExitLocomotion() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenExitLocomotion() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionGate> const& __cordl_internal_get__locomotionGate() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionGate>& __cordl_internal_get__locomotionGate() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_WhenChangedToTeleport(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenChangedToTurn(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenEnterLocomotion(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenExitLocomotion(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__locomotionGate(::UnityW<::Oculus::Interaction::Locomotion::LocomotionGate>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4d7410, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionGateUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGateUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionGateUnityEventWrapper(LocomotionGateUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionGateUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionGateUnityEventWrapper(LocomotionGateUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16308};

/// [SerializeField]
/// @brief Field _locomotionGate, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::LocomotionGate>  ____locomotionGate;

/// @brief Field WhenEnterLocomotion, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenEnterLocomotion;

/// @brief Field WhenExitLocomotion, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenExitLocomotion;

/// @brief Field WhenChangedToTurn, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenChangedToTurn;

/// @brief Field WhenChangedToTeleport, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenChangedToTeleport;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper, ____locomotionGate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper, ___WhenEnterLocomotion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper, ___WhenExitLocomotion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper, ___WhenChangedToTurn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper, ___WhenChangedToTeleport) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper, ____started) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionGateUnityEventWrapper) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
