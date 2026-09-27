#pragma once
// IWYU pragma private; include "Pathfinding/ConstantPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Path_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantPath)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
class PathEndingCondition;
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
class ConstantPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::ConstantPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ConstantPath*, "Pathfinding", "ConstantPath");
// Dependencies Pathfinding.Path, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ConstantPath
class CORDL_TYPE ConstantPath : public ::Pathfinding::Path {
public:
// Declarations
 __declspec(property(get=get_FloodingPath)) bool  FloodingPath;

/// @brief Field allNodes, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allNodes, put=__cordl_internal_set_allNodes)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  allNodes;

/// @brief Field endingCondition, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_endingCondition, put=__cordl_internal_set_endingCondition)) ::Pathfinding::PathEndingCondition*  endingCondition;

/// @brief Field originalStartPoint, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalStartPoint, put=__cordl_internal_set_originalStartPoint)) ::UnityEngine::Vector3  originalStartPoint;

/// @brief Field startNode, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_startNode, put=__cordl_internal_set_startNode)) ::Pathfinding::GraphNode*  startNode;

/// @brief Field startPoint, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPoint, put=__cordl_internal_set_startPoint)) ::UnityEngine::Vector3  startPoint;

/// @brief Method CalculateStep, addr 0x5eadd3c, size 0x254, virtual true, abstract: false, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method Cleanup, addr 0x5eadc84, size 0xb8, virtual true, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Construct, addr 0x5ead6bc, size 0xbc, virtual false, abstract: false, final false
static inline ::Pathfinding::ConstantPath* Construct(::UnityEngine::Vector3  start, int32_t  maxGScore, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Initialize, addr 0x5eadac8, size 0x1bc, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Pathfinding::ConstantPath* New_ctor() ;

/// @brief Method OnEnterPool, addr 0x5ead864, size 0x8c, virtual true, abstract: false, final false
inline void OnEnterPool() ;

/// @brief Method Prepare, addr 0x5ead9f4, size 0xd4, virtual true, abstract: false, final false
inline void Prepare() ;

/// @brief Method Reset, addr 0x5ead8f0, size 0x104, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x5ead778, size 0xc0, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Vector3  start, int32_t  maxGScore, ::Pathfinding::OnPathDelegate*  callback) ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_allNodes() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_allNodes() ;

constexpr ::Pathfinding::PathEndingCondition* const& __cordl_internal_get_endingCondition() const;

constexpr ::Pathfinding::PathEndingCondition*& __cordl_internal_get_endingCondition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalStartPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalStartPoint() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_startNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_startNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPoint() ;

constexpr void __cordl_internal_set_allNodes(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_endingCondition(::Pathfinding::PathEndingCondition*  value) ;

constexpr void __cordl_internal_set_originalStartPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_startPoint(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5eadf90, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FloodingPath, addr 0x5ead6b4, size 0x8, virtual true, abstract: false, final false
inline bool get_FloodingPath() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantPath(ConstantPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantPath(ConstantPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21390};

/// @brief Field startNode, offset: 0xd0, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___startNode;

/// @brief Field startPoint, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPoint;

/// @brief Field originalStartPoint, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalStartPoint;

/// @brief Field allNodes, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___allNodes;

/// @brief Field endingCondition, offset: 0xf8, size: 0x8, def value: None
 ::Pathfinding::PathEndingCondition*  ___endingCondition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ConstantPath, ___startNode) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ConstantPath, ___startPoint) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ConstantPath, ___originalStartPoint) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ConstantPath, ___allNodes) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ConstantPath, ___endingCondition) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ConstantPath) == 0x100, "Size mismatch!");

} // namespace end def Pathfinding
