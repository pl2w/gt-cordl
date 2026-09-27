#pragma once
// IWYU pragma private; include "Pathfinding/XPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPath)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
class PathEndingCondition;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class XPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::XPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::XPath*, "Pathfinding", "XPath");
// Dependencies Pathfinding.ABPath
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.XPath
class CORDL_TYPE XPath : public ::Pathfinding::ABPath {
public:
// Declarations
/// @brief Field endingCondition, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_endingCondition, put=__cordl_internal_set_endingCondition)) ::Pathfinding::PathEndingCondition*  endingCondition;

/// @brief Method CalculateStep, addr 0x5eb22ac, size 0x214, virtual true, abstract: false, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method ChangeEndNode, addr 0x5eb2204, size 0xa8, virtual false, abstract: false, final false
inline void ChangeEndNode(::Pathfinding::GraphNode*  target) ;

/// @brief Method CompletePathIfStartIsValidTarget, addr 0x5eb2174, size 0x90, virtual true, abstract: false, final false
inline void CompletePathIfStartIsValidTarget() ;

/// @brief Method Construct, addr 0x5eb1fb4, size 0x108, virtual false, abstract: false, final false
static inline ::Pathfinding::XPath* Construct(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method EndPointGridGraphSpecialCase, addr 0x5eb216c, size 0x8, virtual true, abstract: false, final false
inline bool EndPointGridGraphSpecialCase(::Pathfinding::GraphNode*  endNode) ;

static inline ::Pathfinding::XPath* New_ctor() ;

/// @brief Method Reset, addr 0x5eb2148, size 0x24, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::Pathfinding::PathEndingCondition* const& __cordl_internal_get_endingCondition() const;

constexpr ::Pathfinding::PathEndingCondition*& __cordl_internal_get_endingCondition() ;

constexpr void __cordl_internal_set_endingCondition(::Pathfinding::PathEndingCondition*  value) ;

/// @brief Method .ctor, addr 0x5eb1f5c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XPath(XPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XPath(XPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21399};

/// @brief Field endingCondition, offset: 0x138, size: 0x8, def value: None
 ::Pathfinding::PathEndingCondition*  ___endingCondition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::XPath, ___endingCondition) == 0x138, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::XPath) == 0x140, "Size mismatch!");

} // namespace end def Pathfinding
