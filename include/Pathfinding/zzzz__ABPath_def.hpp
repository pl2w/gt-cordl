#pragma once
// IWYU pragma private; include "Pathfinding/ABPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ABPath)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GridNode;
}
namespace Pathfinding {
class NNConstraint;
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
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class ABPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::ABPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ABPath*, "Pathfinding", "ABPath");
// Dependencies Pathfinding.Int3, Pathfinding.Path, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ABPath
class CORDL_TYPE ABPath : public ::Pathfinding::Path {
public:
// Declarations
/// @brief Field NNConstraintNone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NNConstraintNone, put=setStaticF_NNConstraintNone)) ::Pathfinding::NNConstraint*  NNConstraintNone;

/// @brief Field calculatePartial, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get_calculatePartial, put=__cordl_internal_set_calculatePartial)) bool  calculatePartial;

/// @brief Field endNode, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_endNode, put=__cordl_internal_set_endNode)) ::Pathfinding::GraphNode*  endNode;

/// @brief Field endNodeCosts, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_endNodeCosts, put=__cordl_internal_set_endNodeCosts)) ::ArrayW<int32_t>  endNodeCosts;

/// @brief Field endPoint, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPoint, put=__cordl_internal_set_endPoint)) ::UnityEngine::Vector3  endPoint;

/// @brief Field gridSpecialCaseNode, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridSpecialCaseNode, put=__cordl_internal_set_gridSpecialCaseNode)) ::Pathfinding::GridNode*  gridSpecialCaseNode;

