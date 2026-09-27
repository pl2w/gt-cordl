#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UpdateGameMediaResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateGameMediaResponse)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct UpdateGameMediaResponse;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::UpdateGameMediaResponse);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::UpdateGameMediaResponse, "Modio.API.SchemaDefinitions", "UpdateGameMediaResponse");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.UpdateGameMediaResponse
struct CORDL_TYPE UpdateGameMediaResponse {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee784, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int64_t  code, ::StringW  message) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateGameMediaResponse() ;

// Ctor Parameters [CppParam { name: "Code", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr UpdateGameMediaResponse(int64_t  Code, ::StringW  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Code, offset: 0x0, size: 0x8, def value: None
 int64_t  Code;

/// @brief Field Message, offset: 0x8, size: 0x8, def value: None
 ::StringW  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::UpdateGameMediaResponse, Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UpdateGameMediaResponse, Message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::UpdateGameMediaResponse) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
