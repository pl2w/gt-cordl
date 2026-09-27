#pragma once
// IWYU pragma private; include "System/ComponentModel/PasswordPropertyTextAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PasswordPropertyTextAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class PasswordPropertyTextAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::PasswordPropertyTextAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::PasswordPropertyTextAttribute*, "System.ComponentModel", "PasswordPropertyTextAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.PasswordPropertyTextAttribute
class CORDL_TYPE PasswordPropertyTextAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::PasswordPropertyTextAttribute*  Default;

/// @brief Field No, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No, put=setStaticF_No)) ::System::ComponentModel::PasswordPropertyTextAttribute*  No;

 __declspec(property(get=get_Password)) bool  Password;

/// @brief Field Yes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes, put=setStaticF_Yes)) ::System::ComponentModel::PasswordPropertyTextAttribute*  Yes;

/// @brief Field <Password>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Password_k__BackingField, put=__cordl_internal_set__Password_k__BackingField)) bool  _Password_k__BackingField;

/// @brief Method Equals, addr 0xad627bc, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode, addr 0xad62838, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0xad62840, size 0x68, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::PasswordPropertyTextAttribute* New_ctor() ;

static inline ::System::ComponentModel::PasswordPropertyTextAttribute* New_ctor(bool  password) ;

constexpr bool const& __cordl_internal_get__Password_k__BackingField() const;

constexpr bool& __cordl_internal_get__Password_k__BackingField() ;

constexpr void __cordl_internal_set__Password_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xad62770, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad6278c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  password) ;

static inline ::System::ComponentModel::PasswordPropertyTextAttribute* getStaticF_Default() ;

static inline ::System::ComponentModel::PasswordPropertyTextAttribute* getStaticF_No() ;

static inline ::System::ComponentModel::PasswordPropertyTextAttribute* getStaticF_Yes() ;

/// [CompilerGenerated]
/// @brief Method get_Password, addr 0xad627b4, size 0x8, virtual false, abstract: false, final false
inline bool get_Password() ;

static inline void setStaticF_Default(::System::ComponentModel::PasswordPropertyTextAttribute*  value) ;

static inline void setStaticF_No(::System::ComponentModel::PasswordPropertyTextAttribute*  value) ;

static inline void setStaticF_Yes(::System::ComponentModel::PasswordPropertyTextAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PasswordPropertyTextAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PasswordPropertyTextAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PasswordPropertyTextAttribute(PasswordPropertyTextAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PasswordPropertyTextAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PasswordPropertyTextAttribute(PasswordPropertyTextAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10214};

/// [CompilerGenerated]
/// @brief Field <Password>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Password_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::PasswordPropertyTextAttribute, ____Password_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::PasswordPropertyTextAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
