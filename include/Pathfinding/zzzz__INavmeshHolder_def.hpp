#pragma once
// IWYU pragma private; include "Pathfinding/INavmeshHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INavmeshHolder)
namespace Pathfinding {
class INavmesh;
}
namespace Pathfinding {
class ITransformedGraph;
}
namespace Pathfinding {
struct Int3;
}
// Forward declare root types
namespace Pathfinding {
class INavmeshHolder;
}
// Write type traits
MARK_REF_T(::Pathfinding::INavmeshHolder*);
DEFINE_IL2CPP_CLASS(::Pathfinding::INavmeshHolder*, "Pathfinding", "INavmeshHolder");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.INavmeshHolder
class CORDL_TYPE INavmeshHolder {
public:
// Declarations
/// @brief Convert operator to "::Pathfinding::INavmesh"
constexpr operator  ::Pathfinding::INavmesh*() noexcept;

/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr operator  ::Pathfinding::ITransformedGraph*() noexcept;

/// @brief Method GetTileCoordinates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetTileCoordinates(int32_t  tileIndex, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z) ;

/// @brief Method GetVertex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Int3 GetVertex(int32_t  i) ;

/// @brief Method GetVertexArrayIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetVertexArrayIndex(int32_t  index) ;

/// @brief Method GetVertexInGraphSpace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Int3 GetVertexInGraphSpace(int32_t  i) ;

/// @brief Convert to "::Pathfinding::INavmesh"
constexpr ::Pathfinding::INavmesh* i___Pathfinding__INavmesh() noexcept;

/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* i___Pathfinding__ITransformedGraph() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INavmeshHolder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INavmeshHolder(INavmeshHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21325};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
