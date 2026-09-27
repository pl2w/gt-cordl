#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportNodeDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TeleportNodeDefinition)
namespace GlobalNamespace {
class TeleportNode;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleportNodeDefinition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportNodeDefinition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportNodeDefinition*, "", "TeleportNodeDefinition");
// [CreateAssetMenu(fileName = "New TeleportNode Definition", menuName = "Teleportation/TeleportNode Definition", order = 1)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportNodeDefinition
class CORDL_TYPE TeleportNodeDefinition : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Backward)) ::UnityW<::GlobalNamespace::TeleportNode>  Backward;

 __declspec(property(get=get_Forward)) ::UnityW<::GlobalNamespace::TeleportNode>  Forward;

/// @brief Field backward, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_backward, put=__cordl_internal_set_backward)) ::UnityW<::GlobalNamespace::TeleportNode>  backward;

/// @brief Field forward, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_forward, put=__cordl_internal_set_forward)) ::UnityW<::GlobalNamespace::TeleportNode>  forward;

static inline ::GlobalNamespace::TeleportNodeDefinition* New_ctor() ;

/// @brief Method SetBackward, addr 0x5b2da04, size 0xb8, virtual false, abstract: false, final false
inline void SetBackward(::GlobalNamespace::TeleportNode*  node) ;

/// @brief Method SetForward, addr 0x5b2d94c, size 0xb8, virtual false, abstract: false, final false
inline void SetForward(::GlobalNamespace::TeleportNode*  node) ;

constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& __cordl_internal_get_backward() const;

constexpr ::UnityW<::GlobalNamespace::TeleportNode>& __cordl_internal_get_backward() ;

constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& __cordl_internal_get_forward() const;

constexpr ::UnityW<::GlobalNamespace::TeleportNode>& __cordl_internal_get_forward() ;

constexpr void __cordl_internal_set_backward(::UnityW<::GlobalNamespace::TeleportNode>  value) ;

constexpr void __cordl_internal_set_forward(::UnityW<::GlobalNamespace::TeleportNode>  value) ;

/// @brief Method .ctor, addr 0x5b2dabc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Backward, addr 0x5b2d944, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::TeleportNode> get_Backward() ;

/// @brief Method get_Forward, addr 0x5b2d93c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::TeleportNode> get_Forward() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportNodeDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportNodeDefinition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportNodeDefinition(TeleportNodeDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportNodeDefinition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportNodeDefinition(TeleportNodeDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3645};

/// [SerializeField]
/// @brief Field forward, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeleportNode>  ___forward;

/// [SerializeField]
/// @brief Field backward, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeleportNode>  ___backward;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportNodeDefinition, ___forward) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNodeDefinition, ___backward) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportNodeDefinition) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
