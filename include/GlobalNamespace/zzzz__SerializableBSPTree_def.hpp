#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableBSPTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MatrixZonePair_def.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_def.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableBSPTree)
namespace GlobalNamespace {
struct GTSubZone;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
struct SerializableBSPNode_Axis;
}
namespace GlobalNamespace {
class ZoneDef;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SerializableBSPTree;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SerializableBSPTree*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializableBSPTree*, "", "SerializableBSPTree");
// Dependencies MatrixZonePair, SerializableBSPNode, System.Object, ZoneDef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SerializableBSPTree
class CORDL_TYPE SerializableBSPTree : public ::System::Object {
public:
// Declarations
/// @brief Field matrices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_matrices, put=__cordl_internal_set_matrices)) ::ArrayW<::GlobalNamespace::MatrixZonePair>  matrices;

/// @brief Field nodes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GlobalNamespace::SerializableBSPNode>  nodes;

/// @brief Field rootIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rootIndex, put=__cordl_internal_set_rootIndex)) int32_t  rootIndex;

/// @brief Field zones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>>  zones;

/// @brief Method FindZone, addr 0x5b49b74, size 0x28, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::ZoneDef> FindZone(::UnityEngine::Vector3  point) ;

/// @brief Method FindZoneIdx, addr 0x5b49ea0, size 0x6c, virtual false, abstract: false, final false
inline int32_t FindZoneIdx(::GlobalNamespace::GTZone  zoneId, ::GlobalNamespace::GTSubZone  subZoneId) ;

/// @brief Method FindZoneRecursive, addr 0x5b49b9c, size 0x2b8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::ZoneDef> FindZoneRecursive(::UnityEngine::Vector3  point, int32_t  nodeIndex) ;

/// @brief Method GetAxisValue, addr 0x5b49e54, size 0x4c, virtual false, abstract: false, final false
inline float_t GetAxisValue(::UnityEngine::Vector3  point, ::GlobalNamespace::SerializableBSPNode_Axis  axis) ;

static inline ::GlobalNamespace::SerializableBSPTree* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::MatrixZonePair> const& __cordl_internal_get_matrices() const;

constexpr ::ArrayW<::GlobalNamespace::MatrixZonePair>& __cordl_internal_get_matrices() ;

constexpr ::ArrayW<::GlobalNamespace::SerializableBSPNode> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GlobalNamespace::SerializableBSPNode>& __cordl_internal_get_nodes() ;

constexpr int32_t const& __cordl_internal_get_rootIndex() const;

constexpr int32_t& __cordl_internal_get_rootIndex() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>> const& __cordl_internal_get_zones() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>>& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_matrices(::ArrayW<::GlobalNamespace::MatrixZonePair>  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::SerializableBSPNode>  value) ;

constexpr void __cordl_internal_set_rootIndex(int32_t  value) ;

constexpr void __cordl_internal_set_zones(::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>>  value) ;

/// @brief Method .ctor, addr 0x5b47120, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableBSPTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableBSPTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableBSPTree(SerializableBSPTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableBSPTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableBSPTree(SerializableBSPTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3739};

/// [SerializeField]
/// @brief Field nodes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SerializableBSPNode>  ___nodes;

/// [SerializeField]
/// @brief Field matrices, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MatrixZonePair>  ___matrices;

/// [SerializeField]
/// @brief Field zones, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>>  ___zones;

/// [SerializeField]
/// @brief Field rootIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___rootIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializableBSPTree, ___nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableBSPTree, ___matrices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableBSPTree, ___zones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableBSPTree, ___rootIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializableBSPTree) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
