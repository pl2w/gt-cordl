#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabPhysicsJointTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(OneGrabPhysicsJointTransformer)
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace Oculus::Interaction {
class OneGrabPhysicsJointTransformer___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class ConfigurableJoint;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Joint;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class OneGrabPhysicsJointTransformer;
}
namespace Oculus::Interaction {
class OneGrabPhysicsJointTransformer___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OneGrabPhysicsJointTransformer*);
MARK_REF_T(::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabPhysicsJointTransformer*, "Oculus.Interaction", "OneGrabPhysicsJointTransformer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*, "Oculus.Interaction", "OneGrabPhysicsJointTransformer/<>c");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabPhysicsJointTransformer
class CORDL_TYPE OneGrabPhysicsJointTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c;

 __declspec(property(get=get_IsKinematicGrab, put=set_IsKinematicGrab)) bool  IsKinematicGrab;

/// @brief Field _cachedGrabbingRigidbodies, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedGrabbingRigidbodies, put=setStaticF__cachedGrabbingRigidbodies)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  _cachedGrabbingRigidbodies;

/// @brief Field _customJoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__customJoint, put=__cordl_internal_set__customJoint)) ::UnityW<::UnityEngine::ConfigurableJoint>  _customJoint;

/// @brief Field _grabbable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _grabbingRigidbody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingRigidbody, put=__cordl_internal_set__grabbingRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _grabbingRigidbody;

/// @brief Field _isKinematicGrab, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isKinematicGrab, put=__cordl_internal_set__isKinematicGrab)) bool  _isKinematicGrab;

/// @brief Field _joint, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__joint, put=__cordl_internal_set__joint)) ::UnityW<::UnityEngine::Joint>  _joint;

/// @brief Field _rigidbodiesRoot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbodiesRoot, put=__cordl_internal_set__rigidbodiesRoot)) ::UnityW<::UnityEngine::Transform>  _rigidbodiesRoot;

/// @brief Field _targetPosition, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Field _targetRotation, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetRotation, put=__cordl_internal_set__targetRotation)) ::UnityEngine::Quaternion  _targetRotation;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method AddJoint, addr 0xa44a094, size 0x18c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Joint> AddJoint(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method BeginTransform, addr 0xa449c50, size 0x1f0, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method CloneJoint, addr 0xa44974c, size 0x4fc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ConfigurableJoint> CloneJoint(::UnityEngine::ConfigurableJoint*  joint, ::UnityEngine::GameObject*  destination) ;

/// @brief Method CreateDefaultJoint, addr 0xa44a568, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Joint> CreateDefaultJoint() ;

/// @brief Method CreateJointHolder, addr 0xa449658, size 0xf4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> CreateJointHolder() ;

/// @brief Method CreateRigidBody, addr 0xa44a5f0, size 0xf4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> CreateRigidBody() ;

/// @brief Method EndTransform, addr 0xa44a408, size 0x18, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method FixedUpdate, addr 0xa44a35c, size 0xac, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetGrabRigidbody, addr 0xa449e40, size 0x254, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> GetGrabRigidbody() ;

/// @brief Method Initialize, addr 0xa449c48, size 0x8, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InjectOptionalCustomJoint, addr 0xa44a6e4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalCustomJoint(::UnityEngine::ConfigurableJoint*  customJoint) ;

/// @brief Method InjectOptionalRigidbodiesRoot, addr 0xa44a6ec, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRigidbodiesRoot(::UnityEngine::Transform*  rigidbodiesRoot) ;

static inline ::Oculus::Interaction::OneGrabPhysicsJointTransformer* New_ctor() ;

/// @brief Method OnValidate, addr 0xa4494ac, size 0x1ac, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RemoveCurrentGrabRigidbody, addr 0xa44a4b0, size 0xb8, virtual false, abstract: false, final false
inline void RemoveCurrentGrabRigidbody() ;

/// @brief Method RemoveCurrentJoint, addr 0xa44a420, size 0x90, virtual false, abstract: false, final false
inline void RemoveCurrentJoint() ;

/// @brief Method UpdateTransform, addr 0xa44a220, size 0x13c, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr ::UnityW<::UnityEngine::ConfigurableJoint> const& __cordl_internal_get__customJoint() const;

constexpr ::UnityW<::UnityEngine::ConfigurableJoint>& __cordl_internal_get__customJoint() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__grabbingRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__grabbingRigidbody() ;

constexpr bool const& __cordl_internal_get__isKinematicGrab() const;

constexpr bool& __cordl_internal_get__isKinematicGrab() ;

constexpr ::UnityW<::UnityEngine::Joint> const& __cordl_internal_get__joint() const;

constexpr ::UnityW<::UnityEngine::Joint>& __cordl_internal_get__joint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rigidbodiesRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rigidbodiesRoot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__targetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__targetRotation() ;

constexpr void __cordl_internal_set__customJoint(::UnityW<::UnityEngine::ConfigurableJoint>  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__grabbingRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__isKinematicGrab(bool  value) ;

constexpr void __cordl_internal_set__joint(::UnityW<::UnityEngine::Joint>  value) ;

constexpr void __cordl_internal_set__rigidbodiesRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xa44a6f4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* getStaticF__cachedGrabbingRigidbodies() ;

/// @brief Method get_IsKinematicGrab, addr 0xa44949c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsKinematicGrab() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

static inline void setStaticF__cachedGrabbingRigidbodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value) ;

/// @brief Method set_IsKinematicGrab, addr 0xa4494a4, size 0x8, virtual false, abstract: false, final false
inline void set_IsKinematicGrab(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabPhysicsJointTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabPhysicsJointTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabPhysicsJointTransformer(OneGrabPhysicsJointTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabPhysicsJointTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabPhysicsJointTransformer(OneGrabPhysicsJointTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15820};

/// [SerializeField]
/// [Optional]
/// [Tooltip("Specify a custom joint to use when grabbing; should be disabled.")]
/// @brief Field _customJoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ConfigurableJoint>  ____customJoint;

/// [SerializeField]
/// [Tooltip("Indicates if the grabbing rigidbody should be kinematic or not.")]
/// @brief Field _isKinematicGrab, offset: 0x28, size: 0x1, def value: None
 bool  ____isKinematicGrab;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Newly created rigidbodies will be appended to this transform")]
/// @brief Field _rigidbodiesRoot, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rigidbodiesRoot;

/// @brief Field _joint, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Joint>  ____joint;

/// @brief Field _grabbingRigidbody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____grabbingRigidbody;

/// @brief Field _grabbable, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _targetPosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _targetRotation, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____targetRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____customJoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____isKinematicGrab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____rigidbodiesRoot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____joint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____grabbingRigidbody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____grabbable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____targetPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabPhysicsJointTransformer, ____targetRotation) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OneGrabPhysicsJointTransformer) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c
class CORDL_TYPE OneGrabPhysicsJointTransformer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>*  __9__20_0;

static inline ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c* New_ctor() ;

/// @brief Method <GetGrabRigidbody>b__20_0, addr 0xa44a80c, size 0x94, virtual false, abstract: false, final false
inline bool _GetGrabRigidbody_b__20_0(::UnityEngine::Rigidbody*  rb) ;

/// @brief Method .ctor, addr 0xa44a804, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*  value) ;

static inline void setStaticF___9__20_0(::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabPhysicsJointTransformer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabPhysicsJointTransformer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabPhysicsJointTransformer___c(OneGrabPhysicsJointTransformer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabPhysicsJointTransformer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabPhysicsJointTransformer___c(OneGrabPhysicsJointTransformer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::OneGrabPhysicsJointTransformer___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
