#pragma once
// IWYU pragma private; include "GlobalNamespace/StumpReturnRouter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StumpReturnRouter)
namespace GlobalNamespace {
class TeleportNode;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct VirtualStumpActivateMode;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class StumpReturnRouter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StumpReturnRouter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StumpReturnRouter*, "", "StumpReturnRouter");
// [RequireComponent(typeof(TeleportNode))]
// Dependencies GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpActivateMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StumpReturnRouter
class CORDL_TYPE StumpReturnRouter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field appliedMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_appliedMode, put=__cordl_internal_set_appliedMode)) ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  appliedMode;

/// @brief Field customDestination, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_customDestination, put=__cordl_internal_set_customDestination)) ::UnityW<::UnityEngine::Transform>  customDestination;

/// @brief Field featureADestination, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_featureADestination, put=__cordl_internal_set_featureADestination)) ::UnityW<::UnityEngine::Transform>  featureADestination;

/// @brief Field featureBDestination, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_featureBDestination, put=__cordl_internal_set_featureBDestination)) ::UnityW<::UnityEngine::Transform>  featureBDestination;

/// @brief Field hasApplied, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasApplied, put=__cordl_internal_set_hasApplied)) bool  hasApplied;

/// @brief Field node, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::UnityW<::GlobalNamespace::TeleportNode>  node;

/// @brief Method Awake, addr 0x59f4af0, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetDestination, addr 0x59f4e14, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetDestination(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode) ;

static inline ::GlobalNamespace::StumpReturnRouter* New_ctor() ;

/// @brief Method OnReturnedToHallway, addr 0x59f4e38, size 0x50, virtual false, abstract: false, final false
inline void OnReturnedToHallway() ;

/// @brief Method Update, addr 0x59f4b48, size 0x2cc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode const& __cordl_internal_get_appliedMode() const;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode& __cordl_internal_get_appliedMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customDestination() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customDestination() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_featureADestination() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_featureADestination() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_featureBDestination() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_featureBDestination() ;

constexpr bool const& __cordl_internal_get_hasApplied() const;

constexpr bool& __cordl_internal_get_hasApplied() ;

constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& __cordl_internal_get_node() const;

constexpr ::UnityW<::GlobalNamespace::TeleportNode>& __cordl_internal_get_node() ;

constexpr void __cordl_internal_set_appliedMode(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  value) ;

constexpr void __cordl_internal_set_customDestination(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_featureADestination(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_featureBDestination(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hasApplied(bool  value) ;

constexpr void __cordl_internal_set_node(::UnityW<::GlobalNamespace::TeleportNode>  value) ;

/// @brief Method .ctor, addr 0x59f4e88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StumpReturnRouter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StumpReturnRouter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StumpReturnRouter(StumpReturnRouter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StumpReturnRouter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StumpReturnRouter(StumpReturnRouter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2734};

/// [Tooltip("Where the return node drops the player back into the Custom hallway.")]
/// [SerializeField]
/// @brief Field customDestination, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customDestination;

/// [Tooltip("Where the return node drops the player back into the Feature A hallway.")]
/// [SerializeField]
/// @brief Field featureADestination, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___featureADestination;

/// [Tooltip("Where the return node drops the player back into the Feature B hallway.")]
/// [SerializeField]
/// @brief Field featureBDestination, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___featureBDestination;

/// @brief Field node, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeleportNode>  ___node;

/// @brief Field appliedMode, offset: 0x40, size: 0x4, def value: None
 ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  ___appliedMode;

/// @brief Field hasApplied, offset: 0x44, size: 0x1, def value: None
 bool  ___hasApplied;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StumpReturnRouter, ___customDestination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StumpReturnRouter, ___featureADestination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StumpReturnRouter, ___featureBDestination) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StumpReturnRouter, ___node) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StumpReturnRouter, ___appliedMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StumpReturnRouter, ___hasApplied) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StumpReturnRouter) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
