#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/SaveIncomingStreamToFile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaveIncomingStreamToFile)
namespace CSCore::Codecs::WAV {
class WaveWriter;
}
namespace Photon::Voice::Unity::UtilityScripts {
class SaveIncomingStreamToFile___c__DisplayClass5_0;
}
namespace Photon::Voice::Unity {
class RemoteVoiceLink;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace Photon::Voice {
template<typename T>
class FrameOut_1;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class SaveIncomingStreamToFile;
}
namespace Photon::Voice::Unity::UtilityScripts {
class SaveIncomingStreamToFile___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*);
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*, "Photon.Voice.Unity.UtilityScripts", "SaveIncomingStreamToFile");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*, "Photon.Voice.Unity.UtilityScripts", "SaveIncomingStreamToFile/<>c__DisplayClass5_0");
// [RequireComponent(typeof(Photon.Voice.Unity.VoiceConnection))]
// [DisallowMultipleComponent]
// Dependencies Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile
class CORDL_TYPE SaveIncomingStreamToFile : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
using __c__DisplayClass5_0 = ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0;

/// @brief Field muteLocalSpeaker, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_muteLocalSpeaker, put=__cordl_internal_set_muteLocalSpeaker)) bool  muteLocalSpeaker;

/// @brief Field voiceConnection, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceConnection, put=__cordl_internal_set_voiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  voiceConnection;

/// @brief Method Awake, addr 0xa78c250, size 0x12c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFilePath, addr 0xa78c788, size 0x2e8, virtual false, abstract: false, final false
inline ::StringW GetFilePath(::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoiceLink) ;

static inline ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa78c418, size 0xec, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRemoteVoiceAdded, addr 0xa78c504, size 0x27c, virtual false, abstract: false, final false
inline void OnRemoteVoiceAdded(::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoiceLink) ;

/// @brief Method OnSpeakerLinked, addr 0xa78c37c, size 0x9c, virtual false, abstract: false, final false
inline void OnSpeakerLinked(::Photon::Voice::Unity::Speaker*  speaker) ;

constexpr bool const& __cordl_internal_get_muteLocalSpeaker() const;

constexpr bool& __cordl_internal_get_muteLocalSpeaker() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_voiceConnection() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_voiceConnection() ;

constexpr void __cordl_internal_set_muteLocalSpeaker(bool  value) ;

constexpr void __cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

/// @brief Method .ctor, addr 0xa78ca70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveIncomingStreamToFile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveIncomingStreamToFile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveIncomingStreamToFile(SaveIncomingStreamToFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveIncomingStreamToFile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveIncomingStreamToFile(SaveIncomingStreamToFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28903};

/// @brief Field voiceConnection, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___voiceConnection;

/// [SerializeField]
/// @brief Field muteLocalSpeaker, offset: 0x38, size: 0x1, def value: None
 bool  ___muteLocalSpeaker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile, ___voiceConnection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile, ___muteLocalSpeaker) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.SaveIncomingStreamToFile/<>c__DisplayClass5_0
class CORDL_TYPE SaveIncomingStreamToFile___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile>  __4__this;

/// @brief Field waveWriter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_waveWriter, put=__cordl_internal_set_waveWriter)) ::CSCore::Codecs::WAV::WaveWriter*  waveWriter;

static inline ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <OnRemoteVoiceAdded>b__0, addr 0xa78ca78, size 0x60, virtual false, abstract: false, final false
inline void _OnRemoteVoiceAdded_b__0(::Photon::Voice::FrameOut_1<float_t>*  f) ;

/// @brief Method <OnRemoteVoiceAdded>b__1, addr 0xa78cad8, size 0x100, virtual false, abstract: false, final false
inline void _OnRemoteVoiceAdded_b__1() ;

constexpr ::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile>& __cordl_internal_get___4__this() ;

constexpr ::CSCore::Codecs::WAV::WaveWriter* const& __cordl_internal_get_waveWriter() const;

constexpr ::CSCore::Codecs::WAV::WaveWriter*& __cordl_internal_get_waveWriter() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile>  value) ;

constexpr void __cordl_internal_set_waveWriter(::CSCore::Codecs::WAV::WaveWriter*  value) ;

/// @brief Method .ctor, addr 0xa78c780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveIncomingStreamToFile___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveIncomingStreamToFile___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveIncomingStreamToFile___c__DisplayClass5_0(SaveIncomingStreamToFile___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveIncomingStreamToFile___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveIncomingStreamToFile___c__DisplayClass5_0(SaveIncomingStreamToFile___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28902};

/// @brief Field waveWriter, offset: 0x10, size: 0x8, def value: None
 ::CSCore::Codecs::WAV::WaveWriter*  ___waveWriter;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0, ___waveWriter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
