#pragma once
// IWYU pragma private; include "System/ComponentModel/DataObjectFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataObjectFieldAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DataObjectFieldAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::DataObjectFieldAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::DataObjectFieldAttribute*, "System.ComponentModel", "DataObjectFieldAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DataObjectFieldAttribute
class CORDL_TYPE DataObjectFieldAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_IsIdentity)) bool  IsIdentity;

 __declspec(property(get=get_IsNullable)) bool  IsNullable;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_PrimaryKey)) bool  PrimaryKey;

/// @brief Field <IsIdentity>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsIdentity_k__BackingField, put=__cordl_internal_set__IsIdentity_k__BackingField)) bool  _IsIdentity_k__BackingField;

/// @brief Field <IsNullable>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsNullable_k__BackingField, put=__cordl_internal_set__IsNullable_k__BackingField)) bool  _IsNullable_k__BackingField;

/// @brief Field <Length>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length_k__BackingField, put=__cordl_internal_set__Length_k__BackingField)) int32_t  _Length_k__BackingField;

/// @brief Field <PrimaryKey>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__PrimaryKey_k__BackingField, put=__cordl_internal_set__PrimaryKey_k__BackingField)) bool  _PrimaryKey_k__BackingField;

/// @brief Method Equals, addr 0xad52d34, size 0xdc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad52e10, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool  primaryKey) ;

static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool  primaryKey, bool  isIdentity) ;

static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool  primaryKey, bool  isIdentity, bool  isNullable) ;

static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool  primaryKey, bool  isIdentity, bool  isNullable, int32_t  length) ;

constexpr bool const& __cordl_internal_get__IsIdentity_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsIdentity_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsNullable_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsNullable_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Length_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PrimaryKey_k__BackingField() const;

constexpr bool& __cordl_internal_get__PrimaryKey_k__BackingField() ;

constexpr void __cordl_internal_set__IsIdentity_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsNullable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Length_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__PrimaryKey_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xad52c14, size 0x34, virtual false, abstract: false, final false
inline void _ctor(bool  primaryKey) ;

/// @brief Method .ctor, addr 0xad52c90, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(bool  primaryKey, bool  isIdentity) ;

/// @brief Method .ctor, addr 0xad52ccc, size 0x48, virtual false, abstract: false, final false
inline void _ctor(bool  primaryKey, bool  isIdentity, bool  isNullable) ;

/// @brief Method .ctor, addr 0xad52c48, size 0x48, virtual false, abstract: false, final false
inline void _ctor(bool  primaryKey, bool  isIdentity, bool  isNullable, int32_t  length) ;

/// [CompilerGenerated]
/// @brief Method get_IsIdentity, addr 0xad52d14, size 0x8, virtual false, abstract: false, final false
inline bool get_IsIdentity() ;

/// [CompilerGenerated]
/// @brief Method get_IsNullable, addr 0xad52d1c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsNullable() ;

/// [CompilerGenerated]
/// @brief Method get_Length, addr 0xad52d24, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method get_PrimaryKey, addr 0xad52d2c, size 0x8, virtual false, abstract: false, final false
inline bool get_PrimaryKey() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataObjectFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataObjectFieldAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataObjectFieldAttribute(DataObjectFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataObjectFieldAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataObjectFieldAttribute(DataObjectFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10141};

/// [CompilerGenerated]
/// @brief Field <IsIdentity>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsIdentity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsNullable>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____IsNullable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Length>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Length_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PrimaryKey>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____PrimaryKey_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____IsIdentity_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____IsNullable_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____Length_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____PrimaryKey_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::DataObjectFieldAttribute) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
