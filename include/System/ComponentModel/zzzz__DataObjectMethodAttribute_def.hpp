#pragma once
// IWYU pragma private; include "System/ComponentModel/DataObjectMethodAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__DataObjectMethodType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataObjectMethodAttribute)
namespace System::ComponentModel {
struct DataObjectMethodType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DataObjectMethodAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::DataObjectMethodAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::DataObjectMethodAttribute*, "System.ComponentModel", "DataObjectMethodAttribute");
// [AttributeUsage((System.AttributeTargets)64)]
// Dependencies System.Attribute, System.ComponentModel.DataObjectMethodType
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DataObjectMethodAttribute
class CORDL_TYPE DataObjectMethodAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_MethodType)) ::System::ComponentModel::DataObjectMethodType  MethodType;

/// @brief Field <IsDefault>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDefault_k__BackingField, put=__cordl_internal_set__IsDefault_k__BackingField)) bool  _IsDefault_k__BackingField;

/// @brief Field <MethodType>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__MethodType_k__BackingField, put=__cordl_internal_set__MethodType_k__BackingField)) ::System::ComponentModel::DataObjectMethodType  _MethodType_k__BackingField;

/// @brief Method Equals, addr 0xad52e84, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad52f20, size 0x68, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Match, addr 0xad52f88, size 0x80, virtual true, abstract: false, final false
inline bool Match(::System::Object*  obj) ;

static inline ::System::ComponentModel::DataObjectMethodAttribute* New_ctor(::System::ComponentModel::DataObjectMethodType  methodType) ;

static inline ::System::ComponentModel::DataObjectMethodAttribute* New_ctor(::System::ComponentModel::DataObjectMethodType  methodType, bool  isDefault) ;

constexpr bool const& __cordl_internal_get__IsDefault_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDefault_k__BackingField() ;

constexpr ::System::ComponentModel::DataObjectMethodType const& __cordl_internal_get__MethodType_k__BackingField() const;

constexpr ::System::ComponentModel::DataObjectMethodType& __cordl_internal_get__MethodType_k__BackingField() ;

constexpr void __cordl_internal_set__IsDefault_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MethodType_k__BackingField(::System::ComponentModel::DataObjectMethodType  value) ;

/// @brief Method .ctor, addr 0xad52e18, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::DataObjectMethodType  methodType) ;

/// @brief Method .ctor, addr 0xad52e44, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::DataObjectMethodType  methodType, bool  isDefault) ;

/// [CompilerGenerated]
/// @brief Method get_IsDefault, addr 0xad52e74, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

/// [CompilerGenerated]
/// @brief Method get_MethodType, addr 0xad52e7c, size 0x8, virtual false, abstract: false, final false
inline ::System::ComponentModel::DataObjectMethodType get_MethodType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataObjectMethodAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataObjectMethodAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataObjectMethodAttribute(DataObjectMethodAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataObjectMethodAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataObjectMethodAttribute(DataObjectMethodAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10142};

/// [CompilerGenerated]
/// @brief Field <IsDefault>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsDefault_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MethodType>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::System::ComponentModel::DataObjectMethodType  ____MethodType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DataObjectMethodAttribute, ____IsDefault_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectMethodAttribute, ____MethodType_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::DataObjectMethodAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
