#pragma once
// IWYU pragma private; include "GorillaTag/GTOnUnityEditorStartUpAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(GTOnUnityEditorStartUpAttribute)
// Forward declare root types
namespace GorillaTag {
class GTOnUnityEditorStartUpAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::GTOnUnityEditorStartUpAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GTOnUnityEditorStartUpAttribute*, "GorillaTag", "GTOnUnityEditorStartUpAttribute");
// [AttributeUsage((System.AttributeTargets)64)]
// Dependencies System.Attribute
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTOnUnityEditorStartUpAttribute
class CORDL_TYPE GTOnUnityEditorStartUpAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GorillaTag::GTOnUnityEditorStartUpAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5d1f750, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTOnUnityEditorStartUpAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTOnUnityEditorStartUpAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTOnUnityEditorStartUpAttribute(GTOnUnityEditorStartUpAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTOnUnityEditorStartUpAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTOnUnityEditorStartUpAttribute(GTOnUnityEditorStartUpAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GTOnUnityEditorStartUpAttribute) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
