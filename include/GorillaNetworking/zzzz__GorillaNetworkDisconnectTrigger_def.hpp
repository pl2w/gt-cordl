#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkDisconnectTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaNetworkDisconnectTrigger)
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaNetworking {
class GorillaNetworkDisconnectTrigger;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaNetworkDisconnectTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaNetworkDisconnectTrigger*, "GorillaNetworking", "GorillaNetworkDisconnectTrigger");
// Dependencies GorillaTriggerBox, UnityEngine.GameObject
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaNetworkDisconnectTrigger
class CORDL_TYPE GorillaNetworkDisconnectTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field componentTarget, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentTarget, put=__cordl_internal_set_componentTarget)) ::UnityW<::UnityEngine::GameObject>  componentTarget;

/// @brief Field componentTypeToRemove, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentTypeToRemove, put=__cordl_internal_set_componentTypeToRemove)) ::StringW  componentTypeToRemove;

/// @brief Field makeSureTheseAreEnabled, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureTheseAreEnabled, put=__cordl_internal_set_makeSureTheseAreEnabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureTheseAreEnabled;

/// @brief Field makeSureThisIsEnabled, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsEnabled, put=__cordl_internal_set_makeSureThisIsEnabled)) ::UnityW<::UnityEngine::GameObject>  makeSureThisIsEnabled;

/// @brief Field offlineVRRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineVRRig, put=__cordl_internal_set_offlineVRRig)) ::UnityW<::UnityEngine::GameObject>  offlineVRRig;

/// @brief Field photonNetworkController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonNetworkController, put=__cordl_internal_set_photonNetworkController)) ::UnityW<::GorillaNetworking::PhotonNetworkController>  photonNetworkController;

static inline ::GorillaNetworking::GorillaNetworkDisconnectTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5c898dc, size 0x23c, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_componentTarget() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_componentTarget() ;

constexpr ::StringW const& __cordl_internal_get_componentTypeToRemove() const;

constexpr ::StringW& __cordl_internal_get_componentTypeToRemove() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureTheseAreEnabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureTheseAreEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_makeSureThisIsEnabled() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_makeSureThisIsEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_offlineVRRig() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_offlineVRRig() ;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& __cordl_internal_get_photonNetworkController() const;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& __cordl_internal_get_photonNetworkController() ;

constexpr void __cordl_internal_set_componentTarget(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_componentTypeToRemove(::StringW  value) ;

constexpr void __cordl_internal_set_makeSureTheseAreEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsEnabled(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_offlineVRRig(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value) ;

/// @brief Method .ctor, addr 0x5c89b18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkDisconnectTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkDisconnectTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkDisconnectTrigger(GorillaNetworkDisconnectTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkDisconnectTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkDisconnectTrigger(GorillaNetworkDisconnectTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4342};

/// @brief Field photonNetworkController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  ___photonNetworkController;

/// @brief Field offlineVRRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___offlineVRRig;

/// @brief Field makeSureThisIsEnabled, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___makeSureThisIsEnabled;

/// @brief Field makeSureTheseAreEnabled, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureTheseAreEnabled;

/// @brief Field componentTypeToRemove, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___componentTypeToRemove;

/// @brief Field componentTarget, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___componentTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaNetworkDisconnectTrigger, ___photonNetworkController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkDisconnectTrigger, ___offlineVRRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkDisconnectTrigger, ___makeSureThisIsEnabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkDisconnectTrigger, ___makeSureTheseAreEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkDisconnectTrigger, ___componentTypeToRemove) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaNetworkDisconnectTrigger, ___componentTarget) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaNetworkDisconnectTrigger) == 0x50, "Size mismatch!");

} // namespace end def GorillaNetworking
