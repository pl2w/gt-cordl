#pragma once
// IWYU pragma private; include "Pathfinding/Util/RetainedGizmos_Hasher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RetainedGizmos_Hasher)
namespace GlobalNamespace {
class AstarPath;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class PathHandler;
}
// Forward declare root types
namespace GlobalNamespace {
struct RetainedGizmos_Hasher;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RetainedGizmos_Hasher);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RetainedGizmos_Hasher, "Pathfinding.Util", "RetainedGizmos/Hasher");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Util.RetainedGizmos/Hasher
struct CORDL_TYPE RetainedGizmos_Hasher {
public:
// Declarations
 __declspec(property(get=get_Hash)) uint64_t  Hash;

/// @brief Method AddHash, addr 0x5ee0fec, size 0x20, virtual false, abstract: false, final false
inline void AddHash(int32_t  hash) ;

/// @brief Method HashNode, addr 0x5ee1b9c, size 0x104, virtual false, abstract: false, final false
inline void HashNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method .ctor, addr 0x5ee1a6c, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  active) ;

/// @brief Method get_Hash, addr 0x5ee1ca0, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Hash() ;

// Ctor Parameters []
// @brief default ctor
constexpr RetainedGizmos_Hasher() ;

// Ctor Parameters [CppParam { name: "hash", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "includePathSearchInfo", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "includeAreaInfo", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "debugData", ty: "::Pathfinding::PathHandler*", modifiers: "", def_value: None, comment: None }]
constexpr RetainedGizmos_Hasher(uint64_t  hash, bool  includePathSearchInfo, bool  includeAreaInfo, ::Pathfinding::PathHandler*  debugData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21488};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hash, offset: 0x0, size: 0x8, def value: None
 uint64_t  hash;

/// @brief Field includePathSearchInfo, offset: 0x8, size: 0x1, def value: None
 bool  includePathSearchInfo;

/// @brief Field includeAreaInfo, offset: 0x9, size: 0x1, def value: None
 bool  includeAreaInfo;

/// @brief Field debugData, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::PathHandler*  debugData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RetainedGizmos_Hasher, hash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RetainedGizmos_Hasher, includePathSearchInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RetainedGizmos_Hasher, includeAreaInfo) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RetainedGizmos_Hasher, debugData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RetainedGizmos_Hasher) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
