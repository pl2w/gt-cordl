#pragma once
// IWYU pragma private; include "System/ComponentModel/LocalizableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizableAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class LocalizableAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::LocalizableAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::LocalizableAttribute*, "System.ComponentModel", "LocalizableAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.LocalizableAttribute
class CORDL_TYPE LocalizableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::LocalizableAttribute*  Default;

 __declspec(property(get=get_IsLocalizable)) bool  IsLocalizable;

/// @brief Field No, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No, put=setStaticF_No)) ::System::ComponentModel::LocalizableAttribute*  No;

/// @brief Field Yes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes, put=setStaticF_Yes)) ::System::ComponentModel::LocalizableAttribute*  Yes;

/// @brief Field <IsLocalizable>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLocalizable_k__BackingField, put=__cordl_internal_set__IsLocalizable_k__BackingField)) bool  _IsLocalizable_k__BackingField;

/// @brief Method Equals, addr 0xad47c08, size 0xe4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad47cec, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0xad47cf4, size 0x80, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::LocalizableAttribute* New_ctor(bool  isLocalizable) ;

constexpr bool const& __cordl_internal_get__IsLocalizable_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLocalizable_k__BackingField() ;

constexpr void __cordl_internal_set__IsLocalizable_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xad47bd8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  isLocalizable) ;

static inline ::System::ComponentModel::LocalizableAttribute* getStaticF_Default() ;

static inline ::System::ComponentModel::LocalizableAttribute* getStaticF_No() ;

static inline ::System::ComponentModel::LocalizableAttribute* getStaticF_Yes() ;

/// [CompilerGenerated]
/// @brief Method get_IsLocalizable, addr 0xad47c00, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLocalizable() ;

static inline void setStaticF_Default(::System::ComponentModel::LocalizableAttribute*  value) ;

static inline void setStaticF_No(::System::ComponentModel::LocalizableAttribute*  value) ;

static inline void setStaticF_Yes(::System::ComponentModel::LocalizableAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizableAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizableAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizableAttribute(LocalizableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizableAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizableAttribute(LocalizableAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10109};

/// [CompilerGenerated]
/// @brief Field <IsLocalizable>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsLocalizable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::LocalizableAttribute, ____IsLocalizable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::LocalizableAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
