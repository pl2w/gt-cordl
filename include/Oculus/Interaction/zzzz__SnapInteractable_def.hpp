#pragma once
// IWYU pragma private; include "Oculus/Interaction/SnapInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
CORDL_MODULE_EXPORT(SnapInteractable)
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class CollisionInteractionRegistry_2;
}
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IRigidbodyRef;
}
namespace Oculus::Interaction {
class ISnapPoseDelegate;
}
namespace Oculus::Interaction {
class SnapInteractor;
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
// Forward declare root types
namespace Oculus::Interaction {
class SnapInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SnapInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SnapInteractable*, "Oculus.Interaction", "SnapInteractable");
// Dependencies Oculus.Interaction.Interactable`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SnapInteractable
class CORDL_TYPE SnapInteractable : public ::Oculus::Interaction::Interactable_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>> {
public:
// Declarations
 __declspec(property(get=get_MovementProvider, put=set_MovementProvider)) ::Oculus::Interaction::IMovementProvider*  MovementProvider;

 __declspec(property(get=get_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

 __declspec(property(get=get_SnapPoseDelegate, put=set_SnapPoseDelegate)) ::Oculus::Interaction::ISnapPoseDelegate*  SnapPoseDelegate;

/// @brief Field <MovementProvider>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MovementProvider_k__BackingField, put=__cordl_internal_set__MovementProvider_k__BackingField)) ::Oculus::Interaction::IMovementProvider*  _MovementProvider_k__BackingField;

/// @brief Field <SnapPoseDelegate>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SnapPoseDelegate_k__BackingField, put=__cordl_internal_set__SnapPoseDelegate_k__BackingField)) ::Oculus::Interaction::ISnapPoseDelegate*  _SnapPoseDelegate_k__BackingField;

/// @brief Field _movementProvider, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementProvider, put=__cordl_internal_set__movementProvider)) ::UnityW<::UnityEngine::Object>  _movementProvider;

/// @brief Field _registry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__registry, put=setStaticF__registry)) ::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>*  _registry;

/// @brief Field _rigidbody, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _snapPoseDelegate, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapPoseDelegate, put=__cordl_internal_set__snapPoseDelegate)) ::UnityW<::UnityEngine::Object>  _snapPoseDelegate;

/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr operator  ::Oculus::Interaction::IRigidbodyRef*() noexcept;

/// @brief Method Awake, addr 0xa461a9c, size 0xb0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GenerateMovement, addr 0xa4624dc, size 0x208, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovement* GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, ::Oculus::Interaction::SnapInteractor*  interactor) ;

/// @brief Method InjectAllSnapInteractable, addr 0xa4626e4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllSnapInteractable(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectOptionalMovementProvider, addr 0xa4626f4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider) ;

/// @brief Method InjectOptionalSnapPoseDelegate, addr 0xa4627c4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalSnapPoseDelegate(::Oculus::Interaction::ISnapPoseDelegate*  snapPoseDelegate) ;

/// @brief Method InjectRigidbody, addr 0xa4626ec, size 0x8, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InteractorAdded, addr 0xa461d64, size 0x148, virtual true, abstract: false, final false
inline void InteractorAdded(::Oculus::Interaction::SnapInteractor*  interactor) ;

/// @brief Method InteractorHoverUpdated, addr 0xa462254, size 0x120, virtual false, abstract: false, final false
inline void InteractorHoverUpdated(::Oculus::Interaction::SnapInteractor*  interactor) ;

/// @brief Method InteractorRemoved, addr 0xa461ee8, size 0x110, virtual true, abstract: false, final false
inline void InteractorRemoved(::Oculus::Interaction::SnapInteractor*  interactor) ;

static inline ::Oculus::Interaction::SnapInteractable* New_ctor() ;

/// @brief Method PoseForInteractor, addr 0xa462374, size 0x168, virtual false, abstract: false, final false
inline bool PoseForInteractor(::Oculus::Interaction::SnapInteractor*  interactor, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method Reset, addr 0xa461a44, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SelectingInteractorAdded, addr 0xa461ff8, size 0x14c, virtual true, abstract: false, final false
inline void SelectingInteractorAdded(::Oculus::Interaction::SnapInteractor*  interactor) ;

/// @brief Method SelectingInteractorRemoved, addr 0xa462144, size 0x110, virtual true, abstract: false, final false
inline void SelectingInteractorRemoved(::Oculus::Interaction::SnapInteractor*  interactor) ;

/// @brief Method Start, addr 0xa461b4c, size 0x218, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__16_0, addr 0xa462900, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__16_0() ;

constexpr ::Oculus::Interaction::IMovementProvider* const& __cordl_internal_get__MovementProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::IMovementProvider*& __cordl_internal_get__MovementProvider_k__BackingField() ;

constexpr ::Oculus::Interaction::ISnapPoseDelegate* const& __cordl_internal_get__SnapPoseDelegate_k__BackingField() const;

constexpr ::Oculus::Interaction::ISnapPoseDelegate*& __cordl_internal_get__SnapPoseDelegate_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__movementProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__movementProvider() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__snapPoseDelegate() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__snapPoseDelegate() ;

constexpr void __cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value) ;

constexpr void __cordl_internal_set__SnapPoseDelegate_k__BackingField(::Oculus::Interaction::ISnapPoseDelegate*  value) ;

constexpr void __cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__snapPoseDelegate(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa462894, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>* getStaticF__registry() ;

/// [CompilerGenerated]
/// @brief Method get_MovementProvider, addr 0xa461a34, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IMovementProvider* get_MovementProvider() ;

/// @brief Method get_Rigidbody, addr 0xa461a1c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// [CompilerGenerated]
/// @brief Method get_SnapPoseDelegate, addr 0xa461a24, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::ISnapPoseDelegate* get_SnapPoseDelegate() ;

/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* i___Oculus__Interaction__IRigidbodyRef() noexcept;

static inline void setStaticF__registry(::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MovementProvider, addr 0xa461a3c, size 0x8, virtual false, abstract: false, final false
inline void set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SnapPoseDelegate, addr 0xa461a2c, size 0x8, virtual false, abstract: false, final false
inline void set_SnapPoseDelegate(::Oculus::Interaction::ISnapPoseDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapInteractable(SnapInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapInteractable(SnapInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15880};

/// [SerializeField]
/// @brief Field _rigidbody, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [FormerlySerializedAs("_snapPosesProvider")]
/// [FormerlySerializedAs("_posesProvider")]
/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.ISnapPoseDelegate), new[] {  })]
/// @brief Field _snapPoseDelegate, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____snapPoseDelegate;

/// [CompilerGenerated]
/// @brief Field <SnapPoseDelegate>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::Oculus::Interaction::ISnapPoseDelegate*  ____SnapPoseDelegate_k__BackingField;

/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.IMovementProvider), new[] {  })]
/// @brief Field _movementProvider, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____movementProvider;

/// [CompilerGenerated]
/// @brief Field <MovementProvider>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::Oculus::Interaction::IMovementProvider*  ____MovementProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SnapInteractable, ____rigidbody) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractable, ____snapPoseDelegate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractable, ____SnapPoseDelegate_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractable, ____movementProvider) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractable, ____MovementProvider_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SnapInteractable) == 0xd8, "Size mismatch!");

} // namespace end def Oculus::Interaction
