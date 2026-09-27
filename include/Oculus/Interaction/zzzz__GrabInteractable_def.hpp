#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrabInteractable)
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class CollisionInteractionRegistry_2;
}
namespace Oculus::Interaction {
class GrabInteractor;
}
namespace Oculus::Interaction {
class ICollidersRef;
}
namespace Oculus::Interaction {
class IRigidbodyRef;
}
namespace Oculus::Interaction {
class PhysicsGrabbable;
}
namespace UnityEngine {
class Collider;
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
namespace Oculus::Interaction {
class GrabInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabInteractable*, "Oculus.Interaction", "GrabInteractable");
// Dependencies Oculus.Interaction.PointerInteractable`2<TInteractor, TInteractable>, UnityEngine.Collider
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GrabInteractable
class CORDL_TYPE GrabInteractable : public ::Oculus::Interaction::PointerInteractable_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>> {
public:
// Declarations
 __declspec(property(get=get_Colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  Colliders;

 __declspec(property(get=get_ReleaseDistance, put=set_ReleaseDistance)) float_t  ReleaseDistance;

 __declspec(property(get=get_ResetGrabOnGrabsUpdated, put=set_ResetGrabOnGrabsUpdated)) bool  ResetGrabOnGrabsUpdated;

 __declspec(property(get=get_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

 __declspec(property(get=get_UseClosestPointAsGrabSource, put=set_UseClosestPointAsGrabSource)) bool  UseClosestPointAsGrabSource;

/// @brief Field _colliders, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _colliders;

/// @brief Field _grabRegistry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__grabRegistry, put=setStaticF__grabRegistry)) ::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>*  _grabRegistry;

/// @brief Field _grabSource, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabSource, put=__cordl_internal_set__grabSource)) ::UnityW<::UnityEngine::Transform>  _grabSource;

/// @brief Field _physicsGrabbable, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__physicsGrabbable, put=__cordl_internal_set__physicsGrabbable)) ::UnityW<::Oculus::Interaction::PhysicsGrabbable>  _physicsGrabbable;

/// @brief Field _releaseDistance, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__releaseDistance, put=__cordl_internal_set__releaseDistance)) float_t  _releaseDistance;

/// @brief Field _resetGrabOnGrabsUpdated, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetGrabOnGrabsUpdated, put=__cordl_internal_set__resetGrabOnGrabsUpdated)) bool  _resetGrabOnGrabsUpdated;

/// @brief Field _rigidbody, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _useClosestPointAsGrabSource, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__useClosestPointAsGrabSource, put=__cordl_internal_set__useClosestPointAsGrabSource)) bool  _useClosestPointAsGrabSource;

/// @brief Convert operator to "::Oculus::Interaction::ICollidersRef"
constexpr operator  ::Oculus::Interaction::ICollidersRef*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr operator  ::Oculus::Interaction::IRigidbodyRef*() noexcept;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method ApplyVelocities, addr 0xa4510ec, size 0xd8, virtual false, abstract: false, final false
inline void ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method Awake, addr 0xa450e38, size 0x48, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetGrabSourceForTarget, addr 0xa450fec, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetGrabSourceForTarget(::UnityEngine::Pose  target) ;

/// @brief Method InjectAllGrabInteractable, addr 0xa4511c4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllGrabInteractable(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectOptionalGrabSource, addr 0xa4511d4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalGrabSource(::UnityEngine::Transform*  grabSource) ;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method InjectOptionalPhysicsGrabbable, addr 0xa4511e4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPhysicsGrabbable(::Oculus::Interaction::PhysicsGrabbable*  physicsGrabbable) ;

/// @brief Method InjectOptionalReleaseDistance, addr 0xa4511dc, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalReleaseDistance(float_t  releaseDistance) ;

/// @brief Method InjectRigidbody, addr 0xa4511cc, size 0x8, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

static inline ::Oculus::Interaction::GrabInteractable* New_ctor() ;

/// @brief Method Start, addr 0xa450e80, size 0x16c, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__22_0, addr 0xa45123c, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__22_0() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabSource() ;

constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable> const& __cordl_internal_get__physicsGrabbable() const;

constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable>& __cordl_internal_get__physicsGrabbable() ;

constexpr float_t const& __cordl_internal_get__releaseDistance() const;

constexpr float_t& __cordl_internal_get__releaseDistance() ;

constexpr bool const& __cordl_internal_get__resetGrabOnGrabsUpdated() const;

constexpr bool& __cordl_internal_get__resetGrabOnGrabsUpdated() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr bool const& __cordl_internal_get__useClosestPointAsGrabSource() const;

constexpr bool& __cordl_internal_get__useClosestPointAsGrabSource() ;

constexpr void __cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__grabSource(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__physicsGrabbable(::UnityW<::Oculus::Interaction::PhysicsGrabbable>  value) ;

constexpr void __cordl_internal_set__releaseDistance(float_t  value) ;

constexpr void __cordl_internal_set__resetGrabOnGrabsUpdated(bool  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__useClosestPointAsGrabSource(bool  value) ;

/// @brief Method .ctor, addr 0xa4511ec, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>* getStaticF__grabRegistry() ;

/// @brief Method get_Colliders, addr 0xa450df8, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> get_Colliders() ;

/// @brief Method get_ReleaseDistance, addr 0xa450e18, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReleaseDistance() ;

/// @brief Method get_ResetGrabOnGrabsUpdated, addr 0xa450e28, size 0x8, virtual false, abstract: false, final false
inline bool get_ResetGrabOnGrabsUpdated() ;

/// @brief Method get_Rigidbody, addr 0xa450e00, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// @brief Method get_UseClosestPointAsGrabSource, addr 0xa450e08, size 0x8, virtual false, abstract: false, final false
inline bool get_UseClosestPointAsGrabSource() ;

/// @brief Convert to "::Oculus::Interaction::ICollidersRef"
constexpr ::Oculus::Interaction::ICollidersRef* i___Oculus__Interaction__ICollidersRef() noexcept;

/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* i___Oculus__Interaction__IRigidbodyRef() noexcept;

static inline void setStaticF__grabRegistry(::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>*  value) ;

/// @brief Method set_ReleaseDistance, addr 0xa450e20, size 0x8, virtual false, abstract: false, final false
inline void set_ReleaseDistance(float_t  value) ;

/// @brief Method set_ResetGrabOnGrabsUpdated, addr 0xa450e30, size 0x8, virtual false, abstract: false, final false
inline void set_ResetGrabOnGrabsUpdated(bool  value) ;

/// @brief Method set_UseClosestPointAsGrabSource, addr 0xa450e10, size 0x8, virtual false, abstract: false, final false
inline void set_UseClosestPointAsGrabSource(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabInteractable(GrabInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabInteractable(GrabInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15839};

/// @brief Field _colliders, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____colliders;

/// [Tooltip("The Rigidbody of the object.")]
/// [SerializeField]
/// @brief Field _rigidbody, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [Tooltip("An optional origin point for the grab.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _grabSource, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabSource;

/// [Tooltip("If true, use the closest point to the interactor as the grab source.")]
/// [SerializeField]
/// @brief Field _useClosestPointAsGrabSource, offset: 0xe0, size: 0x1, def value: None
 bool  ____useClosestPointAsGrabSource;

/// [Tooltip(" ")]
/// [SerializeField]
/// @brief Field _releaseDistance, offset: 0xe4, size: 0x4, def value: None
 float_t  ____releaseDistance;

/// [Tooltip("Forces a release on all other grabbing interactors when grabbed by a new interactor.")]
/// [SerializeField]
/// @brief Field _resetGrabOnGrabsUpdated, offset: 0xe8, size: 0x1, def value: None
 bool  ____resetGrabOnGrabsUpdated;

/// [Tooltip("The PhysicsGrabbable used when you grab the interactable.")]
/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("Use Grabbable and/or RigidbodyKinematicLocker instead")]
/// @brief Field _physicsGrabbable, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PhysicsGrabbable>  ____physicsGrabbable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabInteractable, ____colliders) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractable, ____rigidbody) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractable, ____grabSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractable, ____useClosestPointAsGrabSource) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractable, ____releaseDistance) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractable, ____resetGrabOnGrabsUpdated) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabInteractable, ____physicsGrabbable) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabInteractable) == 0xf8, "Size mismatch!");

} // namespace end def Oculus::Interaction
