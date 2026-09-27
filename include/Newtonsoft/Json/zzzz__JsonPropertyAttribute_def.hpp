#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonPropertyAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonPropertyAttribute*, "Newtonsoft.Json", "JsonPropertyAttribute");
// [NullableContext(2)]
// [Nullable(0)]
// [AttributeUsage((System.AttributeTargets)2432, AllowMultiple = false)]
// Dependencies Newtonsoft.Json.DefaultValueHandling, Newtonsoft.Json.NullValueHandling, Newtonsoft.Json.ObjectCreationHandling, Newtonsoft.Json.ReferenceLoopHandling, Newtonsoft.Json.Required, Newtonsoft.Json.TypeNameHandling, System.Attribute, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonPropertyAttribute
class CORDL_TYPE JsonPropertyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief [Nullable(new[] { 2, 1 })]
 __declspec(property(get=get_ItemConverterParameters)) ::ArrayW<::System::Object*>  ItemConverterParameters;

 __declspec(property(get=get_ItemConverterType, put=set_ItemConverterType)) ::System::Type*  ItemConverterType;

/// @brief [Nullable(new[] { 2, 1 })]
 __declspec(property(get=get_NamingStrategyParameters)) ::ArrayW<::System::Object*>  NamingStrategyParameters;

 __declspec(property(get=get_NamingStrategyType)) ::System::Type*  NamingStrategyType;

 __declspec(property(get=get_PropertyName, put=set_PropertyName)) ::StringW  PropertyName;

/// @brief Field <ItemConverterParameters>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ItemConverterParameters_k__BackingField, put=__cordl_internal_set__ItemConverterParameters_k__BackingField)) ::ArrayW<::System::Object*>  _ItemConverterParameters_k__BackingField;

/// @brief Field <ItemConverterType>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ItemConverterType_k__BackingField, put=__cordl_internal_set__ItemConverterType_k__BackingField)) ::System::Type*  _ItemConverterType_k__BackingField;

/// @brief Field <NamingStrategyParameters>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__NamingStrategyParameters_k__BackingField, put=__cordl_internal_set__NamingStrategyParameters_k__BackingField)) ::ArrayW<::System::Object*>  _NamingStrategyParameters_k__BackingField;

/// @brief Field <NamingStrategyType>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__NamingStrategyType_k__BackingField, put=__cordl_internal_set__NamingStrategyType_k__BackingField)) ::System::Type*  _NamingStrategyType_k__BackingField;

/// @brief Field <PropertyName>k__BackingField, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyName_k__BackingField, put=__cordl_internal_set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

/// @brief Field _defaultValueHandling, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__defaultValueHandling, put=__cordl_internal_set__defaultValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>  _defaultValueHandling;

/// @brief Field _isReference, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__isReference, put=__cordl_internal_set__isReference)) ::System::Nullable_1<bool>  _isReference;

/// @brief Field _itemIsReference, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get__itemIsReference, put=__cordl_internal_set__itemIsReference)) ::System::Nullable_1<bool>  _itemIsReference;

/// @brief Field _itemReferenceLoopHandling, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__itemReferenceLoopHandling, put=__cordl_internal_set__itemReferenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  _itemReferenceLoopHandling;

/// @brief Field _itemTypeNameHandling, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get__itemTypeNameHandling, put=__cordl_internal_set__itemTypeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  _itemTypeNameHandling;

/// @brief Field _nullValueHandling, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__nullValueHandling, put=__cordl_internal_set__nullValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>  _nullValueHandling;

/// @brief Field _objectCreationHandling, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__objectCreationHandling, put=__cordl_internal_set__objectCreationHandling)) ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>  _objectCreationHandling;

/// @brief Field _order, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__order, put=__cordl_internal_set__order)) ::System::Nullable_1<int32_t>  _order;

/// @brief Field _referenceLoopHandling, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__referenceLoopHandling, put=__cordl_internal_set__referenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  _referenceLoopHandling;

/// @brief Field _required, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get__required, put=__cordl_internal_set__required)) ::System::Nullable_1<::Newtonsoft::Json::Required>  _required;

/// @brief Field _typeNameHandling, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__typeNameHandling, put=__cordl_internal_set__typeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  _typeNameHandling;

static inline ::Newtonsoft::Json::JsonPropertyAttribute* New_ctor() ;

