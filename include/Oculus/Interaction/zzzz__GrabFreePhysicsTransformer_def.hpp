#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabFreePhysicsTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__GrabFreeTransformer_GrabPointDelta_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrabFreePhysicsTransformer)
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class GrabFreePhysicsTransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabFreePhysicsTransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabFreePhysicsTransformer*, "Oculus.Interaction", "GrabFreePhysicsTransformer");
// Dependencies Oculus.Interaction.GrabFreeTransformer::GrabPointDelta, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GrabFreePhysicsTransformer
class CORDL_TYPE GrabFreePhysicsTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AngularVelocityFactor, put=set_AngularVelocityFactor)) float_t  AngularVelocityFactor;

 __declspec(property(get=get_MaxAngularDelta, put=set_MaxAngularDelta)) float_t  MaxAngularDelta;

 __declspec(property(get=get_MaxLinearDelta, put=set_MaxLinearDelta)) float_t  MaxLinearDelta;

 __declspec(property(get=get_VelocityFactor, put=set_VelocityFactor)) float_t  VelocityFactor;

/// @brief Field _angularVelocityFactor, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__angularVelocityFactor, put=__cordl_internal_set__angularVelocityFactor)) float_t  _angularVelocityFactor;

/// @brief Field _deltas, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltas, put=__cordl_internal_set__deltas)) ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  _deltas;

/// @brief Field _grabDeltaInLocalSpace, offset 0x40, size 0x1c 
 __declspec(property(get=__cordl_internal_get__grabDeltaInLocalSpace, put=__cordl_internal_set__grabDeltaInLocalSpace)) ::UnityEngine::Pose  _grabDeltaInLocalSpace;

/// @brief Field _grabbable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _isTransforming, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTransforming, put=__cordl_internal_set__isTransforming)) bool  _isTransforming;

/// @brief Field _lastRotation, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastRotation, put=__cordl_internal_set__lastRotation)) ::UnityEngine::Quaternion  _lastRotation;

/// @brief Field _maxAngularDelta, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAngularDelta, put=__cordl_internal_set__maxAngularDelta)) float_t  _maxAngularDelta;

/// @brief Field _maxLinearDelta, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxLinearDelta, put=__cordl_internal_set__maxLinearDelta)) float_t  _maxLinearDelta;

/// @brief Field _rigidbody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _targetPosition, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Field _targetRotation, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetRotation, put=__cordl_internal_set__targetRotation)) ::UnityEngine::Quaternion  _targetRotation;

/// @brief Field _velocityFactor, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__velocityFactor, put=__cordl_internal_set__velocityFactor)) float_t  _velocityFactor;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method ApplyVelocity, addr 0xa447c8c, size 0x430, virtual false, abstract: false, final false
inline void ApplyVelocity(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Quaternion  targetRotation) ;

/// @brief Method BeginTransform, addr 0xa446ba8, size 0x3f4, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0xa447b6c, size 0x100, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method FixedUpdate, addr 0xa447c6c, size 0x20, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialize, addr 0xa446a68, size 0x140, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InjectOptionalRigidbody, addr 0xa4480bc, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

static inline ::Oculus::Interaction::GrabFreePhysicsTransformer* New_ctor() ;

/// @brief Method Reset, addr 0xa446a10, size 0x58, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateTransform, addr 0xa4471cc, size 0x2f8, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr float_t const& __cordl_internal_get__angularVelocityFactor() const;

constexpr float_t& __cordl_internal_get__angularVelocityFactor() ;

constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta> const& __cordl_internal_get__deltas() const;

constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>& __cordl_internal_get__deltas() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__grabDeltaInLocalSpace() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__grabDeltaInLocalSpace() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr bool const& __cordl_internal_get__isTransforming() const;

constexpr bool& __cordl_internal_get__isTransforming() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastRotation() ;

constexpr float_t const& __cordl_internal_get__maxAngularDelta() const;

constexpr float_t& __cordl_internal_get__maxAngularDelta() ;

