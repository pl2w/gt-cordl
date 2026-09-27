#pragma once
// IWYU pragma private; include "Oculus/Interaction/PhysicsGrabbable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsGrabbable)
namespace Oculus::Interaction {
class Grabbable;
}
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
class PhysicsGrabbable___c;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class PhysicsGrabbable;
}
namespace Oculus::Interaction {
class PhysicsGrabbable___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PhysicsGrabbable*);
MARK_REF_T(::Oculus::Interaction::PhysicsGrabbable___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PhysicsGrabbable*, "Oculus.Interaction", "PhysicsGrabbable");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PhysicsGrabbable___c*, "Oculus.Interaction", "PhysicsGrabbable/<>c");
// [Obsolete("Use Grabbable and/or RigidbodyKinematicLocker instead")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PhysicsGrabbable
class CORDL_TYPE PhysicsGrabbable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::PhysicsGrabbable___c;

 __declspec(property(get=get_Pointable, put=set_Pointable)) ::Oculus::Interaction::IPointable*  Pointable;

/// @brief Field WhenVelocitiesApplied, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenVelocitiesApplied, put=__cordl_internal_set_WhenVelocitiesApplied)) ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  WhenVelocitiesApplied;

/// @brief Field <Pointable>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Pointable_k__BackingField, put=__cordl_internal_set__Pointable_k__BackingField)) ::Oculus::Interaction::IPointable*  _Pointable_k__BackingField;

/// @brief Field _angularVelocity, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__angularVelocity, put=__cordl_internal_set__angularVelocity)) ::UnityEngine::Vector3  _angularVelocity;

/// @brief Field _hasPendingForce, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasPendingForce, put=__cordl_internal_set__hasPendingForce)) bool  _hasPendingForce;

/// @brief Field _initialScale, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialScale, put=__cordl_internal_set__initialScale)) ::UnityEngine::Vector3  _initialScale;

/// @brief Field _linearVelocity, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__linearVelocity, put=__cordl_internal_set__linearVelocity)) ::UnityEngine::Vector3  _linearVelocity;

/// @brief Field _pointable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointable, put=__cordl_internal_set__pointable)) ::UnityW<::UnityEngine::Object>  _pointable;

/// @brief Field _rigidbody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _scaleMassWithSize, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleMassWithSize, put=__cordl_internal_set__scaleMassWithSize)) bool  _scaleMassWithSize;

/// @brief Field _selectorsCount, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectorsCount, put=__cordl_internal_set__selectorsCount)) int32_t  _selectorsCount;

/// @brief Field _started, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method AddSelection, addr 0xa484958, size 0x2c, virtual false, abstract: false, final false
inline void AddSelection() ;

/// @brief Method ApplyVelocities, addr 0xa484b60, size 0x18, virtual false, abstract: false, final false
inline void ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method Awake, addr 0xa4845d4, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CachePhysicsState, addr 0xa4849d0, size 0x38, virtual false, abstract: false, final false
inline void CachePhysicsState() ;

/// @brief Method DisablePhysics, addr 0xa4849b8, size 0x18, virtual false, abstract: false, final false
inline void DisablePhysics() ;

/// @brief Method FixedUpdate, addr 0xa484b78, size 0x80, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method HandlePointerEventRaised, addr 0xa4848fc, size 0x5c, virtual false, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// [Obsolete("Use InjectAllPhysicsGrabbable with IPointable instead")]
/// @brief Method InjectAllPhysicsGrabbable, addr 0xa484cf4, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllPhysicsGrabbable(::Oculus::Interaction::Grabbable*  grabbable, ::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectAllPhysicsGrabbable, addr 0xa484bf8, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllPhysicsGrabbable(::Oculus::Interaction::IPointable*  pointable, ::UnityEngine::Rigidbody*  rigidbody) ;

/// [Obsolete("Use InjectPointable instead")]
/// @brief Method InjectGrabbable, addr 0xa484d20, size 0x4, virtual false, abstract: false, final false
inline void InjectGrabbable(::Oculus::Interaction::Grabbable*  grabbable) ;

/// @brief Method InjectOptionalScaleMassWithSize, addr 0xa484d2c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalScaleMassWithSize(bool  scaleMassWithSize) ;

/// @brief Method InjectPointable, addr 0xa484c24, size 0xd0, virtual false, abstract: false, final false
inline void InjectPointable(::Oculus::Interaction::IPointable*  pointable) ;

/// @brief Method InjectRigidbody, addr 0xa484d24, size 0x8, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

static inline ::Oculus::Interaction::PhysicsGrabbable* New_ctor() ;

