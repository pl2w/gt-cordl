#pragma once
// IWYU pragma private; include "System/ComponentModel/LookupBindingPropertiesAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LookupBindingPropertiesAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class LookupBindingPropertiesAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::LookupBindingPropertiesAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::LookupBindingPropertiesAttribute*, "System.ComponentModel", "LookupBindingPropertiesAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.LookupBindingPropertiesAttribute
class CORDL_TYPE LookupBindingPropertiesAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_DataSource)) ::StringW  DataSource;

/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::LookupBindingPropertiesAttribute*  Default;

 __declspec(property(get=get_DisplayMember)) ::StringW  DisplayMember;

 __declspec(property(get=get_LookupMember)) ::StringW  LookupMember;

 __declspec(property(get=get_ValueMember)) ::StringW  ValueMember;

/// @brief Field <DataSource>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DataSource_k__BackingField, put=__cordl_internal_set__DataSource_k__BackingField)) ::StringW  _DataSource_k__BackingField;

/// @brief Field <DisplayMember>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisplayMember_k__BackingField, put=__cordl_internal_set__DisplayMember_k__BackingField)) ::StringW  _DisplayMember_k__BackingField;

/// @brief Field <LookupMember>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__LookupMember_k__BackingField, put=__cordl_internal_set__LookupMember_k__BackingField)) ::StringW  _LookupMember_k__BackingField;

/// @brief Field <ValueMember>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ValueMember_k__BackingField, put=__cordl_internal_set__ValueMember_k__BackingField)) ::StringW  _ValueMember_k__BackingField;

/// @brief Method Equals, addr 0xad5ba30, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad5bae0, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::LookupBindingPropertiesAttribute* New_ctor() ;

static inline ::System::ComponentModel::LookupBindingPropertiesAttribute* New_ctor(::StringW  dataSource, ::StringW  displayMember, ::StringW  valueMember, ::StringW  lookupMember) ;

constexpr ::StringW const& __cordl_internal_get__DataSource_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DataSource_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DisplayMember_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DisplayMember_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__LookupMember_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LookupMember_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ValueMember_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ValueMember_k__BackingField() ;

constexpr void __cordl_internal_set__DataSource_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DisplayMember_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__LookupMember_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ValueMember_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xad5b948, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad5b99c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  dataSource, ::StringW  displayMember, ::StringW  valueMember, ::StringW  lookupMember) ;

static inline ::System::ComponentModel::LookupBindingPropertiesAttribute* getStaticF_Default() ;

/// [CompilerGenerated]
/// @brief Method get_DataSource, addr 0xad5ba10, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DataSource() ;

/// [CompilerGenerated]
/// @brief Method get_DisplayMember, addr 0xad5ba18, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayMember() ;

/// [CompilerGenerated]
/// @brief Method get_LookupMember, addr 0xad5ba28, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LookupMember() ;

/// [CompilerGenerated]
/// @brief Method get_ValueMember, addr 0xad5ba20, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ValueMember() ;

static inline void setStaticF_Default(::System::ComponentModel::LookupBindingPropertiesAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LookupBindingPropertiesAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LookupBindingPropertiesAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LookupBindingPropertiesAttribute(LookupBindingPropertiesAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LookupBindingPropertiesAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LookupBindingPropertiesAttribute(LookupBindingPropertiesAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10203};

/// [CompilerGenerated]
/// @brief Field <DataSource>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____DataSource_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DisplayMember>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____DisplayMember_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ValueMember>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____ValueMember_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LookupMember>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____LookupMember_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____DataSource_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____DisplayMember_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____ValueMember_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LookupBindingPropertiesAttribute, ____LookupMember_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::LookupBindingPropertiesAttribute) == 0x30, "Size mismatch!");

} // namespace end def System::ComponentModel
