#pragma once
// IWYU pragma private; include "GlobalNamespace/SkeletonPathingNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SkeletonPathingNode)
// Forward declare root types
namespace GlobalNamespace {
class SkeletonPathingNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkeletonPathingNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkeletonPathingNode*, "", "SkeletonPathingNode");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkeletonPathingNode
class CORDL_TYPE SkeletonPathingNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field connectedNodes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedNodes, put=__cordl_internal_set_connectedNodes)) ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  connectedNodes;

/// @brief Field distanceToExitNode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceToExitNode, put=__cordl_internal_set_distanceToExitNode)) float_t  distanceToExitNode;

/// @brief Field ejectionPoint, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ejectionPoint, put=__cordl_internal_set_ejectionPoint)) bool  ejectionPoint;

/// @brief Method Awake, addr 0x5d11d7c, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SkeletonPathingNode* New_ctor() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>> const& __cordl_internal_get_connectedNodes() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>& __cordl_internal_get_connectedNodes() ;

constexpr float_t const& __cordl_internal_get_distanceToExitNode() const;

constexpr float_t& __cordl_internal_get_distanceToExitNode() ;

constexpr bool const& __cordl_internal_get_ejectionPoint() const;

constexpr bool& __cordl_internal_get_ejectionPoint() ;

constexpr void __cordl_internal_set_connectedNodes(::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  value) ;

constexpr void __cordl_internal_set_distanceToExitNode(float_t  value) ;

constexpr void __cordl_internal_set_ejectionPoint(bool  value) ;

/// @brief Method .ctor, addr 0x5d11da0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkeletonPathingNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkeletonPathingNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkeletonPathingNode(SkeletonPathingNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkeletonPathingNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkeletonPathingNode(SkeletonPathingNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{469};

/// @brief Field ejectionPoint, offset: 0x20, size: 0x1, def value: None
 bool  ___ejectionPoint;

/// @brief Field connectedNodes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  ___connectedNodes;

/// @brief Field distanceToExitNode, offset: 0x30, size: 0x4, def value: None
 float_t  ___distanceToExitNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkeletonPathingNode, ___ejectionPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkeletonPathingNode, ___connectedNodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkeletonPathingNode, ___distanceToExitNode) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkeletonPathingNode) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
