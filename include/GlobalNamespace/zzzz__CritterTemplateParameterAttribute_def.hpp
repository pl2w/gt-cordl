#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterTemplateParameterAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(CritterTemplateParameterAttribute)
// Forward declare root types
namespace GlobalNamespace {
class CritterTemplateParameterAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterTemplateParameterAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterTemplateParameterAttribute*, "", "CritterTemplateParameterAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterTemplateParameterAttribute
class CORDL_TYPE CritterTemplateParameterAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::GlobalNamespace::CritterTemplateParameterAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x56f851c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterTemplateParameterAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterTemplateParameterAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterTemplateParameterAttribute(CritterTemplateParameterAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterTemplateParameterAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterTemplateParameterAttribute(CritterTemplateParameterAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CritterTemplateParameterAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
