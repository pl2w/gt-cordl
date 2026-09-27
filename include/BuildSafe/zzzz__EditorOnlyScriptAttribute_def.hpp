#pragma once
// IWYU pragma private; include "BuildSafe/EditorOnlyScriptAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(EditorOnlyScriptAttribute)
// Forward declare root types
namespace BuildSafe {
class EditorOnlyScriptAttribute;
}
// Write type traits
MARK_REF_T(::BuildSafe::EditorOnlyScriptAttribute*);
DEFINE_IL2CPP_CLASS(::BuildSafe::EditorOnlyScriptAttribute*, "BuildSafe", "EditorOnlyScriptAttribute");
// [Conditional("UNITY_EDITOR")]
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.EditorOnlyScriptAttribute
class CORDL_TYPE EditorOnlyScriptAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::BuildSafe::EditorOnlyScriptAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5c4ec8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorOnlyScriptAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorOnlyScriptAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorOnlyScriptAttribute(EditorOnlyScriptAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorOnlyScriptAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorOnlyScriptAttribute(EditorOnlyScriptAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4249};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::EditorOnlyScriptAttribute) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
