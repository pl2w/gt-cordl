#pragma once
// IWYU pragma private; include "Pathfinding/GraphUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphUtilities)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUtilities___c__DisplayClass0_0;
}
namespace Pathfinding {
class GraphUtilities___c__DisplayClass1_0;
}
namespace Pathfinding {
class GridGraph;
}
namespace Pathfinding {
class GridNodeBase;
}
namespace Pathfinding {
class INavmesh;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class NavGraph;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class GraphUtilities;
}
namespace Pathfinding {
class GraphUtilities___c__DisplayClass0_0;
}
namespace Pathfinding {
class GraphUtilities___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphUtilities*);
MARK_REF_T(::Pathfinding::GraphUtilities___c__DisplayClass0_0*);
MARK_REF_T(::Pathfinding::GraphUtilities___c__DisplayClass1_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUtilities*, "Pathfinding", "GraphUtilities");
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUtilities___c__DisplayClass0_0*, "Pathfinding", "GraphUtilities/<>c__DisplayClass0_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUtilities___c__DisplayClass1_0*, "Pathfinding", "GraphUtilities/<>c__DisplayClass1_0");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUtilities
class CORDL_TYPE GraphUtilities : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::Pathfinding::GraphUtilities___c__DisplayClass0_0;

using __c__DisplayClass1_0 = ::Pathfinding::GraphUtilities___c__DisplayClass1_0;

/// @brief Method GetContours, addr 0x5e597ac, size 0x204, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetContours(::Pathfinding::NavGraph*  graph) ;

/// @brief Method GetContours, addr 0x5e59c90, size 0x9e4, virtual false, abstract: false, final false
static inline void GetContours(::Pathfinding::GridGraph*  grid, ::System::Action_1<::ArrayW<::UnityEngine::Vector3>>*  callback, float_t  yMergeThreshold, ::ArrayW<::Pathfinding::GridNodeBase*>  nodes) ;

/// @brief Method GetContours, addr 0x5e599b8, size 0x2d8, virtual false, abstract: false, final false
static inline void GetContours(::Pathfinding::INavmesh*  navmesh, ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*  results) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUtilities(GraphUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUtilities(GraphUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::GraphUtilities) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUtilities/<>c__DisplayClass1_0
class CORDL_TYPE GraphUtilities___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field hasInEdge, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hasInEdge, put=__cordl_internal_set_hasInEdge)) ::System::Collections::Generic::HashSet_1<int32_t>*  hasInEdge;

/// @brief Field outline, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_outline, put=__cordl_internal_set_outline)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  outline;

/// @brief Field results, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*  results;

/// @brief Field uses, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_uses, put=__cordl_internal_set_uses)) ::ArrayW<bool>  uses;

/// @brief Field vertexPositions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertexPositions, put=__cordl_internal_set_vertexPositions)) ::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>*  vertexPositions;

static inline ::Pathfinding::GraphUtilities___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <GetContours>b__0, addr 0x5e5aa08, size 0x2b4, virtual false, abstract: false, final false
inline void _GetContours_b__0(::Pathfinding::GraphNode*  _node) ;

/// @brief Method <GetContours>b__1, addr 0x5e5acbc, size 0x1b4, virtual false, abstract: false, final false
inline void _GetContours_b__1(::System::Collections::Generic::List_1<int32_t>*  chain, bool  cycle) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_hasInEdge() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_hasInEdge() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_outline() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_outline() ;

constexpr ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>* const& __cordl_internal_get_results() const;

constexpr ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*& __cordl_internal_get_results() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_uses() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_uses() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>* const& __cordl_internal_get_vertexPositions() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>*& __cordl_internal_get_vertexPositions() ;

constexpr void __cordl_internal_set_hasInEdge(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_outline(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_results(::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*  value) ;

constexpr void __cordl_internal_set_uses(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_vertexPositions(::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>*  value) ;

/// @brief Method .ctor, addr 0x5e5a674, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUtilities___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUtilities___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUtilities___c__DisplayClass1_0(GraphUtilities___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUtilities___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUtilities___c__DisplayClass1_0(GraphUtilities___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21250};

/// @brief Field uses, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<bool>  ___uses;

/// @brief Field outline, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___outline;

/// @brief Field hasInEdge, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___hasInEdge;

/// @brief Field vertexPositions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Pathfinding::Int3>*  ___vertexPositions;

/// @brief Field results, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::System::Collections::Generic::List_1<::Pathfinding::Int3>*,bool>*  ___results;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphUtilities___c__DisplayClass1_0, ___uses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUtilities___c__DisplayClass1_0, ___outline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUtilities___c__DisplayClass1_0, ___hasInEdge) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUtilities___c__DisplayClass1_0, ___vertexPositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUtilities___c__DisplayClass1_0, ___results) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphUtilities___c__DisplayClass1_0) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUtilities/<>c__DisplayClass0_0
class CORDL_TYPE GraphUtilities___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  result;

static inline ::Pathfinding::GraphUtilities___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <GetContours>b__0, addr 0x5e5a6bc, size 0x1e0, virtual false, abstract: false, final false
inline void _GetContours_b__0(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  vertices, bool  cycle) ;

/// @brief Method <GetContours>b__1, addr 0x5e5a89c, size 0x16c, virtual false, abstract: false, final false
inline void _GetContours_b__1(::ArrayW<::UnityEngine::Vector3>  vertices) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_result() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_result(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x5e599b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUtilities___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUtilities___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUtilities___c__DisplayClass0_0(GraphUtilities___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUtilities___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUtilities___c__DisplayClass0_0(GraphUtilities___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21249};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphUtilities___c__DisplayClass0_0, ___result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphUtilities___c__DisplayClass0_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
