#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModPlatformsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModPlatformsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModPlatformsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModPlatformsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModPlatformsObject, "Modio.API.SchemaDefinitions", "ModPlatformsObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModPlatformsObject
struct CORDL_TYPE ModPlatformsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fede4c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  platform, int64_t  modfile_live) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModPlatformsObject() ;

// Ctor Parameters [CppParam { name: "Platform", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModfileLive", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModPlatformsObject(::StringW  Platform, int64_t  ModfileLive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18154};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Platform, offset: 0x0, size: 0x8, def value: None
 ::StringW  Platform;

/// @brief Field ModfileLive, offset: 0x8, size: 0x8, def value: None
 int64_t  ModfileLive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModPlatformsObject, Platform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModPlatformsObject, ModfileLive) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModPlatformsObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
