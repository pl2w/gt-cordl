#pragma once
// IWYU pragma private; include "Photon/Voice/Fusion/VoiceNetworkObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VoiceNetworkObject)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace Photon::Voice::Unity {
class ILoggableDependent;
}
namespace Photon::Voice::Unity {
class ILoggable;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace Photon::Voice::Unity {
class VoiceLogger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice::Fusion {
class VoiceNetworkObject;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Fusion::VoiceNetworkObject*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Fusion::VoiceNetworkObject*, "Photon.Voice.Fusion", "VoiceNetworkObject");
// [NetworkBehaviourWeaved(0)]
// Dependencies ExitGames.Client.Photon.DebugLevel, Fusion.NetworkBehaviour
namespace Photon::Voice::Fusion {
// Is value type: false
// CS Name: Photon.Voice.Fusion.VoiceNetworkObject
class CORDL_TYPE VoiceNetworkObject : public ::Fusion::NetworkBehaviour {
public:
// Declarations
/// @brief Field AutoCreateRecorderIfNotFound, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoCreateRecorderIfNotFound, put=__cordl_internal_set_AutoCreateRecorderIfNotFound)) bool  AutoCreateRecorderIfNotFound;

 __declspec(property(get=get_IgnoreGlobalLogLevel, put=set_IgnoreGlobalLogLevel)) bool  IgnoreGlobalLogLevel;

 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_IsNetworkObjectReady)) bool  IsNetworkObjectReady;

 __declspec(property(get=get_IsPlayer)) bool  IsPlayer;

 __declspec(property(get=get_IsRecorder, put=set_IsRecorder)) bool  IsRecorder;

 __declspec(property(get=get_IsRecording)) bool  IsRecording;

 __declspec(property(get=get_IsSetup)) bool  IsSetup;

 __declspec(property(get=get_IsSpeaker, put=set_IsSpeaker)) bool  IsSpeaker;

 __declspec(property(get=get_IsSpeakerLinked)) bool  IsSpeakerLinked;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_LogLevel, put=set_LogLevel)) ::ExitGames::Client::Photon::DebugLevel  LogLevel;

 __declspec(property(get=get_Logger, put=set_Logger)) ::Photon::Voice::Unity::VoiceLogger*  Logger;

 __declspec(property(get=get_RecorderInUse, put=set_RecorderInUse)) ::UnityW<::Photon::Voice::Unity::Recorder>  RecorderInUse;

 __declspec(property(get=get_RequiresRecorder)) bool  RequiresRecorder;

 __declspec(property(get=get_RequiresSpeaker)) bool  RequiresSpeaker;

/// @brief Field SetupDebugSpeaker, offset 0xab, size 0x1 
 __declspec(property(get=__cordl_internal_get_SetupDebugSpeaker, put=__cordl_internal_set_SetupDebugSpeaker)) bool  SetupDebugSpeaker;

 __declspec(property(get=get_SpeakerInUse, put=set_SpeakerInUse)) ::UnityW<::Photon::Voice::Unity::Speaker>  SpeakerInUse;

/// @brief Field UsePrimaryRecorder, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get_UsePrimaryRecorder, put=__cordl_internal_set_UsePrimaryRecorder)) bool  UsePrimaryRecorder;

/// @brief Field <IsRecorder>k__BackingField, offset 0xad, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRecorder_k__BackingField, put=__cordl_internal_set__IsRecorder_k__BackingField)) bool  _IsRecorder_k__BackingField;

/// @brief Field <IsSpeaker>k__BackingField, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpeaker_k__BackingField, put=__cordl_internal_set__IsSpeaker_k__BackingField)) bool  _IsSpeaker_k__BackingField;

/// @brief Field ignoreGlobalLogLevel, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreGlobalLogLevel, put=__cordl_internal_set_ignoreGlobalLogLevel)) bool  ignoreGlobalLogLevel;

/// @brief Field logLevel, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_logLevel, put=__cordl_internal_set_logLevel)) ::ExitGames::Client::Photon::DebugLevel  logLevel;

/// @brief Field logger, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::Unity::VoiceLogger*  logger;

/// @brief Field recorderInUse, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_recorderInUse, put=__cordl_internal_set_recorderInUse)) ::UnityW<::Photon::Voice::Unity::Recorder>  recorderInUse;

/// @brief Field speakerInUse, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakerInUse, put=__cordl_internal_set_speakerInUse)) ::UnityW<::Photon::Voice::Unity::Speaker>  speakerInUse;

/// @brief Field voiceConnection, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceConnection, put=__cordl_internal_set_voiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  voiceConnection;

/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr operator  ::Photon::Voice::Unity::ILoggable*() noexcept;

/// @brief Convert operator to "::Photon::Voice::Unity::ILoggableDependent"
constexpr operator  ::Photon::Voice::Unity::ILoggableDependent*() noexcept;

