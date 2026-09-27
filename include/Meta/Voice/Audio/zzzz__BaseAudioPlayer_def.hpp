#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/BaseAudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAudioPlayer)
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
namespace Meta::Voice::Audio {
class IAudioPlayer;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class BaseAudioPlayer;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::BaseAudioPlayer*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::BaseAudioPlayer*, "Meta.Voice.Audio", "BaseAudioPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.BaseAudioPlayer
class CORDL_TYPE BaseAudioPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanSetElapsedSamples)) bool  CanSetElapsedSamples;

 __declspec(property(get=get_ClipStream, put=set_ClipStream)) ::Meta::Voice::Audio::IAudioClipStream*  ClipStream;

 __declspec(property(get=get_ElapsedSamples)) int32_t  ElapsedSamples;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_SpeechNode, put=set_SpeechNode)) ::Meta::WitAi::Json::WitResponseNode*  SpeechNode;

/// @brief Field <ClipStream>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipStream_k__BackingField, put=__cordl_internal_set__ClipStream_k__BackingField)) ::Meta::Voice::Audio::IAudioClipStream*  _ClipStream_k__BackingField;

/// @brief Field <SpeechNode>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpeechNode_k__BackingField, put=__cordl_internal_set__SpeechNode_k__BackingField)) ::Meta::WitAi::Json::WitResponseNode*  _SpeechNode_k__BackingField;

/// @brief Convert operator to "::Meta::Voice::Audio::IAudioPlayer"
constexpr operator  ::Meta::Voice::Audio::IAudioPlayer*() noexcept;

/// @brief Method GetPlaybackErrors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetPlaybackErrors() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Init() ;

static inline ::Meta::Voice::Audio::BaseAudioPlayer* New_ctor() ;

/// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Pause() ;

/// @brief Method Play, addr 0x9e6c834, size 0x74, virtual true, abstract: false, final true
inline void Play(::Meta::Voice::Audio::IAudioClipStream*  clipStream, int32_t  offsetSamples, ::Meta::WitAi::Json::WitResponseNode*  speechNode) ;

/// @brief Method Play, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Play(int32_t  offsetSamples) ;

/// @brief Method Resume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Resume() ;

/// @brief Method Stop, addr 0x9e6c8a8, size 0xc, virtual true, abstract: false, final false
inline void Stop() ;

constexpr ::Meta::Voice::Audio::IAudioClipStream* const& __cordl_internal_get__ClipStream_k__BackingField() const;

constexpr ::Meta::Voice::Audio::IAudioClipStream*& __cordl_internal_get__ClipStream_k__BackingField() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get__SpeechNode_k__BackingField() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get__SpeechNode_k__BackingField() ;

constexpr void __cordl_internal_set__ClipStream_k__BackingField(::Meta::Voice::Audio::IAudioClipStream*  value) ;

constexpr void __cordl_internal_set__SpeechNode_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method .ctor, addr 0x9e6c8b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanSetElapsedSamples, addr 0x9e6c824, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSetElapsedSamples() ;

/// [CompilerGenerated]
/// @brief Method get_ClipStream, addr 0x9e6c7f4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Audio::IAudioClipStream* get_ClipStream() ;

/// @brief Method get_ElapsedSamples, addr 0x9e6c82c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ElapsedSamples() ;

/// @brief Method get_IsPlaying, addr 0x9e6c814, size 0x10, virtual true, abstract: false, final false
inline bool get_IsPlaying() ;

/// [CompilerGenerated]
/// @brief Method get_SpeechNode, addr 0x9e6c804, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_SpeechNode() ;

/// @brief Convert to "::Meta::Voice::Audio::IAudioPlayer"
constexpr ::Meta::Voice::Audio::IAudioPlayer* i___Meta__Voice__Audio__IAudioPlayer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_ClipStream, addr 0x9e6c7fc, size 0x8, virtual false, abstract: false, final false
inline void set_ClipStream(::Meta::Voice::Audio::IAudioClipStream*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SpeechNode, addr 0x9e6c80c, size 0x8, virtual false, abstract: false, final false
inline void set_SpeechNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAudioPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAudioPlayer(BaseAudioPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAudioPlayer(BaseAudioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25505};

/// [CompilerGenerated]
/// @brief Field <ClipStream>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Audio::IAudioClipStream*  ____ClipStream_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SpeechNode>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ____SpeechNode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::BaseAudioPlayer, ____ClipStream_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioPlayer, ____SpeechNode_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::BaseAudioPlayer) == 0x30, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