constexpr float_t const& __cordl_internal_get__maxLinearDelta() const;

constexpr float_t& __cordl_internal_get__maxLinearDelta() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__targetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__targetRotation() ;

constexpr float_t const& __cordl_internal_get__velocityFactor() const;

constexpr float_t& __cordl_internal_get__velocityFactor() ;

constexpr void __cordl_internal_set__angularVelocityFactor(float_t  value) ;

constexpr void __cordl_internal_set__deltas(::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  value) ;

constexpr void __cordl_internal_set__grabDeltaInLocalSpace(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__isTransforming(bool  value) ;

constexpr void __cordl_internal_set__lastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__maxAngularDelta(float_t  value) ;

constexpr void __cordl_internal_set__maxLinearDelta(float_t  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__velocityFactor(float_t  value) ;

/// @brief Method .ctor, addr 0xa4480c4, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AngularVelocityFactor, addr 0xa4469e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_AngularVelocityFactor() ;

/// @brief Method get_MaxAngularDelta, addr 0xa446a00, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxAngularDelta() ;

/// @brief Method get_MaxLinearDelta, addr 0xa4469f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxLinearDelta() ;

/// @brief Method get_VelocityFactor, addr 0xa4469d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_VelocityFactor() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

/// @brief Method set_AngularVelocityFactor, addr 0xa4469e8, size 0x8, virtual false, abstract: false, final false
inline void set_AngularVelocityFactor(float_t  value) ;

/// @brief Method set_MaxAngularDelta, addr 0xa446a08, size 0x8, virtual false, abstract: false, final false
inline void set_MaxAngularDelta(float_t  value) ;

/// @brief Method set_MaxLinearDelta, addr 0xa4469f8, size 0x8, virtual false, abstract: false, final false
inline void set_MaxLinearDelta(float_t  value) ;

/// @brief Method set_VelocityFactor, addr 0xa4469d8, size 0x8, virtual false, abstract: false, final false
inline void set_VelocityFactor(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabFreePhysicsTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabFreePhysicsTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabFreePhysicsTransformer(GrabFreePhysicsTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabFreePhysicsTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabFreePhysicsTransformer(GrabFreePhysicsTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15813};

/// [Tooltip("Strength of the velocity applied during fixed update")]
/// [SerializeField]
/// @brief Field _velocityFactor, offset: 0x20, size: 0x4, def value: None
 float_t  ____velocityFactor;

/// [Tooltip("Strength of the angular velocity applied during fixed update")]
/// [SerializeField]
/// @brief Field _angularVelocityFactor, offset: 0x24, size: 0x4, def value: None
 float_t  ____angularVelocityFactor;

/// [Tooltip("Maximum delta for the linear velocity applied during fixed update")]
/// [SerializeField]
/// @brief Field _maxLinearDelta, offset: 0x28, size: 0x4, def value: None
 float_t  ____maxLinearDelta;

/// [Tooltip("Maximum delta for the angular velocity applied during fixed update")]
/// [SerializeField]
/// @brief Field _maxAngularDelta, offset: 0x2c, size: 0x4, def value: None
 float_t  ____maxAngularDelta;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// [Tooltip("Rigidbody to which the velocity will be applied.")]
/// @brief Field _rigidbody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// @brief Field _grabbable, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _grabDeltaInLocalSpace, offset: 0x40, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____grabDeltaInLocalSpace;

/// @brief Field _lastRotation, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____lastRotation;

/// @brief Field _deltas, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  ____deltas;

/// @brief Field _isTransforming, offset: 0x78, size: 0x1, def value: None
 bool  ____isTransforming;

/// @brief Field _targetPosition, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _targetRotation, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____targetRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____velocityFactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____angularVelocityFactor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____maxLinearDelta) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____maxAngularDelta) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____rigidbody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____grabbable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____grabDeltaInLocalSpace) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____lastRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____deltas) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____isTransforming) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____targetPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreePhysicsTransformer, ____targetRotation) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabFreePhysicsTransformer) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction
