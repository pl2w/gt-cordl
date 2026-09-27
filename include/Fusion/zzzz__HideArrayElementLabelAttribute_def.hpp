#pragma once
// IWYU pragma private; include "Fusion/HideArrayElementLabelAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DecoratingPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(HideArrayElementLabelAttribute)
// Forward declare root types
namespace Fusion {
class HideArrayElementLabelAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::HideArrayElementLabelAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::HideArrayElementLabelAttribute*, "Fusion", "HideArrayElementLabelAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies Fusion.DecoratingPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HideArrayElementLabelAttribute
class CORDL_TYPE HideArrayElementLabelAttribute : public ::Fusion::DecoratingPropertyAttribute {
public:
// Declarations
static inline ::Fusion::HideArrayElementLabelAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3d760, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HideArrayElementLabelAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideArrayElementLabelAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HideArrayElementLabelAttribute(HideArrayElementLabelAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideArrayElementLabelAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideArrayElementLabelAttribute(HideArrayElementLabelAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::HideArrayElementLabelAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
