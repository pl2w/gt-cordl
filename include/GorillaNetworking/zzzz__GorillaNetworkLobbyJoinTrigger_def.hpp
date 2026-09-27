#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkLobbyJoinTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaNetworkLobbyJoinTrigger)
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaNetworkLobbyJoinTrigger;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger*, "GorillaNetworking", "GorillaNetworkLobbyJoinTrigger");
// Dependencies GorillaTriggerBox, UnityEngine.GameObject
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaNetworkLobbyJoinTrigger
class CORDL_TYPE GorillaNetworkLobbyJoinTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field componentAddTarget, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentAddTarget, put=__cordl_internal_set_componentAddTarget)) ::UnityW<::UnityEngine::GameObject>  componentAddTarget;

/// @brief Field componentRemoveTarget, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentRemoveTarget, put=__cordl_internal_set_componentRemoveTarget)) ::UnityW<::UnityEngine::GameObject>  componentRemoveTarget;

/// @brief Field componentTypeToAdd, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentTypeToAdd, put=__cordl_internal_set_componentTypeToAdd)) ::StringW  componentTypeToAdd;

/// @brief Field componentTypeToRemove, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentTypeToRemove, put=__cordl_internal_set_componentTypeToRemove)) ::StringW  componentTypeToRemove;

/// @brief Field gameModeName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeName, put=__cordl_internal_set_gameModeName)) ::StringW  gameModeName;

/// @brief Field gorillaParent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaParent, put=__cordl_internal_set_gorillaParent)) ::UnityW<::UnityEngine::GameObject>  gorillaParent;

/// @brief Field joinFailedBlock, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinFailedBlock, put=__cordl_internal_set_joinFailedBlock)) ::UnityW<::UnityEngine::GameObject>  joinFailedBlock;

/// @brief Field makeSureThisIsDisabled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsDisabled, put=__cordl_internal_set_makeSureThisIsDisabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsDisabled;

/// @brief Field makeSureThisIsEnabled, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsEnabled, put=__cordl_internal_set_makeSureThisIsEnabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsEnabled;

/// @brief Field photonNetworkController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonNetworkController, put=__cordl_internal_set_photonNetworkController)) ::UnityW<::GorillaNetworking::PhotonNetworkController>  photonNetworkController;

static inline ::GorillaNetworking::GorillaNetworkLobbyJoinTrigger* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_componentAddTarget() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_componentAddTarget() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_componentRemoveTarget() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_componentRemoveTarget() ;

constexpr ::StringW const& __cordl_internal_get_componentTypeToAdd() const;

constexpr ::StringW& __cordl_internal_get_componentTypeToAdd() ;

constexpr ::StringW const& __cordl_internal_get_componentTypeToRemove() const;

constexpr ::StringW& __cordl_internal_get_componentTypeToRemove() ;

constexpr ::StringW const& __cordl_internal_get_gameModeName() const;

constexpr ::StringW& __cordl_internal_get_gameModeName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gorillaParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gorillaParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_joinFailedBlock() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_joinFailedBlock() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsDisabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsDisabled() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsEnabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsEnabled() ;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& __cordl_internal_get_photonNetworkController() const;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& __cordl_internal_get_photonNetworkController() ;

constexpr void __cordl_internal_set_componentAddTarget(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_componentRemoveTarget(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_componentTypeToAdd(::StringW  value) ;

constexpr void __cordl_internal_set_componentTypeToRemove(::StringW  value) ;

constexpr void __cordl_internal_set_gameModeName(::StringW  value) ;

constexpr void __cordl_internal_set_gorillaParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_joinFailedBlock(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsDisabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value) ;

/// @brief Method .ctor, addr 0x5c8bfec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkLobbyJoinTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkLobbyJoinTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkLobbyJoinTrigger(GorillaNetworkLobbyJoinTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkLobbyJoinTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkLobbyJoinTrigger(GorillaNetworkLobbyJoinTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4347};

/// @brief Field makeSureThisIsDisabled, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsDisabled;

/// @brief Field makeSureThisIsEnabled, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsEnabled;

/// @brief Field gameModeName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___gameModeName;

/// @brief Field photonNetworkController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  ___photonNetworkController;

/// @brief Field componentTypeToRemove, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___componentTypeToRemove;

/// @brief Field componentRemoveTarget, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___componentRemoveTarget;

/// @brief Field componentTypeToAdd, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___componentTypeToAdd;

/// @brief Field componentAddTarget, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___componentAddTarget;

/// @brief Field gorillaParent, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gorillaParent;

/// @brief Field joinFailedBlock, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___joinFailedBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___makeSureThisIsDisabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___makeSureThisIsEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___gameModeName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___photonNetworkController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___componentTypeToRemove) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___componentRemoveTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___componentTypeToAdd) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___componentAddTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___gorillaParent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger, ___joinFailedBlock) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaNetworkLobbyJoinTrigger) == 0x70, "Size mismatch!");

} // namespace end def GorillaNetworking