 __declspec(property(get=get_hasEndPoint)) bool  hasEndPoint;

/// @brief Field originalEndPoint, offset 0xec, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalEndPoint, put=__cordl_internal_set_originalEndPoint)) ::UnityEngine::Vector3  originalEndPoint;

/// @brief Field originalStartPoint, offset 0xe0, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalStartPoint, put=__cordl_internal_set_originalStartPoint)) ::UnityEngine::Vector3  originalStartPoint;

/// @brief Field partialBestTarget, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_partialBestTarget, put=__cordl_internal_set_partialBestTarget)) ::Pathfinding::PathNode*  partialBestTarget;

/// @brief Field startIntPoint, offset 0x110, size 0xc 
 __declspec(property(get=__cordl_internal_get_startIntPoint, put=__cordl_internal_set_startIntPoint)) ::Pathfinding::Int3  startIntPoint;

/// @brief Field startNode, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_startNode, put=__cordl_internal_set_startNode)) ::Pathfinding::GraphNode*  startNode;

/// @brief Field startPoint, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPoint, put=__cordl_internal_set_startPoint)) ::UnityEngine::Vector3  startPoint;

/// @brief Method CalculateStep, addr 0x5eaced8, size 0x258, virtual true, abstract: false, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method Cleanup, addr 0x5eacdd8, size 0x100, virtual true, abstract: false, final false
inline void Cleanup() ;

/// @brief Method CompletePartial, addr 0x5eacd54, size 0x84, virtual false, abstract: false, final false
inline void CompletePartial(::Pathfinding::PathNode*  node) ;

/// @brief Method CompletePathIfStartIsValidTarget, addr 0x5eac9d0, size 0x88, virtual true, abstract: false, final false
inline void CompletePathIfStartIsValidTarget() ;

/// @brief Method CompleteWith, addr 0x5eaca58, size 0x10c, virtual false, abstract: false, final false
inline void CompleteWith(::Pathfinding::GraphNode*  node) ;

/// @brief Method Construct, addr 0x5eab6a8, size 0xd8, virtual false, abstract: false, final false
static inline ::Pathfinding::ABPath* Construct(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method DebugString, addr 0x5ead130, size 0x36c, virtual true, abstract: false, final false
inline ::StringW DebugString(::Pathfinding::PathLog  logMode) ;

/// @brief Method EndPointGridGraphSpecialCase, addr 0x5eabf48, size 0x484, virtual true, abstract: false, final false
inline bool EndPointGridGraphSpecialCase(::Pathfinding::GraphNode*  closestWalkableEndNode) ;

/// @brief Method FakePath, addr 0x5eab85c, size 0x360, virtual false, abstract: false, final false
static inline ::Pathfinding::ABPath* FakePath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vectorPath, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodePath) ;

/// @brief Method GetConnectionSpecialCost, addr 0x5eabbbc, size 0x28c, virtual true, abstract: false, final false
inline uint32_t GetConnectionSpecialCost(::Pathfinding::GraphNode*  a, ::Pathfinding::GraphNode*  b, uint32_t  currentCost) ;

/// [Obsolete]
/// @brief Method GetMovementVector, addr 0x5ead49c, size 0x1bc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMovementVector(::UnityEngine::Vector3  point) ;

/// @brief Method Initialize, addr 0x5eacb64, size 0x1f0, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Pathfinding::ABPath* New_ctor() ;

/// @brief Method Prepare, addr 0x5eac678, size 0x358, virtual true, abstract: false, final false
inline void Prepare() ;

/// @brief Method Reset, addr 0x5eabe48, size 0x100, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetFlagOnSurroundingGridNodes, addr 0x5eac3cc, size 0x2ac, virtual false, abstract: false, final false
inline void SetFlagOnSurroundingGridNodes(::Pathfinding::GridNode*  gridNode, int32_t  flag, bool  flagState) ;

/// @brief Method Setup, addr 0x5eab780, size 0x64, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callbackDelegate) ;

/// @brief Method UpdateStartEnd, addr 0x5eab7e4, size 0x78, virtual false, abstract: false, final false
inline void UpdateStartEnd(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

constexpr bool const& __cordl_internal_get_calculatePartial() const;

constexpr bool& __cordl_internal_get_calculatePartial() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_endNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_endNode() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_endNodeCosts() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_endNodeCosts() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPoint() ;

constexpr ::Pathfinding::GridNode* const& __cordl_internal_get_gridSpecialCaseNode() const;

constexpr ::Pathfinding::GridNode*& __cordl_internal_get_gridSpecialCaseNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalEndPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalEndPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalStartPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalStartPoint() ;

constexpr ::Pathfinding::PathNode* const& __cordl_internal_get_partialBestTarget() const;

constexpr ::Pathfinding::PathNode*& __cordl_internal_get_partialBestTarget() ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_startIntPoint() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_startIntPoint() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_startNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_startNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPoint() ;

constexpr void __cordl_internal_set_calculatePartial(bool  value) ;

constexpr void __cordl_internal_set_endNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_endNodeCosts(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_endPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gridSpecialCaseNode(::Pathfinding::GridNode*  value) ;

constexpr void __cordl_internal_set_originalEndPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_originalStartPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_partialBestTarget(::Pathfinding::PathNode*  value) ;

constexpr void __cordl_internal_set_startIntPoint(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_startNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_startPoint(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5eab650, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::NNConstraint* getStaticF_NNConstraintNone() ;

/// @brief Method get_hasEndPoint, addr 0x5eab648, size 0x8, virtual true, abstract: false, final false
inline bool get_hasEndPoint() ;

static inline void setStaticF_NNConstraintNone(::Pathfinding::NNConstraint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ABPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ABPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ABPath(ABPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ABPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ABPath(ABPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21389};

/// @brief Field startNode, offset: 0xd0, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___startNode;

/// @brief Field endNode, offset: 0xd8, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___endNode;

/// @brief Field originalStartPoint, offset: 0xe0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalStartPoint;

/// @brief Field originalEndPoint, offset: 0xec, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalEndPoint;

/// @brief Field startPoint, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPoint;

/// @brief Field endPoint, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPoint;

/// @brief Field startIntPoint, offset: 0x110, size: 0xc, def value: None
 ::Pathfinding::Int3  ___startIntPoint;

/// @brief Field calculatePartial, offset: 0x11c, size: 0x1, def value: None
 bool  ___calculatePartial;

/// @brief Field partialBestTarget, offset: 0x120, size: 0x8, def value: None
 ::Pathfinding::PathNode*  ___partialBestTarget;

/// @brief Field endNodeCosts, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___endNodeCosts;

/// @brief Field gridSpecialCaseNode, offset: 0x130, size: 0x8, def value: None
 ::Pathfinding::GridNode*  ___gridSpecialCaseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ABPath, ___startNode) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___endNode) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___originalStartPoint) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___originalEndPoint) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___startPoint) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___endPoint) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___startIntPoint) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___calculatePartial) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___partialBestTarget) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___endNodeCosts) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ABPath, ___gridSpecialCaseNode) == 0x130, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ABPath) == 0x138, "Size mismatch!");

} // namespace end def Pathfinding
