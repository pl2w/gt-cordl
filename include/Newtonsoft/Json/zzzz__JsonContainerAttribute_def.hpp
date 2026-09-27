#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonContainerAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(JsonContainerAttribute)
namespace Newtonsoft::Json::Serialization {
class NamingStrategy;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonContainerAttribute;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonContainerAttribute*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonContainerAttribute*, "Newtonsoft.Json", "JsonContainerAttribute");
// [NullableContext(2)]
// [Nullable(0)]
// [AttributeUsage((System.AttributeTargets)1028, AllowMultiple = false)]
// Dependencies Newtonsoft.Json.ReferenceLoopHandling, Newtonsoft.Json.TypeNameHandling, System.Attribute, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonContainerAttribute
class CORDL_TYPE JsonContainerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief [Nullable(new[] { 2, 1 })]
 __declspec(property(get=get_ItemConverterParameters)) ::ArrayW<::System::Object*>  ItemConverterParameters;

 __declspec(property(get=get_ItemConverterType)) ::System::Type*  ItemConverterType;

 __declspec(property(get=get_NamingStrategyInstance, put=set_NamingStrategyInstance)) ::Newtonsoft::Json::Serialization::NamingStrategy*  NamingStrategyInstance;

/// @brief [Nullable(new[] { 2, 1 })]
 __declspec(property(get=get_NamingStrategyParameters)) ::ArrayW<::System::Object*>  NamingStrategyParameters;

 __declspec(property(get=get_NamingStrategyType, put=set_NamingStrategyType)) ::System::Type*  NamingStrategyType;

/// @brief Field <ItemConverterParameters>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ItemConverterParameters_k__BackingField, put=__cordl_internal_set__ItemConverterParameters_k__BackingField)) ::ArrayW<::System::Object*>  _ItemConverterParameters_k__BackingField;

/// @brief Field <ItemConverterType>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ItemConverterType_k__BackingField, put=__cordl_internal_set__ItemConverterType_k__BackingField)) ::System::Type*  _ItemConverterType_k__BackingField;

/// @brief Field <NamingStrategyInstance>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__NamingStrategyInstance_k__BackingField, put=__cordl_internal_set__NamingStrategyInstance_k__BackingField)) ::Newtonsoft::Json::Serialization::NamingStrategy*  _NamingStrategyInstance_k__BackingField;

/// @brief Field _isReference, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__isReference, put=__cordl_internal_set__isReference)) ::System::Nullable_1<bool>  _isReference;

/// @brief Field _itemIsReference, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__itemIsReference, put=__cordl_internal_set__itemIsReference)) ::System::Nullable_1<bool>  _itemIsReference;

/// @brief Field _itemReferenceLoopHandling, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__itemReferenceLoopHandling, put=__cordl_internal_set__itemReferenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  _itemReferenceLoopHandling;

/// @brief Field _itemTypeNameHandling, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__itemTypeNameHandling, put=__cordl_internal_set__itemTypeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  _itemTypeNameHandling;

/// @brief Field _namingStrategyParameters, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__namingStrategyParameters, put=__cordl_internal_set__namingStrategyParameters)) ::ArrayW<::System::Object*>  _namingStrategyParameters;

/// @brief Field _namingStrategyType, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__namingStrategyType, put=__cordl_internal_set__namingStrategyType)) ::System::Type*  _namingStrategyType;

static inline ::Newtonsoft::Json::JsonContainerAttribute* New_ctor() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__ItemConverterParameters_k__BackingField() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__ItemConverterParameters_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ItemConverterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ItemConverterType_k__BackingField() ;

constexpr ::Newtonsoft::Json::Serialization::NamingStrategy* const& __cordl_internal_get__NamingStrategyInstance_k__BackingField() const;

constexpr ::Newtonsoft::Json::Serialization::NamingStrategy*& __cordl_internal_get__NamingStrategyInstance_k__BackingField() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isReference() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isReference() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__itemIsReference() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__itemIsReference() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__itemReferenceLoopHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__itemReferenceLoopHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__itemTypeNameHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__itemTypeNameHandling() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__namingStrategyParameters() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__namingStrategyParameters() ;

constexpr ::System::Type* const& __cordl_internal_get__namingStrategyType() const;

constexpr ::System::Type*& __cordl_internal_get__namingStrategyType() ;

constexpr void __cordl_internal_set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__ItemConverterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__NamingStrategyInstance_k__BackingField(::Newtonsoft::Json::Serialization::NamingStrategy*  value) ;

constexpr void __cordl_internal_set__isReference(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__itemIsReference(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  value) ;

constexpr void __cordl_internal_set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  value) ;

constexpr void __cordl_internal_set__namingStrategyParameters(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__namingStrategyType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xa36ea60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ItemConverterParameters, addr 0xa36ea14, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> get_ItemConverterParameters() ;

/// [CompilerGenerated]
/// @brief Method get_ItemConverterType, addr 0xa36ea0c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ItemConverterType() ;

/// [CompilerGenerated]
/// @brief Method get_NamingStrategyInstance, addr 0xa36ea50, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategyInstance() ;

/// @brief Method get_NamingStrategyParameters, addr 0xa36ea48, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> get_NamingStrategyParameters() ;

/// @brief Method get_NamingStrategyType, addr 0xa36ea1c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_NamingStrategyType() ;

/// [CompilerGenerated]
/// @brief Method set_NamingStrategyInstance, addr 0xa36ea58, size 0x8, virtual false, abstract: false, final false
inline void set_NamingStrategyInstance(::Newtonsoft::Json::Serialization::NamingStrategy*  value) ;

/// @brief Method set_NamingStrategyType, addr 0xa36ea24, size 0x24, virtual false, abstract: false, final false
inline void set_NamingStrategyType(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonContainerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonContainerAttribute(JsonContainerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonContainerAttribute(JsonContainerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23087};

/// [CompilerGenerated]
/// @brief Field <ItemConverterType>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____ItemConverterType_k__BackingField;

/// [Nullable(new[] { 2, 1 })]
/// [CompilerGenerated]
/// @brief Field <ItemConverterParameters>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____ItemConverterParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NamingStrategyInstance>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::NamingStrategy*  ____NamingStrategyInstance_k__BackingField;

/// @brief Field _isReference, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____isReference;

/// @brief Field _itemIsReference, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____itemIsReference;

/// @brief Field _itemReferenceLoopHandling, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  ____itemReferenceLoopHandling;

/// @brief Size padding 0x50 - 0x78 = 0x28, packed as 0x28
 uint8_t  _cordl_size_padding[0x28];

/// @brief Field _itemTypeNameHandling, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  ____itemTypeNameHandling;

/// @brief Field _namingStrategyType, offset: 0x68, size: 0x8, def value: None
 ::System::Type*  ____namingStrategyType;

/// [Nullable(new[] { 2, 1 })]
/// @brief Field _namingStrategyParameters, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____namingStrategyParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterParameters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____NamingStrategyInstance_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____isReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemIsReference) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemReferenceLoopHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemTypeNameHandling) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____namingStrategyType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____namingStrategyParameters) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::JsonContainerAttribute) == 0x50, "Size mismatch!");

} // namespace end def Newtonsoft::Json
