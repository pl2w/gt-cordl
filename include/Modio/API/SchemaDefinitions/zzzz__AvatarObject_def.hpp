#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AvatarObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AvatarObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct AvatarObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AvatarObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AvatarObject, "Modio.API.SchemaDefinitions", "AvatarObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AvatarObject
struct CORDL_TYPE AvatarObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec4c8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::StringW  original, ::StringW  thumb_50x50, ::StringW  thumb_100x100) ;

// Ctor Parameters []
// @brief default ctor
constexpr AvatarObject() ;

// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Thumb50X50", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Thumb100X100", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AvatarObject(::StringW  Filename, ::StringW  Original, ::StringW  Thumb50X50, ::StringW  Thumb100X100) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Filename, offset: 0x0, size: 0x8, def value: None
 ::StringW  Filename;

/// @brief Field Original, offset: 0x8, size: 0x8, def value: None
 ::StringW  Original;

/// @brief Field Thumb50X50, offset: 0x10, size: 0x8, def value: None
 ::StringW  Thumb50X50;

/// @brief Field Thumb100X100, offset: 0x18, size: 0x8, def value: None
 ::StringW  Thumb100X100;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AvatarObject, Filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AvatarObject, Original) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AvatarObject, Thumb50X50) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AvatarObject, Thumb100X100) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AvatarObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
