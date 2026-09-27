#pragma once
// IWYU pragma private; include "Pathfinding/AlternativePath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__MonoModifier_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlternativePath)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Pathfinding {
class AlternativePath;
}
// Write type traits
MARK_REF_T(::Pathfinding::AlternativePath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AlternativePath*, "Pathfinding", "AlternativePath");
// [AddComponentMenu("Pathfinding/Modifiers/Alternative Path")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_alternative_path.php")]
// Dependencies Pathfinding.MonoModifier
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AlternativePath
class CORDL_TYPE AlternativePath : public ::Pathfinding::MonoModifier {
public:
// Declarations
 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field destroyed, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyed, put=__cordl_internal_set_destroyed)) bool  destroyed;

/// @brief Field penalty, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_penalty, put=__cordl_internal_set_penalty)) int32_t  penalty;

/// @brief Field prevNodes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevNodes, put=__cordl_internal_set_prevNodes)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  prevNodes;

/// @brief Field prevPenalty, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevPenalty, put=__cordl_internal_set_prevPenalty)) int32_t  prevPenalty;

/// @brief Field randomStep, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomStep, put=__cordl_internal_set_randomStep)) int32_t  randomStep;

/// @brief Field rnd, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnd, put=__cordl_internal_set_rnd)) ::System::Random*  rnd;

/// @brief Method Apply, addr 0x5ea07d0, size 0x90, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::Path*  p) ;

/// @brief Method ApplyNow, addr 0x5ea0860, size 0x1d4, virtual false, abstract: false, final false
inline void ApplyNow(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes) ;

/// @brief Method ClearOnDestroy, addr 0x5ea0a40, size 0x4, virtual false, abstract: false, final false
inline void ClearOnDestroy() ;

/// @brief Method InversePrevious, addr 0x5ea0a44, size 0x16c, virtual false, abstract: false, final false
inline void InversePrevious() ;

static inline ::Pathfinding::AlternativePath* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ea0a34, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr bool const& __cordl_internal_get_destroyed() const;

constexpr bool& __cordl_internal_get_destroyed() ;

constexpr int32_t const& __cordl_internal_get_penalty() const;

constexpr int32_t& __cordl_internal_get_penalty() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_prevNodes() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_prevNodes() ;

constexpr int32_t const& __cordl_internal_get_prevPenalty() const;

constexpr int32_t& __cordl_internal_get_prevPenalty() ;

constexpr int32_t const& __cordl_internal_get_randomStep() const;

constexpr int32_t& __cordl_internal_get_randomStep() ;

constexpr ::System::Random* const& __cordl_internal_get_rnd() const;

constexpr ::System::Random*& __cordl_internal_get_rnd() ;

constexpr void __cordl_internal_set_destroyed(bool  value) ;

constexpr void __cordl_internal_set_penalty(int32_t  value) ;

constexpr void __cordl_internal_set_prevNodes(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_prevPenalty(int32_t  value) ;

constexpr void __cordl_internal_set_randomStep(int32_t  value) ;

constexpr void __cordl_internal_set_rnd(::System::Random*  value) ;

/// @brief Method .ctor, addr 0x5ea0bb0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x5ea07c8, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Order() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlternativePath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlternativePath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlternativePath(AlternativePath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlternativePath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlternativePath(AlternativePath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21362};

/// @brief Field penalty, offset: 0x30, size: 0x4, def value: None
 int32_t  ___penalty;

/// @brief Field randomStep, offset: 0x34, size: 0x4, def value: None
 int32_t  ___randomStep;

/// @brief Field prevNodes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___prevNodes;

/// @brief Field prevPenalty, offset: 0x40, size: 0x4, def value: None
 int32_t  ___prevPenalty;

/// @brief Field rnd, offset: 0x48, size: 0x8, def value: None
 ::System::Random*  ___rnd;

/// @brief Field destroyed, offset: 0x50, size: 0x1, def value: None
 bool  ___destroyed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AlternativePath, ___penalty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AlternativePath, ___randomStep) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AlternativePath, ___prevNodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AlternativePath, ___prevPenalty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AlternativePath, ___rnd) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AlternativePath, ___destroyed) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AlternativePath) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding
