#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ThemeObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ThemeObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ThemeObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ThemeObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ThemeObject, "Modio.API.SchemaDefinitions", "ThemeObject");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ThemeObject
struct CORDL_TYPE ThemeObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee5d0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  primary, ::StringW  dark, ::StringW  light, ::StringW  success, ::StringW  warning, ::StringW  danger) ;

// Ctor Parameters []
// @brief default ctor
constexpr ThemeObject() ;

// Ctor Parameters [CppParam { name: "Primary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Dark", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Light", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Success", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Warning", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Danger", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ThemeObject(::StringW  Primary, ::StringW  Dark, ::StringW  Light, ::StringW  Success, ::StringW  Warning, ::StringW  Danger) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Primary, offset: 0x0, size: 0x8, def value: None
 ::StringW  Primary;

/// @brief Field Dark, offset: 0x8, size: 0x8, def value: None
 ::StringW  Dark;

/// @brief Field Light, offset: 0x10, size: 0x8, def value: None
 ::StringW  Light;

/// @brief Field Success, offset: 0x18, size: 0x8, def value: None
 ::StringW  Success;

/// @brief Field Warning, offset: 0x20, size: 0x8, def value: None
 ::StringW  Warning;

/// @brief Field Danger, offset: 0x28, size: 0x8, def value: None
 ::StringW  Danger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ThemeObject, Primary) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ThemeObject, Dark) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ThemeObject, Light) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ThemeObject, Success) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ThemeObject, Warning) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ThemeObject, Danger) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ThemeObject) == 0x30, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
