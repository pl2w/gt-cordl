#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUseInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandGrabUseInteractor)
namespace Oculus::Interaction::HandGrab {
class HandGrabTarget;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabUseInteractable;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabUseInteractor___c;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabState;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IFingerUseAPI;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabUseInteractor;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabUseInteractor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*);
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*, "Oculus.Interaction.HandGrab", "HandGrabUseInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*, "Oculus.Interaction.HandGrab", "HandGrabUseInteractor/<>c");
// Dependencies Oculus.Interaction.Input.HandFingerFlags, Oculus.Interaction.Interactor`2<TInteractor, TInteractable>
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabUseInteractor
class CORDL_TYPE HandGrabUseInteractor : public ::Oculus::Interaction::Interactor_2<::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractor>,::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractable>> {
public:
// Declarations
using __c = ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c;

 __declspec(property(get=get_FingersStrength)) float_t  FingersStrength;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_HandGrabTarget)) ::Oculus::Interaction::HandGrab::HandGrabTarget*  HandGrabTarget;

 __declspec(property(get=get_IsGrabbing)) bool  IsGrabbing;

 __declspec(property(get=get_UseAPI, put=set_UseAPI)) ::Oculus::Interaction::IFingerUseAPI*  UseAPI;

 __declspec(property(get=get_WhenHandGrabEnded, put=set_WhenHandGrabEnded)) ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  WhenHandGrabEnded;

 __declspec(property(get=get_WhenHandGrabStarted, put=set_WhenHandGrabStarted)) ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  WhenHandGrabStarted;

 __declspec(property(get=get_WristStrength)) float_t  WristStrength;

 __declspec(property(get=get_WristToGrabPoseOffset)) ::UnityEngine::Pose  WristToGrabPoseOffset;

/// @brief Field <HandGrabTarget>k__BackingField, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandGrabTarget_k__BackingField, put=__cordl_internal_set__HandGrabTarget_k__BackingField)) ::Oculus::Interaction::HandGrab::HandGrabTarget*  _HandGrabTarget_k__BackingField;

/// @brief Field <Hand>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <UseAPI>k__BackingField, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__UseAPI_k__BackingField, put=__cordl_internal_set__UseAPI_k__BackingField)) ::Oculus::Interaction::IFingerUseAPI*  _UseAPI_k__BackingField;

/// @brief Field <WhenHandGrabEnded>k__BackingField, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__WhenHandGrabEnded_k__BackingField, put=__cordl_internal_set__WhenHandGrabEnded_k__BackingField)) ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  _WhenHandGrabEnded_k__BackingField;

/// @brief Field <WhenHandGrabStarted>k__BackingField, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__WhenHandGrabStarted_k__BackingField, put=__cordl_internal_set__WhenHandGrabStarted_k__BackingField)) ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  _WhenHandGrabStarted_k__BackingField;

/// @brief Field _cachedRelaxedHandPose, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedRelaxedHandPose, put=__cordl_internal_set__cachedRelaxedHandPose)) ::Oculus::Interaction::HandGrab::HandPose*  _cachedRelaxedHandPose;

/// @brief Field _cachedTightHandPose, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTightHandPose, put=__cordl_internal_set__cachedTightHandPose)) ::Oculus::Interaction::HandGrab::HandPose*  _cachedTightHandPose;

/// @brief Field _fingerUseStrength, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerUseStrength, put=__cordl_internal_set__fingerUseStrength)) ::ArrayW<float_t>  _fingerUseStrength;

/// @brief Field _fingersInUse, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingersInUse, put=__cordl_internal_set__fingersInUse)) ::Oculus::Interaction::Input::HandFingerFlags  _fingersInUse;

/// @brief Field _hand, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handUseShouldSelect, offset 0x169, size 0x1 
 __declspec(property(get=__cordl_internal_get__handUseShouldSelect, put=__cordl_internal_set__handUseShouldSelect)) bool  _handUseShouldSelect;

/// @brief Field _handUseShouldUnselect, offset 0x16a, size 0x1 
 __declspec(property(get=__cordl_internal_get__handUseShouldUnselect, put=__cordl_internal_set__handUseShouldUnselect)) bool  _handUseShouldUnselect;

