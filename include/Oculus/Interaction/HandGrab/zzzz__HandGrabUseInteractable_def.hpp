#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUseInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandGrabUseInteractable)
namespace Oculus::Interaction::GrabAPI {
struct GrabbingRule;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabPose;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabUseInteractor;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabUseDelegate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabUseInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*, "Oculus.Interaction.HandGrab", "HandGrabUseInteractable");
// Dependencies Oculus.Interaction.GrabAPI.GrabbingRule, Oculus.Interaction.Interactable`2<TInteractor, TInteractable>
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabUseInteractable
class CORDL_TYPE HandGrabUseInteractable : public ::Oculus::Interaction::Interactable_2<::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractor>,::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractable>> {
public:
// Declarations
 __declspec(property(get=get_HandUseDelegate, put=set_HandUseDelegate)) ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  HandUseDelegate;

 __declspec(property(get=get_RelaxGrabPoints)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  RelaxGrabPoints;

 __declspec(property(get=get_StrengthDeadzone, put=set_StrengthDeadzone)) float_t  StrengthDeadzone;

 __declspec(property(get=get_TightGrabPoints)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  TightGrabPoints;

 __declspec(property(get=get_UseFingers, put=set_UseFingers)) ::Oculus::Interaction::GrabAPI::GrabbingRule  UseFingers;

 __declspec(property(get=get_UseProgress, put=set_UseProgress)) float_t  UseProgress;

 __declspec(property(get=get_UseStrengthDeadZone)) float_t  UseStrengthDeadZone;

/// @brief Field <HandUseDelegate>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandUseDelegate_k__BackingField, put=__cordl_internal_set__HandUseDelegate_k__BackingField)) ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  _HandUseDelegate_k__BackingField;

/// @brief Field <UseProgress>k__BackingField, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__UseProgress_k__BackingField, put=__cordl_internal_set__UseProgress_k__BackingField)) float_t  _UseProgress_k__BackingField;

/// @brief Field _handUseDelegate, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__handUseDelegate, put=__cordl_internal_set__handUseDelegate)) ::UnityW<::UnityEngine::Object>  _handUseDelegate;

/// @brief Field _relaxedHandGrabPoses, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__relaxedHandGrabPoses, put=__cordl_internal_set__relaxedHandGrabPoses)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  _relaxedHandGrabPoses;

/// @brief Field _strengthDeadzone, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__strengthDeadzone, put=__cordl_internal_set__strengthDeadzone)) float_t  _strengthDeadzone;

/// @brief Field _tightHandGrabPoses, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tightHandGrabPoses, put=__cordl_internal_set__tightHandGrabPoses)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  _tightHandGrabPoses;

/// @brief Field _useFingers, offset 0xc0, size 0x18 
 __declspec(property(get=__cordl_internal_get__useFingers, put=__cordl_internal_set__useFingers)) ::Oculus::Interaction::GrabAPI::GrabbingRule  _useFingers;

/// @brief Method Awake, addr 0xa4e389c, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeUseStrength, addr 0xa4e3ad8, size 0xcc, virtual false, abstract: false, final false
inline float_t ComputeUseStrength(float_t  strength) ;

/// @brief Method FindBestHandPoses, addr 0xa4e3ba4, size 0x6c, virtual false, abstract: false, final false
inline bool FindBestHandPoses(float_t  handScale, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  relaxedHandPose, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  tightHandPose, ::by_ref<float_t>  score) ;

/// @brief Method FindScaledHandPose, addr 0xa4e3c10, size 0x1ac, virtual false, abstract: false, final false
inline bool FindScaledHandPose(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  _handGrabPoses, float_t  handScale, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  handPose) ;

/// @brief Method InjectOptionalForwardUseDelegate, addr 0xa4e3dbc, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalForwardUseDelegate(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  useDelegate) ;

/// @brief Method InjectOptionalRelaxedHandGrabPoints, addr 0xa4e3e8c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRelaxedHandGrabPoints(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  relaxedHandGrabPoints) ;

/// @brief Method InjectOptionalTightHandGrabPoints, addr 0xa4e3e94, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTightHandGrabPoints(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  tightHandGrabPoints) ;

static inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractable* New_ctor() ;

/// @brief Method Reset, addr 0xa4e37a0, size 0xfc, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SelectingInteractorAdded, addr 0xa4e391c, size 0xdc, virtual true, abstract: false, final false
inline void SelectingInteractorAdded(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*  interactor) ;

/// @brief Method SelectingInteractorRemoved, addr 0xa4e39f8, size 0xe0, virtual true, abstract: false, final false
inline void SelectingInteractorRemoved(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*  interactor) ;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* const& __cordl_internal_get__HandUseDelegate_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*& __cordl_internal_get__HandUseDelegate_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__UseProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__UseProgress_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handUseDelegate() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handUseDelegate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& __cordl_internal_get__relaxedHandGrabPoses() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& __cordl_internal_get__relaxedHandGrabPoses() ;

constexpr float_t const& __cordl_internal_get__strengthDeadzone() const;

constexpr float_t& __cordl_internal_get__strengthDeadzone() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& __cordl_internal_get__tightHandGrabPoses() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& __cordl_internal_get__tightHandGrabPoses() ;

constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule const& __cordl_internal_get__useFingers() const;

constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule& __cordl_internal_get__useFingers() ;

constexpr void __cordl_internal_set__HandUseDelegate_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  value) ;

constexpr void __cordl_internal_set__UseProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__handUseDelegate(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__relaxedHandGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value) ;

constexpr void __cordl_internal_set__strengthDeadzone(float_t  value) ;

constexpr void __cordl_internal_set__tightHandGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value) ;

constexpr void __cordl_internal_set__useFingers(::Oculus::Interaction::GrabAPI::GrabbingRule  value) ;

/// @brief Method .ctor, addr 0xa4e3e9c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_HandUseDelegate, addr 0xa4e3730, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* get_HandUseDelegate() ;

/// @brief Method get_RelaxGrabPoints, addr 0xa4e3788, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* get_RelaxGrabPoints() ;

/// @brief Method get_StrengthDeadzone, addr 0xa4e3768, size 0x8, virtual false, abstract: false, final false
inline float_t get_StrengthDeadzone() ;

/// @brief Method get_TightGrabPoints, addr 0xa4e3790, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* get_TightGrabPoints() ;

/// @brief Method get_UseFingers, addr 0xa4e3740, size 0x14, virtual false, abstract: false, final false
inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_UseFingers() ;

/// [CompilerGenerated]
/// @brief Method get_UseProgress, addr 0xa4e3778, size 0x8, virtual false, abstract: false, final false
inline float_t get_UseProgress() ;

/// @brief Method get_UseStrengthDeadZone, addr 0xa4e3798, size 0x8, virtual false, abstract: false, final false
inline float_t get_UseStrengthDeadZone() ;

/// [CompilerGenerated]
/// @brief Method set_HandUseDelegate, addr 0xa4e3738, size 0x8, virtual false, abstract: false, final false
inline void set_HandUseDelegate(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  value) ;

/// @brief Method set_StrengthDeadzone, addr 0xa4e3770, size 0x8, virtual false, abstract: false, final false
inline void set_StrengthDeadzone(float_t  value) ;

/// @brief Method set_UseFingers, addr 0xa4e3754, size 0x14, virtual false, abstract: false, final false
inline void set_UseFingers(::Oculus::Interaction::GrabAPI::GrabbingRule  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseProgress, addr 0xa4e3780, size 0x8, virtual false, abstract: false, final false
inline void set_UseProgress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabUseInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUseInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabUseInteractable(HandGrabUseInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUseInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabUseInteractable(HandGrabUseInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16338};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.HandGrab.IHandGrabUseDelegate), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// @brief Field _handUseDelegate, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handUseDelegate;

/// [CompilerGenerated]
/// @brief Field <HandUseDelegate>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  ____HandUseDelegate_k__BackingField;

/// [SerializeField]
/// @brief Field _useFingers, offset: 0xc0, size: 0x18, def value: None
 ::Oculus::Interaction::GrabAPI::GrabbingRule  ____useFingers;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _strengthDeadzone, offset: 0xd8, size: 0x4, def value: None
 float_t  ____strengthDeadzone;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// @brief Field _relaxedHandGrabPoses, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  ____relaxedHandGrabPoses;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// @brief Field _tightHandGrabPoses, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  ____tightHandGrabPoses;

/// [CompilerGenerated]
/// @brief Field <UseProgress>k__BackingField, offset: 0xf0, size: 0x4, def value: None
 float_t  ____UseProgress_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable, ____handUseDelegate) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable, ____HandUseDelegate_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable, ____useFingers) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable, ____strengthDeadzone) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable, ____relaxedHandGrabPoses) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable, ____tightHandGrabPoses) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable, ____UseProgress_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabUseInteractable) == 0xf8, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
