#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GamePlatformsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GamePlatformsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GamePlatformsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GamePlatformsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GamePlatformsObject, "Modio.API.SchemaDefinitions", "GamePlatformsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GamePlatformsObject
struct CORDL_TYPE GamePlatformsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecb90, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::StringW  platform, ::StringW  label, bool  moderated, bool  locked) ;

// Ctor Parameters []
// @brief default ctor
constexpr GamePlatformsObject() ;

// Ctor Parameters [CppParam { name: "Platform", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Label", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Moderated", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Locked", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GamePlatformsObject(::StringW  Platform, ::StringW  Label, bool  Moderated, bool  Locked) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Platform, offset: 0x0, size: 0x8, def value: None
 ::StringW  Platform;

/// @brief Field Label, offset: 0x8, size: 0x8, def value: None
 ::StringW  Label;

/// @brief Field Moderated, offset: 0x10, size: 0x1, def value: None
 bool  Moderated;

/// @brief Field Locked, offset: 0x11, size: 0x1, def value: None
 bool  Locked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GamePlatformsObject, Platform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GamePlatformsObject, Label) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GamePlatformsObject, Moderated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GamePlatformsObject, Locked) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GamePlatformsObject) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
