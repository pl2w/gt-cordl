#pragma once
// IWYU pragma private; include "GlobalNamespace/GuardianRPCs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RPCNetworkBase_def.hpp"
CORDL_MODULE_EXPORT(GuardianRPCs)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaGuardianManager;
}
namespace GlobalNamespace {
class GorillaWrappedSerializer;
}
namespace GlobalNamespace {
class IWrappedSerializable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GuardianRPCs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GuardianRPCs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GuardianRPCs*, "", "GuardianRPCs");
// Dependencies RPCNetworkBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GuardianRPCs
class CORDL_TYPE GuardianRPCs : public ::GlobalNamespace::RPCNetworkBase {
public:
// Declarations
/// @brief Field guardianManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_guardianManager, put=__cordl_internal_set_guardianManager)) ::UnityW<::GlobalNamespace::GorillaGuardianManager>  guardianManager;

/// @brief Field launchCallLimit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchCallLimit, put=__cordl_internal_set_launchCallLimit)) ::GlobalNamespace::CallLimiter*  launchCallLimit;

/// @brief Field serializer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializer, put=__cordl_internal_set_serializer)) ::UnityW<::GlobalNamespace::GameModeSerializer>  serializer;

/// @brief Field slamFXCallLimit, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_slamFXCallLimit, put=__cordl_internal_set_slamFXCallLimit)) ::GlobalNamespace::CallLimiter*  slamFXCallLimit;

/// @brief Field slapFXCallLimit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_slapFXCallLimit, put=__cordl_internal_set_slapFXCallLimit)) ::GlobalNamespace::CallLimiter*  slapFXCallLimit;

/// [PunRPC]
/// @brief Method GuardianLaunchPlayer, addr 0x5ac590c, size 0x2c4, virtual false, abstract: false, final false
inline void GuardianLaunchPlayer(::UnityEngine::Vector3  velocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method GuardianRequestEject, addr 0x5ac5818, size 0xf4, virtual false, abstract: false, final false
inline void GuardianRequestEject(::Photon::Pun::PhotonMessageInfo  info) ;

static inline ::GlobalNamespace::GuardianRPCs* New_ctor() ;

/// @brief Method SetClassTarget, addr 0x5ac5708, size 0x110, virtual true, abstract: false, final false
inline void SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler) ;

/// [PunRPC]
/// @brief Method ShowSlamEffect, addr 0x5ac5fac, size 0x3dc, virtual false, abstract: false, final false
inline void ShowSlamEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ShowSlapEffects, addr 0x5ac5bd0, size 0x3dc, virtual false, abstract: false, final false
inline void ShowSlapEffects(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityW<::GlobalNamespace::GorillaGuardianManager> const& __cordl_internal_get_guardianManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaGuardianManager>& __cordl_internal_get_guardianManager() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_launchCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_launchCallLimit() ;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& __cordl_internal_get_serializer() const;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& __cordl_internal_get_serializer() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_slamFXCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_slamFXCallLimit() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_slapFXCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_slapFXCallLimit() ;

constexpr void __cordl_internal_set_guardianManager(::UnityW<::GlobalNamespace::GorillaGuardianManager>  value) ;

constexpr void __cordl_internal_set_launchCallLimit(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value) ;

constexpr void __cordl_internal_set_slamFXCallLimit(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_slapFXCallLimit(::GlobalNamespace::CallLimiter*  value) ;

/// @brief Method .ctor, addr 0x5ac6388, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuardianRPCs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuardianRPCs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuardianRPCs(GuardianRPCs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuardianRPCs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuardianRPCs(GuardianRPCs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3374};

/// @brief Field serializer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModeSerializer>  ___serializer;

/// @brief Field guardianManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGuardianManager>  ___guardianManager;

/// @brief Field launchCallLimit, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___launchCallLimit;

/// @brief Field slapFXCallLimit, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___slapFXCallLimit;

/// @brief Field slamFXCallLimit, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___slamFXCallLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GuardianRPCs, ___serializer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuardianRPCs, ___guardianManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuardianRPCs, ___launchCallLimit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuardianRPCs, ___slapFXCallLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GuardianRPCs, ___slamFXCallLimit) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GuardianRPCs) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
