#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/CustomRopeNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CustomRopeNode)
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class CustomRopeNode;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::CustomRopeNode*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::CustomRopeNode*, "GorillaLocomotion.Gameplay", "CustomRopeNode");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.CustomRopeNode
class CORDL_TYPE CustomRopeNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field previousPos, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousPos, put=__cordl_internal_set_previousPos)) ::UnityEngine::Vector3  previousPos;

static inline ::GorillaLocomotion::Gameplay::CustomRopeNode* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousPos() ;

constexpr void __cordl_internal_set_previousPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5ce8bf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomRopeNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomRopeNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomRopeNode(CustomRopeNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomRopeNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomRopeNode(CustomRopeNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4523};

/// @brief Field previousPos, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::CustomRopeNode, ___previousPos) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::CustomRopeNode) == 0x30, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
