#pragma once
// IWYU pragma private; include "KID/Model/AbstractOpenAPISchema.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AbstractOpenAPISchema)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System {
class Object;
}
// Forward declare root types
namespace KID::Model {
class AbstractOpenAPISchema;
}
// Write type traits
MARK_REF_T(::KID::Model::AbstractOpenAPISchema*);
DEFINE_IL2CPP_CLASS(::KID::Model::AbstractOpenAPISchema*, "KID.Model", "AbstractOpenAPISchema");
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.AbstractOpenAPISchema
class CORDL_TYPE AbstractOpenAPISchema : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActualInstance, put=set_ActualInstance)) ::System::Object*  ActualInstance;

/// @brief Field AdditionalPropertiesSerializerSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AdditionalPropertiesSerializerSettings, put=setStaticF_AdditionalPropertiesSerializerSettings)) ::Newtonsoft::Json::JsonSerializerSettings*  AdditionalPropertiesSerializerSettings;

 __declspec(property(get=get_IsNullable, put=set_IsNullable)) bool  IsNullable;

 __declspec(property(get=get_SchemaType, put=set_SchemaType)) ::StringW  SchemaType;

/// @brief Field SerializerSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SerializerSettings, put=setStaticF_SerializerSettings)) ::Newtonsoft::Json::JsonSerializerSettings*  SerializerSettings;

/// @brief Field <IsNullable>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsNullable_k__BackingField, put=__cordl_internal_set__IsNullable_k__BackingField)) bool  _IsNullable_k__BackingField;

/// @brief Field <SchemaType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__SchemaType_k__BackingField, put=__cordl_internal_set__SchemaType_k__BackingField)) ::StringW  _SchemaType_k__BackingField;

static inline ::KID::Model::AbstractOpenAPISchema* New_ctor() ;

/// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW ToJson() ;

constexpr bool const& __cordl_internal_get__IsNullable_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsNullable_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__SchemaType_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__SchemaType_k__BackingField() ;

constexpr void __cordl_internal_set__IsNullable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SchemaType_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9cd2ca0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_AdditionalPropertiesSerializerSettings() ;

static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_SerializerSettings() ;

/// @brief Method get_ActualInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_ActualInstance() ;

/// [CompilerGenerated]
/// @brief Method get_IsNullable, addr 0x9cd2c80, size 0x8, virtual false, abstract: false, final false
inline bool get_IsNullable() ;

/// [CompilerGenerated]
/// @brief Method get_SchemaType, addr 0x9cd2c90, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SchemaType() ;

static inline void setStaticF_AdditionalPropertiesSerializerSettings(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

static inline void setStaticF_SerializerSettings(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

/// @brief Method set_ActualInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ActualInstance(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsNullable, addr 0x9cd2c88, size 0x8, virtual false, abstract: false, final false
inline void set_IsNullable(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SchemaType, addr 0x9cd2c98, size 0x8, virtual false, abstract: false, final false
inline void set_SchemaType(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractOpenAPISchema() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractOpenAPISchema", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractOpenAPISchema(AbstractOpenAPISchema && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractOpenAPISchema", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractOpenAPISchema(AbstractOpenAPISchema const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31052};

/// [CompilerGenerated]
/// @brief Field <IsNullable>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsNullable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SchemaType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____SchemaType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::AbstractOpenAPISchema, ____IsNullable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AbstractOpenAPISchema, ____SchemaType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::AbstractOpenAPISchema) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
