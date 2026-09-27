#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameEmhObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__GamePlatformsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionLocalizedObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ThemeObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEmhObject)
namespace Modio::API::SchemaDefinitions {
struct GamePlatformsObject;
}
namespace Modio::API::SchemaDefinitions {
struct GameTagOptionLocalizedObject;
}
namespace Modio::API::SchemaDefinitions {
struct ThemeObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameEmhObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameEmhObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameEmhObject, "Modio.API.SchemaDefinitions", "GameEmhObject");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies Modio.API.SchemaDefinitions.GamePlatformsObject, Modio.API.SchemaDefinitions.GameTagOptionLocalizedObject, Modio.API.SchemaDefinitions.ThemeObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameEmhObject
struct CORDL_TYPE GameEmhObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec89c, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  status, int64_t  communityOptions, ::StringW  ugcName, ::StringW  name, ::StringW  nameId, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  tagOptions, ::Modio::API::SchemaDefinitions::ThemeObject  theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  platforms) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameEmhObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UgcName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "TagOptions", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Theme", ty: "::Modio::API::SchemaDefinitions::ThemeObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>", modifiers: "", def_value: None, comment: None }]
constexpr GameEmhObject(int64_t  Id, int64_t  Status, int64_t  CommunityOptions, ::StringW  UgcName, ::StringW  Name, ::StringW  NameId, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  TagOptions, ::Modio::API::SchemaDefinitions::ThemeObject  Theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  Platforms) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field Status, offset: 0x8, size: 0x8, def value: None
 int64_t  Status;

/// @brief Field CommunityOptions, offset: 0x10, size: 0x8, def value: None
 int64_t  CommunityOptions;

/// @brief Field UgcName, offset: 0x18, size: 0x8, def value: None
 ::StringW  UgcName;

/// @brief Field Name, offset: 0x20, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameId, offset: 0x28, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field TagOptions, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  TagOptions;

/// @brief Field Theme, offset: 0x38, size: 0x30, def value: None
 ::Modio::API::SchemaDefinitions::ThemeObject  Theme;

/// @brief Field Platforms, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  Platforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, Status) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, CommunityOptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, UgcName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, NameId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, TagOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, Theme) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameEmhObject, Platforms) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameEmhObject) == 0x70, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
