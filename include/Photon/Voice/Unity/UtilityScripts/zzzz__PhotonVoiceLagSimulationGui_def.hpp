#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/PhotonVoiceLagSimulationGui.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonVoiceLagSimulationGui)
namespace ExitGames::Client::Photon {
class PhotonPeer;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class PhotonVoiceLagSimulationGui;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*, "Photon.Voice.Unity.UtilityScripts", "PhotonVoiceLagSimulationGui");
// [RequireComponent(typeof(Photon.Voice.Unity.VoiceConnection))]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.PhotonVoiceLagSimulationGui
class CORDL_TYPE PhotonVoiceLagSimulationGui : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field debugLostPercent, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugLostPercent, put=__cordl_internal_set_debugLostPercent)) float_t  debugLostPercent;

/// @brief Field peer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_peer, put=__cordl_internal_set_peer)) ::ExitGames::Client::Photon::PhotonPeer*  peer;

/// @brief Field visible, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_visible, put=__cordl_internal_set_visible)) bool  visible;

/// @brief Field voiceConnection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceConnection, put=__cordl_internal_set_voiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  voiceConnection;

/// @brief Field windowId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowId, put=__cordl_internal_set_windowId)) int32_t  windowId;

/// @brief Field windowRect, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_windowRect, put=__cordl_internal_set_windowRect)) ::UnityEngine::Rect  windowRect;

/// @brief Method NetSimHasNoPeerWindow, addr 0xa78a09c, size 0xb0, virtual false, abstract: false, final false
inline void NetSimHasNoPeerWindow(int32_t  windowId) ;

/// @brief Method NetSimWindow, addr 0xa78a14c, size 0x888, virtual false, abstract: false, final false
inline void NetSimWindow(int32_t  windowId) ;

static inline ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui* New_ctor() ;

/// @brief Method OnEnable, addr 0xa789d3c, size 0x1f4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGUI, addr 0xa789f30, size 0x16c, virtual false, abstract: false, final false
inline void OnGUI() ;

constexpr float_t const& __cordl_internal_get_debugLostPercent() const;

constexpr float_t& __cordl_internal_get_debugLostPercent() ;

constexpr ::ExitGames::Client::Photon::PhotonPeer* const& __cordl_internal_get_peer() const;

constexpr ::ExitGames::Client::Photon::PhotonPeer*& __cordl_internal_get_peer() ;

constexpr bool const& __cordl_internal_get_visible() const;

constexpr bool& __cordl_internal_get_visible() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_voiceConnection() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_voiceConnection() ;

constexpr int32_t const& __cordl_internal_get_windowId() const;

constexpr int32_t& __cordl_internal_get_windowId() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_windowRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_windowRect() ;

constexpr void __cordl_internal_set_debugLostPercent(float_t  value) ;

constexpr void __cordl_internal_set_peer(::ExitGames::Client::Photon::PhotonPeer*  value) ;

constexpr void __cordl_internal_set_visible(bool  value) ;

constexpr void __cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

constexpr void __cordl_internal_set_windowId(int32_t  value) ;

constexpr void __cordl_internal_set_windowRect(::UnityEngine::Rect  value) ;

/// @brief Method .ctor, addr 0xa78a9d4, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonVoiceLagSimulationGui() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceLagSimulationGui", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonVoiceLagSimulationGui(PhotonVoiceLagSimulationGui && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceLagSimulationGui", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonVoiceLagSimulationGui(PhotonVoiceLagSimulationGui const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28900};

/// @brief Field voiceConnection, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___voiceConnection;

/// @brief Field windowRect, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  ___windowRect;

/// @brief Field windowId, offset: 0x38, size: 0x4, def value: None
 int32_t  ___windowId;

/// @brief Field visible, offset: 0x3c, size: 0x1, def value: None
 bool  ___visible;

/// @brief Field peer, offset: 0x40, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PhotonPeer*  ___peer;

/// @brief Field debugLostPercent, offset: 0x48, size: 0x4, def value: None
 float_t  ___debugLostPercent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui, ___voiceConnection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui, ___windowRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui, ___windowId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui, ___visible) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui, ___peer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui, ___debugLostPercent) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui) == 0x50, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
