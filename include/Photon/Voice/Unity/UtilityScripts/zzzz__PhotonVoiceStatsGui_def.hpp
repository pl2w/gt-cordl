#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/PhotonVoiceStatsGui.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonVoiceStatsGui)
namespace ExitGames::Client::Photon {
class PhotonPeer;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace Photon::Voice {
class VoiceClient;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class PhotonVoiceStatsGui;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*, "Photon.Voice.Unity.UtilityScripts", "PhotonVoiceStatsGui");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.PhotonVoiceStatsGui
class CORDL_TYPE PhotonVoiceStatsGui : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field buttonsOn, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonsOn, put=__cordl_internal_set_buttonsOn)) bool  buttonsOn;

/// @brief Field healthStatsVisible, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_healthStatsVisible, put=__cordl_internal_set_healthStatsVisible)) bool  healthStatsVisible;

/// @brief Field peer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_peer, put=__cordl_internal_set_peer)) ::ExitGames::Client::Photon::PhotonPeer*  peer;

/// @brief Field statsOn, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_statsOn, put=__cordl_internal_set_statsOn)) bool  statsOn;

/// @brief Field statsRect, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_statsRect, put=__cordl_internal_set_statsRect)) ::UnityEngine::Rect  statsRect;

/// @brief Field statsWindowOn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_statsWindowOn, put=__cordl_internal_set_statsWindowOn)) bool  statsWindowOn;

/// @brief Field trafficStatsOn, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_trafficStatsOn, put=__cordl_internal_set_trafficStatsOn)) bool  trafficStatsOn;

/// @brief Field voiceClient, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceClient, put=__cordl_internal_set_voiceClient)) ::Photon::Voice::VoiceClient*  voiceClient;

/// @brief Field voiceConnection, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceConnection, put=__cordl_internal_set_voiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  voiceConnection;

/// @brief Field voiceStatsOn, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceStatsOn, put=__cordl_internal_set_voiceStatsOn)) bool  voiceStatsOn;

/// @brief Field windowId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowId, put=__cordl_internal_set_windowId)) int32_t  windowId;

static inline ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui* New_ctor() ;

/// @brief Method OnEnable, addr 0xa78a9f8, size 0x21c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGUI, addr 0xa78ac58, size 0x184, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method TrafficStatsWindow, addr 0xa78addc, size 0x144c, virtual false, abstract: false, final false
inline void TrafficStatsWindow(int32_t  windowId) ;

/// @brief Method Update, addr 0xa78ac14, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_buttonsOn() const;

constexpr bool& __cordl_internal_get_buttonsOn() ;

constexpr bool const& __cordl_internal_get_healthStatsVisible() const;

constexpr bool& __cordl_internal_get_healthStatsVisible() ;

constexpr ::ExitGames::Client::Photon::PhotonPeer* const& __cordl_internal_get_peer() const;

constexpr ::ExitGames::Client::Photon::PhotonPeer*& __cordl_internal_get_peer() ;

constexpr bool const& __cordl_internal_get_statsOn() const;

constexpr bool& __cordl_internal_get_statsOn() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_statsRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_statsRect() ;

constexpr bool const& __cordl_internal_get_statsWindowOn() const;

constexpr bool& __cordl_internal_get_statsWindowOn() ;

constexpr bool const& __cordl_internal_get_trafficStatsOn() const;

constexpr bool& __cordl_internal_get_trafficStatsOn() ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get_voiceClient() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get_voiceClient() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_voiceConnection() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_voiceConnection() ;

constexpr bool const& __cordl_internal_get_voiceStatsOn() const;

constexpr bool& __cordl_internal_get_voiceStatsOn() ;

constexpr int32_t const& __cordl_internal_get_windowId() const;

constexpr int32_t& __cordl_internal_get_windowId() ;

constexpr void __cordl_internal_set_buttonsOn(bool  value) ;

constexpr void __cordl_internal_set_healthStatsVisible(bool  value) ;

constexpr void __cordl_internal_set_peer(::ExitGames::Client::Photon::PhotonPeer*  value) ;

constexpr void __cordl_internal_set_statsOn(bool  value) ;

constexpr void __cordl_internal_set_statsRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_statsWindowOn(bool  value) ;

constexpr void __cordl_internal_set_trafficStatsOn(bool  value) ;

constexpr void __cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value) ;

constexpr void __cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

constexpr void __cordl_internal_set_voiceStatsOn(bool  value) ;

constexpr void __cordl_internal_set_windowId(int32_t  value) ;

/// @brief Method .ctor, addr 0xa78c228, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonVoiceStatsGui() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceStatsGui", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonVoiceStatsGui(PhotonVoiceStatsGui && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceStatsGui", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonVoiceStatsGui(PhotonVoiceStatsGui const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28901};

/// @brief Field statsWindowOn, offset: 0x20, size: 0x1, def value: None
 bool  ___statsWindowOn;

/// @brief Field statsOn, offset: 0x21, size: 0x1, def value: None
 bool  ___statsOn;

/// @brief Field healthStatsVisible, offset: 0x22, size: 0x1, def value: None
 bool  ___healthStatsVisible;

/// @brief Field trafficStatsOn, offset: 0x23, size: 0x1, def value: None
 bool  ___trafficStatsOn;

/// @brief Field buttonsOn, offset: 0x24, size: 0x1, def value: None
 bool  ___buttonsOn;

/// @brief Field voiceStatsOn, offset: 0x25, size: 0x1, def value: None
 bool  ___voiceStatsOn;

/// @brief Field statsRect, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  ___statsRect;

/// @brief Field windowId, offset: 0x38, size: 0x4, def value: None
 int32_t  ___windowId;

/// @brief Field peer, offset: 0x40, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PhotonPeer*  ___peer;

/// @brief Field voiceConnection, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___voiceConnection;

/// @brief Field voiceClient, offset: 0x50, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  ___voiceClient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___statsWindowOn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___statsOn) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___healthStatsVisible) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___trafficStatsOn) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___buttonsOn) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___voiceStatsOn) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___statsRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___windowId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___peer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___voiceConnection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui, ___voiceClient) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui) == 0x58, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
