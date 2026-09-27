#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceGrabInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(DistanceGrabInteractor)
namespace Oculus::Interaction::Throw {
class IThrowVelocityCalculator;
}
namespace Oculus::Interaction {
class DistanceGrabInteractable;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class DistantCandidateComputer_2;
}
namespace Oculus::Interaction {
class IDistanceInteractor;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IRelativeToRef;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class DistanceGrabInteractor;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceGrabInteractor*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceGrabInteractor*, "Oculus.Interaction", "DistanceGrabInteractor");
// Dependencies Oculus.Interaction.PointerInteractor`2<TInteractor, TInteractable>, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceGrabInteractor
class CORDL_TYPE DistanceGrabInteractor : public ::Oculus::Interaction::PointerInteractor_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>> {
public:
// Declarations
 __declspec(property(get=get_DistanceInteractable)) ::Oculus::Interaction::IRelativeToRef*  DistanceInteractable;

 __declspec(property(get=get_HitPoint, put=set_HitPoint)) ::UnityEngine::Vector3  HitPoint;

 __declspec(property(get=get_Origin)) ::UnityEngine::Pose  Origin;

/// @brief [Obsolete("Use Grabbable instead")]
 __declspec(property(get=get_VelocityCalculator, put=set_VelocityCalculator)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  VelocityCalculator;

/// @brief Field <HitPoint>k__BackingField, offset 0x150, size 0xc 
 __declspec(property(get=__cordl_internal_get__HitPoint_k__BackingField, put=__cordl_internal_set__HitPoint_k__BackingField)) ::UnityEngine::Vector3  _HitPoint_k__BackingField;

/// @brief Field <VelocityCalculator>k__BackingField, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__VelocityCalculator_k__BackingField, put=__cordl_internal_set__VelocityCalculator_k__BackingField)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  _VelocityCalculator_k__BackingField;

/// @brief Field _distantCandidateComputer, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__distantCandidateComputer, put=__cordl_internal_set__distantCandidateComputer)) ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  _distantCandidateComputer;

/// @brief Field _grabCenter, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabCenter, put=__cordl_internal_set__grabCenter)) ::UnityW<::UnityEngine::Transform>  _grabCenter;

/// @brief Field _grabTarget, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabTarget, put=__cordl_internal_set__grabTarget)) ::UnityW<::UnityEngine::Transform>  _grabTarget;

/// @brief Field _movement, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__movement, put=__cordl_internal_set__movement)) ::Oculus::Interaction::IMovement*  _movement;

/// @brief Field _selector, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::UnityW<::UnityEngine::Object>  _selector;

/// @brief Field _velocityCalculator, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__velocityCalculator, put=__cordl_internal_set__velocityCalculator)) ::UnityW<::UnityEngine::Object>  _velocityCalculator;

/// @brief Convert operator to "::Oculus::Interaction::IDistanceInteractor"
constexpr operator  ::Oculus::Interaction::IDistanceInteractor*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr operator  ::Oculus::Interaction::IInteractorView*() noexcept;

/// @brief Method Awake, addr 0xa44fe90, size 0xe4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa45013c, size 0x118, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::DistanceGrabInteractable> ComputeCandidate() ;

/// @brief Method ComputePointerPose, addr 0xa4508a0, size 0xd8, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method DoPreprocess, addr 0xa4500c0, size 0x7c, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method DoSelectUpdate, addr 0xa450978, size 0x18c, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method HandleOtherPointerEventRaised, addr 0xa450560, size 0x340, virtual false, abstract: false, final false
inline void HandleOtherPointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllDistanceGrabInteractor, addr 0xa450b04, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllDistanceGrabInteractor(::Oculus::Interaction::ISelector*  selector, ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  distantCandidateComputer) ;

/// @brief Method InjectDistantCandidateComputer, addr 0xa450c14, size 0x10, virtual false, abstract: false, final false
inline void InjectDistantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  distantCandidateComputer) ;

/// @brief Method InjectOptionalGrabCenter, addr 0xa450c24, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalGrabCenter(::UnityEngine::Transform*  grabCenter) ;

/// @brief Method InjectOptionalGrabTarget, addr 0xa450c34, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalGrabTarget(::UnityEngine::Transform*  grabTarget) ;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method InjectOptionalVelocityCalculator, addr 0xa450c44, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator) ;

/// @brief Method InjectSelector, addr 0xa450b30, size 0xe4, virtual false, abstract: false, final false
inline void InjectSelector(::Oculus::Interaction::ISelector*  selector) ;

/// @brief Method InteractableSelected, addr 0xa450254, size 0x11c, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::DistanceGrabInteractable*  interactable) ;

/// @brief Method InteractableUnselected, addr 0xa450370, size 0x1f0, virtual true, abstract: false, final false
inline void InteractableUnselected(::Oculus::Interaction::DistanceGrabInteractable*  interactable) ;

static inline ::Oculus::Interaction::DistanceGrabInteractor* New_ctor() ;

/// @brief Method Start, addr 0xa44ff74, size 0x14c, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__19_0, addr 0xa450db0, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__19_0() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__HitPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__HitPoint_k__BackingField() ;

constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* const& __cordl_internal_get__VelocityCalculator_k__BackingField() const;

constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator*& __cordl_internal_get__VelocityCalculator_k__BackingField() ;

constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>* const& __cordl_internal_get__distantCandidateComputer() const;

constexpr ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*& __cordl_internal_get__distantCandidateComputer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabCenter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabTarget() ;

constexpr ::Oculus::Interaction::IMovement* const& __cordl_internal_get__movement() const;

constexpr ::Oculus::Interaction::IMovement*& __cordl_internal_get__movement() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selector() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__velocityCalculator() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__velocityCalculator() ;

constexpr void __cordl_internal_set__HitPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

constexpr void __cordl_internal_set__distantCandidateComputer(::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  value) ;

constexpr void __cordl_internal_set__grabCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__grabTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__movement(::Oculus::Interaction::IMovement*  value) ;

constexpr void __cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa450d14, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceInteractable, addr 0xa44fe54, size 0x3c, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IRelativeToRef* get_DistanceInteractable() ;

/// [CompilerGenerated]
/// @brief Method get_HitPoint, addr 0xa44fe34, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_HitPoint() ;

/// @brief Method get_Origin, addr 0xa44fdf0, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Origin() ;

/// [CompilerGenerated]
/// @brief Method get_VelocityCalculator, addr 0xa44fdd8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* get_VelocityCalculator() ;

/// @brief Convert to "::Oculus::Interaction::IDistanceInteractor"
constexpr ::Oculus::Interaction::IDistanceInteractor* i___Oculus__Interaction__IDistanceInteractor() noexcept;

/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* i___Oculus__Interaction__IInteractorView() noexcept;

/// [CompilerGenerated]
/// @brief Method set_HitPoint, addr 0xa44fe44, size 0x10, virtual false, abstract: false, final false
inline void set_HitPoint(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_VelocityCalculator, addr 0xa44fde0, size 0x10, virtual false, abstract: false, final false
inline void set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceGrabInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceGrabInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceGrabInteractor(DistanceGrabInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceGrabInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceGrabInteractor(DistanceGrabInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15837};

/// [Tooltip("The selection mechanism to trigger the grab.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// @brief Field _selector, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selector;

/// [Tooltip("The center of the grab.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _grabCenter, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabCenter;

/// [Tooltip("The location where the interactable will move when selected.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _grabTarget, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabTarget;

/// [Tooltip("Determines how the object will move when thrown.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Throw.IThrowVelocityCalculator), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("Use Grabbable instead")]
/// @brief Field _velocityCalculator, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____velocityCalculator;

/// [CompilerGenerated]
/// @brief Field <VelocityCalculator>k__BackingField, offset: 0x138, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  ____VelocityCalculator_k__BackingField;

/// [SerializeField]
/// @brief Field _distantCandidateComputer, offset: 0x140, size: 0x8, def value: None
 ::Oculus::Interaction::DistantCandidateComputer_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>>*  ____distantCandidateComputer;

/// @brief Field _movement, offset: 0x148, size: 0x8, def value: None
 ::Oculus::Interaction::IMovement*  ____movement;

/// [CompilerGenerated]
/// @brief Field <HitPoint>k__BackingField, offset: 0x150, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____HitPoint_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____selector) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____grabCenter) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____grabTarget) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____velocityCalculator) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____VelocityCalculator_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____distantCandidateComputer) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____movement) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractor, ____HitPoint_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceGrabInteractor) == 0x160, "Size mismatch!");

} // namespace end def Oculus::Interaction
