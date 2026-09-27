#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabbyTentacleNetworking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GrabbyTentacleNetworking)
namespace GlobalNamespace {
class GrabbyTentacleController;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
class GrabbyTentacleNetworking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GrabbyTentacleNetworking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabbyTentacleNetworking*, "", "GrabbyTentacleNetworking");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabbyTentacleNetworking
class CORDL_TYPE GrabbyTentacleNetworking : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::GrabbyTentacleNetworking>  _Instance_k__BackingField;

/// @brief Field registeredController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_registeredController, put=__cordl_internal_set_registeredController)) ::UnityW<::GlobalNamespace::GrabbyTentacleController>  registeredController;

/// @brief Field tablePhotonView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tablePhotonView, put=__cordl_internal_set_tablePhotonView)) ::UnityW<::Photon::Pun::PhotonView>  tablePhotonView;

/// [PunRPC]
/// @brief Method ApplyTargetRPC, addr 0x56426a4, size 0x214, virtual false, abstract: false, final false
inline void ApplyTargetRPC(int32_t  tentacleIndex, ::Photon::Realtime::Player*  targetPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Awake, addr 0x56423b8, size 0x208, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GrabbyTentacleNetworking* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56425c0, size 0xdc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Register, addr 0x564269c, size 0x8, virtual false, abstract: false, final false
inline void Register(::GlobalNamespace::GrabbyTentacleController*  controller) ;

/// @brief Method SendGrab, addr 0x5641d7c, size 0x1a0, virtual false, abstract: false, final false
inline void SendGrab(int32_t  tentacleIndex, ::Photon::Realtime::Player*  targetPlayer) ;

/// @brief Method Unregister, addr 0x5641498, size 0x90, virtual false, abstract: false, final false
inline void Unregister(::GlobalNamespace::GrabbyTentacleController*  controller) ;

constexpr ::UnityW<::GlobalNamespace::GrabbyTentacleController> const& __cordl_internal_get_registeredController() const;

constexpr ::UnityW<::GlobalNamespace::GrabbyTentacleController>& __cordl_internal_get_registeredController() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_tablePhotonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_tablePhotonView() ;

constexpr void __cordl_internal_set_registeredController(::UnityW<::GlobalNamespace::GrabbyTentacleController>  value) ;

constexpr void __cordl_internal_set_tablePhotonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x56428b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GrabbyTentacleNetworking> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5642318, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GrabbyTentacleNetworking> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::GrabbyTentacleNetworking>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5642360, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::GrabbyTentacleNetworking*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabbyTentacleNetworking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabbyTentacleNetworking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabbyTentacleNetworking(GrabbyTentacleNetworking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabbyTentacleNetworking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabbyTentacleNetworking(GrabbyTentacleNetworking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{652};

/// [SerializeField]
/// @brief Field tablePhotonView, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___tablePhotonView;

/// @brief Field registeredController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GrabbyTentacleController>  ___registeredController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabbyTentacleNetworking, ___tablePhotonView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleNetworking, ___registeredController) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabbyTentacleNetworking) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