/// @brief Method CheckLateLinking, addr 0xa77c2e8, size 0x3ac, virtual false, abstract: false, final false
inline void CheckLateLinking() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0xa77c70c, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0xa77c710, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetUserData, addr 0xa77b9b8, size 0x68, virtual false, abstract: false, final false
inline ::System::Object* GetUserData() ;

static inline ::Photon::Voice::Fusion::VoiceNetworkObject* New_ctor() ;

/// @brief Method Setup, addr 0xa77b20c, size 0x114, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SetupRecorder, addr 0xa77b320, size 0x3c4, virtual false, abstract: false, final false
inline bool SetupRecorder() ;

/// @brief Method SetupRecorder, addr 0xa77b6e4, size 0x2d4, virtual false, abstract: false, final false
inline bool SetupRecorder(::Photon::Voice::Unity::Recorder*  recorder) ;

/// @brief Method SetupRecorderInUse, addr 0xa77aa20, size 0x42c, virtual false, abstract: false, final false
inline void SetupRecorderInUse() ;

/// @brief Method SetupSpeaker, addr 0xa77ba20, size 0x37c, virtual false, abstract: false, final false
inline bool SetupSpeaker() ;

/// @brief Method SetupSpeaker, addr 0xa77bd9c, size 0x54c, virtual false, abstract: false, final false
inline bool SetupSpeaker(::Photon::Voice::Unity::Speaker*  speaker) ;

/// @brief Method SetupSpeakerInUse, addr 0xa77865c, size 0x284, virtual false, abstract: false, final false
inline void SetupSpeakerInUse() ;

/// @brief Method Spawned, addr 0xa77c694, size 0x68, virtual true, abstract: false, final false
inline void Spawned() ;

constexpr bool const& __cordl_internal_get_AutoCreateRecorderIfNotFound() const;

constexpr bool& __cordl_internal_get_AutoCreateRecorderIfNotFound() ;

constexpr bool const& __cordl_internal_get_SetupDebugSpeaker() const;

constexpr bool& __cordl_internal_get_SetupDebugSpeaker() ;

constexpr bool const& __cordl_internal_get_UsePrimaryRecorder() const;

constexpr bool& __cordl_internal_get_UsePrimaryRecorder() ;

constexpr bool const& __cordl_internal_get__IsRecorder_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRecorder_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpeaker_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpeaker_k__BackingField() ;

constexpr bool const& __cordl_internal_get_ignoreGlobalLogLevel() const;

constexpr bool& __cordl_internal_get_ignoreGlobalLogLevel() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_logLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_logLevel() ;

constexpr ::Photon::Voice::Unity::VoiceLogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::Unity::VoiceLogger*& __cordl_internal_get_logger() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_recorderInUse() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_recorderInUse() ;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& __cordl_internal_get_speakerInUse() const;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& __cordl_internal_get_speakerInUse() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_voiceConnection() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_voiceConnection() ;

constexpr void __cordl_internal_set_AutoCreateRecorderIfNotFound(bool  value) ;

constexpr void __cordl_internal_set_SetupDebugSpeaker(bool  value) ;

constexpr void __cordl_internal_set_UsePrimaryRecorder(bool  value) ;

constexpr void __cordl_internal_set__IsRecorder_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSpeaker_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_ignoreGlobalLogLevel(bool  value) ;

constexpr void __cordl_internal_set_logLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::Unity::VoiceLogger*  value) ;

