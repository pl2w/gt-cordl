#pragma once
// IWYU pragma private; include "GorillaTagScripts/Flower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__Flower_FlowerState_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Flower)
namespace GlobalNamespace {
class BeePerchPoint;
}
namespace GlobalNamespace {
struct Flower_FlowerState;
}
namespace GorillaTagScripts {
class GorillaTimer;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GorillaTagScripts {
class Flower;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Flower*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Flower*, "GorillaTagScripts", "Flower");
// Dependencies GorillaTagScripts.Flower::FlowerState, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.Flower
class CORDL_TYPE Flower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FlowerState = ::GlobalNamespace::Flower_FlowerState;

 __declspec(property(get=get_IsWatered, put=set_IsWatered)) bool  IsWatered;

/// @brief Field <IsWatered>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsWatered_k__BackingField, put=__cordl_internal_set__IsWatered_k__BackingField)) bool  _IsWatered_k__BackingField;

/// @brief Field anim, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animator>  anim;

/// @brief Field currentState, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::Flower_FlowerState  currentState;

/// @brief Field healthy_to_middle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_healthy_to_middle, put=setStaticF_healthy_to_middle)) int32_t  healthy_to_middle;

/// @brief Field id, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field lastState, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::Flower_FlowerState  lastState;

/// @brief Field meshRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  meshRenderer;

/// @brief Field meshStates, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshStates, put=__cordl_internal_set_meshStates)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  meshStates;

/// @brief Field meshStatesGameObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshStatesGameObject, put=__cordl_internal_set_meshStatesGameObject)) ::UnityW<::UnityEngine::GameObject>  meshStatesGameObject;

/// @brief Field middle_to_healthy, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_middle_to_healthy, put=setStaticF_middle_to_healthy)) int32_t  middle_to_healthy;

/// @brief Field middle_to_wilted, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_middle_to_wilted, put=setStaticF_middle_to_wilted)) int32_t  middle_to_wilted;

/// @brief Field perchPoint, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_perchPoint, put=__cordl_internal_set_perchPoint)) ::UnityW<::GlobalNamespace::BeePerchPoint>  perchPoint;

/// @brief Field shouldUpdateVisuals, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldUpdateVisuals, put=__cordl_internal_set_shouldUpdateVisuals)) bool  shouldUpdateVisuals;

/// @brief Field sparkleFx, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sparkleFx, put=__cordl_internal_set_sparkleFx)) ::UnityW<::UnityEngine::ParticleSystem>  sparkleFx;

/// @brief Field timer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::UnityW<::GorillaTagScripts::GorillaTimer>  timer;

/// @brief Field wateredFx, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_wateredFx, put=__cordl_internal_set_wateredFx)) ::UnityW<::UnityEngine::ParticleSystem>  wateredFx;

/// @brief Field wilted_to_middle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_wilted_to_middle, put=setStaticF_wilted_to_middle)) int32_t  wilted_to_middle;

/// @brief Method AnimCatch, addr 0x5bb9c34, size 0x74, virtual false, abstract: false, final false
inline void AnimCatch() ;

/// @brief Method Awake, addr 0x5bb942c, size 0x1e8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeState, addr 0x5bb9840, size 0x10, virtual false, abstract: false, final false
inline void ChangeState(::GlobalNamespace::Flower_FlowerState  state) ;

/// @brief Method GetCurrentState, addr 0x5bb9b58, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Flower_FlowerState GetCurrentState() ;

/// @brief Method HandleOnFlowerTimerEnded, addr 0x5bb9a90, size 0xc8, virtual false, abstract: false, final false
inline void HandleOnFlowerTimerEnded(::GorillaTagScripts::GorillaTimer*  _timer) ;

/// @brief Method LocalUpdateFlowers, addr 0x5bb9850, size 0x240, virtual false, abstract: false, final false
inline void LocalUpdateFlowers(::GlobalNamespace::Flower_FlowerState  state, bool  isWatered) ;

static inline ::GorillaTagScripts::Flower* New_ctor() ;

/// @brief Method OnAnimationIsDone, addr 0x5bb9b60, size 0xb0, virtual false, abstract: false, final false
inline void OnAnimationIsDone(int32_t  state) ;

/// @brief Method OnDestroy, addr 0x5bb9614, size 0xa4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method UpdateFlowerState, addr 0x5bb9728, size 0x118, virtual false, abstract: false, final false
inline void UpdateFlowerState(::GlobalNamespace::Flower_FlowerState  newState, bool  isWatered, bool  updateVisual) ;

/// @brief Method UpdateVisuals, addr 0x5bb9c10, size 0x24, virtual false, abstract: false, final false
inline void UpdateVisuals(bool  enable) ;

/// @brief Method WaterFlower, addr 0x5bb96b8, size 0x70, virtual false, abstract: false, final false
inline void WaterFlower(bool  isWatered) ;

constexpr bool const& __cordl_internal_get__IsWatered_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsWatered_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_anim() ;

constexpr ::GlobalNamespace::Flower_FlowerState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::Flower_FlowerState& __cordl_internal_get_currentState() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::GlobalNamespace::Flower_FlowerState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::Flower_FlowerState& __cordl_internal_get_lastState() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_meshStates() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_meshStates() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_meshStatesGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_meshStatesGameObject() ;

constexpr ::UnityW<::GlobalNamespace::BeePerchPoint> const& __cordl_internal_get_perchPoint() const;

constexpr ::UnityW<::GlobalNamespace::BeePerchPoint>& __cordl_internal_get_perchPoint() ;

constexpr bool const& __cordl_internal_get_shouldUpdateVisuals() const;

constexpr bool& __cordl_internal_get_shouldUpdateVisuals() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_sparkleFx() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_sparkleFx() ;

constexpr ::UnityW<::GorillaTagScripts::GorillaTimer> const& __cordl_internal_get_timer() const;

constexpr ::UnityW<::GorillaTagScripts::GorillaTimer>& __cordl_internal_get_timer() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_wateredFx() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_wateredFx() ;

constexpr void __cordl_internal_set__IsWatered_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::Flower_FlowerState  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::Flower_FlowerState  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_meshStates(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_meshStatesGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_perchPoint(::UnityW<::GlobalNamespace::BeePerchPoint>  value) ;

constexpr void __cordl_internal_set_shouldUpdateVisuals(bool  value) ;

constexpr void __cordl_internal_set_sparkleFx(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_timer(::UnityW<::GorillaTagScripts::GorillaTimer>  value) ;

constexpr void __cordl_internal_set_wateredFx(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5bb9ca8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_healthy_to_middle() ;

static inline int32_t getStaticF_middle_to_healthy() ;

static inline int32_t getStaticF_middle_to_wilted() ;

static inline int32_t getStaticF_wilted_to_middle() ;

/// [CompilerGenerated]
/// @brief Method get_IsWatered, addr 0x5bb941c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsWatered() ;

static inline void setStaticF_healthy_to_middle(int32_t  value) ;

static inline void setStaticF_middle_to_healthy(int32_t  value) ;

static inline void setStaticF_middle_to_wilted(int32_t  value) ;

static inline void setStaticF_wilted_to_middle(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsWatered, addr 0x5bb9424, size 0x8, virtual false, abstract: false, final false
inline void set_IsWatered(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Flower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Flower", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Flower(Flower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Flower", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Flower(Flower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3973};

/// @brief Field anim, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___anim;

/// @brief Field meshRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___meshRenderer;

/// [HideInInspector]
/// @brief Field timer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GorillaTimer>  ___timer;

/// @brief Field perchPoint, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BeePerchPoint>  ___perchPoint;

/// @brief Field wateredFx, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___wateredFx;

/// @brief Field sparkleFx, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___sparkleFx;

/// @brief Field meshStatesGameObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___meshStatesGameObject;

/// @brief Field meshStates, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___meshStates;

/// @brief Field currentState, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::Flower_FlowerState  ___currentState;

/// @brief Field id, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field shouldUpdateVisuals, offset: 0x70, size: 0x1, def value: None
 bool  ___shouldUpdateVisuals;

/// @brief Field lastState, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::Flower_FlowerState  ___lastState;

/// [CompilerGenerated]
/// @brief Field <IsWatered>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____IsWatered_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Flower, ___anim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___timer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___perchPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___wateredFx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___sparkleFx) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___meshStatesGameObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___meshStates) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___currentState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___id) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___shouldUpdateVisuals) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ___lastState) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Flower, ____IsWatered_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Flower) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts
