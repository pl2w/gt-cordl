#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModfilePlatformObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModfilePlatformObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModfilePlatformObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModfilePlatformObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModfilePlatformObject, "Modio.API.SchemaDefinitions", "ModfilePlatformObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModfilePlatformObject
struct CORDL_TYPE ModfilePlatformObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed5cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  platform, int64_t  status) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModfilePlatformObject() ;

// Ctor Parameters [CppParam { name: "Platform", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModfilePlatformObject(::StringW  Platform, int64_t  Status) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Platform, offset: 0x0, size: 0x8, def value: None
 ::StringW  Platform;

/// @brief Field Status, offset: 0x8, size: 0x8, def value: None
 int64_t  Status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfilePlatformObject, Platform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfilePlatformObject, Status) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModfilePlatformObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
