#pragma once
// IWYU pragma private; include "Meta/Conduit/InvocationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InvocationContext)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::Conduit {
class InvocationContext;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::InvocationContext*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::InvocationContext*, "Meta.Conduit", "InvocationContext");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.InvocationContext
class CORDL_TYPE InvocationContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CustomAttributeType, put=set_CustomAttributeType)) ::System::Type*  CustomAttributeType;

 __declspec(property(get=get_MaxConfidence, put=set_MaxConfidence)) float_t  MaxConfidence;

 __declspec(property(get=get_MethodInfo, put=set_MethodInfo)) ::System::Reflection::MethodInfo*  MethodInfo;

 __declspec(property(get=get_MinConfidence, put=set_MinConfidence)) float_t  MinConfidence;

 __declspec(property(get=get_ParameterMap, put=set_ParameterMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ParameterMap;

 __declspec(property(get=get_Type, put=set_Type)) ::System::Type*  Type;

 __declspec(property(get=get_ValidatePartial, put=set_ValidatePartial)) bool  ValidatePartial;

/// @brief Field <CustomAttributeType>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__CustomAttributeType_k__BackingField, put=__cordl_internal_set__CustomAttributeType_k__BackingField)) ::System::Type*  _CustomAttributeType_k__BackingField;

/// @brief Field <MaxConfidence>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxConfidence_k__BackingField, put=__cordl_internal_set__MaxConfidence_k__BackingField)) float_t  _MaxConfidence_k__BackingField;

/// @brief Field <MethodInfo>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__MethodInfo_k__BackingField, put=__cordl_internal_set__MethodInfo_k__BackingField)) ::System::Reflection::MethodInfo*  _MethodInfo_k__BackingField;

/// @brief Field <MinConfidence>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinConfidence_k__BackingField, put=__cordl_internal_set__MinConfidence_k__BackingField)) float_t  _MinConfidence_k__BackingField;

/// @brief Field <ParameterMap>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParameterMap_k__BackingField, put=__cordl_internal_set__ParameterMap_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _ParameterMap_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::System::Type*  _Type_k__BackingField;

/// @brief Field <ValidatePartial>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__ValidatePartial_k__BackingField, put=__cordl_internal_set__ValidatePartial_k__BackingField)) bool  _ValidatePartial_k__BackingField;

static inline ::Meta::Conduit::InvocationContext* New_ctor() ;

constexpr ::System::Type* const& __cordl_internal_get__CustomAttributeType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__CustomAttributeType_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxConfidence_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxConfidence_k__BackingField() ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__MethodInfo_k__BackingField() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__MethodInfo_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MinConfidence_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MinConfidence_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__ParameterMap_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__ParameterMap_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ValidatePartial_k__BackingField() const;

constexpr bool& __cordl_internal_get__ValidatePartial_k__BackingField() ;

constexpr void __cordl_internal_set__CustomAttributeType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__MaxConfidence_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MethodInfo_k__BackingField(::System::Reflection::MethodInfo*  value) ;

constexpr void __cordl_internal_set__MinConfidence_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ParameterMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__ValidatePartial_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x9e1f218, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CustomAttributeType, addr 0x9e1f208, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_CustomAttributeType() ;

/// [CompilerGenerated]
/// @brief Method get_MaxConfidence, addr 0x9e1f1d8, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_MethodInfo, addr 0x9e1f1b8, size 0x8, virtual false, abstract: false, final false
inline ::System::Reflection::MethodInfo* get_MethodInfo() ;

/// [CompilerGenerated]
/// @brief Method get_MinConfidence, addr 0x9e1f1c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_ParameterMap, addr 0x9e1f1f8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_ParameterMap() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x9e1f1a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

/// [CompilerGenerated]
/// @brief Method get_ValidatePartial, addr 0x9e1f1e8, size 0x8, virtual false, abstract: false, final false
inline bool get_ValidatePartial() ;

/// [CompilerGenerated]
/// @brief Method set_CustomAttributeType, addr 0x9e1f210, size 0x8, virtual false, abstract: false, final false
inline void set_CustomAttributeType(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxConfidence, addr 0x9e1f1e0, size 0x8, virtual false, abstract: false, final false
inline void set_MaxConfidence(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MethodInfo, addr 0x9e1f1c0, size 0x8, virtual false, abstract: false, final false
inline void set_MethodInfo(::System::Reflection::MethodInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MinConfidence, addr 0x9e1f1d0, size 0x8, virtual false, abstract: false, final false
inline void set_MinConfidence(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ParameterMap, addr 0x9e1f200, size 0x8, virtual false, abstract: false, final false
inline void set_ParameterMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0x9e1f1b0, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ValidatePartial, addr 0x9e1f1f0, size 0x8, virtual false, abstract: false, final false
inline void set_ValidatePartial(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvocationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvocationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvocationContext(InvocationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvocationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvocationContext(InvocationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25414};

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MethodInfo>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ____MethodInfo_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MinConfidence>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____MinConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxConfidence>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____MaxConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ValidatePartial>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____ValidatePartial_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ParameterMap>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____ParameterMap_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CustomAttributeType>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Type*  ____CustomAttributeType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::InvocationContext, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContext, ____MethodInfo_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContext, ____MinConfidence_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContext, ____MaxConfidence_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContext, ____ValidatePartial_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContext, ____ParameterMap_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContext, ____CustomAttributeType_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::InvocationContext) == 0x40, "Size mismatch!");

} // namespace end def Meta::Conduit
