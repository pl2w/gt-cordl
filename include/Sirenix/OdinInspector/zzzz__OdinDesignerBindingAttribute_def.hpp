#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/OdinDesignerBindingAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OdinDesignerBindingAttribute)
// Forward declare root types
namespace Sirenix::OdinInspector {
class OdinDesignerBindingAttribute;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::OdinDesignerBindingAttribute*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::OdinDesignerBindingAttribute*, "Sirenix.OdinInspector", "OdinDesignerBindingAttribute");
// Dependencies System.Attribute
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.OdinDesignerBindingAttribute
class CORDL_TYPE OdinDesignerBindingAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field MemberNames, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MemberNames, put=__cordl_internal_set_MemberNames)) ::ArrayW<::StringW>  MemberNames;

static inline ::Sirenix::OdinInspector::OdinDesignerBindingAttribute* New_ctor(/* [ParamArray] */ ::ArrayW<::StringW>  memberNames) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_MemberNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_MemberNames() ;

constexpr void __cordl_internal_set_MemberNames(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xa84e70c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::StringW>  memberNames) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OdinDesignerBindingAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OdinDesignerBindingAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OdinDesignerBindingAttribute(OdinDesignerBindingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OdinDesignerBindingAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OdinDesignerBindingAttribute(OdinDesignerBindingAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33044};

/// @brief Field MemberNames, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___MemberNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Sirenix::OdinInspector::OdinDesignerBindingAttribute, ___MemberNames) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Sirenix::OdinInspector::OdinDesignerBindingAttribute) == 0x18, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector
