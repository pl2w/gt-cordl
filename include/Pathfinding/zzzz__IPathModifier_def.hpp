#pragma once
// IWYU pragma private; include "Pathfinding/IPathModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPathModifier)
namespace Pathfinding {
class Path;
}
// Forward declare root types
namespace Pathfinding {
class IPathModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::IPathModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IPathModifier*, "Pathfinding", "IPathModifier");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IPathModifier
class CORDL_TYPE IPathModifier {
public:
// Declarations
 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Apply(::Pathfinding::Path*  path) ;

/// @brief Method PreProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PreProcess(::Pathfinding::Path*  path) ;

/// @brief Method get_Order, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Order() ;

// Ctor Parameters [CppParam { name: "", ty: "IPathModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPathModifier(IPathModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
