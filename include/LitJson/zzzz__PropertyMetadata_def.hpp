#pragma once
// IWYU pragma private; include "LitJson/PropertyMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyMetadata)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace LitJson {
struct PropertyMetadata;
}
// Write type traits
MARK_VAL_T(::LitJson::PropertyMetadata);
DEFINE_IL2CPP_CLASS(::LitJson::PropertyMetadata, "LitJson", "PropertyMetadata");
// Dependencies 
namespace LitJson {
// Is value type: true
// CS Name: LitJson.PropertyMetadata
struct CORDL_TYPE PropertyMetadata {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyMetadata() ;

// Ctor Parameters [CppParam { name: "Info", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }]
constexpr PropertyMetadata(::System::Reflection::MemberInfo*  Info, bool  IsField, ::System::Type*  Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Info, offset: 0x0, size: 0x8, def value: None
 ::System::Reflection::MemberInfo*  Info;

/// @brief Field IsField, offset: 0x8, size: 0x1, def value: None
 bool  IsField;

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LitJson::PropertyMetadata, Info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LitJson::PropertyMetadata, IsField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LitJson::PropertyMetadata, Type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::LitJson::PropertyMetadata) == 0x18, "Size mismatch!");

} // namespace end def LitJson
