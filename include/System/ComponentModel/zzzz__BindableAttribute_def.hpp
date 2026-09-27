#pragma once
// IWYU pragma private; include "System/ComponentModel/BindableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BindingDirection_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindableAttribute)
namespace System::ComponentModel {
struct BindableSupport;
}
namespace System::ComponentModel {
struct BindingDirection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class BindableAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::BindableAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::BindableAttribute*, "System.ComponentModel", "BindableAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute, System.ComponentModel.BindingDirection
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.BindableAttribute
class CORDL_TYPE BindableAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Bindable)) bool  Bindable;

/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::BindableAttribute*  Default;

 __declspec(property(get=get_Direction)) ::System::ComponentModel::BindingDirection  Direction;

/// @brief Field No, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No, put=setStaticF_No)) ::System::ComponentModel::BindableAttribute*  No;

/// @brief Field Yes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes, put=setStaticF_Yes)) ::System::ComponentModel::BindableAttribute*  Yes;

/// @brief Field <Bindable>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__Bindable_k__BackingField, put=__cordl_internal_set__Bindable_k__BackingField)) bool  _Bindable_k__BackingField;

/// @brief Field <Direction>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Direction_k__BackingField, put=__cordl_internal_set__Direction_k__BackingField)) ::System::ComponentModel::BindingDirection  _Direction_k__BackingField;

/// @brief Field _isDefault, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDefault, put=__cordl_internal_set__isDefault)) bool  _isDefault;

/// @brief Method Equals, addr 0xad4ac74, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad4ad00, size 0x38, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0xad4ad38, size 0x84, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::BindableAttribute* New_ctor(bool  bindable) ;

static inline ::System::ComponentModel::BindableAttribute* New_ctor(bool  bindable, ::System::ComponentModel::BindingDirection  direction) ;

static inline ::System::ComponentModel::BindableAttribute* New_ctor(::System::ComponentModel::BindableSupport  flags) ;

static inline ::System::ComponentModel::BindableAttribute* New_ctor(::System::ComponentModel::BindableSupport  flags, ::System::ComponentModel::BindingDirection  direction) ;

constexpr bool const& __cordl_internal_get__Bindable_k__BackingField() const;

constexpr bool& __cordl_internal_get__Bindable_k__BackingField() ;

constexpr ::System::ComponentModel::BindingDirection const& __cordl_internal_get__Direction_k__BackingField() const;

constexpr ::System::ComponentModel::BindingDirection& __cordl_internal_get__Direction_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isDefault() const;

constexpr bool& __cordl_internal_get__isDefault() ;

constexpr void __cordl_internal_set__Bindable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Direction_k__BackingField(::System::ComponentModel::BindingDirection  value) ;

constexpr void __cordl_internal_set__isDefault(bool  value) ;

/// @brief Method .ctor, addr 0xad4ab84, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(bool  bindable) ;

/// @brief Method .ctor, addr 0xad4abb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  bindable, ::System::ComponentModel::BindingDirection  direction) ;

/// @brief Method .ctor, addr 0xad4abe0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::BindableSupport  flags) ;

/// @brief Method .ctor, addr 0xad4ac20, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::BindableSupport  flags, ::System::ComponentModel::BindingDirection  direction) ;

static inline ::System::ComponentModel::BindableAttribute* getStaticF_Default() ;

static inline ::System::ComponentModel::BindableAttribute* getStaticF_No() ;

static inline ::System::ComponentModel::BindableAttribute* getStaticF_Yes() ;

/// [CompilerGenerated]
/// @brief Method get_Bindable, addr 0xad4ac64, size 0x8, virtual false, abstract: false, final false
inline bool get_Bindable() ;

/// [CompilerGenerated]
/// @brief Method get_Direction, addr 0xad4ac6c, size 0x8, virtual false, abstract: false, final false
inline ::System::ComponentModel::BindingDirection get_Direction() ;

static inline void setStaticF_Default(::System::ComponentModel::BindableAttribute*  value) ;

static inline void setStaticF_No(::System::ComponentModel::BindableAttribute*  value) ;

static inline void setStaticF_Yes(::System::ComponentModel::BindableAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindableAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindableAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindableAttribute(BindableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindableAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindableAttribute(BindableAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10122};

/// @brief Field _isDefault, offset: 0x10, size: 0x1, def value: None
 bool  ____isDefault;

/// [CompilerGenerated]
/// @brief Field <Bindable>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____Bindable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Direction>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::System::ComponentModel::BindingDirection  ____Direction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::BindableAttribute, ____isDefault) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BindableAttribute, ____Bindable_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BindableAttribute, ____Direction_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::BindableAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
