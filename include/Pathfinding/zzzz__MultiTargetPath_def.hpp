#pragma once
// IWYU pragma private; include "Pathfinding/MultiTargetPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__MultiTargetPath_HeuristicMode_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTargetPath)
namespace GlobalNamespace {
struct MultiTargetPath_HeuristicMode;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
struct PathLog;
}
namespace Pathfinding {
class PathNode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class MultiTargetPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::MultiTargetPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::MultiTargetPath*, "Pathfinding", "MultiTargetPath");
// Dependencies Pathfinding.ABPath, Pathfinding.GraphNode, Pathfinding.MultiTargetPath::HeuristicMode, Pathfinding.OnPathDelegate, System.Collections.Generic.List`1<T>, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.MultiTargetPath
class CORDL_TYPE MultiTargetPath : public ::Pathfinding::ABPath {
public:
// Declarations
using HeuristicMode = ::GlobalNamespace::MultiTargetPath_HeuristicMode;

/// @brief Field <inverted>k__BackingField, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get__inverted_k__BackingField, put=__cordl_internal_set__inverted_k__BackingField)) bool  _inverted_k__BackingField;

/// @brief Field callbacks, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::ArrayW<::Pathfinding::OnPathDelegate*>  callbacks;

/// @brief Field chosenTarget, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_chosenTarget, put=__cordl_internal_set_chosenTarget)) int32_t  chosenTarget;

/// @brief Field heuristicMode, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_heuristicMode, put=__cordl_internal_set_heuristicMode)) ::GlobalNamespace::MultiTargetPath_HeuristicMode  heuristicMode;

