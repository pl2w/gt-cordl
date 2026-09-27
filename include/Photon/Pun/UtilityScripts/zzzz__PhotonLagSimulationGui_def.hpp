#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonLagSimulationGui.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonLagSimulationGui)
namespace ExitGames::Client::Photon {
class PhotonPeer;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonLagSimulationGui;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui*, "Photon.Pun.UtilityScripts", "PhotonLagSimulationGui");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PhotonLagSimulationGui
class CORDL_TYPE PhotonLagSimulationGui : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Peer, put=set_Peer)) ::ExitGames::Client::Photon::PhotonPeer*  Peer;

/// @brief Field Visible, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_Visible, put=__cordl_internal_set_Visible)) bool  Visible;

/// @brief Field WindowId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindowId, put=__cordl_internal_set_WindowId)) int32_t  WindowId;

/// @brief Field WindowRect, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_WindowRect, put=__cordl_internal_set_WindowRect)) ::UnityEngine::Rect  WindowRect;

/// @brief Field <Peer>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Peer_k__BackingField, put=__cordl_internal_set__Peer_k__BackingField)) ::ExitGames::Client::Photon::PhotonPeer*  _Peer_k__BackingField;

/// @brief Method NetSimHasNoPeerWindow, addr 0xa730d84, size 0xb0, virtual false, abstract: false, final false
inline void NetSimHasNoPeerWindow(int32_t  windowId) ;

/// @brief Method NetSimWindow, addr 0xa730e34, size 0x754, virtual false, abstract: false, final false
inline void NetSimWindow(int32_t  windowId) ;

static inline ::Photon::Pun::UtilityScripts::PhotonLagSimulationGui* New_ctor() ;

/// @brief Method OnGUI, addr 0xa730c18, size 0x16c, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0xa730ba8, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_Visible() const;

constexpr bool& __cordl_internal_get_Visible() ;

constexpr int32_t const& __cordl_internal_get_WindowId() const;

constexpr int32_t& __cordl_internal_get_WindowId() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_WindowRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_WindowRect() ;

constexpr ::ExitGames::Client::Photon::PhotonPeer* const& __cordl_internal_get__Peer_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::PhotonPeer*& __cordl_internal_get__Peer_k__BackingField() ;

constexpr void __cordl_internal_set_Visible(bool  value) ;

constexpr void __cordl_internal_set_WindowId(int32_t  value) ;

constexpr void __cordl_internal_set_WindowRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__Peer_k__BackingField(::ExitGames::Client::Photon::PhotonPeer*  value) ;

/// @brief Method .ctor, addr 0xa731588, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Peer, addr 0xa730b98, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonPeer* get_Peer() ;

/// [CompilerGenerated]
/// @brief Method set_Peer, addr 0xa730ba0, size 0x8, virtual false, abstract: false, final false
inline void set_Peer(::ExitGames::Client::Photon::PhotonPeer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonLagSimulationGui() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonLagSimulationGui", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonLagSimulationGui(PhotonLagSimulationGui && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonLagSimulationGui", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonLagSimulationGui(PhotonLagSimulationGui const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31206};

/// @brief Field WindowRect, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rect  ___WindowRect;

/// @brief Field WindowId, offset: 0x30, size: 0x4, def value: None
 int32_t  ___WindowId;

/// @brief Field Visible, offset: 0x34, size: 0x1, def value: None
 bool  ___Visible;

/// [CompilerGenerated]
/// @brief Field <Peer>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PhotonPeer*  ____Peer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ___WindowRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ___WindowId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ___Visible) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ____Peer_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui) == 0x40, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
