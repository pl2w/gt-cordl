#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SlingshotPellet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SlingshotPellet)
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor;
}
namespace Oculus::Interaction {
class Grabbable;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class SlingshotPellet;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::SlingshotPellet*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SlingshotPellet*, "Oculus.Interaction.Samples", "SlingshotPellet");
// Dependencies Oculus.Interaction.HandGrab.HandGrabInteractable, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SlingshotPellet
class CORDL_TYPE SlingshotPellet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HandGrabber)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  HandGrabber;

/// @brief Field Identifier, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Identifier, put=__cordl_internal_set_Identifier)) ::Oculus::Interaction::UniqueIdentifier*  Identifier;

/// @brief Field _handGrabInteractables, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractables, put=__cordl_internal_set__handGrabInteractables)) ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  _handGrabInteractables;

/// @brief Field _hasPendingForce, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasPendingForce, put=__cordl_internal_set__hasPendingForce)) bool  _hasPendingForce;

/// @brief Field _lastHandGrabInteractor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastHandGrabInteractor, put=__cordl_internal_set__lastHandGrabInteractor)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  _lastHandGrabInteractor;

/// @brief Field _linearVelocity, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__linearVelocity, put=__cordl_internal_set__linearVelocity)) ::UnityEngine::Vector3  _linearVelocity;

/// @brief Field _rigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field grabbable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbable, put=__cordl_internal_set_grabbable)) ::UnityW<::Oculus::Interaction::Grabbable>  grabbable;

/// @brief Method Attach, addr 0xa439e4c, size 0x1cc, virtual false, abstract: false, final false
inline void Attach() ;

/// @brief Method Awake, addr 0xa439abc, size 0xe4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Eject, addr 0xa43a0cc, size 0xe8, virtual false, abstract: false, final false
inline void Eject(::UnityEngine::Vector3  force) ;

/// @brief Method FixedUpdate, addr 0xa43a1b4, size 0x9c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method HandleSelectingHandGrabInteractorAdded, addr 0xa439e44, size 0x8, virtual false, abstract: false, final false
inline void HandleSelectingHandGrabInteractorAdded(::Oculus::Interaction::HandGrab::HandGrabInteractor*  interactor) ;

/// @brief Method Move, addr 0xa43a018, size 0xb4, virtual false, abstract: false, final false
inline void Move(::UnityEngine::Transform*  transform) ;

static inline ::Oculus::Interaction::Samples::SlingshotPellet* New_ctor() ;

/// @brief Method OnDisable, addr 0xa439cf0, size 0x154, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa439ba0, size 0x150, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get_Identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get_Identifier() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>> const& __cordl_internal_get__handGrabInteractables() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>& __cordl_internal_get__handGrabInteractables() ;

constexpr bool const& __cordl_internal_get__hasPendingForce() const;

constexpr bool& __cordl_internal_get__hasPendingForce() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& __cordl_internal_get__lastHandGrabInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& __cordl_internal_get__lastHandGrabInteractor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__linearVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__linearVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::UnityW<::Oculus::Interaction::Grabbable> const& __cordl_internal_get_grabbable() const;

constexpr ::UnityW<::Oculus::Interaction::Grabbable>& __cordl_internal_get_grabbable() ;

constexpr void __cordl_internal_set_Identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__handGrabInteractables(::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  value) ;

constexpr void __cordl_internal_set__hasPendingForce(bool  value) ;

constexpr void __cordl_internal_set__lastHandGrabInteractor(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value) ;

constexpr void __cordl_internal_set__linearVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_grabbable(::UnityW<::Oculus::Interaction::Grabbable>  value) ;

/// @brief Method .ctor, addr 0xa43a250, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HandGrabber, addr 0xa439ab4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> get_HandGrabber() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotPellet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotPellet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotPellet(SlingshotPellet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotPellet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotPellet(SlingshotPellet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28309};

/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [SerializeField]
/// @brief Field grabbable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Grabbable>  ___grabbable;

/// [SerializeField]
/// @brief Field _handGrabInteractables, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  ____handGrabInteractables;

/// @brief Field _lastHandGrabInteractor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  ____lastHandGrabInteractor;

/// @brief Field Identifier, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ___Identifier;

/// @brief Field _hasPendingForce, offset: 0x48, size: 0x1, def value: None
 bool  ____hasPendingForce;

/// @brief Field _linearVelocity, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____linearVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SlingshotPellet, ____rigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SlingshotPellet, ___grabbable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SlingshotPellet, ____handGrabInteractables) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SlingshotPellet, ____lastHandGrabInteractor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SlingshotPellet, ___Identifier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SlingshotPellet, ____hasPendingForce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SlingshotPellet, ____linearVelocity) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SlingshotPellet) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
