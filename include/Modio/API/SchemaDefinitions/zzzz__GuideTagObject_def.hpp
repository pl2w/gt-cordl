#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GuideTagObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GuideTagObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GuideTagObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GuideTagObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GuideTagObject, "Modio.API.SchemaDefinitions", "GuideTagObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GuideTagObject
struct CORDL_TYPE GuideTagObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecfa8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int64_t  date_added, int64_t  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr GuideTagObject() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GuideTagObject(::StringW  Name, int64_t  DateAdded, int64_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18135};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field DateAdded, offset: 0x8, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field Count, offset: 0x10, size: 0x8, def value: None
 int64_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideTagObject, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideTagObject, DateAdded) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideTagObject, Count) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GuideTagObject) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
