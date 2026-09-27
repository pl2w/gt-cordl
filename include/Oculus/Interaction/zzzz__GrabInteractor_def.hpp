#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GrabInteractor)
namespace Oculus::Interaction::Throw {
class IThrowVelocityCalculator;
}
namespace Oculus::Interaction {
class GrabInteractable;
}
namespace Oculus::Interaction {
class GrabInteractor___c;
}
namespace Oculus::Interaction {
class GrabInteractor___c__DisplayClass20_0;
}
namespace Oculus::Interaction {
class IRigidbodyRef;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
class Tween;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class GrabInteractor;
}
namespace Oculus::Interaction {
class GrabInteractor___c;
}
namespace Oculus::Interaction {
class GrabInteractor___c__DisplayClass20_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabInteractor*);
MARK_REF_T(::Oculus::Interaction::GrabInteractor___c*);
MARK_REF_T(::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabInteractor*, "Oculus.Interaction", "GrabInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabInteractor___c*, "Oculus.Interaction", "GrabInteractor/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0*, "Oculus.Interaction", "GrabInteractor/<>c__DisplayClass20_0");
// Dependencies Oculus.Interaction.PointerInteractor`2<TInteractor, TInteractable>, UnityEngine.Collider
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GrabInteractor
class CORDL_TYPE GrabInteractor : public ::Oculus::Interaction::PointerInteractor_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>> {
public:
// Declarations
using __c = ::Oculus::Interaction::GrabInteractor___c;

using __c__DisplayClass20_0 = ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0;

