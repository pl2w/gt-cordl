#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveRPCs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RPCNetworkBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveRPCs)
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveManager;
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
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveRPCs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveRPCs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveRPCs*, "", "GorillaTagCompetitiveRPCs");
// Dependencies RPCNetworkBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveRPCs
class CORDL_TYPE GorillaTagCompetitiveRPCs : public ::GlobalNamespace::RPCNetworkBase {
public:
// Declarations
/// @brief Field serializer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializer, put=__cordl_internal_set_serializer)) ::UnityW<::GlobalNamespace::GameModeSerializer>  serializer;

/// @brief Field tagCompManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagCompManager, put=__cordl_internal_set_tagCompManager)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  tagCompManager;

static inline ::GlobalNamespace::GorillaTagCompetitiveRPCs* New_ctor() ;

/// [PunRPC]
/// @brief Method SendScoresToLateJoinerRPC, addr 0x5ac5350, size 0x3a8, virtual false, abstract: false, final false
inline void SendScoresToLateJoinerRPC(::ArrayW<int32_t>  playerId, ::ArrayW<int32_t>  numTags, ::ArrayW<float_t>  pointsOnDefense, ::ArrayW<float_t>  joinTime, ::ArrayW<bool>  infected, ::ArrayW<float_t>  taggedTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetClassTarget, addr 0x5ac520c, size 0x144, virtual true, abstract: false, final false
inline void SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler) ;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& __cordl_internal_get_serializer() const;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& __cordl_internal_get_serializer() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager> const& __cordl_internal_get_tagCompManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>& __cordl_internal_get_tagCompManager() ;

constexpr void __cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value) ;

constexpr void __cordl_internal_set_tagCompManager(::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  value) ;

/// @brief Method .ctor, addr 0x5ac56f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveRPCs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRPCs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveRPCs(GorillaTagCompetitiveRPCs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRPCs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveRPCs(GorillaTagCompetitiveRPCs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3373};

/// @brief Field serializer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModeSerializer>  ___serializer;

/// @brief Field tagCompManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  ___tagCompManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRPCs, ___serializer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRPCs, ___tagCompManager) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveRPCs) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
