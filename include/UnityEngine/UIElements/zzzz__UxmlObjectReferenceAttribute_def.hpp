#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectReferenceAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UxmlObjectReferenceAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlObjectReferenceAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlObjectReferenceAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlObjectReferenceAttribute*, "UnityEngine.UIElements", "UxmlObjectReferenceAttribute");
// [AttributeUsage((System.AttributeTargets)384, Inherited = false)]
// Dependencies System.Attribute, System.Type
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectReferenceAttribute
class CORDL_TYPE UxmlObjectReferenceAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field types, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_types, put=__cordl_internal_set_types)) ::ArrayW<::System::Type*>  types;

static inline ::UnityEngine::UIElements::UxmlObjectReferenceAttribute* New_ctor() ;

static inline ::UnityEngine::UIElements::UxmlObjectReferenceAttribute* New_ctor(::StringW  uxmlName) ;

static inline ::UnityEngine::UIElements::UxmlObjectReferenceAttribute* New_ctor(::StringW  uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*>  acceptedTypes) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get_types() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get_types() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_types(::ArrayW<::System::Type*>  value) ;

/// @brief Method .ctor, addr 0xb7b7160, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb7b71b0, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::StringW  uxmlName) ;

/// @brief Method .ctor, addr 0xb7b716c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*>  acceptedTypes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlObjectReferenceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlObjectReferenceAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlObjectReferenceAttribute(UxmlObjectReferenceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlObjectReferenceAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlObjectReferenceAttribute(UxmlObjectReferenceAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8397};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field types, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ___types;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlObjectReferenceAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlObjectReferenceAttribute, ___types) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlObjectReferenceAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
