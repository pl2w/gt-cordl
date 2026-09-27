#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBarrierOverloadable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRBarrierOverloadable_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRBarrierOverloadable)
namespace GlobalNamespace {
struct GRBarrierOverloadable_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBarrierOverloadable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBarrierOverloadable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBarrierOverloadable*, "", "GRBarrierOverloadable");
// Dependencies GRBarrierOverloadable::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBarrierOverloadable
class CORDL_TYPE GRBarrierOverloadable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRBarrierOverloadable_State;

/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field collider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field gameEntity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field meshRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field state, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRBarrierOverloadable_State  state;

/// @brief Field tool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

static inline ::GlobalNamespace::GRBarrierOverloadable* New_ctor() ;

/// @brief Method OnEnable, addr 0x58720bc, size 0xec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnergyChange, addr 0x58721a8, size 0x80, virtual false, abstract: false, final false
inline void OnEnergyChange(::GlobalNamespace::GRTool*  tool, int32_t  energyChange, ::GlobalNamespace::GameEntityId  chargingEntityId) ;

/// @brief Method OnEntityStateChanged, addr 0x58722b8, size 0x48, virtual false, abstract: false, final false
inline void OnEntityStateChanged(int64_t  prevState, int64_t  nextState) ;

/// @brief Method SetState, addr 0x5872228, size 0x90, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRBarrierOverloadable_State  newState) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::GlobalNamespace::GRBarrierOverloadable_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRBarrierOverloadable_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRBarrierOverloadable_State  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

/// @brief Method .ctor, addr 0x5872300, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBarrierOverloadable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBarrierOverloadable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBarrierOverloadable(GRBarrierOverloadable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBarrierOverloadable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBarrierOverloadable(GRBarrierOverloadable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1887};

/// @brief Field tool, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field gameEntity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field meshRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field collider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

/// @brief Field state, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::GRBarrierOverloadable_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBarrierOverloadable, ___tool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierOverloadable, ___gameEntity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierOverloadable, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierOverloadable, ___meshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierOverloadable, ___collider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBarrierOverloadable, ___state) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBarrierOverloadable) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
