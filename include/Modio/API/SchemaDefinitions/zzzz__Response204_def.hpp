#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/Response204.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Response204)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct Response204;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::Response204);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::Response204, "Modio.API.SchemaDefinitions", "Response204");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.Response204
#pragma pack(push, 0)
struct CORDL_TYPE Response204 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Response204() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Modio::API::SchemaDefinitions::Response204) == 0x1, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
