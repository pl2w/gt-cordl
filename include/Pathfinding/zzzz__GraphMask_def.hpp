#pragma once
// IWYU pragma private; include "Pathfinding/GraphMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphMask)
namespace Pathfinding {
class GraphMask___c__DisplayClass12_0;
}
namespace Pathfinding {
class NavGraph;
}
// Forward declare root types
namespace Pathfinding {
class GraphMask___c__DisplayClass12_0;
}
namespace Pathfinding {
struct GraphMask;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphMask___c__DisplayClass12_0*);
MARK_VAL_T(::Pathfinding::GraphMask);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphMask___c__DisplayClass12_0*, "Pathfinding", "GraphMask/<>c__DisplayClass12_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphMask, "Pathfinding", "GraphMask");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.GraphMask
struct CORDL_TYPE GraphMask {
public:
// Declarations
using __c__DisplayClass12_0 = ::Pathfinding::GraphMask___c__DisplayClass12_0;

/// @brief Method Contains, addr 0x5e48050, size 0x10, virtual false, abstract: false, final false
inline bool Contains(int32_t  graphIndex) ;

/// @brief Method FromGraph, addr 0x5e497c0, size 0x1c, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphMask FromGraph(::Pathfinding::NavGraph*  graph) ;

/// @brief Method FromGraphName, addr 0x5e497e4, size 0x194, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphMask FromGraphName(::StringW  graphName) ;

/// @brief Method ToString, addr 0x5e497dc, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5e4979c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method get_everything, addr 0x5e49794, size 0x8, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphMask get_everything() ;

/// @brief Method op_BitwiseAnd, addr 0x5e497a8, size 0x8, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphMask op_BitwiseAnd(::Pathfinding::GraphMask  lhs, ::Pathfinding::GraphMask  rhs) ;

/// @brief Method op_BitwiseOr, addr 0x5e497b0, size 0x8, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphMask op_BitwiseOr(::Pathfinding::GraphMask  lhs, ::Pathfinding::GraphMask  rhs) ;

/// @brief Method op_Implicit, addr 0x5e48238, size 0x4, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphMask op_Implicit___Pathfinding__GraphMask(int32_t  mask) ;

/// @brief Method op_Implicit, addr 0x5e497a4, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::Pathfinding::GraphMask  mask) ;

/// @brief Method op_OnesComplement, addr 0x5e497b8, size 0x8, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphMask op_OnesComplement(::Pathfinding::GraphMask  lhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphMask() ;

// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphMask(int32_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value, offset: 0x0, size: 0x4, def value: None
 int32_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphMask, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphMask) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphMask/<>c__DisplayClass12_0
class CORDL_TYPE GraphMask___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field graphName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphName, put=__cordl_internal_set_graphName)) ::StringW  graphName;

static inline ::Pathfinding::GraphMask___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <FromGraphName>b__0, addr 0x5e49a14, size 0x20, virtual false, abstract: false, final false
inline bool _FromGraphName_b__0(::Pathfinding::NavGraph*  g) ;

constexpr ::StringW const& __cordl_internal_get_graphName() const;

constexpr ::StringW& __cordl_internal_get_graphName() ;

constexpr void __cordl_internal_set_graphName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5e49978, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphMask___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphMask___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphMask___c__DisplayClass12_0(GraphMask___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphMask___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphMask___c__DisplayClass12_0(GraphMask___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21202};

/// @brief Field graphName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___graphName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphMask___c__DisplayClass12_0, ___graphName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphMask___c__DisplayClass12_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
