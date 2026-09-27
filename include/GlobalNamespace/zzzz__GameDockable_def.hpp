#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDockable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameDockable)
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GameDockable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameDockable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDockable*, "", "GameDockable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameDockable
class CORDL_TYPE GameDockable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dockablePoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dockablePoint, put=__cordl_internal_set_dockablePoint)) ::UnityW<::UnityEngine::Transform>  dockablePoint;

/// @brief Field dockableRadius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_dockableRadius, put=__cordl_internal_set_dockableRadius)) float_t  dockableRadius;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Method Awake, addr 0x5811c44, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BestDock, addr 0x5811c48, size 0x618, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId BestDock() ;

/// @brief Method GetDockablePoint, addr 0x5812260, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetDockablePoint() ;

static inline ::GlobalNamespace::GameDockable* New_ctor() ;

/// @brief Method OnDock, addr 0x58122e0, size 0x4, virtual false, abstract: false, final false
inline void OnDock(::GlobalNamespace::GameEntity*  gameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity) ;

/// @brief Method OnUndock, addr 0x58122e4, size 0x4, virtual false, abstract: false, final false
inline void OnUndock(::GlobalNamespace::GameEntity*  gameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dockablePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dockablePoint() ;

constexpr float_t const& __cordl_internal_get_dockableRadius() const;

constexpr float_t& __cordl_internal_get_dockableRadius() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr void __cordl_internal_set_dockablePoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_dockableRadius(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

/// @brief Method .ctor, addr 0x58122e8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameDockable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameDockable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameDockable(GameDockable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameDockable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameDockable(GameDockable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1727};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field dockableRadius, offset: 0x28, size: 0x4, def value: None
 float_t  ___dockableRadius;

/// @brief Field dockablePoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dockablePoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDockable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDockable, ___dockableRadius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameDockable, ___dockablePoint) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDockable) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