 __declspec(property(get=get_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

/// @brief [Obsolete("Use Grabbable instead")]
 __declspec(property(get=get_VelocityCalculator, put=set_VelocityCalculator)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  VelocityCalculator;

/// @brief Field <VelocityCalculator>k__BackingField, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__VelocityCalculator_k__BackingField, put=__cordl_internal_set__VelocityCalculator_k__BackingField)) ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  _VelocityCalculator_k__BackingField;

/// @brief Field _colliders, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _colliders;

/// @brief Field _grabCenter, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabCenter, put=__cordl_internal_set__grabCenter)) ::UnityW<::UnityEngine::Transform>  _grabCenter;

/// @brief Field _grabTarget, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabTarget, put=__cordl_internal_set__grabTarget)) ::UnityW<::UnityEngine::Transform>  _grabTarget;

/// @brief Field _isSelectionOverriden, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSelectionOverriden, put=__cordl_internal_set__isSelectionOverriden)) bool  _isSelectionOverriden;

/// @brief Field _outsideReleaseDist, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get__outsideReleaseDist, put=__cordl_internal_set__outsideReleaseDist)) bool  _outsideReleaseDist;

/// @brief Field _rigidbody, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _selectedInteractableOverride, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedInteractableOverride, put=__cordl_internal_set__selectedInteractableOverride)) ::UnityW<::Oculus::Interaction::GrabInteractable>  _selectedInteractableOverride;

/// @brief Field _selector, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::UnityW<::UnityEngine::Object>  _selector;

/// @brief Field _tween, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__tween, put=__cordl_internal_set__tween)) ::Oculus::Interaction::Tween*  _tween;

/// @brief Field _velocityCalculator, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__velocityCalculator, put=__cordl_internal_set__velocityCalculator)) ::UnityW<::UnityEngine::Object>  _velocityCalculator;

/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr operator  ::Oculus::Interaction::IRigidbodyRef*() noexcept;

/// @brief Method Awake, addr 0xa4512a4, size 0xe4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa451780, size 0x318, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::GrabInteractable> ComputeCandidate() ;

/// @brief Method ComputePointerPose, addr 0xa4526d4, size 0xc4, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method ComputeShouldUnselect, addr 0xa452c24, size 0x60, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method DoPreprocess, addr 0xa451704, size 0x7c, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method DoSelectUpdate, addr 0xa452798, size 0x1a8, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method ForceRelease, addr 0xa451c5c, size 0x164, virtual false, abstract: false, final false
inline void ForceRelease() ;

/// @brief Method ForceSelect, addr 0xa451a98, size 0x1bc, virtual false, abstract: false, final false
inline void ForceSelect(::Oculus::Interaction::GrabInteractable*  interactable) ;

/// @brief Method HandlePointerEventRaised, addr 0xa4522c0, size 0x414, virtual true, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllGrabInteractor, addr 0xa452c84, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllGrabInteractor(::Oculus::Interaction::ISelector*  selector, ::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectOptionalGrabCenter, addr 0xa452da4, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalGrabCenter(::UnityEngine::Transform*  grabCenter) ;

/// @brief Method InjectOptionalGrabTarget, addr 0xa452db4, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalGrabTarget(::UnityEngine::Transform*  grabTarget) ;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method InjectOptionalVelocityCalculator, addr 0xa452dc4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalVelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  velocityCalculator) ;

/// @brief Method InjectRigidbody, addr 0xa452d94, size 0x10, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectSelector, addr 0xa452cb0, size 0xe4, virtual false, abstract: false, final false
inline void InjectSelector(::Oculus::Interaction::ISelector*  selector) ;

/// @brief Method InteractableSelected, addr 0xa451ecc, size 0xf4, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::GrabInteractable*  interactable) ;

/// @brief Method InteractableUnselected, addr 0xa452144, size 0x17c, virtual true, abstract: false, final false
inline void InteractableUnselected(::Oculus::Interaction::GrabInteractable*  interactable) ;

static inline ::Oculus::Interaction::GrabInteractor* New_ctor() ;

/// @brief Method Start, addr 0xa451388, size 0x240, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Unselect, addr 0xa451dc0, size 0x10c, virtual true, abstract: false, final false
inline void Unselect() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__17_0, addr 0xa452edc, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__17_0() ;

constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* const& __cordl_internal_get__VelocityCalculator_k__BackingField() const;

constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator*& __cordl_internal_get__VelocityCalculator_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabCenter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabTarget() ;

constexpr bool const& __cordl_internal_get__isSelectionOverriden() const;

constexpr bool& __cordl_internal_get__isSelectionOverriden() ;

constexpr bool const& __cordl_internal_get__outsideReleaseDist() const;

constexpr bool& __cordl_internal_get__outsideReleaseDist() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& __cordl_internal_get__selectedInteractableOverride() const;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& __cordl_internal_get__selectedInteractableOverride() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selector() ;

constexpr ::Oculus::Interaction::Tween* const& __cordl_internal_get__tween() const;

constexpr ::Oculus::Interaction::Tween*& __cordl_internal_get__tween() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__velocityCalculator() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__velocityCalculator() ;

constexpr void __cordl_internal_set__VelocityCalculator_k__BackingField(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

constexpr void __cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__grabCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__grabTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__isSelectionOverriden(bool  value) ;

constexpr void __cordl_internal_set__outsideReleaseDist(bool  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__selectedInteractableOverride(::UnityW<::Oculus::Interaction::GrabInteractable>  value) ;

constexpr void __cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__tween(::Oculus::Interaction::Tween*  value) ;

constexpr void __cordl_internal_set__velocityCalculator(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa452e94, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Rigidbody, addr 0xa451284, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// [CompilerGenerated]
/// @brief Method get_VelocityCalculator, addr 0xa45128c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::IThrowVelocityCalculator* get_VelocityCalculator() ;

/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* i___Oculus__Interaction__IRigidbodyRef() noexcept;

/// [CompilerGenerated]
/// @brief Method set_VelocityCalculator, addr 0xa451294, size 0x10, virtual false, abstract: false, final false
inline void set_VelocityCalculator(::Oculus::Interaction::Throw::IThrowVelocityCalculator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabInteractor(GrabInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabInteractor(GrabInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15842};

/// [Tooltip("The selection mechanism that broadcasts select and release events. For example, a ControllerSelector.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// @brief Field _selector, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selector;

/// [Tooltip("The hand or controller\'s Rigidbody, which detects interactables.")]
/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [Tooltip("The center of the grab.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _grabCenter, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabCenter;

/// [Tooltip("The location where the interactable will move when selected.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _grabTarget, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabTarget;

/// @brief Field _colliders, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____colliders;

/// @brief Field _tween, offset: 0x140, size: 0x8, def value: None
 ::Oculus::Interaction::Tween*  ____tween;

/// @brief Field _outsideReleaseDist, offset: 0x148, size: 0x1, def value: None
 bool  ____outsideReleaseDist;

/// [Tooltip("Determines how the object will move when thrown.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Throw.IThrowVelocityCalculator), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("Use Grabbable instead")]
/// @brief Field _velocityCalculator, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____velocityCalculator;

/// [CompilerGenerated]
/// @brief Field <VelocityCalculator>k__BackingField, offset: 0x158, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::IThrowVelocityCalculator*  ____VelocityCalculator_k__BackingField;

/// @brief Field _selectedInteractableOverride, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabInteractable>  ____selectedInteractableOverride;

/// @brief Field _isSelectionOverriden, offset: 0x168, size: 0x1, def value: None
 bool  ____isSelectionOverriden;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____selector) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____rigidbody) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____grabCenter) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____grabTarget) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____colliders) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____tween) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____outsideReleaseDist) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____velocityCalculator) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____VelocityCalculator_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____selectedInteractableOverride) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor, ____isSelectionOverriden) == 0x168, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabInteractor) == 0x170, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GrabInteractor/<>c__DisplayClass20_0
