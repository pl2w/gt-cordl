#pragma once
// IWYU pragma private; include "Pathfinding/RichSpecial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__RichPathPart_def.hpp"
CORDL_MODULE_EXPORT(RichSpecial)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class NodeLink2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding {
class RichSpecial;
}
// Write type traits
MARK_REF_T(::Pathfinding::RichSpecial*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RichSpecial*, "Pathfinding", "RichSpecial");
// Dependencies Pathfinding.RichPathPart
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RichSpecial
class CORDL_TYPE RichSpecial : public ::Pathfinding::RichPathPart {
public:
// Declarations
/// @brief Field first, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) ::UnityW<::UnityEngine::Transform>  first;

/// @brief Field nodeLink, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeLink, put=__cordl_internal_set_nodeLink)) ::UnityW<::Pathfinding::NodeLink2>  nodeLink;

/// @brief Field reverse, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverse, put=__cordl_internal_set_reverse)) bool  reverse;

/// @brief Field second, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::UnityW<::UnityEngine::Transform>  second;

/// @brief Method Initialize, addr 0x5e43724, size 0x9c, virtual false, abstract: false, final false
inline ::Pathfinding::RichSpecial* Initialize(::Pathfinding::NodeLink2*  nodeLink, ::Pathfinding::GraphNode*  first) ;

static inline ::Pathfinding::RichSpecial* New_ctor() ;

/// @brief Method OnEnterPool, addr 0x5e4647c, size 0xc, virtual true, abstract: false, final false
inline void OnEnterPool() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_first() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_first() ;

constexpr ::UnityW<::Pathfinding::NodeLink2> const& __cordl_internal_get_nodeLink() const;

constexpr ::UnityW<::Pathfinding::NodeLink2>& __cordl_internal_get_nodeLink() ;

constexpr bool const& __cordl_internal_get_reverse() const;

constexpr bool& __cordl_internal_get_reverse() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_second() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_second() ;

constexpr void __cordl_internal_set_first(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nodeLink(::UnityW<::Pathfinding::NodeLink2>  value) ;

constexpr void __cordl_internal_set_reverse(bool  value) ;

constexpr void __cordl_internal_set_second(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e46488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichSpecial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichSpecial", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichSpecial(RichSpecial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichSpecial", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichSpecial(RichSpecial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21185};

/// @brief Field nodeLink, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Pathfinding::NodeLink2>  ___nodeLink;

/// @brief Field first, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___first;

/// @brief Field second, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___second;

/// @brief Field reverse, offset: 0x28, size: 0x1, def value: None
 bool  ___reverse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RichSpecial, ___nodeLink) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichSpecial, ___first) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichSpecial, ___second) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichSpecial, ___reverse) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RichSpecial) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
