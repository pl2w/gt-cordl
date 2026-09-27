#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModDependenciesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddModDependenciesResponse)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct AddModDependenciesResponse;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddModDependenciesResponse);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddModDependenciesResponse, "Modio.API.SchemaDefinitions", "AddModDependenciesResponse");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddModDependenciesResponse
struct CORDL_TYPE AddModDependenciesResponse {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec3d4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int64_t  code, ::StringW  message) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddModDependenciesResponse() ;

// Ctor Parameters [CppParam { name: "Code", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AddModDependenciesResponse(int64_t  Code, ::StringW  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18107};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Code, offset: 0x0, size: 0x8, def value: None
 int64_t  Code;

/// @brief Field Message, offset: 0x8, size: 0x8, def value: None
 ::StringW  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModDependenciesResponse, Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddModDependenciesResponse, Message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddModDependenciesResponse) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
