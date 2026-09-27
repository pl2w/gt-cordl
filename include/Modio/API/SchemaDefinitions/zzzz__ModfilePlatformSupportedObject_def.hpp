#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModfilePlatformSupportedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModfilePlatformSupportedObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModfilePlatformSupportedObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject, "Modio.API.SchemaDefinitions", "ModfilePlatformSupportedObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModfilePlatformSupportedObject
struct CORDL_TYPE ModfilePlatformSupportedObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed5f4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  targetted, ::ArrayW<::StringW>  approved, ::ArrayW<::StringW>  denied, ::ArrayW<::StringW>  live, ::ArrayW<::StringW>  pending) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModfilePlatformSupportedObject() ;

// Ctor Parameters [CppParam { name: "Targetted", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Approved", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Denied", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Live", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pending", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr ModfilePlatformSupportedObject(::ArrayW<::StringW>  Targetted, ::ArrayW<::StringW>  Approved, ::ArrayW<::StringW>  Denied, ::ArrayW<::StringW>  Live, ::ArrayW<::StringW>  Pending) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Targetted, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::StringW>  Targetted;

/// @brief Field Approved, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  Approved;

/// @brief Field Denied, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  Denied;

/// @brief Field Live, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  Live;

/// @brief Field Pending, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  Pending;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject, Targetted) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject, Approved) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject, Denied) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject, Live) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject, Pending) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject) == 0x28, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
