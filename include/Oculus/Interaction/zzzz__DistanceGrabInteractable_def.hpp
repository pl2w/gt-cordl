#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceGrabInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DistanceGrabInteractable)
namespace Oculus::Interaction {
class DistanceGrabInteractor;
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
namespace Oculus::Interaction {
class DistanceGrabInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceGrabInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceGrabInteractable*, "Oculus.Interaction", "DistanceGrabInteractable");
// Dependencies Oculus.Interaction.PointerInteractable`2<TInteractor, TInteractable>, UnityEngine.Collider
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceGrabInteractable
class CORDL_TYPE DistanceGrabInteractable : public ::Oculus::Interaction::PointerInteractable_2<::UnityW<::Oculus::Interaction::DistanceGrabInteractor>,::UnityW<::Oculus::Interaction::DistanceGrabInteractable>> {
public:
// Declarations
 __declspec(property(get=get_Colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  Colliders;

 __declspec(property(get=get_MovementProvider, put=set_MovementProvider)) ::Oculus::Interaction::IMovementProvider*  MovementProvider;

 __declspec(property(get=get_RelativeTo)) ::UnityW<::UnityEngine::Transform>  RelativeTo;

 __declspec(property(get=get_ResetGrabOnGrabsUpdated, put=set_ResetGrabOnGrabsUpdated)) bool  ResetGrabOnGrabsUpdated;

 __declspec(property(get=get_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

/// @brief Field <MovementProvider>k__BackingField, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MovementProvider_k__BackingField, put=__cordl_internal_set__MovementProvider_k__BackingField)) ::Oculus::Interaction::IMovementProvider*  _MovementProvider_k__BackingField;

/// @brief Field _colliders, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _colliders;

/// @brief Field _grabSource, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabSource, put=__cordl_internal_set__grabSource)) ::UnityW<::UnityEngine::Transform>  _grabSource;

/// @brief Field _movementProvider, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementProvider, put=__cordl_internal_set__movementProvider)) ::UnityW<::UnityEngine::Object>  _movementProvider;

/// @brief Field _physicsGrabbable, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__physicsGrabbable, put=__cordl_internal_set__physicsGrabbable)) ::UnityW<::Oculus::Interaction::PhysicsGrabbable>  _physicsGrabbable;

/// @brief Field _resetGrabOnGrabsUpdated, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetGrabOnGrabsUpdated, put=__cordl_internal_set__resetGrabOnGrabsUpdated)) bool  _resetGrabOnGrabsUpdated;

/// @brief Field _rigidbody, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Convert operator to "::Oculus::Interaction::ICollidersRef"
constexpr operator  ::Oculus::Interaction::ICollidersRef*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IRelativeToRef"
constexpr operator  ::Oculus::Interaction::IRelativeToRef*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr operator  ::Oculus::Interaction::IRigidbodyRef*() noexcept;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method ApplyVelocities, addr 0xa44fc48, size 0xd8, virtual false, abstract: false, final false
inline void ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method Awake, addr 0xa44f798, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GenerateMovement, addr 0xa44fa5c, size 0x1ec, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovement* GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method InjectAllGrabInteractable, addr 0xa44fd20, size 0x8, virtual false, abstract: false, final false
inline void InjectAllGrabInteractable(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectOptionalGrabSource, addr 0xa44fd30, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalGrabSource(::UnityEngine::Transform*  grabSource) ;

/// @brief Method InjectOptionalMovementProvider, addr 0xa44f98c, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider) ;

/// [Obsolete("Use Grabbable instead")]
/// @brief Method InjectOptionalPhysicsGrabbable, addr 0xa44fd38, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPhysicsGrabbable(::Oculus::Interaction::PhysicsGrabbable*  physicsGrabbable) ;

/// @brief Method InjectRigidbody, addr 0xa44fd28, size 0x8, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

static inline ::Oculus::Interaction::DistanceGrabInteractable* New_ctor() ;

/// @brief Method Reset, addr 0xa44f740, size 0x58, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa44f818, size 0x174, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__21_0, addr 0xa44fd90, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__21_0() ;

constexpr ::Oculus::Interaction::IMovementProvider* const& __cordl_internal_get__MovementProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::IMovementProvider*& __cordl_internal_get__MovementProvider_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabSource() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__movementProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__movementProvider() ;

constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable> const& __cordl_internal_get__physicsGrabbable() const;

constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable>& __cordl_internal_get__physicsGrabbable() ;

constexpr bool const& __cordl_internal_get__resetGrabOnGrabsUpdated() const;

constexpr bool& __cordl_internal_get__resetGrabOnGrabsUpdated() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr void __cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value) ;

constexpr void __cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__grabSource(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__physicsGrabbable(::UnityW<::Oculus::Interaction::PhysicsGrabbable>  value) ;

constexpr void __cordl_internal_set__resetGrabOnGrabsUpdated(bool  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0xa44fd40, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Colliders, addr 0xa44f708, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> get_Colliders() ;

/// [CompilerGenerated]
/// @brief Method get_MovementProvider, addr 0xa44f718, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovementProvider* get_MovementProvider() ;

/// @brief Method get_RelativeTo, addr 0xa44f738, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_RelativeTo() ;

/// @brief Method get_ResetGrabOnGrabsUpdated, addr 0xa44f728, size 0x8, virtual false, abstract: false, final false
inline bool get_ResetGrabOnGrabsUpdated() ;

/// @brief Method get_Rigidbody, addr 0xa44f710, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// @brief Convert to "::Oculus::Interaction::ICollidersRef"
constexpr ::Oculus::Interaction::ICollidersRef* i___Oculus__Interaction__ICollidersRef() noexcept;

/// @brief Convert to "::Oculus::Interaction::IRelativeToRef"
constexpr ::Oculus::Interaction::IRelativeToRef* i___Oculus__Interaction__IRelativeToRef() noexcept;

/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* i___Oculus__Interaction__IRigidbodyRef() noexcept;

/// [CompilerGenerated]
/// @brief Method set_MovementProvider, addr 0xa44f720, size 0x8, virtual false, abstract: false, final false
inline void set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value) ;

/// @brief Method set_ResetGrabOnGrabsUpdated, addr 0xa44f730, size 0x8, virtual false, abstract: false, final false
inline void set_ResetGrabOnGrabsUpdated(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceGrabInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceGrabInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceGrabInteractable(DistanceGrabInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceGrabInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceGrabInteractable(DistanceGrabInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15836};

/// @brief Field _colliders, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____colliders;

/// [Tooltip("The RigidBody of the interactable.")]
/// [SerializeField]
/// @brief Field _rigidbody, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [Tooltip("An optional origin point for the grab.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _grabSource, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabSource;

/// [Tooltip("Forces a release on all other grabbing interactors when grabbed by a new interactor.")]
/// [SerializeField]
/// @brief Field _resetGrabOnGrabsUpdated, offset: 0xe0, size: 0x1, def value: None
 bool  ____resetGrabOnGrabsUpdated;

/// [Tooltip("PhysicsGrabbable used when you grab the interactable.")]
/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("Use Grabbable and/or RigidbodyKinematicLocker instead")]
/// @brief Field _physicsGrabbable, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PhysicsGrabbable>  ____physicsGrabbable;

/// [Tooltip("The IMovementProvider specifies how the interactable will align with the grabber when selected. If no IMovementProvider is set, the MoveTowardsTargetProvider is created and used as the provider.")]
/// [Header("Snap")]
/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.IMovementProvider), new[] {  })]
/// @brief Field _movementProvider, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____movementProvider;

/// [CompilerGenerated]
/// @brief Field <MovementProvider>k__BackingField, offset: 0xf8, size: 0x8, def value: None
 ::Oculus::Interaction::IMovementProvider*  ____MovementProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractable, ____colliders) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractable, ____rigidbody) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractable, ____grabSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractable, ____resetGrabOnGrabsUpdated) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractable, ____physicsGrabbable) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractable, ____movementProvider) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceGrabInteractable, ____MovementProvider_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceGrabInteractable) == 0x100, "Size mismatch!");

} // namespace end def Oculus::Interaction
