#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RayInteractor)
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace Oculus::Interaction {
class ICandidatePosition;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace Oculus::Interaction {
class RayInteractable;
}
namespace Oculus::Interaction {
class RayInteractor_RayCandidateProperties;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
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
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class RayInteractor;
}
namespace Oculus::Interaction {
class RayInteractor_RayCandidateProperties;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RayInteractor*);
MARK_REF_T(::Oculus::Interaction::RayInteractor_RayCandidateProperties*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RayInteractor*, "Oculus.Interaction", "RayInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RayInteractor_RayCandidateProperties*, "Oculus.Interaction", "RayInteractor/RayCandidateProperties");
// Dependencies Oculus.Interaction.PointerInteractor`2<TInteractor, TInteractable>, Oculus.Interaction.Surfaces.SurfaceHit, System.Nullable`1<T>, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Ray, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RayInteractor
class CORDL_TYPE RayInteractor : public ::Oculus::Interaction::PointerInteractor_2<::UnityW<::Oculus::Interaction::RayInteractor>,::UnityW<::Oculus::Interaction::RayInteractable>> {
public:
// Declarations
using RayCandidateProperties = ::Oculus::Interaction::RayInteractor_RayCandidateProperties;

 __declspec(property(get=get_CandidateProperties)) ::System::Object*  CandidateProperties;

 __declspec(property(get=get_CollisionInfo, put=set_CollisionInfo)) ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>  CollisionInfo;

 __declspec(property(get=get_End, put=set_End)) ::UnityEngine::Vector3  End;

 __declspec(property(get=get_Forward, put=set_Forward)) ::UnityEngine::Vector3  Forward;

 __declspec(property(get=get_MaxRayLength, put=set_MaxRayLength)) float_t  MaxRayLength;

 __declspec(property(get=get_Origin, put=set_Origin)) ::UnityEngine::Vector3  Origin;

 __declspec(property(get=get_Ray, put=set_Ray)) ::UnityEngine::Ray  Ray;

 __declspec(property(get=get_Rotation, put=set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Field <CollisionInfo>k__BackingField, offset 0x1b0, size 0x10 
 __declspec(property(get=__cordl_internal_get__CollisionInfo_k__BackingField, put=__cordl_internal_set__CollisionInfo_k__BackingField)) ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>  _CollisionInfo_k__BackingField;

/// @brief Field <End>k__BackingField, offset 0x1a0, size 0xc 
 __declspec(property(get=__cordl_internal_get__End_k__BackingField, put=__cordl_internal_set__End_k__BackingField)) ::UnityEngine::Vector3  _End_k__BackingField;

/// @brief Field <Forward>k__BackingField, offset 0x194, size 0xc 
 __declspec(property(get=__cordl_internal_get__Forward_k__BackingField, put=__cordl_internal_set__Forward_k__BackingField)) ::UnityEngine::Vector3  _Forward_k__BackingField;

/// @brief Field <Origin>k__BackingField, offset 0x178, size 0xc 
 __declspec(property(get=__cordl_internal_get__Origin_k__BackingField, put=__cordl_internal_set__Origin_k__BackingField)) ::UnityEngine::Vector3  _Origin_k__BackingField;

/// @brief Field <Ray>k__BackingField, offset 0x1c0, size 0x18 
 __declspec(property(get=__cordl_internal_get__Ray_k__BackingField, put=__cordl_internal_set__Ray_k__BackingField)) ::UnityEngine::Ray  _Ray_k__BackingField;

/// @brief Field <Rotation>k__BackingField, offset 0x184, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rotation_k__BackingField, put=__cordl_internal_set__Rotation_k__BackingField)) ::UnityEngine::Quaternion  _Rotation_k__BackingField;

/// @brief Field _equalDistanceThreshold, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__equalDistanceThreshold, put=__cordl_internal_set__equalDistanceThreshold)) float_t  _equalDistanceThreshold;

/// @brief Field _maxRayLength, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRayLength, put=__cordl_internal_set__maxRayLength)) float_t  _maxRayLength;

/// @brief Field _movedHit, offset 0x140, size 0x1c 
 __declspec(property(get=__cordl_internal_get__movedHit, put=__cordl_internal_set__movedHit)) ::Oculus::Interaction::Surfaces::SurfaceHit  _movedHit;

/// @brief Field _movement, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__movement, put=__cordl_internal_set__movement)) ::Oculus::Interaction::IMovement*  _movement;

/// @brief Field _movementHitDelta, offset 0x15c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__movementHitDelta, put=__cordl_internal_set__movementHitDelta)) ::UnityEngine::Pose  _movementHitDelta;

/// @brief Field _rayCandidateProperties, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayCandidateProperties, put=__cordl_internal_set__rayCandidateProperties)) ::Oculus::Interaction::RayInteractor_RayCandidateProperties*  _rayCandidateProperties;

/// @brief Field _rayOrigin, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayOrigin, put=__cordl_internal_set__rayOrigin)) ::UnityW<::UnityEngine::Transform>  _rayOrigin;

/// @brief Field _selector, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::UnityW<::UnityEngine::Object>  _selector;

/// @brief Method Awake, addr 0xa45bf0c, size 0xac, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa45c1a4, size 0x468, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::RayInteractable> ComputeCandidate() ;

/// @brief Method ComputeCandidateTiebreaker, addr 0xa45c664, size 0x98, virtual true, abstract: false, final false
inline int32_t ComputeCandidateTiebreaker(::Oculus::Interaction::RayInteractable*  a, ::Oculus::Interaction::RayInteractable*  b) ;

/// @brief Method ComputePointerPose, addr 0xa45cf44, size 0x1d0, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method DoPreprocess, addr 0xa45c000, size 0x19c, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method DoSelectUpdate, addr 0xa45cb74, size 0x3d0, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method InjectAllRayInteractor, addr 0xa45d114, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllRayInteractor(::Oculus::Interaction::ISelector*  selector, ::UnityEngine::Transform*  rayOrigin) ;

/// @brief Method InjectOptionalEqualDistanceThreshold, addr 0xa45d234, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalEqualDistanceThreshold(float_t  equalDistanceThreshold) ;

/// @brief Method InjectRayOrigin, addr 0xa45d224, size 0x10, virtual false, abstract: false, final false
inline void InjectRayOrigin(::UnityEngine::Transform*  rayOrigin) ;

/// @brief Method InjectSelector, addr 0xa45d140, size 0xe4, virtual false, abstract: false, final false
inline void InjectSelector(::Oculus::Interaction::ISelector*  selector) ;

/// @brief Method InteractableSelected, addr 0xa45c6fc, size 0x308, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::RayInteractable*  interactable) ;

/// @brief Method InteractableUnselected, addr 0xa45ca04, size 0x170, virtual true, abstract: false, final false
inline void InteractableUnselected(::Oculus::Interaction::RayInteractable*  interactable) ;

static inline ::Oculus::Interaction::RayInteractor* New_ctor() ;

/// @brief Method Start, addr 0xa45bfb8, size 0x48, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit> const& __cordl_internal_get__CollisionInfo_k__BackingField() const;

constexpr ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>& __cordl_internal_get__CollisionInfo_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__End_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__End_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Forward_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Forward_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Origin_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Origin_k__BackingField() ;

constexpr ::UnityEngine::Ray const& __cordl_internal_get__Ray_k__BackingField() const;

constexpr ::UnityEngine::Ray& __cordl_internal_get__Ray_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__Rotation_k__BackingField() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__Rotation_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__equalDistanceThreshold() const;

constexpr float_t& __cordl_internal_get__equalDistanceThreshold() ;

constexpr float_t const& __cordl_internal_get__maxRayLength() const;

constexpr float_t& __cordl_internal_get__maxRayLength() ;

constexpr ::Oculus::Interaction::Surfaces::SurfaceHit const& __cordl_internal_get__movedHit() const;

constexpr ::Oculus::Interaction::Surfaces::SurfaceHit& __cordl_internal_get__movedHit() ;

constexpr ::Oculus::Interaction::IMovement* const& __cordl_internal_get__movement() const;

constexpr ::Oculus::Interaction::IMovement*& __cordl_internal_get__movement() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__movementHitDelta() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__movementHitDelta() ;

constexpr ::Oculus::Interaction::RayInteractor_RayCandidateProperties* const& __cordl_internal_get__rayCandidateProperties() const;

constexpr ::Oculus::Interaction::RayInteractor_RayCandidateProperties*& __cordl_internal_get__rayCandidateProperties() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rayOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rayOrigin() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selector() ;

constexpr void __cordl_internal_set__CollisionInfo_k__BackingField(::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>  value) ;

constexpr void __cordl_internal_set__End_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Forward_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Origin_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Ray_k__BackingField(::UnityEngine::Ray  value) ;

constexpr void __cordl_internal_set__Rotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__equalDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__maxRayLength(float_t  value) ;

constexpr void __cordl_internal_set__movedHit(::Oculus::Interaction::Surfaces::SurfaceHit  value) ;

constexpr void __cordl_internal_set__movement(::Oculus::Interaction::IMovement*  value) ;

constexpr void __cordl_internal_set__movementHitDelta(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__rayCandidateProperties(::Oculus::Interaction::RayInteractor_RayCandidateProperties*  value) ;

constexpr void __cordl_internal_set__rayOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa45d23c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CandidateProperties, addr 0xa45c19c, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* get_CandidateProperties() ;

/// [CompilerGenerated]
/// @brief Method get_CollisionInfo, addr 0xa45bebc, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit> get_CollisionInfo() ;

/// [CompilerGenerated]
/// @brief Method get_End, addr 0xa45be8c, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_End() ;

/// [CompilerGenerated]
/// @brief Method get_Forward, addr 0xa45be6c, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Forward() ;

/// @brief Method get_MaxRayLength, addr 0xa45beac, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxRayLength() ;

/// [CompilerGenerated]
/// @brief Method get_Origin, addr 0xa45be24, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Origin() ;

/// [CompilerGenerated]
/// @brief Method get_Ray, addr 0xa45bedc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Ray get_Ray() ;

/// [CompilerGenerated]
/// @brief Method get_Rotation, addr 0xa45be44, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// [CompilerGenerated]
/// @brief Method set_CollisionInfo, addr 0xa45becc, size 0x10, virtual false, abstract: false, final false
inline void set_CollisionInfo(::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>  value) ;

/// [CompilerGenerated]
/// @brief Method set_End, addr 0xa45be9c, size 0x10, virtual false, abstract: false, final false
inline void set_End(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Forward, addr 0xa45be7c, size 0x10, virtual false, abstract: false, final false
inline void set_Forward(::UnityEngine::Vector3  value) ;

/// @brief Method set_MaxRayLength, addr 0xa45beb4, size 0x8, virtual false, abstract: false, final false
inline void set_MaxRayLength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Origin, addr 0xa45be34, size 0x10, virtual false, abstract: false, final false
inline void set_Origin(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Ray, addr 0xa45bef4, size 0x18, virtual false, abstract: false, final false
inline void set_Ray(::UnityEngine::Ray  value) ;

/// [CompilerGenerated]
/// @brief Method set_Rotation, addr 0xa45be58, size 0x14, virtual false, abstract: false, final false
inline void set_Rotation(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayInteractor(RayInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayInteractor(RayInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15864};

/// [Tooltip("A selector indicating when the Interactor should select or unselect the best available interactable.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// @brief Field _selector, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selector;

/// [Tooltip("The origin of the ray.")]
/// [SerializeField]
/// @brief Field _rayOrigin, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rayOrigin;

/// [Tooltip("The maximum length of the ray.")]
/// [SerializeField]
/// @brief Field _maxRayLength, offset: 0x128, size: 0x4, def value: None
 float_t  ____maxRayLength;

/// [SerializeField]
/// [Tooltip("(Meters, World) The threshold below which distances to a surface are treated as equal for the purposes of ranking.")]
/// @brief Field _equalDistanceThreshold, offset: 0x12c, size: 0x4, def value: None
 float_t  ____equalDistanceThreshold;

/// @brief Field _rayCandidateProperties, offset: 0x130, size: 0x8, def value: None
 ::Oculus::Interaction::RayInteractor_RayCandidateProperties*  ____rayCandidateProperties;

/// @brief Field _movement, offset: 0x138, size: 0x8, def value: None
 ::Oculus::Interaction::IMovement*  ____movement;

/// @brief Field _movedHit, offset: 0x140, size: 0x1c, def value: None
 ::Oculus::Interaction::Surfaces::SurfaceHit  ____movedHit;

/// @brief Field _movementHitDelta, offset: 0x15c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____movementHitDelta;

/// [CompilerGenerated]
/// @brief Field <Origin>k__BackingField, offset: 0x178, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Origin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Rotation>k__BackingField, offset: 0x184, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____Rotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Forward>k__BackingField, offset: 0x194, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Forward_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <End>k__BackingField, offset: 0x1a0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____End_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CollisionInfo>k__BackingField, offset: 0x1b0, size: 0x10, def value: None
 ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>  ____CollisionInfo_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Ray>k__BackingField, offset: 0x1c0, size: 0x18, def value: None
 ::UnityEngine::Ray  ____Ray_k__BackingField;

/// @brief Size padding 0x1e8 - 0x1d8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____selector) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____rayOrigin) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____maxRayLength) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____equalDistanceThreshold) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____rayCandidateProperties) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____movement) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____movedHit) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____movementHitDelta) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____Origin_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____Rotation_k__BackingField) == 0x184, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____Forward_k__BackingField) == 0x194, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____End_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____CollisionInfo_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor, ____Ray_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RayInteractor) == 0x1e8, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RayInteractor/RayCandidateProperties
class CORDL_TYPE RayInteractor_RayCandidateProperties : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CandidatePosition)) ::UnityEngine::Vector3  CandidatePosition;

 __declspec(property(get=get_ClosestInteractable)) ::UnityW<::Oculus::Interaction::RayInteractable>  ClosestInteractable;

/// @brief Field <CandidatePosition>k__BackingField, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get__CandidatePosition_k__BackingField, put=__cordl_internal_set__CandidatePosition_k__BackingField)) ::UnityEngine::Vector3  _CandidatePosition_k__BackingField;

/// @brief Field <ClosestInteractable>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClosestInteractable_k__BackingField, put=__cordl_internal_set__ClosestInteractable_k__BackingField)) ::UnityW<::Oculus::Interaction::RayInteractable>  _ClosestInteractable_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::ICandidatePosition"
constexpr operator  ::Oculus::Interaction::ICandidatePosition*() noexcept;

static inline ::Oculus::Interaction::RayInteractor_RayCandidateProperties* New_ctor(::Oculus::Interaction::RayInteractable*  closestInteractable, ::UnityEngine::Vector3  candidatePosition) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__CandidatePosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__CandidatePosition_k__BackingField() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractable> const& __cordl_internal_get__ClosestInteractable_k__BackingField() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractable>& __cordl_internal_get__ClosestInteractable_k__BackingField() ;

constexpr void __cordl_internal_set__CandidatePosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ClosestInteractable_k__BackingField(::UnityW<::Oculus::Interaction::RayInteractable>  value) ;

/// @brief Method .ctor, addr 0xa45c60c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::RayInteractable*  closestInteractable, ::UnityEngine::Vector3  candidatePosition) ;

/// [CompilerGenerated]
/// @brief Method get_CandidatePosition, addr 0xa45d2e8, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_CandidatePosition() ;

/// [CompilerGenerated]
/// @brief Method get_ClosestInteractable, addr 0xa45d2e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::RayInteractable> get_ClosestInteractable() ;

/// @brief Convert to "::Oculus::Interaction::ICandidatePosition"
constexpr ::Oculus::Interaction::ICandidatePosition* i___Oculus__Interaction__ICandidatePosition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayInteractor_RayCandidateProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayInteractor_RayCandidateProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayInteractor_RayCandidateProperties(RayInteractor_RayCandidateProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayInteractor_RayCandidateProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayInteractor_RayCandidateProperties(RayInteractor_RayCandidateProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15863};

/// [CompilerGenerated]
/// @brief Field <ClosestInteractable>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractable>  ____ClosestInteractable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CandidatePosition>k__BackingField, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____CandidatePosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RayInteractor_RayCandidateProperties, ____ClosestInteractable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractor_RayCandidateProperties, ____CandidatePosition_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RayInteractor_RayCandidateProperties) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
