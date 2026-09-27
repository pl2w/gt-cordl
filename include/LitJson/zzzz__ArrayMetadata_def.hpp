#pragma once
// IWYU pragma private; include "LitJson/ArrayMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ArrayMetadata)
namespace System {
class Type;
}
// Forward declare root types
namespace LitJson {
struct ArrayMetadata;
}
// Write type traits
MARK_VAL_T(::LitJson::ArrayMetadata);
DEFINE_IL2CPP_CLASS(::LitJson::ArrayMetadata, "LitJson", "ArrayMetadata");
// Dependencies 
namespace LitJson {
// Is value type: true
// CS Name: LitJson.ArrayMetadata
struct CORDL_TYPE ArrayMetadata {
public:
// Declarations
 __declspec(property(get=get_ElementType, put=set_ElementType)) ::System::Type*  ElementType;

 __declspec(property(get=get_IsArray, put=set_IsArray)) bool  IsArray;

 __declspec(property(get=get_IsList, put=set_IsList)) bool  IsList;

/// @brief Method get_ElementType, addr 0x5b5f7c8, size 0x9c, virtual false, abstract: false, final false
inline ::System::Type* get_ElementType() ;

/// @brief Method get_IsArray, addr 0x5b5f86c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsArray() ;

/// @brief Method get_IsList, addr 0x5b5f87c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsList() ;

/// @brief Method set_ElementType, addr 0x5b5f864, size 0x8, virtual false, abstract: false, final false
inline void set_ElementType(::System::Type*  value) ;

/// @brief Method set_IsArray, addr 0x5b5f874, size 0x8, virtual false, abstract: false, final false
inline void set_IsArray(bool  value) ;

/// @brief Method set_IsList, addr 0x5b5f884, size 0x8, virtual false, abstract: false, final false
inline void set_IsList(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ArrayMetadata() ;

// Ctor Parameters [CppParam { name: "element_type", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "is_array", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "is_list", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ArrayMetadata(::System::Type*  element_type, bool  is_array, bool  is_list) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field element_type, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  element_type;

/// @brief Field is_array, offset: 0x8, size: 0x1, def value: None
 bool  is_array;

/// @brief Field is_list, offset: 0x9, size: 0x1, def value: None
 bool  is_list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LitJson::ArrayMetadata, element_type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LitJson::ArrayMetadata, is_array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LitJson::ArrayMetadata, is_list) == 0x9, "Offset mismatch!");

static_assert(sizeof(::LitJson::ArrayMetadata) == 0x10, "Size mismatch!");

} // namespace end def LitJson
