#pragma once
// IWYU pragma private; include "Pathfinding/FloodPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Path_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FloodPath)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class FloodPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::FloodPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::FloodPath*, "Pathfinding", "FloodPath");
// Dependencies Pathfinding.Path, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.FloodPath
class CORDL_TYPE FloodPath : public ::Pathfinding::Path {
public:
// Declarations
 __declspec(property(get=get_FloodingPath)) bool  FloodingPath;

/// @brief Field originalStartPoint, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalStartPoint, put=__cordl_internal_set_originalStartPoint)) ::UnityEngine::Vector3  originalStartPoint;

/// @brief Field parents, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_parents, put=__cordl_internal_set_parents)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>*  parents;

/// @brief Field saveParents, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveParents, put=__cordl_internal_set_saveParents)) bool  saveParents;

/// @brief Field startNode, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startNode, put=__cordl_internal_set_startNode)) ::Pathfinding::GraphNode*  startNode;

/// @brief Field startPoint, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPoint, put=__cordl_internal_set_startPoint)) ::UnityEngine::Vector3  startPoint;

/// @brief Method CalculateStep, addr 0x5eaeaf8, size 0x1dc, virtual true, abstract: false, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method Construct, addr 0x5eae580, size 0xd8, virtual false, abstract: false, final false
static inline ::Pathfinding::FloodPath* Construct(::Pathfinding::GraphNode*  start, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Construct, addr 0x5eae47c, size 0xb8, virtual false, abstract: false, final false
static inline ::Pathfinding::FloodPath* Construct(::UnityEngine::Vector3  start, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method GetParent, addr 0x5eae3c4, size 0x58, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* GetParent(::Pathfinding::GraphNode*  node) ;

/// @brief Method HasPathTo, addr 0x5eae364, size 0x60, virtual false, abstract: false, final false
inline bool HasPathTo(::Pathfinding::GraphNode*  node) ;

/// @brief Method Initialize, addr 0x5eae994, size 0x164, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Pathfinding::FloodPath* New_ctor() ;

/// @brief Method Prepare, addr 0x5eae7c8, size 0x1cc, virtual true, abstract: false, final false
inline void Prepare() ;

/// @brief Method Reset, addr 0x5eae6d0, size 0xf8, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x5eae658, size 0x78, virtual false, abstract: false, final false
inline void Setup(::Pathfinding::GraphNode*  start, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Setup, addr 0x5eae534, size 0x4c, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Vector3  start, ::Pathfinding::OnPathDelegate*  callback) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalStartPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalStartPoint() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>* const& __cordl_internal_get_parents() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>*& __cordl_internal_get_parents() ;

constexpr bool const& __cordl_internal_get_saveParents() const;

constexpr bool& __cordl_internal_get_saveParents() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_startNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_startNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPoint() ;

constexpr void __cordl_internal_set_originalStartPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_parents(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_saveParents(bool  value) ;

constexpr void __cordl_internal_set_startNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_startPoint(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5eae41c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FloodingPath, addr 0x5eae35c, size 0x8, virtual true, abstract: false, final false
inline bool get_FloodingPath() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloodPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloodPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloodPath(FloodPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloodPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloodPath(FloodPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21393};

/// @brief Field originalStartPoint, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalStartPoint;

/// @brief Field startPoint, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPoint;

/// @brief Field startNode, offset: 0xe8, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___startNode;

/// @brief Field saveParents, offset: 0xf0, size: 0x1, def value: None
 bool  ___saveParents;

/// @brief Field parents, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::Pathfinding::GraphNode*>*  ___parents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::FloodPath, ___originalStartPoint) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::FloodPath, ___startPoint) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::FloodPath, ___startNode) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::FloodPath, ___saveParents) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::FloodPath, ___parents) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::FloodPath) == 0x100, "Size mismatch!");

} // namespace end def Pathfinding
