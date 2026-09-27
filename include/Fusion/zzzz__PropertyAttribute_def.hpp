#pragma once
// IWYU pragma private; include "Fusion/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(PropertyAttribute)
// Forward declare root types
namespace Fusion {
class PropertyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::PropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::PropertyAttribute*, "Fusion", "PropertyAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies UnityEngine.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.PropertyAttribute
class CORDL_TYPE PropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Fusion::PropertyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f39000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyAttribute(PropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyAttribute(PropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31260};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::PropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
