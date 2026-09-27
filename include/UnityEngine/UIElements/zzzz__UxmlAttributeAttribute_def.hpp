#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UxmlAttributeAttribute)
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAttributeAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlAttributeAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlAttributeAttribute*, "UnityEngine.UIElements", "UxmlAttributeAttribute");
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies System.Attribute
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlAttributeAttribute
class CORDL_TYPE UxmlAttributeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field obsoleteNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_obsoleteNames, put=__cordl_internal_set_obsoleteNames)) ::ArrayW<::StringW>  obsoleteNames;

static inline ::UnityEngine::UIElements::UxmlAttributeAttribute* New_ctor() ;

static inline ::UnityEngine::UIElements::UxmlAttributeAttribute* New_ctor(::StringW  name) ;

static inline ::UnityEngine::UIElements::UxmlAttributeAttribute* New_ctor(::StringW  name, /* [ParamArray] */ ::ArrayW<::StringW>  obsoleteNames) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_obsoleteNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_obsoleteNames() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_obsoleteNames(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb7b70f8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb7b7148, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0xb7b7104, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, /* [ParamArray] */ ::ArrayW<::StringW>  obsoleteNames) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlAttributeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlAttributeAttribute(UxmlAttributeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlAttributeAttribute(UxmlAttributeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8394};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field obsoleteNames, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___obsoleteNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeAttribute, ___obsoleteNames) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlAttributeAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
