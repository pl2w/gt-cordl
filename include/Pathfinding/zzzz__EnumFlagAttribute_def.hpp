#pragma once
// IWYU pragma private; include "Pathfinding/EnumFlagAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(EnumFlagAttribute)
// Forward declare root types
namespace Pathfinding {
class EnumFlagAttribute;
}
// Write type traits
MARK_REF_T(::Pathfinding::EnumFlagAttribute*);
DEFINE_IL2CPP_CLASS(::Pathfinding::EnumFlagAttribute*, "Pathfinding", "EnumFlagAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EnumFlagAttribute
class CORDL_TYPE EnumFlagAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Pathfinding::EnumFlagAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5eab578, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumFlagAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumFlagAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumFlagAttribute(EnumFlagAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumFlagAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumFlagAttribute(EnumFlagAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::EnumFlagAttribute) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