/// @brief [NullableContext(1)]
static inline ::Newtonsoft::Json::JsonPropertyAttribute* New_ctor(::StringW  propertyName) ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__ItemConverterParameters_k__BackingField() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__ItemConverterParameters_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ItemConverterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ItemConverterType_k__BackingField() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__NamingStrategyParameters_k__BackingField() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__NamingStrategyParameters_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__NamingStrategyType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__NamingStrategyType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& __cordl_internal_get__defaultValueHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& __cordl_internal_get__defaultValueHandling() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isReference() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isReference() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__itemIsReference() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__itemIsReference() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__itemReferenceLoopHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__itemReferenceLoopHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__itemTypeNameHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__itemTypeNameHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __cordl_internal_get__nullValueHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __cordl_internal_get__nullValueHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& __cordl_internal_get__objectCreationHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& __cordl_internal_get__objectCreationHandling() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__order() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__order() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__referenceLoopHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__referenceLoopHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __cordl_internal_get__required() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __cordl_internal_get__required() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__typeNameHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__typeNameHandling() ;

constexpr void __cordl_internal_set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__ItemConverterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__NamingStrategyParameters_k__BackingField(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__NamingStrategyType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__defaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>  value) ;

constexpr void __cordl_internal_set__isReference(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__itemIsReference(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  value) ;

constexpr void __cordl_internal_set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  value) ;

constexpr void __cordl_internal_set__nullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>  value) ;

constexpr void __cordl_internal_set__objectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>  value) ;

constexpr void __cordl_internal_set__order(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__referenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  value) ;

constexpr void __cordl_internal_set__required(::System::Nullable_1<::Newtonsoft::Json::Required>  value) ;

constexpr void __cordl_internal_set__typeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  value) ;

/// @brief Method .ctor, addr 0xa3709d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0xa3709e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  propertyName) ;

/// [CompilerGenerated]
/// @brief Method get_ItemConverterParameters, addr 0xa3709b0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> get_ItemConverterParameters() ;

/// [CompilerGenerated]
/// @brief Method get_ItemConverterType, addr 0xa3709a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ItemConverterType() ;

/// [CompilerGenerated]
/// @brief Method get_NamingStrategyParameters, addr 0xa3709c0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> get_NamingStrategyParameters() ;

/// [CompilerGenerated]
/// @brief Method get_NamingStrategyType, addr 0xa3709b8, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_NamingStrategyType() ;

/// [CompilerGenerated]
/// @brief Method get_PropertyName, addr 0xa3709c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PropertyName() ;

/// [CompilerGenerated]
/// @brief Method set_ItemConverterType, addr 0xa3709a8, size 0x8, virtual false, abstract: false, final false
inline void set_ItemConverterType(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PropertyName, addr 0xa3709d0, size 0x8, virtual false, abstract: false, final false
inline void set_PropertyName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonPropertyAttribute(JsonPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonPropertyAttribute(JsonPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23100};

/// @brief Field _nullValueHandling, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>  ____nullValueHandling;

/// @brief Field _defaultValueHandling, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>  ____defaultValueHandling;

/// @brief Field _referenceLoopHandling, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  ____referenceLoopHandling;

/// @brief Field _objectCreationHandling, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>  ____objectCreationHandling;

/// @brief Field _typeNameHandling, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  ____typeNameHandling;

/// @brief Field _isReference, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____isReference;

/// @brief Field _order, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____order;

/// @brief Field _required, offset: 0x80, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::Required>  ____required;

/// @brief Size padding 0x88 - 0xe8 = 0x60, packed as 0x60
 uint8_t  _cordl_size_padding[0x60];

/// @brief Field _itemIsReference, offset: 0x90, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____itemIsReference;

/// @brief Field _itemReferenceLoopHandling, offset: 0xa0, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  ____itemReferenceLoopHandling;

/// @brief Field _itemTypeNameHandling, offset: 0xb0, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  ____itemTypeNameHandling;

/// [CompilerGenerated]
/// @brief Field <ItemConverterType>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::System::Type*  ____ItemConverterType_k__BackingField;

/// [Nullable(new[] { 2, 1 })]
/// [CompilerGenerated]
/// @brief Field <ItemConverterParameters>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____ItemConverterParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NamingStrategyType>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::System::Type*  ____NamingStrategyType_k__BackingField;

/// [Nullable(new[] { 2, 1 })]
/// [CompilerGenerated]
/// @brief Field <NamingStrategyParameters>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____NamingStrategyParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PropertyName>k__BackingField, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ____PropertyName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____nullValueHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____defaultValueHandling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____referenceLoopHandling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____objectCreationHandling) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____typeNameHandling) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____isReference) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____order) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____required) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____itemIsReference) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____itemReferenceLoopHandling) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____itemTypeNameHandling) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____ItemConverterType_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____ItemConverterParameters_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____NamingStrategyType_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____NamingStrategyParameters_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonPropertyAttribute, ____PropertyName_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::JsonPropertyAttribute) == 0x88, "Size mismatch!");

} // namespace end def Newtonsoft::Json
