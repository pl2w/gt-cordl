#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameOtherUrlsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameOtherUrlsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameOtherUrlsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameOtherUrlsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameOtherUrlsObject, "Modio.API.SchemaDefinitions", "GameOtherUrlsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameOtherUrlsObject
struct CORDL_TYPE GameOtherUrlsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecb60, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  label, ::StringW  url) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameOtherUrlsObject() ;

// Ctor Parameters [CppParam { name: "Label", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr GameOtherUrlsObject(::StringW  Label, ::StringW  Url) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18125};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Label, offset: 0x0, size: 0x8, def value: None
 ::StringW  Label;

/// @brief Field Url, offset: 0x8, size: 0x8, def value: None
 ::StringW  Url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameOtherUrlsObject, Label) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameOtherUrlsObject, Url) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameOtherUrlsObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
