#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/FilehashObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FilehashObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct FilehashObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::FilehashObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::FilehashObject, "Modio.API.SchemaDefinitions", "FilehashObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.FilehashObject
struct CORDL_TYPE FilehashObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec894, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  md5) ;

// Ctor Parameters []
// @brief default ctor
constexpr FilehashObject() ;

// Ctor Parameters [CppParam { name: "Md5", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr FilehashObject(::StringW  Md5) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18121};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Md5, offset: 0x0, size: 0x8, def value: None
 ::StringW  Md5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::FilehashObject, Md5) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::FilehashObject) == 0x8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
