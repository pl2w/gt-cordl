#pragma once
// IWYU pragma private; include "Pathfinding/FunnelModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__MonoModifier_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FunnelModifier)
namespace Pathfinding {
class Path;
}
// Forward declare root types
namespace Pathfinding {
class FunnelModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::FunnelModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::FunnelModifier*, "Pathfinding", "FunnelModifier");
// [AddComponentMenu("Pathfinding/Modifiers/Funnel")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_funnel_modifier.php")]
// Dependencies Pathfinding.MonoModifier
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.FunnelModifier
class CORDL_TYPE FunnelModifier : public ::Pathfinding::MonoModifier {
public:
// Declarations
 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field splitAtEveryPortal, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_splitAtEveryPortal, put=__cordl_internal_set_splitAtEveryPortal)) bool  splitAtEveryPortal;

/// @brief Field unwrap, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_unwrap, put=__cordl_internal_set_unwrap)) bool  unwrap;

/// @brief Method Apply, addr 0x5ea0c84, size 0x3e8, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::Path*  p) ;

static inline ::Pathfinding::FunnelModifier* New_ctor() ;

constexpr bool const& __cordl_internal_get_splitAtEveryPortal() const;

constexpr bool& __cordl_internal_get_splitAtEveryPortal() ;

constexpr bool const& __cordl_internal_get_unwrap() const;

constexpr bool& __cordl_internal_get_unwrap() ;

constexpr void __cordl_internal_set_splitAtEveryPortal(bool  value) ;

constexpr void __cordl_internal_set_unwrap(bool  value) ;

/// @brief Method .ctor, addr 0x5ea106c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x5ea0c7c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Order() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FunnelModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FunnelModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FunnelModifier(FunnelModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FunnelModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FunnelModifier(FunnelModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21363};

/// @brief Field unwrap, offset: 0x30, size: 0x1, def value: None
 bool  ___unwrap;

/// @brief Field splitAtEveryPortal, offset: 0x31, size: 0x1, def value: None
 bool  ___splitAtEveryPortal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::FunnelModifier, ___unwrap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::FunnelModifier, ___splitAtEveryPortal) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::FunnelModifier) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
