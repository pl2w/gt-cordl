#pragma once
// IWYU pragma private; include "Photon/Voice/PUN/UtilityScripts/VoiceDebugScript.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceDebugScript)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Voice::PUN {
class PhotonVoiceView;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Photon::Voice::PUN::UtilityScripts {
class VoiceDebugScript;
}
// Write type traits
MARK_REF_T(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript*, "Photon.Voice.PUN.UtilityScripts", "VoiceDebugScript");
// [RequireComponent(typeof(Photon.Voice.PUN.PhotonVoiceView))]
// Dependencies Photon.Pun.MonoBehaviourPun
namespace Photon::Voice::PUN::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.PUN.UtilityScripts.VoiceDebugScript
class CORDL_TYPE VoiceDebugScript : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field DisableVad, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableVad, put=__cordl_internal_set_DisableVad)) bool  DisableVad;

/// @brief Field ForceRecordingAndTransmission, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ForceRecordingAndTransmission, put=__cordl_internal_set_ForceRecordingAndTransmission)) bool  ForceRecordingAndTransmission;

/// @brief Field IncreaseLogLevels, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_IncreaseLogLevels, put=__cordl_internal_set_IncreaseLogLevels)) bool  IncreaseLogLevels;

/// @brief Field LocalDebug, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get_LocalDebug, put=__cordl_internal_set_LocalDebug)) bool  LocalDebug;

/// @brief Field TestAudioClip, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TestAudioClip, put=__cordl_internal_set_TestAudioClip)) ::UnityW<::UnityEngine::AudioClip>  TestAudioClip;

/// @brief Field TestUsingAudioClip, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_TestUsingAudioClip, put=__cordl_internal_set_TestUsingAudioClip)) bool  TestUsingAudioClip;

/// @brief Field photonVoiceView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonVoiceView, put=__cordl_internal_set_photonVoiceView)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  photonVoiceView;

/// @brief Method Awake, addr 0xa782014, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// [ContextMenu("CantHearYou")]
/// @brief Method CantHearYou, addr 0xa782348, size 0x444, virtual false, abstract: false, final false
inline void CantHearYou() ;

/// [PunRPC]
/// @brief Method CantHearYou, addr 0xa78278c, size 0x624, virtual false, abstract: false, final false
inline void CantHearYou(::StringW  roomName, ::StringW  serverIp, ::StringW  appVersion, ::Photon::Pun::PhotonMessageInfo  photonMessageInfo) ;

/// [PunRPC]
/// @brief Method HeresWhy, addr 0xa782e98, size 0x120, virtual false, abstract: false, final false
inline void HeresWhy(::StringW  why, ::Photon::Pun::PhotonMessageInfo  photonMessageInfo) ;

/// @brief Method MaxLogs, addr 0xa78224c, size 0xfc, virtual false, abstract: false, final false
inline void MaxLogs() ;

static inline ::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript* New_ctor() ;

/// @brief Method Reply, addr 0xa782db0, size 0xe8, virtual false, abstract: false, final false
inline void Reply(::StringW  why, ::Photon::Realtime::Player*  player) ;

/// @brief Method Update, addr 0xa78206c, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_DisableVad() const;

constexpr bool& __cordl_internal_get_DisableVad() ;

constexpr bool const& __cordl_internal_get_ForceRecordingAndTransmission() const;

constexpr bool& __cordl_internal_get_ForceRecordingAndTransmission() ;

constexpr bool const& __cordl_internal_get_IncreaseLogLevels() const;

constexpr bool& __cordl_internal_get_IncreaseLogLevels() ;

constexpr bool const& __cordl_internal_get_LocalDebug() const;

constexpr bool& __cordl_internal_get_LocalDebug() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_TestAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_TestAudioClip() ;

constexpr bool const& __cordl_internal_get_TestUsingAudioClip() const;

constexpr bool& __cordl_internal_get_TestUsingAudioClip() ;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> const& __cordl_internal_get_photonVoiceView() const;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>& __cordl_internal_get_photonVoiceView() ;

constexpr void __cordl_internal_set_DisableVad(bool  value) ;

constexpr void __cordl_internal_set_ForceRecordingAndTransmission(bool  value) ;

constexpr void __cordl_internal_set_IncreaseLogLevels(bool  value) ;

constexpr void __cordl_internal_set_LocalDebug(bool  value) ;

constexpr void __cordl_internal_set_TestAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_TestUsingAudioClip(bool  value) ;

constexpr void __cordl_internal_set_photonVoiceView(::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  value) ;

/// @brief Method .ctor, addr 0xa782fb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceDebugScript() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceDebugScript", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceDebugScript(VoiceDebugScript && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceDebugScript", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceDebugScript(VoiceDebugScript const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32227};

/// @brief Field photonVoiceView, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  ___photonVoiceView;

/// @brief Field ForceRecordingAndTransmission, offset: 0x30, size: 0x1, def value: None
 bool  ___ForceRecordingAndTransmission;

/// @brief Field TestAudioClip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___TestAudioClip;

/// @brief Field TestUsingAudioClip, offset: 0x40, size: 0x1, def value: None
 bool  ___TestUsingAudioClip;

/// @brief Field DisableVad, offset: 0x41, size: 0x1, def value: None
 bool  ___DisableVad;

/// @brief Field IncreaseLogLevels, offset: 0x42, size: 0x1, def value: None
 bool  ___IncreaseLogLevels;

/// @brief Field LocalDebug, offset: 0x43, size: 0x1, def value: None
 bool  ___LocalDebug;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript, ___photonVoiceView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript, ___ForceRecordingAndTransmission) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript, ___TestAudioClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript, ___TestUsingAudioClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript, ___DisableVad) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript, ___IncreaseLogLevels) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript, ___LocalDebug) == 0x43, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::PUN::UtilityScripts::VoiceDebugScript) == 0x48, "Size mismatch!");

} // namespace end def Photon::Voice::PUN::UtilityScripts
