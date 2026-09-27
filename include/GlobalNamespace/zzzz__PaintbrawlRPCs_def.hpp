#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintbrawlRPCs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RPCNetworkBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaintbrawlRPCs)
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaPaintbrawlManager;
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
namespace Photon::Realtime {
class Player;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PaintbrawlRPCs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PaintbrawlRPCs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaintbrawlRPCs*, "", "PaintbrawlRPCs");
// Dependencies RPCNetworkBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: PaintbrawlRPCs
class CORDL_TYPE PaintbrawlRPCs : public ::GlobalNamespace::RPCNetworkBase {
public:
// Declarations
/// @brief Field paintbrawlManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintbrawlManager, put=__cordl_internal_set_paintbrawlManager)) ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  paintbrawlManager;

/// @brief Field serializer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializer, put=__cordl_internal_set_serializer)) ::UnityW<::GlobalNamespace::GameModeSerializer>  serializer;

static inline ::GlobalNamespace::PaintbrawlRPCs* New_ctor() ;

/// [PunRPC]
/// @brief Method RPC_ReportSlingshotHit, addr 0x5ac6564, size 0x1b8, virtual false, abstract: false, final false
inline void RPC_ReportSlingshotHit(::Photon::Realtime::Player*  taggedPlayer, ::UnityEngine::Vector3  hitLocation, int32_t  projectileCount, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetClassTarget, addr 0x5ac6454, size 0x110, virtual true, abstract: false, final false
inline void SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler) ;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& __cordl_internal_get_paintbrawlManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& __cordl_internal_get_paintbrawlManager() ;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& __cordl_internal_get_serializer() const;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& __cordl_internal_get_serializer() ;

constexpr void __cordl_internal_set_paintbrawlManager(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value) ;

constexpr void __cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value) ;

/// @brief Method .ctor, addr 0x5ac671c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaintbrawlRPCs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaintbrawlRPCs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaintbrawlRPCs(PaintbrawlRPCs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaintbrawlRPCs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaintbrawlRPCs(PaintbrawlRPCs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3375};

/// @brief Field serializer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModeSerializer>  ___serializer;

/// @brief Field paintbrawlManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  ___paintbrawlManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PaintbrawlRPCs, ___serializer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintbrawlRPCs, ___paintbrawlManager) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PaintbrawlRPCs) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