class CORDL_TYPE GrabInteractor___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::GrabInteractor>  __4__this;

/// @brief Field interactable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactable, put=__cordl_internal_set_interactable)) ::UnityW<::Oculus::Interaction::GrabInteractable>  interactable;

static inline ::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <ForceSelect>b__0, addr 0xa452f9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::GrabInteractable> _ForceSelect_b__0() ;

/// @brief Method <ForceSelect>b__1, addr 0xa452fa4, size 0x54, virtual false, abstract: false, final false
inline bool _ForceSelect_b__1() ;

/// @brief Method <ForceSelect>b__2, addr 0xa452ff8, size 0x54, virtual false, abstract: false, final false
inline bool _ForceSelect_b__2() ;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractor>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& __cordl_internal_get_interactable() const;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& __cordl_internal_get_interactable() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::GrabInteractor>  value) ;

constexpr void __cordl_internal_set_interactable(::UnityW<::Oculus::Interaction::GrabInteractable>  value) ;

/// @brief Method .ctor, addr 0xa451c54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabInteractor___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractor___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabInteractor___c__DisplayClass20_0(GrabInteractor___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractor___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabInteractor___c__DisplayClass20_0(GrabInteractor___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15841};

/// @brief Field interactable, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabInteractable>  ___interactable;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabInteractor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0, ___interactable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabInteractor___c__DisplayClass20_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GrabInteractor/<>c
class CORDL_TYPE GrabInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::GrabInteractor___c*  __9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Func_1<bool>*  __9__21_0;

static inline ::Oculus::Interaction::GrabInteractor___c* New_ctor() ;

/// @brief Method <ForceRelease>b__21_0, addr 0xa452f94, size 0x8, virtual false, abstract: false, final false
inline bool _ForceRelease_b__21_0() ;

/// @brief Method .ctor, addr 0xa452f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::GrabInteractor___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__21_0() ;

static inline void setStaticF___9(::Oculus::Interaction::GrabInteractor___c*  value) ;

static inline void setStaticF___9__21_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabInteractor___c(GrabInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabInteractor___c(GrabInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::GrabInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
