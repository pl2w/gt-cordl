#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelSectionConnector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostReactorLevelSectionConnector_Direction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GhostReactorLevelSectionConnector)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GhostReactorLevelSectionConnector_Direction;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorLevelSectionConnector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorLevelSectionConnector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelSectionConnector*, "", "GhostReactorLevelSectionConnector");
// Dependencies GhostReactorLevelSectionConnector::Direction, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelSectionConnector
class CORDL_TYPE GhostReactorLevelSectionConnector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Direction = ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction;

/// @brief Field boundingCollider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundingCollider, put=__cordl_internal_set_boundingCollider)) ::UnityW<::UnityEngine::BoxCollider>  boundingCollider;

/// @brief Field direction, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction  direction;

/// @brief Field gateEntity, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gateEntity, put=__cordl_internal_set_gateEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gateEntity;

/// @brief Field gateSpawnPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gateSpawnPoint, put=__cordl_internal_set_gateSpawnPoint)) ::UnityW<::UnityEngine::Transform>  gateSpawnPoint;

/// @brief Field hidden, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_hidden, put=__cordl_internal_set_hidden)) bool  hidden;

/// @brief Field hubAnchor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hubAnchor, put=__cordl_internal_set_hubAnchor)) ::UnityW<::UnityEngine::Transform>  hubAnchor;

/// @brief Field pathNodes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathNodes, put=__cordl_internal_set_pathNodes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  pathNodes;

/// @brief Field prePlacedGameEntities, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_prePlacedGameEntities, put=__cordl_internal_set_prePlacedGameEntities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  prePlacedGameEntities;

/// @brief Field renderers, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers;

/// @brief Field sectionAnchor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sectionAnchor, put=__cordl_internal_set_sectionAnchor)) ::UnityW<::UnityEngine::Transform>  sectionAnchor;

/// @brief Method Awake, addr 0x584f428, size 0x2c4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Hide, addr 0x584fc04, size 0xfc, virtual false, abstract: false, final false
inline void Hide(bool  hide) ;

/// @brief Method Init, addr 0x584f6ec, size 0x4f8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactorManager*  grManager) ;

static inline ::GlobalNamespace::GhostReactorLevelSectionConnector* New_ctor() ;

/// @brief Method UpdateDisable, addr 0x584fd00, size 0x11c, virtual false, abstract: false, final false
inline void UpdateDisable(::UnityEngine::Vector3  playerPos) ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_boundingCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_boundingCollider() ;

constexpr ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction const& __cordl_internal_get_direction() const;

constexpr ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction& __cordl_internal_get_direction() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gateEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gateEntity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gateSpawnPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gateSpawnPoint() ;

constexpr bool const& __cordl_internal_get_hidden() const;

constexpr bool& __cordl_internal_get_hidden() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hubAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hubAnchor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_pathNodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_pathNodes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_prePlacedGameEntities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_prePlacedGameEntities() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_renderers() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_sectionAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_sectionAnchor() ;

constexpr void __cordl_internal_set_boundingCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_direction(::GlobalNamespace::GhostReactorLevelSectionConnector_Direction  value) ;

constexpr void __cordl_internal_set_gateEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gateSpawnPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hidden(bool  value) ;

constexpr void __cordl_internal_set_hubAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pathNodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_prePlacedGameEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_sectionAnchor(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x584fe1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelSectionConnector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelSectionConnector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelSectionConnector(GhostReactorLevelSectionConnector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelSectionConnector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelSectionConnector(GhostReactorLevelSectionConnector const& ) = delete;

/// @brief Field HIDE_DIST offset 0xffffffff size 0x4
static constexpr float_t  HIDE_DIST{static_cast<float_t>(22.0f)};

/// @brief Field SHOW_DIST offset 0xffffffff size 0x4
static constexpr float_t  SHOW_DIST{static_cast<float_t>(18.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1819};

/// @brief Field hubAnchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hubAnchor;

/// @brief Field sectionAnchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___sectionAnchor;

/// @brief Field gateSpawnPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gateSpawnPoint;

/// @brief Field gateEntity, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gateEntity;

/// @brief Field direction, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction  ___direction;

/// @brief Field boundingCollider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___boundingCollider;

/// @brief Field pathNodes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___pathNodes;

/// @brief Field prePlacedGameEntities, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___prePlacedGameEntities;

/// @brief Field renderers, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___renderers;

/// @brief Field hidden, offset: 0x68, size: 0x1, def value: None
 bool  ___hidden;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___hubAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___sectionAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___gateSpawnPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___gateEntity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___direction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___boundingCollider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___pathNodes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___prePlacedGameEntities) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___renderers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector, ___hidden) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelSectionConnector) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
