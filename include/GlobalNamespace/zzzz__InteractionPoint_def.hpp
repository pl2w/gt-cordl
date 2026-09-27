#pragma once
// IWYU pragma private; include "GlobalNamespace/InteractionPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractionPoint)
namespace GlobalNamespace {
class EquipmentInteractor;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IHoldableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class InteractionPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InteractionPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractionPoint*, "", "InteractionPoint");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: InteractionPoint
class CORDL_TYPE InteractionPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_Holdable)) ::GlobalNamespace::IHoldableObject*  Holdable;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field <ignoreLeftHand>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreLeftHand_k__BackingField, put=__cordl_internal_set__ignoreLeftHand_k__BackingField)) bool  _ignoreLeftHand_k__BackingField;

/// @brief Field <ignoreRightHand>k__BackingField, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreRightHand_k__BackingField, put=__cordl_internal_set__ignoreRightHand_k__BackingField)) bool  _ignoreRightHand_k__BackingField;

/// @brief Field forLocalPlayer, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_forLocalPlayer, put=__cordl_internal_set_forLocalPlayer)) bool  forLocalPlayer;

 __declspec(property(get=get_ignoreLeftHand, put=set_ignoreLeftHand)) bool  ignoreLeftHand;

 __declspec(property(get=get_ignoreRightHand, put=set_ignoreRightHand)) bool  ignoreRightHand;

/// @brief Field interactionRadius, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_interactionRadius, put=__cordl_internal_set_interactionRadius)) float_t  interactionRadius;

/// @brief Field interactor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactor, put=__cordl_internal_set_interactor)) ::UnityW<::GlobalNamespace::EquipmentInteractor>  interactor;

/// @brief Field isNonSpawnedObject, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_isNonSpawnedObject, put=__cordl_internal_set_isNonSpawnedObject)) bool  isNonSpawnedObject;

/// @brief Field myCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::UnityEngine::Collider>  myCollider;

/// @brief Field parentHoldable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHoldable, put=__cordl_internal_set_parentHoldable)) ::GlobalNamespace::IHoldableObject*  parentHoldable;

/// @brief Field parentHoldableObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHoldableObject, put=__cordl_internal_set_parentHoldableObject)) ::UnityW<::UnityEngine::GameObject>  parentHoldableObject;

/// @brief Field wasInLeft, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInLeft, put=__cordl_internal_set_wasInLeft)) bool  wasInLeft;

/// @brief Field wasInRight, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInRight, put=__cordl_internal_set_wasInRight)) bool  wasInRight;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Awake, addr 0x5735954, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildValidationCheck, addr 0x5735fac, size 0x8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5735950, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method LateUpdate, addr 0x5735a78, size 0x380, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::InteractionPoint* New_ctor() ;

/// @brief Method OnDisable, addr 0x57359e8, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5735964, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x5735568, size 0x3e8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OverlapCheck, addr 0x5735df8, size 0x1b4, virtual false, abstract: false, final false
inline bool OverlapCheck(::UnityEngine::Vector3  point) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ignoreLeftHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__ignoreLeftHand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ignoreRightHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__ignoreRightHand_k__BackingField() ;

constexpr bool const& __cordl_internal_get_forLocalPlayer() const;

constexpr bool& __cordl_internal_get_forLocalPlayer() ;

constexpr float_t const& __cordl_internal_get_interactionRadius() const;

constexpr float_t& __cordl_internal_get_interactionRadius() ;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor> const& __cordl_internal_get_interactor() const;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor>& __cordl_internal_get_interactor() ;

constexpr bool const& __cordl_internal_get_isNonSpawnedObject() const;

constexpr bool& __cordl_internal_get_isNonSpawnedObject() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_myCollider() ;

constexpr ::GlobalNamespace::IHoldableObject* const& __cordl_internal_get_parentHoldable() const;

constexpr ::GlobalNamespace::IHoldableObject*& __cordl_internal_get_parentHoldable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_parentHoldableObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_parentHoldableObject() ;

constexpr bool const& __cordl_internal_get_wasInLeft() const;

constexpr bool& __cordl_internal_get_wasInLeft() ;

constexpr bool const& __cordl_internal_get_wasInRight() const;

constexpr bool& __cordl_internal_get_wasInRight() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ignoreLeftHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ignoreRightHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_forLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_interactionRadius(float_t  value) ;

constexpr void __cordl_internal_set_interactor(::UnityW<::GlobalNamespace::EquipmentInteractor>  value) ;

constexpr void __cordl_internal_set_isNonSpawnedObject(bool  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_parentHoldable(::GlobalNamespace::IHoldableObject*  value) ;

constexpr void __cordl_internal_set_parentHoldableObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_wasInLeft(bool  value) ;

constexpr void __cordl_internal_set_wasInRight(bool  value) ;

/// @brief Method .ctor, addr 0x5735fb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5735558, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// @brief Method get_Holdable, addr 0x5735540, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::IHoldableObject* get_Holdable() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5735548, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method get_ignoreLeftHand, addr 0x5735520, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreLeftHand() ;

/// [CompilerGenerated]
/// @brief Method get_ignoreRightHand, addr 0x5735530, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreRightHand() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5735560, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5735550, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ignoreLeftHand, addr 0x5735528, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreLeftHand(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ignoreRightHand, addr 0x5735538, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreRightHand(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionPoint(InteractionPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionPoint(InteractionPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1205};

/// [SerializeField]
/// [FormerlySerializedAs("parentTransferrableObject")]
/// @brief Field parentHoldableObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___parentHoldableObject;

/// @brief Field parentHoldable, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::IHoldableObject*  ___parentHoldable;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <ignoreLeftHand>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____ignoreLeftHand_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <ignoreRightHand>k__BackingField, offset: 0x31, size: 0x1, def value: None
 bool  ____ignoreRightHand_k__BackingField;

/// [SerializeField]
/// @brief Field isNonSpawnedObject, offset: 0x32, size: 0x1, def value: None
 bool  ___isNonSpawnedObject;

/// [SerializeField]
/// @brief Field interactionRadius, offset: 0x34, size: 0x4, def value: None
 float_t  ___interactionRadius;

/// @brief Field myCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___myCollider;

/// @brief Field interactor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EquipmentInteractor>  ___interactor;

/// @brief Field wasInLeft, offset: 0x48, size: 0x1, def value: None
 bool  ___wasInLeft;

/// @brief Field wasInRight, offset: 0x49, size: 0x1, def value: None
 bool  ___wasInRight;

/// @brief Field forLocalPlayer, offset: 0x4a, size: 0x1, def value: None
 bool  ___forLocalPlayer;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x4b, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___parentHoldableObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___parentHoldable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ____ignoreLeftHand_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ____ignoreRightHand_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___isNonSpawnedObject) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___interactionRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___myCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___interactor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___wasInLeft) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___wasInRight) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ___forLocalPlayer) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ____IsSpawned_k__BackingField) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractionPoint, ____CosmeticSelectedSide_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractionPoint) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
