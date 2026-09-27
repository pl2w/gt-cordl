#pragma once
// IWYU pragma private; include "GlobalNamespace/GameTriggerInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameTriggerInteractable)
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameTriggerInteractable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameTriggerInteractable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameTriggerInteractable*, "", "GameTriggerInteractable");
// [RequireComponent(typeof(GameEntity))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameTriggerInteractable
class CORDL_TYPE GameTriggerInteractable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field LocalInteractableTriggers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LocalInteractableTriggers, put=setStaticF_LocalInteractableTriggers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>*  LocalInteractableTriggers;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field handIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_handIndex, put=__cordl_internal_set_handIndex)) int32_t  handIndex;

/// @brief Field interactableCenter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactableCenter, put=__cordl_internal_set_interactableCenter)) ::UnityW<::UnityEngine::Transform>  interactableCenter;

/// @brief Field interactableOnOthers, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get_interactableOnOthers, put=__cordl_internal_set_interactableOnOthers)) bool  interactableOnOthers;

/// @brief Field interactablePermanently, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_interactablePermanently, put=__cordl_internal_set_interactablePermanently)) bool  interactablePermanently;

/// @brief Field interactableRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_interactableRadius, put=__cordl_internal_set_interactableRadius)) float_t  interactableRadius;

/// @brief Field interactableWhileGrabbed, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_interactableWhileGrabbed, put=__cordl_internal_set_interactableWhileGrabbed)) bool  interactableWhileGrabbed;

/// @brief Field interactableWhileSnapped, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_interactableWhileSnapped, put=__cordl_internal_set_interactableWhileSnapped)) bool  interactableWhileSnapped;

/// @brief Field triggerInteractionActive, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerInteractionActive, put=__cordl_internal_set_triggerInteractionActive)) bool  triggerInteractionActive;

/// @brief Method BeginTriggerInteraction, addr 0x583f3f8, size 0x10, virtual false, abstract: false, final false
inline void BeginTriggerInteraction(int32_t  _handIndex) ;

/// @brief Method EndTriggerInteraction, addr 0x5840488, size 0x10, virtual false, abstract: false, final false
inline void EndTriggerInteraction() ;

static inline ::GlobalNamespace::GameTriggerInteractable* New_ctor() ;

/// @brief Method OnEnable, addr 0x5841f08, size 0x2ec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PointWithinInteractableArea, addr 0x583f334, size 0xc4, virtual false, abstract: false, final false
inline bool PointWithinInteractableArea(::UnityEngine::Vector3  point) ;

/// @brief Method StartHolding, addr 0x58421f4, size 0xa4, virtual false, abstract: false, final false
inline void StartHolding() ;

/// @brief Method StopHolding, addr 0x5842298, size 0xa4, virtual false, abstract: false, final false
inline void StopHolding() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr int32_t const& __cordl_internal_get_handIndex() const;

constexpr int32_t& __cordl_internal_get_handIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_interactableCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_interactableCenter() ;

constexpr bool const& __cordl_internal_get_interactableOnOthers() const;

constexpr bool& __cordl_internal_get_interactableOnOthers() ;

constexpr bool const& __cordl_internal_get_interactablePermanently() const;

constexpr bool& __cordl_internal_get_interactablePermanently() ;

constexpr float_t const& __cordl_internal_get_interactableRadius() const;

constexpr float_t& __cordl_internal_get_interactableRadius() ;

constexpr bool const& __cordl_internal_get_interactableWhileGrabbed() const;

constexpr bool& __cordl_internal_get_interactableWhileGrabbed() ;

constexpr bool const& __cordl_internal_get_interactableWhileSnapped() const;

constexpr bool& __cordl_internal_get_interactableWhileSnapped() ;

constexpr bool const& __cordl_internal_get_triggerInteractionActive() const;

constexpr bool& __cordl_internal_get_triggerInteractionActive() ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_handIndex(int32_t  value) ;

constexpr void __cordl_internal_set_interactableCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_interactableOnOthers(bool  value) ;

constexpr void __cordl_internal_set_interactablePermanently(bool  value) ;

constexpr void __cordl_internal_set_interactableRadius(float_t  value) ;

constexpr void __cordl_internal_set_interactableWhileGrabbed(bool  value) ;

constexpr void __cordl_internal_set_interactableWhileSnapped(bool  value) ;

constexpr void __cordl_internal_set_triggerInteractionActive(bool  value) ;

/// @brief Method .ctor, addr 0x584233c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>* getStaticF_LocalInteractableTriggers() ;

static inline void setStaticF_LocalInteractableTriggers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameTriggerInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameTriggerInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameTriggerInteractable(GameTriggerInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameTriggerInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameTriggerInteractable(GameTriggerInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1796};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field interactableCenter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___interactableCenter;

/// @brief Field interactableRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___interactableRadius;

/// @brief Field interactableWhileGrabbed, offset: 0x34, size: 0x1, def value: None
 bool  ___interactableWhileGrabbed;

/// @brief Field interactableWhileSnapped, offset: 0x35, size: 0x1, def value: None
 bool  ___interactableWhileSnapped;

/// @brief Field interactablePermanently, offset: 0x36, size: 0x1, def value: None
 bool  ___interactablePermanently;

/// @brief Field interactableOnOthers, offset: 0x37, size: 0x1, def value: None
 bool  ___interactableOnOthers;

/// @brief Field triggerInteractionActive, offset: 0x38, size: 0x1, def value: None
 bool  ___triggerInteractionActive;

/// @brief Field handIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___handIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___interactableCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___interactableRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___interactableWhileGrabbed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___interactableWhileSnapped) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___interactablePermanently) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___interactableOnOthers) == 0x37, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___triggerInteractionActive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTriggerInteractable, ___handIndex) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameTriggerInteractable) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
