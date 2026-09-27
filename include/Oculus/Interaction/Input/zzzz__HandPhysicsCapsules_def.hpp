#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandPhysicsCapsules.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFingerJointFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandPhysicsCapsules)
namespace Oculus::Interaction::Input {
class BoneCapsule;
}
namespace Oculus::Interaction::Input {
struct HandFingerJointFlags;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class HandPhysicsCapsules___c;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class JointsRadiusFeature;
}
namespace Oculus::Interaction {
class IHandVisual;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CapsuleCollider;
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
namespace Oculus::Interaction::Input {
class HandPhysicsCapsules;
}
namespace Oculus::Interaction::Input {
class HandPhysicsCapsules___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandPhysicsCapsules*);
MARK_REF_T(::Oculus::Interaction::Input::HandPhysicsCapsules___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandPhysicsCapsules*, "Oculus.Interaction.Input", "HandPhysicsCapsules");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandPhysicsCapsules___c*, "Oculus.Interaction.Input", "HandPhysicsCapsules/<>c");
// Dependencies Oculus.Interaction.Input.HandFingerJointFlags, UnityEngine.MonoBehaviour, UnityEngine.Rigidbody
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandPhysicsCapsules
class CORDL_TYPE HandPhysicsCapsules : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Input::HandPhysicsCapsules___c;

 __declspec(property(get=get_Capsules, put=set_Capsules)) ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*  Capsules;

/// @brief Field Hand, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field HandVisual, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandVisual, put=__cordl_internal_set_HandVisual)) ::Oculus::Interaction::IHandVisual*  HandVisual;

 __declspec(property(get=get_RootTransform)) ::UnityW<::UnityEngine::Transform>  RootTransform;

/// @brief Field <Capsules>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Capsules_k__BackingField, put=__cordl_internal_set__Capsules_k__BackingField)) ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*  _Capsules_k__BackingField;

/// @brief Field _asTriggers, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__asTriggers, put=__cordl_internal_set__asTriggers)) bool  _asTriggers;

/// @brief Field _capsules, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__capsules, put=__cordl_internal_set__capsules)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>*  _capsules;

/// @brief Field _capsulesAreActive, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__capsulesAreActive, put=__cordl_internal_set__capsulesAreActive)) bool  _capsulesAreActive;

/// @brief Field _capsulesGenerated, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__capsulesGenerated, put=__cordl_internal_set__capsulesGenerated)) bool  _capsulesGenerated;

/// @brief Field _hand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handVisual, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handVisual, put=__cordl_internal_set__handVisual)) ::UnityW<::UnityEngine::Object>  _handVisual;

/// @brief Field _jointsRadiusFeature, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointsRadiusFeature, put=__cordl_internal_set__jointsRadiusFeature)) ::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature>  _jointsRadiusFeature;

/// @brief Field _mask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__mask, put=__cordl_internal_set__mask)) ::Oculus::Interaction::Input::HandFingerJointFlags  _mask;

/// @brief Field _rigidbodies, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbodies, put=__cordl_internal_set__rigidbodies)) ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  _rigidbodies;

/// @brief Field _rootTransform, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootTransform, put=__cordl_internal_set__rootTransform)) ::UnityW<::UnityEngine::Transform>  _rootTransform;

/// @brief Field _started, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _useLayer, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__useLayer, put=__cordl_internal_set__useLayer)) int32_t  _useLayer;

/// @brief Field _whenCapsulesGenerated, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenCapsulesGenerated, put=__cordl_internal_set__whenCapsulesGenerated)) ::System::Action*  _whenCapsulesGenerated;

/// @brief Method Awake, addr 0xa50fb88, size 0xb4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateCollider, addr 0xa510918, size 0x26c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::CapsuleCollider> CreateCollider(::StringW  name, ::UnityEngine::Transform*  holder, ::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  radius, float_t  offset) ;

/// @brief Method CreateJointRigidbody, addr 0xa5106dc, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> CreateJointRigidbody(::Oculus::Interaction::Input::HandJointId  joint, ::UnityEngine::Transform*  holder, ::UnityEngine::Pose  pose) ;

/// @brief Method DisableRigidbodies, addr 0xa50ff28, size 0x80, virtual false, abstract: false, final false
inline void DisableRigidbodies() ;

/// @brief Method GenerateCapsules, addr 0xa50ffa8, size 0x674, virtual false, abstract: false, final false
inline void GenerateCapsules() ;

