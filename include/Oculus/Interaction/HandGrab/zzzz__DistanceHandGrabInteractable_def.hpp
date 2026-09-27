#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/DistanceHandGrabInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_def.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DistanceHandGrabInteractable)
namespace Oculus::Interaction::GrabAPI {
struct GrabbingRule;
}
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
namespace Oculus::Interaction::HandGrab {
class DistanceHandGrabInteractor;
}
namespace Oculus::Interaction::HandGrab {
class GrabPoseFinder;
}
namespace Oculus::Interaction::HandGrab {
struct HandAlignType;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabPose;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractable;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction {
class ICollidersRef;
}
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IRelativeToRef;
}
namespace Oculus::Interaction {
class IRigidbodyRef;
}
namespace Oculus::Interaction {
class PhysicsGrabbable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class DistanceHandGrabInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable*, "Oculus.Interaction.HandGrab", "DistanceHandGrabInteractable");
// Dependencies Oculus.Interaction.Grab.GrabTypeFlags, Oculus.Interaction.Grab.PoseMeasureParameters, Oculus.Interaction.GrabAPI.GrabbingRule, Oculus.Interaction.HandGrab.HandAlignType, Oculus.Interaction.PointerInteractable`2<TInteractor, TInteractable>, UnityEngine.Collider
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.DistanceHandGrabInteractable
class CORDL_TYPE DistanceHandGrabInteractable : public ::Oculus::Interaction::PointerInteractable_2<::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractor>,::UnityW<::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable>> {
public:
// Declarations
 __declspec(property(get=get_Colliders, put=set_Colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  Colliders;

 __declspec(property(get=get_HandAlignment, put=set_HandAlignment)) ::Oculus::Interaction::HandGrab::HandAlignType  HandAlignment;

 __declspec(property(get=get_HandGrabPoses)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  HandGrabPoses;

 __declspec(property(get=get_MovementProvider, put=set_MovementProvider)) ::Oculus::Interaction::IMovementProvider*  MovementProvider;

 __declspec(property(get=get_PalmGrabRules)) ::Oculus::Interaction::GrabAPI::GrabbingRule  PalmGrabRules;

 __declspec(property(get=get_PinchGrabRules)) ::Oculus::Interaction::GrabAPI::GrabbingRule  PinchGrabRules;

 __declspec(property(get=get_RelativeTo)) ::UnityW<::UnityEngine::Transform>  RelativeTo;

 __declspec(property(get=get_ResetGrabOnGrabsUpdated, put=set_ResetGrabOnGrabsUpdated)) bool  ResetGrabOnGrabsUpdated;

 __declspec(property(get=get_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

/// @brief Field SCORE_MODIFIER, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_SCORE_MODIFIER, put=__cordl_internal_set_SCORE_MODIFIER)) ::Oculus::Interaction::Grab::PoseMeasureParameters  SCORE_MODIFIER;

 __declspec(property(get=get_Slippiness, put=set_Slippiness)) float_t  Slippiness;

 __declspec(property(get=get_SupportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  SupportedGrabTypes;

 __declspec(property(get=get_UsesHandPose)) bool  UsesHandPose;

/// @brief Field <Colliders>k__BackingField, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__Colliders_k__BackingField, put=__cordl_internal_set__Colliders_k__BackingField)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _Colliders_k__BackingField;

/// @brief Field <MovementProvider>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__MovementProvider_k__BackingField, put=__cordl_internal_set__MovementProvider_k__BackingField)) ::Oculus::Interaction::IMovementProvider*  _MovementProvider_k__BackingField;

/// @brief Field _grabPoseFinder, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabPoseFinder, put=__cordl_internal_set__grabPoseFinder)) ::Oculus::Interaction::HandGrab::GrabPoseFinder*  _grabPoseFinder;

/// @brief Field _handAligment, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__handAligment, put=__cordl_internal_set__handAligment)) ::Oculus::Interaction::HandGrab::HandAlignType  _handAligment;

/// @brief Field _handGrabPoses, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabPoses, put=__cordl_internal_set__handGrabPoses)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  _handGrabPoses;

/// @brief Field _movementProvider, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementProvider, put=__cordl_internal_set__movementProvider)) ::UnityW<::UnityEngine::Object>  _movementProvider;

/// @brief Field _palmGrabRules, offset 0xfc, size 0x18 
 __declspec(property(get=__cordl_internal_get__palmGrabRules, put=__cordl_internal_set__palmGrabRules)) ::Oculus::Interaction::GrabAPI::GrabbingRule  _palmGrabRules;

/// @brief Field _physicsGrabbable, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__physicsGrabbable, put=__cordl_internal_set__physicsGrabbable)) ::UnityW<::Oculus::Interaction::PhysicsGrabbable>  _physicsGrabbable;

/// @brief Field _pinchGrabRules, offset 0xe4, size 0x18 
 __declspec(property(get=__cordl_internal_get__pinchGrabRules, put=__cordl_internal_set__pinchGrabRules)) ::Oculus::Interaction::GrabAPI::GrabbingRule  _pinchGrabRules;

/// @brief Field _resetGrabOnGrabsUpdated, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetGrabOnGrabsUpdated, put=__cordl_internal_set__resetGrabOnGrabsUpdated)) bool  _resetGrabOnGrabsUpdated;

/// @brief Field _rigidbody, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _slippiness, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__slippiness, put=__cordl_internal_set__slippiness)) float_t  _slippiness;

/// @brief Field _supportedGrabTypes, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__supportedGrabTypes, put=__cordl_internal_set__supportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  _supportedGrabTypes;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabInteractable"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabInteractable*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ICollidersRef"
constexpr operator  ::Oculus::Interaction::ICollidersRef*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IRelativeToRef"
constexpr operator  ::Oculus::Interaction::IRelativeToRef*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr operator  ::Oculus::Interaction::IRigidbodyRef*() noexcept;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method ApplyVelocities, addr 0xa4d8fbc, size 0xd8, virtual false, abstract: false, final false
inline void ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method Awake, addr 0xa4d8b1c, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateBestPose, addr 0xa4d9094, size 0xdc, virtual true, abstract: false, final true
inline bool CalculateBestPose(::UnityEngine::Pose  userPose, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method CalculateBestPose, addr 0xa4d9170, size 0x20c, virtual false, abstract: false, final false
inline void CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method GenerateMovement, addr 0xa4d8dd8, size 0x1e4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovement* GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method InjectAllDistanceHandGrabInteractable, addr 0xa4d8ac8, size 0x54, virtual false, abstract: false, final false
inline void InjectAllDistanceHandGrabInteractable(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes, ::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::GrabAPI::GrabbingRule  pinchGrabRules, ::Oculus::Interaction::GrabAPI::GrabbingRule  palmGrabRules) ;

/// @brief Method InjectOptionalHandGrabPoses, addr 0xa4d93f0, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalHandGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  handGrabPoses) ;

/// @brief Method InjectOptionalMovementProvider, addr 0xa4d8d08, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider) ;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method InjectOptionalPhysicsGrabbable, addr 0xa4d93ac, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPhysicsGrabbable(::Oculus::Interaction::PhysicsGrabbable*  physicsObject) ;

/// @brief Method InjectPalmGrabRules, addr 0xa4d93d0, size 0x18, virtual false, abstract: false, final false
inline void InjectPalmGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  palmGrabRules) ;

/// @brief Method InjectPinchGrabRules, addr 0xa4d93bc, size 0x14, virtual false, abstract: false, final false
inline void InjectPinchGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  pinchGrabRules) ;

/// @brief Method InjectRigidbody, addr 0xa4d93e8, size 0x8, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectSupportedGrabTypes, addr 0xa4d93b4, size 0x8, virtual false, abstract: false, final false
inline void InjectSupportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  supportedGrabTypes) ;

static inline ::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable* New_ctor() ;

/// @brief Method Oculus.Interaction.HandGrab.IHandGrabInteractable.CalculateBestPose, addr 0xa4d9570, size 0x4, virtual true, abstract: false, final true
inline void Oculus_Interaction_HandGrab_IHandGrabInteractable_CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method Oculus.Interaction.HandGrab.IHandGrabInteractable.GenerateMovement, addr 0xa4d956c, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* Oculus_Interaction_HandGrab_IHandGrabInteractable_GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method Reset, addr 0xa4d8908, size 0x1c0, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa4d8b9c, size 0x16c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method SupportsHandedness, addr 0xa4d9394, size 0x18, virtual true, abstract: false, final true
inline bool SupportsHandedness(::Oculus::Interaction::Input::Handedness  handedness) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__43_0, addr 0xa4d9574, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__43_0() ;

constexpr ::Oculus::Interaction::Grab::PoseMeasureParameters const& __cordl_internal_get_SCORE_MODIFIER() const;

constexpr ::Oculus::Interaction::Grab::PoseMeasureParameters& __cordl_internal_get_SCORE_MODIFIER() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__Colliders_k__BackingField() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__Colliders_k__BackingField() ;

constexpr ::Oculus::Interaction::IMovementProvider* const& __cordl_internal_get__MovementProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::IMovementProvider*& __cordl_internal_get__MovementProvider_k__BackingField() ;

constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder* const& __cordl_internal_get__grabPoseFinder() const;

constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder*& __cordl_internal_get__grabPoseFinder() ;

constexpr ::Oculus::Interaction::HandGrab::HandAlignType const& __cordl_internal_get__handAligment() const;

constexpr ::Oculus::Interaction::HandGrab::HandAlignType& __cordl_internal_get__handAligment() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& __cordl_internal_get__handGrabPoses() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& __cordl_internal_get__handGrabPoses() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__movementProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__movementProvider() ;

constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule const& __cordl_internal_get__palmGrabRules() const;

constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule& __cordl_internal_get__palmGrabRules() ;

constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable> const& __cordl_internal_get__physicsGrabbable() const;

constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable>& __cordl_internal_get__physicsGrabbable() ;

constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule const& __cordl_internal_get__pinchGrabRules() const;

constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule& __cordl_internal_get__pinchGrabRules() ;

constexpr bool const& __cordl_internal_get__resetGrabOnGrabsUpdated() const;

constexpr bool& __cordl_internal_get__resetGrabOnGrabsUpdated() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr float_t const& __cordl_internal_get__slippiness() const;

constexpr float_t& __cordl_internal_get__slippiness() ;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& __cordl_internal_get__supportedGrabTypes() const;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& __cordl_internal_get__supportedGrabTypes() ;

constexpr void __cordl_internal_set_SCORE_MODIFIER(::Oculus::Interaction::Grab::PoseMeasureParameters  value) ;

constexpr void __cordl_internal_set__Colliders_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value) ;

constexpr void __cordl_internal_set__grabPoseFinder(::Oculus::Interaction::HandGrab::GrabPoseFinder*  value) ;

constexpr void __cordl_internal_set__handAligment(::Oculus::Interaction::HandGrab::HandAlignType  value) ;

constexpr void __cordl_internal_set__handGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value) ;

constexpr void __cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__palmGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  value) ;

constexpr void __cordl_internal_set__physicsGrabbable(::UnityW<::Oculus::Interaction::PhysicsGrabbable>  value) ;

constexpr void __cordl_internal_set__pinchGrabRules(::Oculus::Interaction::GrabAPI::GrabbingRule  value) ;

constexpr void __cordl_internal_set__resetGrabOnGrabsUpdated(bool  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__slippiness(float_t  value) ;

constexpr void __cordl_internal_set__supportedGrabTypes(::Oculus::Interaction::Grab::GrabTypeFlags  value) ;

/// @brief Method .ctor, addr 0xa4d9400, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Colliders, addr 0xa4d88f0, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> get_Colliders() ;

/// @brief Method get_HandAlignment, addr 0xa4d888c, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::HandGrab::HandAlignType get_HandAlignment() ;

/// @brief Method get_HandGrabPoses, addr 0xa4d88e8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* get_HandGrabPoses() ;

/// [CompilerGenerated]
/// @brief Method get_MovementProvider, addr 0xa4d8874, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovementProvider* get_MovementProvider() ;

/// @brief Method get_PalmGrabRules, addr 0xa4d88d0, size 0x18, virtual true, abstract: false, final true
inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_PalmGrabRules() ;

/// @brief Method get_PinchGrabRules, addr 0xa4d88bc, size 0x14, virtual true, abstract: false, final true
inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_PinchGrabRules() ;

/// @brief Method get_RelativeTo, addr 0xa4d889c, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_RelativeTo() ;

/// @brief Method get_ResetGrabOnGrabsUpdated, addr 0xa4d8854, size 0x8, virtual false, abstract: false, final false
inline bool get_ResetGrabOnGrabsUpdated() ;

/// @brief Method get_Rigidbody, addr 0xa4d884c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// @brief Method get_Slippiness, addr 0xa4d8864, size 0x8, virtual true, abstract: false, final true
inline float_t get_Slippiness() ;

/// @brief Method get_SupportedGrabTypes, addr 0xa4d88b4, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Grab::GrabTypeFlags get_SupportedGrabTypes() ;

/// @brief Method get_UsesHandPose, addr 0xa4d937c, size 0x18, virtual true, abstract: false, final true
inline bool get_UsesHandPose() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabInteractable"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractable* i___Oculus__Interaction__HandGrab__IHandGrabInteractable() noexcept;

/// @brief Convert to "::Oculus::Interaction::ICollidersRef"
constexpr ::Oculus::Interaction::ICollidersRef* i___Oculus__Interaction__ICollidersRef() noexcept;

/// @brief Convert to "::Oculus::Interaction::IRelativeToRef"
constexpr ::Oculus::Interaction::IRelativeToRef* i___Oculus__Interaction__IRelativeToRef() noexcept;

/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* i___Oculus__Interaction__IRigidbodyRef() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Colliders, addr 0xa4d88f8, size 0x10, virtual false, abstract: false, final false
inline void set_Colliders(::ArrayW<::UnityEngine::Collider*>  value) ;

/// @brief Method set_HandAlignment, addr 0xa4d8894, size 0x8, virtual false, abstract: false, final false
inline void set_HandAlignment(::Oculus::Interaction::HandGrab::HandAlignType  value) ;

/// [CompilerGenerated]
/// @brief Method set_MovementProvider, addr 0xa4d887c, size 0x10, virtual false, abstract: false, final false
inline void set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value) ;

/// @brief Method set_ResetGrabOnGrabsUpdated, addr 0xa4d885c, size 0x8, virtual false, abstract: false, final false
inline void set_ResetGrabOnGrabsUpdated(bool  value) ;

/// @brief Method set_Slippiness, addr 0xa4d886c, size 0x8, virtual false, abstract: false, final false
inline void set_Slippiness(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceHandGrabInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceHandGrabInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceHandGrabInteractable(DistanceHandGrabInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceHandGrabInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceHandGrabInteractable(DistanceHandGrabInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16312};

/// [SerializeField]
/// @brief Field _rigidbody, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("Use Grabbable and/or RigidbodyKinematicLocker instead")]
/// @brief Field _physicsGrabbable, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PhysicsGrabbable>  ____physicsGrabbable;

/// [SerializeField]
/// @brief Field _resetGrabOnGrabsUpdated, offset: 0xd8, size: 0x1, def value: None
 bool  ____resetGrabOnGrabsUpdated;

/// [Space]
/// [SerializeField]
/// [Optional]
/// [Range(0, 1)]
/// [Tooltip("Defines the slippiness threshold so the interactor can slide along the interactable based on thestrength of the grip. GrabSurfaces are required to slide. At min slippiness = 0, the interactor never moves.")]
/// @brief Field _slippiness, offset: 0xdc, size: 0x4, def value: None
 float_t  ____slippiness;

/// [Space]
/// [SerializeField]
/// @brief Field _supportedGrabTypes, offset: 0xe0, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::GrabTypeFlags  ____supportedGrabTypes;

/// [SerializeField]
/// @brief Field _pinchGrabRules, offset: 0xe4, size: 0x18, def value: None
 ::Oculus::Interaction::GrabAPI::GrabbingRule  ____pinchGrabRules;

/// [SerializeField]
/// @brief Field _palmGrabRules, offset: 0xfc, size: 0x18, def value: None
 ::Oculus::Interaction::GrabAPI::GrabbingRule  ____palmGrabRules;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IMovementProvider), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// @brief Field _movementProvider, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____movementProvider;

/// [CompilerGenerated]
/// @brief Field <MovementProvider>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::Oculus::Interaction::IMovementProvider*  ____MovementProvider_k__BackingField;

/// [SerializeField]
/// @brief Field _handAligment, offset: 0x128, size: 0x4, def value: None
 ::Oculus::Interaction::HandGrab::HandAlignType  ____handAligment;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// [FormerlySerializedAs("_handGrabPoints")]
/// @brief Field _handGrabPoses, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  ____handGrabPoses;

/// [CompilerGenerated]
/// @brief Field <Colliders>k__BackingField, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____Colliders_k__BackingField;

/// @brief Field _grabPoseFinder, offset: 0x140, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::GrabPoseFinder*  ____grabPoseFinder;

/// @brief Field SCORE_MODIFIER, offset: 0x148, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::PoseMeasureParameters  ___SCORE_MODIFIER;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____rigidbody) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____physicsGrabbable) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____resetGrabOnGrabsUpdated) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____slippiness) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____supportedGrabTypes) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____pinchGrabRules) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____palmGrabRules) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____movementProvider) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____MovementProvider_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____handAligment) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____handGrabPoses) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____Colliders_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ____grabPoseFinder) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable, ___SCORE_MODIFIER) == 0x148, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::DistanceHandGrabInteractable) == 0x150, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