constexpr void __cordl_internal_set_recorderInUse(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_speakerInUse(::UnityW<::Photon::Voice::Unity::Speaker>  value) ;

constexpr void __cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

/// @brief Method .ctor, addr 0xa77c6fc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IgnoreGlobalLogLevel, addr 0xa77a848, size 0x8, virtual true, abstract: false, final true
inline bool get_IgnoreGlobalLogLevel() ;

/// @brief Method get_IsLocal, addr 0xa77b1cc, size 0x40, virtual false, abstract: false, final false
inline bool get_IsLocal() ;

/// @brief Method get_IsNetworkObjectReady, addr 0xa77ae4c, size 0xac, virtual false, abstract: false, final false
inline bool get_IsNetworkObjectReady() ;

/// @brief Method get_IsPlayer, addr 0xa77b1b4, size 0x18, virtual false, abstract: false, final false
inline bool get_IsPlayer() ;

/// [CompilerGenerated]
/// @brief Method get_IsRecorder, addr 0xa77b154, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRecorder() ;

/// @brief Method get_IsRecording, addr 0xa77b164, size 0x28, virtual false, abstract: false, final false
inline bool get_IsRecording() ;

/// @brief Method get_IsSetup, addr 0xa77b0d8, size 0x54, virtual false, abstract: false, final false
inline bool get_IsSetup() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpeaker, addr 0xa77b12c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSpeaker() ;

/// @brief Method get_IsSpeakerLinked, addr 0xa77b18c, size 0x28, virtual false, abstract: false, final false
inline bool get_IsSpeakerLinked() ;

/// @brief Method get_IsSpeaking, addr 0xa77b13c, size 0x18, virtual false, abstract: false, final false
inline bool get_IsSpeaking() ;

/// @brief Method get_LogLevel, addr 0xa77a810, size 0x38, virtual true, abstract: false, final true
inline ::ExitGames::Client::Photon::DebugLevel get_LogLevel() ;

/// @brief Method get_Logger, addr 0xa77a718, size 0xf0, virtual true, abstract: false, final true
inline ::Photon::Voice::Unity::VoiceLogger* get_Logger() ;

/// @brief Method get_RecorderInUse, addr 0xa77a858, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Recorder> get_RecorderInUse() ;

/// @brief Method get_RequiresRecorder, addr 0xa77a9e0, size 0x40, virtual false, abstract: false, final false
inline bool get_RequiresRecorder() ;

/// @brief Method get_RequiresSpeaker, addr 0xa77b080, size 0x58, virtual false, abstract: false, final false
inline bool get_RequiresSpeaker() ;

/// @brief Method get_SpeakerInUse, addr 0xa77aef8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Speaker> get_SpeakerInUse() ;

/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* i___Photon__Voice__Unity__ILoggable() noexcept;

/// @brief Convert to "::Photon::Voice::Unity::ILoggableDependent"
constexpr ::Photon::Voice::Unity::ILoggableDependent* i___Photon__Voice__Unity__ILoggableDependent() noexcept;

/// @brief Method set_IgnoreGlobalLogLevel, addr 0xa77a850, size 0x8, virtual true, abstract: false, final true
inline void set_IgnoreGlobalLogLevel(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsRecorder, addr 0xa77b15c, size 0x8, virtual false, abstract: false, final false
inline void set_IsRecorder(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpeaker, addr 0xa77b134, size 0x8, virtual false, abstract: false, final false
inline void set_IsSpeaker(bool  value) ;

/// @brief Method set_LogLevel, addr 0xa778628, size 0x34, virtual true, abstract: false, final true
inline void set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

/// @brief Method set_Logger, addr 0xa77a808, size 0x8, virtual false, abstract: false, final false
inline void set_Logger(::Photon::Voice::Unity::VoiceLogger*  value) ;

/// @brief Method set_RecorderInUse, addr 0xa77a860, size 0x180, virtual false, abstract: false, final false
inline void set_RecorderInUse(::Photon::Voice::Unity::Recorder*  value) ;

/// @brief Method set_SpeakerInUse, addr 0xa77af00, size 0x180, virtual false, abstract: false, final false
inline void set_SpeakerInUse(::Photon::Voice::Unity::Speaker*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceNetworkObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceNetworkObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceNetworkObject(VoiceNetworkObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceNetworkObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceNetworkObject(VoiceNetworkObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32379};

/// @brief Field voiceConnection, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___voiceConnection;

/// [SerializeField]
/// @brief Field speakerInUse, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Speaker>  ___speakerInUse;

/// [SerializeField]
/// @brief Field recorderInUse, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___recorderInUse;

/// [SerializeField]
/// @brief Field logLevel, offset: 0x98, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___logLevel;

/// @brief Field logger, offset: 0xa0, size: 0x8, def value: None
 ::Photon::Voice::Unity::VoiceLogger*  ___logger;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field ignoreGlobalLogLevel, offset: 0xa8, size: 0x1, def value: None
 bool  ___ignoreGlobalLogLevel;

/// @brief Field AutoCreateRecorderIfNotFound, offset: 0xa9, size: 0x1, def value: None
 bool  ___AutoCreateRecorderIfNotFound;

/// @brief Field UsePrimaryRecorder, offset: 0xaa, size: 0x1, def value: None
 bool  ___UsePrimaryRecorder;

/// @brief Field SetupDebugSpeaker, offset: 0xab, size: 0x1, def value: None
 bool  ___SetupDebugSpeaker;

/// [CompilerGenerated]
/// @brief Field <IsSpeaker>k__BackingField, offset: 0xac, size: 0x1, def value: None
 bool  ____IsSpeaker_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsRecorder>k__BackingField, offset: 0xad, size: 0x1, def value: None
 bool  ____IsRecorder_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___voiceConnection) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___speakerInUse) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___recorderInUse) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___logLevel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___logger) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___ignoreGlobalLogLevel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___AutoCreateRecorderIfNotFound) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___UsePrimaryRecorder) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ___SetupDebugSpeaker) == 0xab, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ____IsSpeaker_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::VoiceNetworkObject, ____IsRecorder_k__BackingField) == 0xad, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Fusion::VoiceNetworkObject) == 0xb0, "Size mismatch!");

} // namespace end def Photon::Voice::Fusion