/// @brief Method HandleHandUpdated, addr 0xa510cf8, size 0x3c, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method IgnoreSelfCollisions, addr 0xa510bdc, size 0x11c, virtual false, abstract: false, final false
inline void IgnoreSelfCollisions() ;

/// @brief Method InjectAllOVRHandPhysicsCapsules, addr 0xa5110fc, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllOVRHandPhysicsCapsules(::Oculus::Interaction::Input::IHand*  hand, bool  asTriggers, int32_t  useLayer) ;

/// @brief Method InjectAsTriggers, addr 0xa5111f8, size 0x8, virtual false, abstract: false, final false
inline void InjectAsTriggers(bool  asTriggers) ;

/// @brief Method InjectHand, addr 0xa511128, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectJointsRadiusFeature, addr 0xa511210, size 0x8, virtual false, abstract: false, final false
inline void InjectJointsRadiusFeature(::Oculus::Interaction::Input::JointsRadiusFeature*  jointsRadiusFeature) ;

/// @brief Method InjectMask, addr 0xa511208, size 0x8, virtual false, abstract: false, final false
inline void InjectMask(::Oculus::Interaction::Input::HandFingerJointFlags  mask) ;

/// @brief Method InjectUseLayer, addr 0xa511200, size 0x8, virtual false, abstract: false, final false
inline void InjectUseLayer(int32_t  useLayer) ;

static inline ::Oculus::Interaction::Input::HandPhysicsCapsules* New_ctor() ;

/// @brief Method OnDisable, addr 0xa50fe20, size 0x108, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa50fd18, size 0x108, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xa50fb5c, size 0x2c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa50fc3c, size 0xdc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetJointRigidbody, addr 0xa51061c, size 0xc0, virtual false, abstract: false, final false
inline bool TryGetJointRigidbody(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Rigidbody*>  body) ;

/// @brief Method UpdateColliders, addr 0xa510f98, size 0x164, virtual false, abstract: false, final false
inline void UpdateColliders() ;

/// @brief Method UpdateRigidbodies, addr 0xa510d34, size 0x264, virtual false, abstract: false, final false
inline void UpdateRigidbodies() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr ::Oculus::Interaction::IHandVisual* const& __cordl_internal_get_HandVisual() const;

constexpr ::Oculus::Interaction::IHandVisual*& __cordl_internal_get_HandVisual() ;

constexpr ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>* const& __cordl_internal_get__Capsules_k__BackingField() const;

constexpr ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*& __cordl_internal_get__Capsules_k__BackingField() ;

constexpr bool const& __cordl_internal_get__asTriggers() const;

constexpr bool& __cordl_internal_get__asTriggers() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>* const& __cordl_internal_get__capsules() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>*& __cordl_internal_get__capsules() ;

constexpr bool const& __cordl_internal_get__capsulesAreActive() const;

constexpr bool& __cordl_internal_get__capsulesAreActive() ;

constexpr bool const& __cordl_internal_get__capsulesGenerated() const;

constexpr bool& __cordl_internal_get__capsulesGenerated() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handVisual() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handVisual() ;

constexpr ::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature> const& __cordl_internal_get__jointsRadiusFeature() const;

constexpr ::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature>& __cordl_internal_get__jointsRadiusFeature() ;

constexpr ::Oculus::Interaction::Input::HandFingerJointFlags const& __cordl_internal_get__mask() const;

constexpr ::Oculus::Interaction::Input::HandFingerJointFlags& __cordl_internal_get__mask() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& __cordl_internal_get__rigidbodies() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& __cordl_internal_get__rigidbodies() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rootTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rootTransform() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr int32_t const& __cordl_internal_get__useLayer() const;

constexpr int32_t& __cordl_internal_get__useLayer() ;

constexpr ::System::Action* const& __cordl_internal_get__whenCapsulesGenerated() const;

constexpr ::System::Action*& __cordl_internal_get__whenCapsulesGenerated() ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set_HandVisual(::Oculus::Interaction::IHandVisual*  value) ;

constexpr void __cordl_internal_set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*  value) ;

constexpr void __cordl_internal_set__asTriggers(bool  value) ;

constexpr void __cordl_internal_set__capsules(::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>*  value) ;

constexpr void __cordl_internal_set__capsulesAreActive(bool  value) ;

