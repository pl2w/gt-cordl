#pragma once
// IWYU pragma private; include "LitJson/ObjectMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ObjectMetadata)
namespace LitJson {
struct PropertyMetadata;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace LitJson {
struct ObjectMetadata;
}
// Write type traits
MARK_VAL_T(::LitJson::ObjectMetadata);
DEFINE_IL2CPP_CLASS(::LitJson::ObjectMetadata, "LitJson", "ObjectMetadata");
// Dependencies 
namespace LitJson {
// Is value type: true
// CS Name: LitJson.ObjectMetadata
struct CORDL_TYPE ObjectMetadata {
public:
// Declarations
 __declspec(property(get=get_ElementType, put=set_ElementType)) ::System::Type*  ElementType;

 __declspec(property(get=get_IsDictionary, put=set_IsDictionary)) bool  IsDictionary;

 __declspec(property(get=get_Properties, put=set_Properties)) ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*  Properties;

/// @brief Method get_ElementType, addr 0x5b5f88c, size 0x9c, virtual false, abstract: false, final false
inline ::System::Type* get_ElementType() ;

/// @brief Method get_IsDictionary, addr 0x5b5f930, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDictionary() ;

/// @brief Method get_Properties, addr 0x5b5f940, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>* get_Properties() ;

/// @brief Method set_ElementType, addr 0x5b5f928, size 0x8, virtual false, abstract: false, final false
inline void set_ElementType(::System::Type*  value) ;

/// @brief Method set_IsDictionary, addr 0x5b5f938, size 0x8, virtual false, abstract: false, final false
inline void set_IsDictionary(bool  value) ;

/// @brief Method set_Properties, addr 0x5b5f948, size 0x8, virtual false, abstract: false, final false
inline void set_Properties(::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectMetadata() ;

// Ctor Parameters [CppParam { name: "element_type", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "is_dictionary", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "properties", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*", modifiers: "", def_value: None, comment: None }]
constexpr ObjectMetadata(::System::Type*  element_type, bool  is_dictionary, ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*  properties) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3824};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field element_type, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  element_type;

/// @brief Field is_dictionary, offset: 0x8, size: 0x1, def value: None
 bool  is_dictionary;

/// @brief Field properties, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::PropertyMetadata>*  properties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LitJson::ObjectMetadata, element_type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LitJson::ObjectMetadata, is_dictionary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LitJson::ObjectMetadata, properties) == 0x10, "Offset mismatch!");

static_assert(sizeof(::LitJson::ObjectMetadata) == 0x18, "Size mismatch!");

} // namespace end def LitJson
