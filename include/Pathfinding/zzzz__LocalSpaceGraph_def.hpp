#pragma once
// IWYU pragma private; include "Pathfinding/LocalSpaceGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
CORDL_MODULE_EXPORT(LocalSpaceGraph)
namespace Pathfinding::Util {
class GraphTransform;
}
// Forward declare root types
namespace Pathfinding {
class LocalSpaceGraph;
}
// Write type traits
MARK_REF_T(::Pathfinding::LocalSpaceGraph*);
DEFINE_IL2CPP_CLASS(::Pathfinding::LocalSpaceGraph*, "Pathfinding", "LocalSpaceGraph");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_local_space_graph.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour, UnityEngine.Matrix4x4
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.LocalSpaceGraph
class CORDL_TYPE LocalSpaceGraph : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field <transformation>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::Pathfinding::Util::GraphTransform*  _transformation_k__BackingField;

/// @brief Field originalMatrix, offset 0x24, size 0x40 
 __declspec(property(get=__cordl_internal_get_originalMatrix, put=__cordl_internal_set_originalMatrix)) ::UnityEngine::Matrix4x4  originalMatrix;

 __declspec(property(get=get_transformation, put=set_transformation)) ::Pathfinding::Util::GraphTransform*  transformation;

static inline ::Pathfinding::LocalSpaceGraph* New_ctor() ;

/// @brief Method Refresh, addr 0x5e6ad68, size 0x114, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method Start, addr 0x5e6acf8, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::Pathfinding::Util::GraphTransform* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::Pathfinding::Util::GraphTransform*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_originalMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_originalMatrix() ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::Pathfinding::Util::GraphTransform*  value) ;

constexpr void __cordl_internal_set_originalMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0x5e6ae7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0x5e6ace8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GraphTransform* get_transformation() ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0x5e6acf0, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::Pathfinding::Util::GraphTransform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalSpaceGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalSpaceGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalSpaceGraph(LocalSpaceGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalSpaceGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalSpaceGraph(LocalSpaceGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21283};

/// @brief Field originalMatrix, offset: 0x24, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___originalMatrix;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Pathfinding::Util::GraphTransform*  ____transformation_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::LocalSpaceGraph, ___originalMatrix) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LocalSpaceGraph, ____transformation_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::LocalSpaceGraph) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding
