#pragma once
// IWYU pragma private; include "Pathfinding/Util/IAstarPooledObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAstarPooledObject)
// Forward declare root types
namespace Pathfinding::Util {
class IAstarPooledObject;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::IAstarPooledObject*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::IAstarPooledObject*, "Pathfinding.Util", "IAstarPooledObject");
// Dependencies 
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.IAstarPooledObject
class CORDL_TYPE IAstarPooledObject {
public:
// Declarations
/// @brief Method OnEnterPool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnterPool() ;

// Ctor Parameters [CppParam { name: "", ty: "IAstarPooledObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAstarPooledObject(IAstarPooledObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21464};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