/// @brief Field _relaxedHandPose, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__relaxedHandPose, put=__cordl_internal_set__relaxedHandPose)) ::Oculus::Interaction::HandGrab::HandPose*  _relaxedHandPose;

/// @brief Field _tightHandPose, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__tightHandPose, put=__cordl_internal_set__tightHandPose)) ::Oculus::Interaction::HandGrab::HandPose*  _tightHandPose;

/// @brief Field _useAPI, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__useAPI, put=__cordl_internal_set__useAPI)) ::UnityW<::UnityEngine::Object>  _useAPI;

/// @brief Field _usesHandPose, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get__usesHandPose, put=__cordl_internal_set__usesHandPose)) bool  _usesHandPose;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept;

/// @brief Method Awake, addr 0xa4e4190, size 0xc8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateUseStrength, addr 0xa4e4750, size 0x2e0, virtual false, abstract: false, final false
inline float_t CalculateUseStrength(::by_ref<::ArrayW<float_t>>  fingerUseStrength) ;

/// @brief Method ComputeCandidate, addr 0xa4e4c74, size 0x36c, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractable> ComputeCandidate() ;

/// @brief Method ComputeShouldSelect, addr 0xa4e4104, size 0x8, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0xa4e410c, size 0x84, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method DoHoverUpdate, addr 0xa4e4458, size 0x6c, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoSelectUpdate, addr 0xa4e463c, size 0x114, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method GrabbingFingers, addr 0xa4e4c6c, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::HandFingerFlags GrabbingFingers() ;

/// @brief Method InjectAllHandGrabUseInteractor, addr 0xa4e4fe0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandGrabUseInteractor(::Oculus::Interaction::IFingerUseAPI*  useApi) ;

/// @brief Method InjectOptionalHand, addr 0xa4e50b4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectUseApi, addr 0xa4e4fe4, size 0xd0, virtual false, abstract: false, final false
inline void InjectUseApi(::Oculus::Interaction::IFingerUseAPI*  useApi) ;

/// @brief Method InteractableSelected, addr 0xa4e42f0, size 0x60, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*  interactable) ;

/// @brief Method InteractableUnselected, addr 0xa4e43f8, size 0x60, virtual true, abstract: false, final false
inline void InteractableUnselected(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*  interactable) ;

/// @brief Method IsUsingInteractable, addr 0xa4e44c4, size 0x178, virtual false, abstract: false, final false
inline bool IsUsingInteractable(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*  interactable) ;

/// @brief Method LerpFingerRotation, addr 0xa4e4b2c, size 0x140, virtual false, abstract: false, final false
inline void LerpFingerRotation(::ArrayW<::UnityEngine::Quaternion>  from, ::ArrayW<::UnityEngine::Quaternion>  to, ::ArrayW<::UnityEngine::Quaternion>  result, ::Oculus::Interaction::Input::HandFinger  finger, float_t  t) ;

