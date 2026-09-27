#pragma once
// IWYU pragma private; include "GlobalNamespace/LckDirectGrabbable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckDirectGrabbable)
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
}
namespace System {
class Action;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LckDirectGrabbable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckDirectGrabbable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckDirectGrabbable*, "", "LckDirectGrabbable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckDirectGrabbable
class CORDL_TYPE LckDirectGrabbable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnTabletGrabbed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTabletGrabbed, put=__cordl_internal_set_OnTabletGrabbed)) ::UnityEngine::Events::UnityEvent*  OnTabletGrabbed;

/// @brief Field OnTabletReleased, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTabletReleased, put=__cordl_internal_set_OnTabletReleased)) ::UnityEngine::Events::UnityEvent*  OnTabletReleased;

/// @brief Field _grabber, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabber, put=__cordl_internal_set__grabber)) ::UnityW<::GlobalNamespace::GorillaGrabber>  _grabber;

/// @brief Field _originalTargetParent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalTargetParent, put=__cordl_internal_set__originalTargetParent)) ::UnityW<::UnityEngine::Transform>  _originalTargetParent;

/// @brief Field _precise, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__precise, put=__cordl_internal_set__precise)) bool  _precise;

 __declspec(property(get=get_grabber)) ::UnityW<::GlobalNamespace::GorillaGrabber>  grabber;

 __declspec(property(get=get_isGrabbed)) bool  isGrabbed;

/// @brief Field onGrabbed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGrabbed, put=__cordl_internal_set_onGrabbed)) ::System::Action*  onGrabbed;

/// @brief Field onReleased, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReleased, put=__cordl_internal_set_onReleased)) ::System::Action*  onReleased;

/// @brief Field target, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr operator  ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept;

/// @brief Method CanBeGrabbed, addr 0x56c5a44, size 0xa8, virtual true, abstract: false, final true
inline bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method ForceGrab, addr 0x56c4ef0, size 0x48, virtual false, abstract: false, final false
inline void ForceGrab(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method ForceRelease, addr 0x56c4e2c, size 0xc4, virtual false, abstract: false, final false
inline void ForceRelease() ;

/// @brief Method GetLocalGrabbedPosition, addr 0x56c5950, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLocalGrabbedPosition(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.get_name, addr 0x56c6024, size 0x8, virtual true, abstract: false, final true
inline ::StringW GorillaLocomotion_Gameplay_IGorillaGrabable_get_name() ;

/// @brief Method IsSlingshotHeldInHand, addr 0x56c5d64, size 0x168, virtual false, abstract: false, final false
inline bool IsSlingshotHeldInHand(::by_ref<bool>  leftHand, ::by_ref<bool>  rightHand) ;

/// @brief Method MomentaryGrabOnly, addr 0x56c5f8c, size 0x8, virtual true, abstract: false, final true
inline bool MomentaryGrabOnly() ;

static inline ::GlobalNamespace::LckDirectGrabbable* New_ctor() ;

/// @brief Method OnGrabReleased, addr 0x56c5ecc, size 0xb8, virtual true, abstract: false, final true
inline void OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method OnGrabbed, addr 0x56c5aec, size 0x278, virtual true, abstract: false, final true
inline void OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition) ;

/// @brief Method SetOriginalTargetParent, addr 0x56c5f84, size 0x8, virtual false, abstract: false, final false
inline void SetOriginalTargetParent(::UnityEngine::Transform*  parent) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTabletGrabbed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTabletGrabbed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTabletReleased() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTabletReleased() ;

constexpr ::UnityW<::GlobalNamespace::GorillaGrabber> const& __cordl_internal_get__grabber() const;

constexpr ::UnityW<::GlobalNamespace::GorillaGrabber>& __cordl_internal_get__grabber() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__originalTargetParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__originalTargetParent() ;

constexpr bool const& __cordl_internal_get__precise() const;

constexpr bool& __cordl_internal_get__precise() ;

constexpr ::System::Action* const& __cordl_internal_get_onGrabbed() const;

constexpr ::System::Action*& __cordl_internal_get_onGrabbed() ;

constexpr ::System::Action* const& __cordl_internal_get_onReleased() const;

constexpr ::System::Action*& __cordl_internal_get_onReleased() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_OnTabletGrabbed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnTabletReleased(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__grabber(::UnityW<::GlobalNamespace::GorillaGrabber>  value) ;

constexpr void __cordl_internal_set__originalTargetParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__precise(bool  value) ;

constexpr void __cordl_internal_set_onGrabbed(::System::Action*  value) ;

constexpr void __cordl_internal_set_onReleased(::System::Action*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x56c5f94, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onGrabbed, addr 0x56c2d14, size 0x9c, virtual false, abstract: false, final false
inline void add_onGrabbed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onReleased, addr 0x56c2db0, size 0x9c, virtual false, abstract: false, final false
inline void add_onReleased(::System::Action*  value) ;

/// @brief Method get_grabber, addr 0x56c5948, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaGrabber> get_grabber() ;

/// @brief Method get_isGrabbed, addr 0x56c49ac, size 0x60, virtual false, abstract: false, final false
inline bool get_isGrabbed() ;

/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_onGrabbed, addr 0x56c58ac, size 0x9c, virtual false, abstract: false, final false
inline void remove_onGrabbed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onReleased, addr 0x56c51d8, size 0x9c, virtual false, abstract: false, final false
inline void remove_onReleased(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDirectGrabbable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDirectGrabbable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDirectGrabbable(LckDirectGrabbable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDirectGrabbable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDirectGrabbable(LckDirectGrabbable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1017};

/// [CompilerGenerated]
/// @brief Field onGrabbed, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onGrabbed;

/// [CompilerGenerated]
/// @brief Field onReleased, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___onReleased;

/// @brief Field OnTabletGrabbed, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTabletGrabbed;

/// @brief Field OnTabletReleased, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTabletReleased;

/// [SerializeField]
/// @brief Field _originalTargetParent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____originalTargetParent;

/// @brief Field target, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [SerializeField]
/// @brief Field _precise, offset: 0x50, size: 0x1, def value: None
 bool  ____precise;

/// @brief Field _grabber, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGrabber>  ____grabber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ___onGrabbed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ___onReleased) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ___OnTabletGrabbed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ___OnTabletReleased) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ____originalTargetParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ___target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ____precise) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckDirectGrabbable, ____grabber) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckDirectGrabbable) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
