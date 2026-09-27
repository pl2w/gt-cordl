#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkJoinTriggerXSceneRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaNetworkJoinTriggerXSceneRef)
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaNetworkJoinTriggerXSceneRef;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*, "", "GorillaNetworkJoinTriggerXSceneRef");
// Dependencies UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaNetworkJoinTriggerXSceneRef
class CORDL_TYPE GorillaNetworkJoinTriggerXSceneRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _joinTrigger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__joinTrigger, put=__cordl_internal_set__joinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  _joinTrigger;

/// @brief Field m_joinTriggerRef, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_joinTriggerRef, put=__cordl_internal_set_m_joinTriggerRef)) ::GlobalNamespace::XSceneRef  m_joinTriggerRef;

/// @brief Method Awake, addr 0x5aadd14, size 0xec, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5aade00, size 0x84, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SubsPublicJoin, addr 0x5aaded0, size 0x84, virtual false, abstract: false, final false
inline void SubsPublicJoin() ;

/// @brief Method _OnTargetSceneLoaded, addr 0x5aade84, size 0x4c, virtual false, abstract: false, final false
inline void _OnTargetSceneLoaded() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get__joinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get__joinTrigger() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_m_joinTriggerRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_m_joinTriggerRef() ;

constexpr void __cordl_internal_set__joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_m_joinTriggerRef(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x5aadf54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkJoinTriggerXSceneRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkJoinTriggerXSceneRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkJoinTriggerXSceneRef(GorillaNetworkJoinTriggerXSceneRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkJoinTriggerXSceneRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkJoinTriggerXSceneRef(GorillaNetworkJoinTriggerXSceneRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3278};

/// [FormerlySerializedAs("joinTriggerRef")]
/// [SerializeField]
/// @brief Field m_joinTriggerRef, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___m_joinTriggerRef;

/// @brief Field _joinTrigger, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ____joinTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef, ___m_joinTriggerRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef, ____joinTrigger) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