 __declspec(property(get=get_inverted, put=set_inverted)) bool  inverted;

/// @brief Field nodePaths, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodePaths, put=__cordl_internal_set_nodePaths)) ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  nodePaths;

/// @brief Field originalTargetPoints, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalTargetPoints, put=__cordl_internal_set_originalTargetPoints)) ::ArrayW<::UnityEngine::Vector3>  originalTargetPoints;

/// @brief Field pathsForAll, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_pathsForAll, put=__cordl_internal_set_pathsForAll)) bool  pathsForAll;

/// @brief Field sequentialTarget, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_sequentialTarget, put=__cordl_internal_set_sequentialTarget)) int32_t  sequentialTarget;

/// @brief Field targetNodeCount, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetNodeCount, put=__cordl_internal_set_targetNodeCount)) int32_t  targetNodeCount;

/// @brief Field targetNodes, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetNodes, put=__cordl_internal_set_targetNodes)) ::ArrayW<::Pathfinding::GraphNode*>  targetNodes;

/// @brief Field targetPoints, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPoints, put=__cordl_internal_set_targetPoints)) ::ArrayW<::UnityEngine::Vector3>  targetPoints;

/// @brief Field targetsFound, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetsFound, put=__cordl_internal_set_targetsFound)) ::ArrayW<bool>  targetsFound;

/// @brief Field vectorPaths, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorPaths, put=__cordl_internal_set_vectorPaths)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  vectorPaths;

/// @brief Method CalculateStep, addr 0x5eb0cdc, size 0x1dc, virtual true, abstract: false, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method ChooseShortestPath, addr 0x5eaf854, size 0xfc, virtual false, abstract: false, final false
inline void ChooseShortestPath() ;

/// @brief Method Cleanup, addr 0x5eb0c4c, size 0x18, virtual true, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Construct, addr 0x5eaf35c, size 0xc4, virtual false, abstract: false, final false
static inline ::Pathfinding::MultiTargetPath* Construct(::UnityEngine::Vector3  start, ::ArrayW<::UnityEngine::Vector3>  targets, ::ArrayW<::Pathfinding::OnPathDelegate*>  callbackDelegates, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Construct, addr 0x5eaf33c, size 0x20, virtual false, abstract: false, final false
static inline ::Pathfinding::MultiTargetPath* Construct(::ArrayW<::UnityEngine::Vector3>  startPoints, ::UnityEngine::Vector3  target, ::ArrayW<::Pathfinding::OnPathDelegate*>  callbackDelegates, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method DebugString, addr 0x5eb10c0, size 0x674, virtual true, abstract: false, final false
inline ::StringW DebugString(::Pathfinding::PathLog  logMode) ;

/// @brief Method FoundTarget, addr 0x5eafd0c, size 0x248, virtual false, abstract: false, final false
inline void FoundTarget(::Pathfinding::PathNode*  nodeR, int32_t  i) ;

/// @brief Method Initialize, addr 0x5eb0a6c, size 0x1e0, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Pathfinding::MultiTargetPath* New_ctor() ;

/// @brief Method OnEnterPool, addr 0x5eaf678, size 0x1dc, virtual true, abstract: false, final false
inline void OnEnterPool() ;

/// @brief Method Prepare, addr 0x5eb0528, size 0x544, virtual true, abstract: false, final false
inline void Prepare() ;

/// @brief Method RebuildOpenList, addr 0x5eb0474, size 0xb4, virtual false, abstract: false, final false
inline void RebuildOpenList() ;

/// @brief Method RecalculateHTarget, addr 0x5eaff54, size 0x520, virtual false, abstract: false, final false
inline void RecalculateHTarget(bool  firstTime) ;

/// @brief Method Reset, addr 0x5eaf640, size 0x38, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetFlags, addr 0x5eb0c64, size 0x78, virtual false, abstract: false, final false
inline void ResetFlags() ;

/// @brief Method ReturnPath, addr 0x5eafaec, size 0x220, virtual true, abstract: false, final false
inline void ReturnPath() ;

/// @brief Method SetPathParametersForReturn, addr 0x5eaf950, size 0x19c, virtual false, abstract: false, final false
inline void SetPathParametersForReturn(int32_t  target) ;

/// @brief Method Setup, addr 0x5eaf420, size 0x220, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Vector3  start, ::ArrayW<::UnityEngine::Vector3>  targets, ::ArrayW<::Pathfinding::OnPathDelegate*>  callbackDelegates, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Trace, addr 0x5eb0eb8, size 0x208, virtual true, abstract: false, final false
inline void Trace(::Pathfinding::PathNode*  node) ;

constexpr bool const& __cordl_internal_get__inverted_k__BackingField() const;

constexpr bool& __cordl_internal_get__inverted_k__BackingField() ;

constexpr ::ArrayW<::Pathfinding::OnPathDelegate*> const& __cordl_internal_get_callbacks() const;

constexpr ::ArrayW<::Pathfinding::OnPathDelegate*>& __cordl_internal_get_callbacks() ;

constexpr int32_t const& __cordl_internal_get_chosenTarget() const;

constexpr int32_t& __cordl_internal_get_chosenTarget() ;

constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode const& __cordl_internal_get_heuristicMode() const;

constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode& __cordl_internal_get_heuristicMode() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*> const& __cordl_internal_get_nodePaths() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>& __cordl_internal_get_nodePaths() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_originalTargetPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_originalTargetPoints() ;

constexpr bool const& __cordl_internal_get_pathsForAll() const;

constexpr bool& __cordl_internal_get_pathsForAll() ;

constexpr int32_t const& __cordl_internal_get_sequentialTarget() const;

constexpr int32_t& __cordl_internal_get_sequentialTarget() ;

constexpr int32_t const& __cordl_internal_get_targetNodeCount() const;

constexpr int32_t& __cordl_internal_get_targetNodeCount() ;

constexpr ::ArrayW<::Pathfinding::GraphNode*> const& __cordl_internal_get_targetNodes() const;

constexpr ::ArrayW<::Pathfinding::GraphNode*>& __cordl_internal_get_targetNodes() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_targetPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_targetPoints() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_targetsFound() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_targetsFound() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_vectorPaths() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>& __cordl_internal_get_vectorPaths() ;

constexpr void __cordl_internal_set__inverted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_callbacks(::ArrayW<::Pathfinding::OnPathDelegate*>  value) ;

constexpr void __cordl_internal_set_chosenTarget(int32_t  value) ;

constexpr void __cordl_internal_set_heuristicMode(::GlobalNamespace::MultiTargetPath_HeuristicMode  value) ;

constexpr void __cordl_internal_set_nodePaths(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  value) ;

constexpr void __cordl_internal_set_originalTargetPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_pathsForAll(bool  value) ;

constexpr void __cordl_internal_set_sequentialTarget(int32_t  value) ;

constexpr void __cordl_internal_set_targetNodeCount(int32_t  value) ;

constexpr void __cordl_internal_set_targetNodes(::ArrayW<::Pathfinding::GraphNode*>  value) ;

constexpr void __cordl_internal_set_targetPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_targetsFound(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_vectorPaths(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  value) ;

/// @brief Method .ctor, addr 0x5eaf2cc, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_inverted, addr 0x5eaf2bc, size 0x8, virtual false, abstract: false, final false
inline bool get_inverted() ;

/// [CompilerGenerated]
/// @brief Method set_inverted, addr 0x5eaf2c4, size 0x8, virtual false, abstract: false, final false
inline void set_inverted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiTargetPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiTargetPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiTargetPath(MultiTargetPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiTargetPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiTargetPath(MultiTargetPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21397};

/// @brief Field callbacks, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::OnPathDelegate*>  ___callbacks;

/// @brief Field targetNodes, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GraphNode*>  ___targetNodes;

/// @brief Field targetNodeCount, offset: 0x148, size: 0x4, def value: None
 int32_t  ___targetNodeCount;

/// @brief Field targetsFound, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<bool>  ___targetsFound;

/// @brief Field targetPoints, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___targetPoints;

/// @brief Field originalTargetPoints, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___originalTargetPoints;

/// @brief Field vectorPaths, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  ___vectorPaths;

/// @brief Field nodePaths, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  ___nodePaths;

/// @brief Field pathsForAll, offset: 0x178, size: 0x1, def value: None
 bool  ___pathsForAll;

/// @brief Field chosenTarget, offset: 0x17c, size: 0x4, def value: None
 int32_t  ___chosenTarget;

/// @brief Field sequentialTarget, offset: 0x180, size: 0x4, def value: None
 int32_t  ___sequentialTarget;

/// @brief Field heuristicMode, offset: 0x184, size: 0x4, def value: None
 ::GlobalNamespace::MultiTargetPath_HeuristicMode  ___heuristicMode;

/// [CompilerGenerated]
/// @brief Field <inverted>k__BackingField, offset: 0x188, size: 0x1, def value: None
 bool  ____inverted_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::MultiTargetPath, ___callbacks) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___targetNodes) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___targetNodeCount) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___targetsFound) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___targetPoints) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___originalTargetPoints) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___vectorPaths) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___nodePaths) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___pathsForAll) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___chosenTarget) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___sequentialTarget) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ___heuristicMode) == 0x184, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::MultiTargetPath, ____inverted_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::MultiTargetPath) == 0x190, "Size mismatch!");

} // namespace end def Pathfinding