constexpr void __cordl_internal_set__capsulesGenerated(bool  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handVisual(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__jointsRadiusFeature(::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature>  value) ;

constexpr void __cordl_internal_set__mask(::Oculus::Interaction::Input::HandFingerJointFlags  value) ;

constexpr void __cordl_internal_set__rigidbodies(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value) ;

constexpr void __cordl_internal_set__rootTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__useLayer(int32_t  value) ;

constexpr void __cordl_internal_set__whenCapsulesGenerated(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xa511218, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenCapsulesGenerated, addr 0xa50f9f4, size 0xc0, virtual false, abstract: false, final false
inline void add_WhenCapsulesGenerated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Capsules, addr 0xa50fb4c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>* get_Capsules() ;

/// @brief Method get_RootTransform, addr 0xa50fb44, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RootTransform() ;

/// @brief Method remove_WhenCapsulesGenerated, addr 0xa50fab4, size 0x90, virtual false, abstract: false, final false
inline void remove_WhenCapsulesGenerated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Capsules, addr 0xa50fb54, size 0x8, virtual false, abstract: false, final false
inline void set_Capsules(::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPhysicsCapsules() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPhysicsCapsules", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPhysicsCapsules(HandPhysicsCapsules && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPhysicsCapsules", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPhysicsCapsules(HandPhysicsCapsules const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16495};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IHandVisual), new[] {  })]
/// [Obsolete("Replaced by _hand")]
/// @brief Field _handVisual, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handVisual;

/// [Obsolete("Replaced by Hand")]
/// @brief Field HandVisual, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IHandVisual*  ___HandVisual;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// @brief Field Hand, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// [Tooltip("Indicates how \"thick\" the fingers are at each bone. This information creates a capsule collider that wraps the bones accurately.")]
/// [SerializeField]
/// @brief Field _jointsRadiusFeature, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature>  ____jointsRadiusFeature;

/// [Space]
/// [SerializeField]
/// [Tooltip("If  checked, capsules will be generated as triggers.")]
/// @brief Field _asTriggers, offset: 0x48, size: 0x1, def value: None
 bool  ____asTriggers;

/// [SerializeField]
/// [Tooltip("Capsules will be generated in this layer. The default layer is 0.")]
/// @brief Field _useLayer, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____useLayer;

/// [SerializeField]
/// [Tooltip("A joint. Capsules reaching this joint will not be generated.")]
/// @brief Field _mask, offset: 0x50, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFingerJointFlags  ____mask;

/// @brief Field _whenCapsulesGenerated, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ____whenCapsulesGenerated;

/// @brief Field _rootTransform, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rootTransform;

/// @brief Field _capsules, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>*  ____capsules;

/// [CompilerGenerated]
/// @brief Field <Capsules>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*  ____Capsules_k__BackingField;

/// @brief Field _rigidbodies, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  ____rigidbodies;

/// @brief Field _capsulesAreActive, offset: 0x80, size: 0x1, def value: None
 bool  ____capsulesAreActive;

/// @brief Field _capsulesGenerated, offset: 0x81, size: 0x1, def value: None
 bool  ____capsulesGenerated;

/// @brief Field _started, offset: 0x82, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____handVisual) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ___HandVisual) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____hand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ___Hand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____jointsRadiusFeature) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____asTriggers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____useLayer) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____mask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____whenCapsulesGenerated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____rootTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____capsules) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____Capsules_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____rigidbodies) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____capsulesAreActive) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____capsulesGenerated) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandPhysicsCapsules, ____started) == 0x82, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandPhysicsCapsules) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandPhysicsCapsules/<>c
class CORDL_TYPE HandPhysicsCapsules___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::HandPhysicsCapsules___c*  __9;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::System::Action*  __9__44_0;

static inline ::Oculus::Interaction::Input::HandPhysicsCapsules___c* New_ctor() ;

/// @brief Method <.ctor>b__44_0, addr 0xa511380, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__44_0() ;

/// @brief Method .ctor, addr 0xa511378, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::HandPhysicsCapsules___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__44_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::HandPhysicsCapsules___c*  value) ;

static inline void setStaticF___9__44_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPhysicsCapsules___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPhysicsCapsules___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPhysicsCapsules___c(HandPhysicsCapsules___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPhysicsCapsules___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPhysicsCapsules___c(HandPhysicsCapsules___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::HandPhysicsCapsules___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
