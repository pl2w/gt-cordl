#pragma once
// IWYU pragma private; include "Oculus/Interaction/InterfaceAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InterfaceAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Oculus::Interaction {
class InterfaceAttribute;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InterfaceAttribute*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InterfaceAttribute*, "Oculus.Interaction", "InterfaceAttribute");
// [AttributeUsage((System.AttributeTargets)256, AllowMultiple = false)]
// Dependencies System.Type, UnityEngine.PropertyAttribute
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InterfaceAttribute
class CORDL_TYPE InterfaceAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field TypeFromFieldName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypeFromFieldName, put=__cordl_internal_set_TypeFromFieldName)) ::StringW  TypeFromFieldName;

/// @brief Field Types, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Types, put=__cordl_internal_set_Types)) ::ArrayW<::System::Type*>  Types;

static inline ::Oculus::Interaction::InterfaceAttribute* New_ctor(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

static inline ::Oculus::Interaction::InterfaceAttribute* New_ctor(::StringW  typeFromFieldName) ;

constexpr ::StringW const& __cordl_internal_get_TypeFromFieldName() const;

constexpr ::StringW& __cordl_internal_get_TypeFromFieldName() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get_Types() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get_Types() ;

constexpr void __cordl_internal_set_TypeFromFieldName(::StringW  value) ;

constexpr void __cordl_internal_set_Types(::ArrayW<::System::Type*>  value) ;

/// @brief Method .ctor, addr 0xa48e720, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

/// @brief Method .ctor, addr 0xa48e870, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  typeFromFieldName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InterfaceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InterfaceAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InterfaceAttribute(InterfaceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InterfaceAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InterfaceAttribute(InterfaceAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16047};

/// @brief Field Types, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ___Types;

/// @brief Field TypeFromFieldName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TypeFromFieldName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InterfaceAttribute, ___Types) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InterfaceAttribute, ___TypeFromFieldName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InterfaceAttribute) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