/// @brief Method OnDisable, addr 0xa484754, size 0x114, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa484658, size 0xfc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReenablePhysics, addr 0xa484868, size 0x94, virtual false, abstract: false, final false
inline void ReenablePhysics() ;

/// @brief Method RemoveSelection, addr 0xa484984, size 0x34, virtual false, abstract: false, final false
inline void RemoveSelection() ;

/// @brief Method Reset, addr 0xa4844c4, size 0x110, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa48462c, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>* const& __cordl_internal_get_WhenVelocitiesApplied() const;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*& __cordl_internal_get_WhenVelocitiesApplied() ;

constexpr ::Oculus::Interaction::IPointable* const& __cordl_internal_get__Pointable_k__BackingField() const;

constexpr ::Oculus::Interaction::IPointable*& __cordl_internal_get__Pointable_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__angularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__angularVelocity() ;

constexpr bool const& __cordl_internal_get__hasPendingForce() const;

constexpr bool& __cordl_internal_get__hasPendingForce() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__linearVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__linearVelocity() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pointable() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pointable() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr bool const& __cordl_internal_get__scaleMassWithSize() const;

constexpr bool& __cordl_internal_get__scaleMassWithSize() ;

constexpr int32_t const& __cordl_internal_get__selectorsCount() const;

constexpr int32_t& __cordl_internal_get__selectorsCount() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__Pointable_k__BackingField(::Oculus::Interaction::IPointable*  value) ;

constexpr void __cordl_internal_set__angularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__hasPendingForce(bool  value) ;

constexpr void __cordl_internal_set__initialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__linearVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__pointable(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__scaleMassWithSize(bool  value) ;

constexpr void __cordl_internal_set__selectorsCount(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa484d34, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenVelocitiesApplied, addr 0xa484364, size 0xb0, virtual false, abstract: false, final false
inline void add_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Pointable, addr 0xa484354, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IPointable* get_Pointable() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenVelocitiesApplied, addr 0xa484414, size 0xb0, virtual false, abstract: false, final false
inline void remove_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Pointable, addr 0xa48435c, size 0x8, virtual false, abstract: false, final false
inline void set_Pointable(::Oculus::Interaction::IPointable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsGrabbable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsGrabbable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsGrabbable(PhysicsGrabbable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsGrabbable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsGrabbable(PhysicsGrabbable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15992};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointable), new[] {  })]
/// [FormerlySerializedAs("_grabbable")]
/// @brief Field _pointable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pointable;

/// [CompilerGenerated]
/// @brief Field <Pointable>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IPointable*  ____Pointable_k__BackingField;

/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [SerializeField]
/// [Tooltip("If enabled, the object\'s mass will scale appropriately as the scale of the object changes.")]
/// @brief Field _scaleMassWithSize, offset: 0x38, size: 0x1, def value: None
 bool  ____scaleMassWithSize;

/// @brief Field _initialScale, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialScale;

/// @brief Field _hasPendingForce, offset: 0x48, size: 0x1, def value: None
 bool  ____hasPendingForce;

/// @brief Field _linearVelocity, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____linearVelocity;

/// @brief Field _angularVelocity, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____angularVelocity;

/// @brief Field _selectorsCount, offset: 0x64, size: 0x4, def value: None
 int32_t  ____selectorsCount;

/// @brief Field _started, offset: 0x68, size: 0x1, def value: None
 bool  ____started;

/// [CompilerGenerated]
/// @brief Field WhenVelocitiesApplied, offset: 0x70, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  ___WhenVelocitiesApplied;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____pointable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____Pointable_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____rigidbody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____scaleMassWithSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____initialScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____hasPendingForce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____linearVelocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____angularVelocity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____selectorsCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ____started) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PhysicsGrabbable, ___WhenVelocitiesApplied) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PhysicsGrabbable) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PhysicsGrabbable/<>c
class CORDL_TYPE PhysicsGrabbable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PhysicsGrabbable___c*  __9;

/// @brief Field <>9__35_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__35_0, put=setStaticF___9__35_0)) ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  __9__35_0;

static inline ::Oculus::Interaction::PhysicsGrabbable___c* New_ctor() ;

/// @brief Method <.ctor>b__35_0, addr 0xa484e9c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__35_0(::UnityEngine::Vector3  _p0_, ::UnityEngine::Vector3  _p1_) ;

/// @brief Method .ctor, addr 0xa484e94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PhysicsGrabbable___c* getStaticF___9() ;

static inline ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>* getStaticF___9__35_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PhysicsGrabbable___c*  value) ;

static inline void setStaticF___9__35_0(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsGrabbable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsGrabbable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsGrabbable___c(PhysicsGrabbable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsGrabbable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsGrabbable___c(PhysicsGrabbable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PhysicsGrabbable___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
