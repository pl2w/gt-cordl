#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/HeaderImageObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HeaderImageObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct HeaderImageObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::HeaderImageObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::HeaderImageObject, "Modio.API.SchemaDefinitions", "HeaderImageObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.HeaderImageObject
struct CORDL_TYPE HeaderImageObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecfd4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::StringW  original) ;

// Ctor Parameters []
// @brief default ctor
constexpr HeaderImageObject() ;

// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr HeaderImageObject(::StringW  Filename, ::StringW  Original) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Filename, offset: 0x0, size: 0x8, def value: None
 ::StringW  Filename;

/// @brief Field Original, offset: 0x8, size: 0x8, def value: None
 ::StringW  Original;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::HeaderImageObject, Filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::HeaderImageObject, Original) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::HeaderImageObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
