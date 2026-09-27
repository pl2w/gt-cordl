#pragma once
// IWYU pragma private; include "Photon/Voice/RemoteVoiceOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteVoiceOptions)
namespace Photon::Voice {
template<typename T>
class FrameOut_1;
}
namespace Photon::Voice {
class IDecoder;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Photon::Voice {
struct RemoteVoiceOptions;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::RemoteVoiceOptions);
DEFINE_IL2CPP_CLASS(::Photon::Voice::RemoteVoiceOptions, "Photon.Voice", "RemoteVoiceOptions");
// Dependencies Photon.Voice.VoiceInfo
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.RemoteVoiceOptions
struct CORDL_TYPE RemoteVoiceOptions {
public:
// Declarations
 __declspec(property(get=get_Decoder, put=set_Decoder)) ::Photon::Voice::IDecoder*  Decoder;

 __declspec(property(get=get_OnRemoteVoiceRemoveAction, put=set_OnRemoteVoiceRemoveAction)) ::System::Action*  OnRemoteVoiceRemoveAction;

 __declspec(property(get=get_logPrefix)) ::StringW  logPrefix;

/// @brief Method SetOutput, addr 0xa74a674, size 0x138, virtual false, abstract: false, final false
inline void SetOutput(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  output) ;

/// @brief Method SetOutput, addr 0xa74a7ac, size 0xb4, virtual false, abstract: false, final false
inline void SetOutput(::System::Action_1<::Photon::Voice::FrameOut_1<int16_t>*>*  output) ;

/// @brief Method .ctor, addr 0xa74a600, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, ::Photon::Voice::VoiceInfo  voiceInfo) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Decoder, addr 0xa74a870, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::IDecoder* get_Decoder() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_OnRemoteVoiceRemoveAction, addr 0xa74a860, size 0x8, virtual false, abstract: false, final false
inline ::System::Action* get_OnRemoteVoiceRemoveAction() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_logPrefix, addr 0xa74a880, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_logPrefix() ;

/// @brief Method setOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void setOutput(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output) ;

/// [CompilerGenerated]
/// @brief Method set_Decoder, addr 0xa74a878, size 0x8, virtual false, abstract: false, final false
inline void set_Decoder(::Photon::Voice::IDecoder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnRemoteVoiceRemoveAction, addr 0xa74a868, size 0x8, virtual false, abstract: false, final false
inline void set_OnRemoteVoiceRemoveAction(::System::Action*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteVoiceOptions() ;

// Ctor Parameters [CppParam { name: "_OnRemoteVoiceRemoveAction_k__BackingField", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Decoder_k__BackingField", ty: "::Photon::Voice::IDecoder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "logger", ty: "::Photon::Voice::ILogger*", modifiers: "", def_value: None, comment: None }, CppParam { name: "voiceInfo", ty: "::Photon::Voice::VoiceInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "_logPrefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr RemoteVoiceOptions(::System::Action*  _OnRemoteVoiceRemoveAction_k__BackingField, ::Photon::Voice::IDecoder*  _Decoder_k__BackingField, ::Photon::Voice::ILogger*  logger, ::Photon::Voice::VoiceInfo  voiceInfo, ::StringW  _logPrefix_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// [CompilerGenerated]
/// @brief Field <OnRemoteVoiceRemoveAction>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Action*  _OnRemoteVoiceRemoveAction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Decoder>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Photon::Voice::IDecoder*  _Decoder_k__BackingField;

/// @brief Field logger, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  logger;

/// @brief Field voiceInfo, offset: 0x18, size: 0x30, def value: None
 ::Photon::Voice::VoiceInfo  voiceInfo;

/// [CompilerGenerated]
/// @brief Field <logPrefix>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  _logPrefix_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::RemoteVoiceOptions, _OnRemoteVoiceRemoveAction_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoiceOptions, _Decoder_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoiceOptions, logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoiceOptions, voiceInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RemoteVoiceOptions, _logPrefix_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::RemoteVoiceOptions) == 0x50, "Size mismatch!");

} // namespace end def Photon::Voice
