#pragma once
// IWYU pragma private; include "Pathfinding/NodeLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphModifier_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NodeLink)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding {
class NodeLink;
}
// Write type traits
MARK_REF_T(::Pathfinding::NodeLink*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NodeLink*, "Pathfinding", "NodeLink");
// [AddComponentMenu("Pathfinding/Link")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_node_link.php")]
// Dependencies Pathfinding.GraphModifier
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NodeLink
class CORDL_TYPE NodeLink : public ::Pathfinding::GraphModifier {
public:
// Declarations
 __declspec(property(get=get_End)) ::UnityW<::UnityEngine::Transform>  End;

 __declspec(property(get=get_Start)) ::UnityW<::UnityEngine::Transform>  Start;

/// @brief Field costFactor, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_costFactor, put=__cordl_internal_set_costFactor)) float_t  costFactor;

/// @brief Field deleteConnection, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_deleteConnection, put=__cordl_internal_set_deleteConnection)) bool  deleteConnection;

/// @brief Field end, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityW<::UnityEngine::Transform>  end;

/// @brief Field oneWay, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_oneWay, put=__cordl_internal_set_oneWay)) bool  oneWay;

/// @brief Method Apply, addr 0x5e5e100, size 0x2a4, virtual true, abstract: false, final false
inline void Apply() ;

/// @brief Method InternalOnPostScan, addr 0x5e5df9c, size 0x10, virtual false, abstract: false, final false
inline void InternalOnPostScan() ;

static inline ::Pathfinding::NodeLink* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5e5e3a4, size 0x16c, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnGraphsPostUpdate, addr 0x5e5e000, size 0x100, virtual true, abstract: false, final false
inline void OnGraphsPostUpdate() ;

/// @brief Method OnPostScan, addr 0x5e5de7c, size 0x120, virtual true, abstract: false, final false
inline void OnPostScan() ;

/// [CompilerGenerated]
/// @brief Method <OnGraphsPostUpdate>b__10_0, addr 0x5e5e590, size 0x20, virtual false, abstract: false, final false
inline bool _OnGraphsPostUpdate_b__10_0(bool  force) ;

/// [CompilerGenerated]
/// @brief Method <OnPostScan>b__8_0, addr 0x5e5e570, size 0x20, virtual false, abstract: false, final false
inline bool _OnPostScan_b__8_0(bool  force) ;

constexpr float_t const& __cordl_internal_get_costFactor() const;

constexpr float_t& __cordl_internal_get_costFactor() ;

constexpr bool const& __cordl_internal_get_deleteConnection() const;

constexpr bool& __cordl_internal_get_deleteConnection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_end() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_end() ;

constexpr bool const& __cordl_internal_get_oneWay() const;

constexpr bool& __cordl_internal_get_oneWay() ;

constexpr void __cordl_internal_set_costFactor(float_t  value) ;

constexpr void __cordl_internal_set_deleteConnection(bool  value) ;

constexpr void __cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_oneWay(bool  value) ;

/// @brief Method .ctor, addr 0x5e5e510, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_End, addr 0x5e5de74, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_End() ;

/// @brief Method get_Start, addr 0x5e5de6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Start() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeLink(NodeLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeLink(NodeLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21255};

/// @brief Field end, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___end;

/// @brief Field costFactor, offset: 0x48, size: 0x4, def value: None
 float_t  ___costFactor;

/// @brief Field oneWay, offset: 0x4c, size: 0x1, def value: None
 bool  ___oneWay;

/// @brief Field deleteConnection, offset: 0x4d, size: 0x1, def value: None
 bool  ___deleteConnection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NodeLink, ___end) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink, ___costFactor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink, ___oneWay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink, ___deleteConnection) == 0x4d, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NodeLink) == 0x50, "Size mismatch!");

} // namespace end def Pathfinding
