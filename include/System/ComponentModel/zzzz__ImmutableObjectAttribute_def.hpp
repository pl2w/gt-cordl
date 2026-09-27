#pragma once
// IWYU pragma private; include "System/ComponentModel/ImmutableObjectAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImmutableObjectAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ImmutableObjectAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ImmutableObjectAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ImmutableObjectAttribute*, "System.ComponentModel", "ImmutableObjectAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ImmutableObjectAttribute
class CORDL_TYPE ImmutableObjectAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::ImmutableObjectAttribute*  Default;

 __declspec(property(get=get_Immutable)) bool  Immutable;

/// @brief Field No, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No, put=setStaticF_No)) ::System::ComponentModel::ImmutableObjectAttribute*  No;

/// @brief Field Yes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes, put=setStaticF_Yes)) ::System::ComponentModel::ImmutableObjectAttribute*  Yes;

/// @brief Field <Immutable>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Immutable_k__BackingField, put=__cordl_internal_set__Immutable_k__BackingField)) bool  _Immutable_k__BackingField;

/// @brief Method Equals, addr 0xad47894, size 0xe4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad47978, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0xad47980, size 0x68, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::ImmutableObjectAttribute* New_ctor(bool  immutable) ;

constexpr bool const& __cordl_internal_get__Immutable_k__BackingField() const;

constexpr bool& __cordl_internal_get__Immutable_k__BackingField() ;

constexpr void __cordl_internal_set__Immutable_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xad47864, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  immutable) ;

static inline ::System::ComponentModel::ImmutableObjectAttribute* getStaticF_Default() ;

static inline ::System::ComponentModel::ImmutableObjectAttribute* getStaticF_No() ;

static inline ::System::ComponentModel::ImmutableObjectAttribute* getStaticF_Yes() ;

/// [CompilerGenerated]
/// @brief Method get_Immutable, addr 0xad4788c, size 0x8, virtual false, abstract: false, final false
inline bool get_Immutable() ;

static inline void setStaticF_Default(::System::ComponentModel::ImmutableObjectAttribute*  value) ;

static inline void setStaticF_No(::System::ComponentModel::ImmutableObjectAttribute*  value) ;

static inline void setStaticF_Yes(::System::ComponentModel::ImmutableObjectAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmutableObjectAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmutableObjectAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmutableObjectAttribute(ImmutableObjectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmutableObjectAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmutableObjectAttribute(ImmutableObjectAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10106};

/// [CompilerGenerated]
/// @brief Field <Immutable>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Immutable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ImmutableObjectAttribute, ____Immutable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ImmutableObjectAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