/// @brief Method MarkFingerInUse, addr 0xa4e4afc, size 0x18, virtual false, abstract: false, final false
inline void MarkFingerInUse(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method MoveFingers, addr 0xa4e4a30, size 0xcc, virtual false, abstract: false, final false
inline void MoveFingers(::by_ref<::ArrayW<float_t>>  fingerUseProgress, float_t  useProgress) ;

static inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractor* New_ctor() ;

/// @brief Method Start, addr 0xa4e4258, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartUsing, addr 0xa4e4350, size 0xa8, virtual false, abstract: false, final false
inline void StartUsing() ;

/// @brief Method UnmarkFingerInUse, addr 0xa4e4b14, size 0x18, virtual false, abstract: false, final false
inline void UnmarkFingerInUse(::Oculus::Interaction::Input::HandFinger  finger) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__41_0, addr 0xa4e541c, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__41_0() ;

constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget* const& __cordl_internal_get__HandGrabTarget_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget*& __cordl_internal_get__HandGrabTarget_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::IFingerUseAPI* const& __cordl_internal_get__UseAPI_k__BackingField() const;

constexpr ::Oculus::Interaction::IFingerUseAPI*& __cordl_internal_get__UseAPI_k__BackingField() ;

constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* const& __cordl_internal_get__WhenHandGrabEnded_k__BackingField() const;

constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*& __cordl_internal_get__WhenHandGrabEnded_k__BackingField() ;

constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* const& __cordl_internal_get__WhenHandGrabStarted_k__BackingField() const;

constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*& __cordl_internal_get__WhenHandGrabStarted_k__BackingField() ;

constexpr ::Oculus::Interaction::HandGrab::HandPose* const& __cordl_internal_get__cachedRelaxedHandPose() const;

constexpr ::Oculus::Interaction::HandGrab::HandPose*& __cordl_internal_get__cachedRelaxedHandPose() ;

constexpr ::Oculus::Interaction::HandGrab::HandPose* const& __cordl_internal_get__cachedTightHandPose() const;

constexpr ::Oculus::Interaction::HandGrab::HandPose*& __cordl_internal_get__cachedTightHandPose() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__fingerUseStrength() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__fingerUseStrength() ;

constexpr ::Oculus::Interaction::Input::HandFingerFlags const& __cordl_internal_get__fingersInUse() const;

constexpr ::Oculus::Interaction::Input::HandFingerFlags& __cordl_internal_get__fingersInUse() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__handUseShouldSelect() const;

constexpr bool& __cordl_internal_get__handUseShouldSelect() ;

constexpr bool const& __cordl_internal_get__handUseShouldUnselect() const;

constexpr bool& __cordl_internal_get__handUseShouldUnselect() ;

constexpr ::Oculus::Interaction::HandGrab::HandPose* const& __cordl_internal_get__relaxedHandPose() const;

constexpr ::Oculus::Interaction::HandGrab::HandPose*& __cordl_internal_get__relaxedHandPose() ;

constexpr ::Oculus::Interaction::HandGrab::HandPose* const& __cordl_internal_get__tightHandPose() const;

constexpr ::Oculus::Interaction::HandGrab::HandPose*& __cordl_internal_get__tightHandPose() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__useAPI() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__useAPI() ;

constexpr bool const& __cordl_internal_get__usesHandPose() const;

constexpr bool& __cordl_internal_get__usesHandPose() ;

constexpr void __cordl_internal_set__HandGrabTarget_k__BackingField(::Oculus::Interaction::HandGrab::HandGrabTarget*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__UseAPI_k__BackingField(::Oculus::Interaction::IFingerUseAPI*  value) ;

constexpr void __cordl_internal_set__WhenHandGrabEnded_k__BackingField(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value) ;

constexpr void __cordl_internal_set__WhenHandGrabStarted_k__BackingField(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value) ;

constexpr void __cordl_internal_set__cachedRelaxedHandPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

constexpr void __cordl_internal_set__cachedTightHandPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

constexpr void __cordl_internal_set__fingerUseStrength(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__fingersInUse(::Oculus::Interaction::Input::HandFingerFlags  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handUseShouldSelect(bool  value) ;

constexpr void __cordl_internal_set__handUseShouldUnselect(bool  value) ;

constexpr void __cordl_internal_set__relaxedHandPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

constexpr void __cordl_internal_set__tightHandPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

constexpr void __cordl_internal_set__useAPI(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__usesHandPose(bool  value) ;

/// @brief Method .ctor, addr 0xa4e5184, size 0x298, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FingersStrength, addr 0xa4e4040, size 0x20, virtual true, abstract: false, final true
inline float_t get_FingersStrength() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4e3f94, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method get_HandGrabTarget, addr 0xa4e3fc4, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* get_HandGrabTarget() ;

/// @brief Method get_IsGrabbing, addr 0xa4e3fcc, size 0x6c, virtual true, abstract: false, final true
inline bool get_IsGrabbing() ;

/// [CompilerGenerated]
/// @brief Method get_UseAPI, addr 0xa4e3fac, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IFingerUseAPI* get_UseAPI() ;

/// [CompilerGenerated]
/// @brief Method get_WhenHandGrabEnded, addr 0xa4e40ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* get_WhenHandGrabEnded() ;

/// [CompilerGenerated]
/// @brief Method get_WhenHandGrabStarted, addr 0xa4e40d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* get_WhenHandGrabStarted() ;

/// @brief Method get_WristStrength, addr 0xa4e4038, size 0x8, virtual true, abstract: false, final true
inline float_t get_WristStrength() ;

/// @brief Method get_WristToGrabPoseOffset, addr 0xa4e4060, size 0x74, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_WristToGrabPoseOffset() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4e3f9c, size 0x10, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseAPI, addr 0xa4e3fb4, size 0x10, virtual false, abstract: false, final false
inline void set_UseAPI(::Oculus::Interaction::IFingerUseAPI*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WhenHandGrabEnded, addr 0xa4e40f4, size 0x10, virtual false, abstract: false, final false
inline void set_WhenHandGrabEnded(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WhenHandGrabStarted, addr 0xa4e40dc, size 0x10, virtual false, abstract: false, final false
inline void set_WhenHandGrabStarted(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabUseInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUseInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabUseInteractor(HandGrabUseInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUseInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabUseInteractor(HandGrabUseInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16340};

/// [Tooltip("The hand to use.")]
/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [Tooltip("API that gets the finger use strength.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IFingerUseAPI), new[] {  })]
/// @brief Field _useAPI, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____useAPI;

/// [CompilerGenerated]
/// @brief Field <UseAPI>k__BackingField, offset: 0x130, size: 0x8, def value: None
 ::Oculus::Interaction::IFingerUseAPI*  ____UseAPI_k__BackingField;

/// @brief Field _relaxedHandPose, offset: 0x138, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  ____relaxedHandPose;

/// @brief Field _tightHandPose, offset: 0x140, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  ____tightHandPose;

/// @brief Field _cachedRelaxedHandPose, offset: 0x148, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  ____cachedRelaxedHandPose;

/// @brief Field _cachedTightHandPose, offset: 0x150, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  ____cachedTightHandPose;

/// @brief Field _fingersInUse, offset: 0x158, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFingerFlags  ____fingersInUse;

/// @brief Field _fingerUseStrength, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<float_t>  ____fingerUseStrength;

/// @brief Field _usesHandPose, offset: 0x168, size: 0x1, def value: None
 bool  ____usesHandPose;

/// @brief Field _handUseShouldSelect, offset: 0x169, size: 0x1, def value: None
 bool  ____handUseShouldSelect;

/// @brief Field _handUseShouldUnselect, offset: 0x16a, size: 0x1, def value: None
 bool  ____handUseShouldUnselect;

/// [CompilerGenerated]
/// @brief Field <HandGrabTarget>k__BackingField, offset: 0x170, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabTarget*  ____HandGrabTarget_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WhenHandGrabStarted>k__BackingField, offset: 0x178, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  ____WhenHandGrabStarted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WhenHandGrabEnded>k__BackingField, offset: 0x180, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  ____WhenHandGrabEnded_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____hand) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____Hand_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____useAPI) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____UseAPI_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____relaxedHandPose) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____tightHandPose) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____cachedRelaxedHandPose) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____cachedTightHandPose) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____fingersInUse) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____fingerUseStrength) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____usesHandPose) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____handUseShouldSelect) == 0x169, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____handUseShouldUnselect) == 0x16a, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____HandGrabTarget_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____WhenHandGrabStarted_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor, ____WhenHandGrabEnded_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor) == 0x188, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c
class CORDL_TYPE HandGrabUseInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*  __9;

/// @brief Field <>9__58_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_0, put=setStaticF___9__58_0)) ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  __9__58_0;

/// @brief Field <>9__58_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_1, put=setStaticF___9__58_1)) ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  __9__58_1;

static inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c* New_ctor() ;

/// @brief Method <.ctor>b__58_0, addr 0xa4e54d4, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__58_0(::Oculus::Interaction::HandGrab::IHandGrabState*  _p0_) ;

/// @brief Method <.ctor>b__58_1, addr 0xa4e54d8, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__58_1(::Oculus::Interaction::HandGrab::IHandGrabState*  _p0_) ;

/// @brief Method .ctor, addr 0xa4e54cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* getStaticF___9__58_0() ;

static inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* getStaticF___9__58_1() ;

static inline void setStaticF___9(::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*  value) ;

static inline void setStaticF___9__58_0(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value) ;

static inline void setStaticF___9__58_1(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabUseInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUseInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabUseInteractor___c(HandGrabUseInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUseInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabUseInteractor___c(HandGrabUseInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
