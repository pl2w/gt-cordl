#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapEntity)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MapEntity;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MapEntity*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MapEntity*, "GT_CustomMapSupportRuntime", "MapEntity");
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MapEntity
class CORDL_TYPE MapEntity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entityTypeId, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_entityTypeId, put=__cordl_internal_set_entityTypeId)) uint8_t  entityTypeId;

/// @brief Field isTemplate, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTemplate, put=__cordl_internal_set_isTemplate)) bool  isTemplate;

/// @brief Field lua_EntityID, offset 0x22, size 0x2 
 __declspec(property(get=__cordl_internal_get_lua_EntityID, put=__cordl_internal_set_lua_EntityID)) int16_t  lua_EntityID;

/// @brief Method GetPackedCreateData, addr 0x9cb7368, size 0x8, virtual true, abstract: false, final false
inline int64_t GetPackedCreateData() ;

static inline ::GT_CustomMapSupportRuntime::MapEntity* New_ctor() ;

constexpr uint8_t const& __cordl_internal_get_entityTypeId() const;

constexpr uint8_t& __cordl_internal_get_entityTypeId() ;

constexpr bool const& __cordl_internal_get_isTemplate() const;

constexpr bool& __cordl_internal_get_isTemplate() ;

constexpr int16_t const& __cordl_internal_get_lua_EntityID() const;

constexpr int16_t& __cordl_internal_get_lua_EntityID() ;

constexpr void __cordl_internal_set_entityTypeId(uint8_t  value) ;

constexpr void __cordl_internal_set_isTemplate(bool  value) ;

constexpr void __cordl_internal_set_lua_EntityID(int16_t  value) ;

/// @brief Method .ctor, addr 0x9cb0df0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapEntity(MapEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapEntity(MapEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30911};

/// [Tooltip("If \"IsTemplate\" is enabled, this Map Entity will be used by the MapSpawnManager to create duplicate Map Entities of the same \"entityTypeId\". Template Map Entities will not be created when the map loads.")]
/// @brief Field isTemplate, offset: 0x20, size: 0x1, def value: None
 bool  ___isTemplate;

/// [Tooltip("\"EntityTypeID\" is used to distinguish each Map Entity that the MapSpawnManager can create. Make sure each Map Entity with \"IsTemplate\" set to TRUE has a unique \"EntityTypeID\".")]
/// @brief Field entityTypeId, offset: 0x21, size: 0x1, def value: None
 uint8_t  ___entityTypeId;

/// [Tooltip("The \"LuaEntityID\" can be used in Luau scripts with the \"findPrePlacedAIAgentByID\" and\"findPrePlacedGrabbableByID\" functions to find your pre-placed Map Entities after the map is loaded.")]
/// @brief Field lua_EntityID, offset: 0x22, size: 0x2, def value: None
 int16_t  ___lua_EntityID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MapEntity, ___isTemplate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapEntity, ___entityTypeId) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapEntity, ___lua_EntityID) == 0x22, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MapEntity) == 0x28, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
