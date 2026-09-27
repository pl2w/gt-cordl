#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonPropertyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class JsonPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::JsonPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JsonPropertyAttribute*, "Meta.WitAi.Json", "JsonPropertyAttribute");
// [AttributeUsage((System.AttributeTargets)384, AllowMultiple = true)]
// Dependencies System.Attribute
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonPropertyAttribute
class CORDL_TYPE JsonPropertyAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(put=set_DefaultValue)) ::System::Object*  DefaultValue;

 __declspec(property(get=get_PropertyName, put=set_PropertyName)) ::StringW  PropertyName;

/// @brief Field <DefaultValue>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultValue_k__BackingField, put=__cordl_internal_set__DefaultValue_k__BackingField)) ::System::Object*  _DefaultValue_k__BackingField;

/// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyName_k__BackingField, put=__cordl_internal_set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

static inline ::Meta::WitAi::Json::JsonPropertyAttribute* New_ctor() ;

static inline ::Meta::WitAi::Json::JsonPropertyAttribute* New_ctor(::StringW  propertyName) ;

constexpr ::System::Object* const& __cordl_internal_get__DefaultValue_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__DefaultValue_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField() ;

constexpr void __cordl_internal_set__DefaultValue_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e442d4, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9e44308, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  propertyName) ;

/// [CompilerGenerated]
/// @brief Method get_PropertyName, addr 0x9e442bc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PropertyName() ;

/// [CompilerGenerated]
/// @brief Method set_DefaultValue, addr 0x9e442cc, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultValue(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PropertyName, addr 0x9e442c4, size 0x8, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31023};

/// [CompilerGenerated]
/// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PropertyName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DefaultValue>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____DefaultValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::JsonPropertyAttribute, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::JsonPropertyAttribute, ____DefaultValue_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::JsonPropertyAttribute) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
