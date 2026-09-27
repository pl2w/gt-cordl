#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameMonetizationTeamObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameMonetizationTeamObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameMonetizationTeamObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameMonetizationTeamObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameMonetizationTeamObject, "Modio.API.SchemaDefinitions", "GameMonetizationTeamObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameMonetizationTeamObject
struct CORDL_TYPE GameMonetizationTeamObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec944, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  team_id) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameMonetizationTeamObject() ;

// Ctor Parameters [CppParam { name: "TeamId", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GameMonetizationTeamObject(int64_t  TeamId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18123};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field TeamId, offset: 0x0, size: 0x8, def value: None
 int64_t  TeamId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameMonetizationTeamObject, TeamId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameMonetizationTeamObject) == 0x8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
