#pragma once
// IWYU pragma private; include "System/ComponentModel/ProvidePropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProvidePropertyAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ProvidePropertyAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ProvidePropertyAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ProvidePropertyAttribute*, "System.ComponentModel", "ProvidePropertyAttribute");
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = true)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ProvidePropertyAttribute
class CORDL_TYPE ProvidePropertyAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_PropertyName)) ::StringW  PropertyName;

 __declspec(property(get=get_ReceiverTypeName)) ::StringW  ReceiverTypeName;

 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

/// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyName_k__BackingField, put=__cordl_internal_set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

/// @brief Field <ReceiverTypeName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReceiverTypeName_k__BackingField, put=__cordl_internal_set__ReceiverTypeName_k__BackingField)) ::StringW  _ReceiverTypeName_k__BackingField;

/// @brief Method Equals, addr 0xad66134, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad661cc, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::ProvidePropertyAttribute* New_ctor(::StringW  propertyName, ::System::Type*  receiverType) ;

static inline ::System::ComponentModel::ProvidePropertyAttribute* New_ctor(::StringW  propertyName, ::StringW  receiverTypeName) ;

constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ReceiverTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ReceiverTypeName_k__BackingField() ;

constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ReceiverTypeName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xad66080, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  propertyName, ::System::Type*  receiverType) ;

/// @brief Method .ctor, addr 0xad660e0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  propertyName, ::StringW  receiverTypeName) ;

/// [CompilerGenerated]
/// @brief Method get_PropertyName, addr 0xad66124, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PropertyName() ;

/// [CompilerGenerated]
/// @brief Method get_ReceiverTypeName, addr 0xad6612c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ReceiverTypeName() ;

/// @brief Method get_TypeId, addr 0xad66214, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* get_TypeId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProvidePropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProvidePropertyAttribute(ProvidePropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProvidePropertyAttribute(ProvidePropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10218};

/// [CompilerGenerated]
/// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PropertyName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ReceiverTypeName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ReceiverTypeName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ProvidePropertyAttribute, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ProvidePropertyAttribute, ____ReceiverTypeName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ProvidePropertyAttribute) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
