#pragma once
// IWYU pragma private; include "GlobalNamespace/InlineFoldoutAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InlineFoldoutAttribute)
// Forward declare root types
namespace GlobalNamespace {
class InlineFoldoutAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InlineFoldoutAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InlineFoldoutAttribute*, "", "InlineFoldoutAttribute");
// [Conditional("UNITY_EDITOR")]
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: InlineFoldoutAttribute
class CORDL_TYPE InlineFoldoutAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::InlineFoldoutAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x56466e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InlineFoldoutAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InlineFoldoutAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InlineFoldoutAttribute(InlineFoldoutAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InlineFoldoutAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InlineFoldoutAttribute(InlineFoldoutAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InlineFoldoutAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
