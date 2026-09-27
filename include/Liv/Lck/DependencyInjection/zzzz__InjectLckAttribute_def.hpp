#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/InjectLckAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(InjectLckAttribute)
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class InjectLckAttribute;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::InjectLckAttribute*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::InjectLckAttribute*, "Liv.Lck.DependencyInjection", "InjectLckAttribute");
// [AttributeUsage((System.AttributeTargets)448)]
// Dependencies UnityEngine.PropertyAttribute
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.InjectLckAttribute
class CORDL_TYPE InjectLckAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Liv::Lck::DependencyInjection::InjectLckAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x9d3569c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InjectLckAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InjectLckAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InjectLckAttribute(InjectLckAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InjectLckAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InjectLckAttribute(InjectLckAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::DependencyInjection::InjectLckAttribute) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
