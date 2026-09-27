#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/BaseAudioSystem_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Audio/zzzz__AudioClipSettings_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAudioSystem_2)
namespace Meta::Voice::Audio {
struct AudioClipSettings;
}
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
namespace Meta::Voice::Audio {
class IAudioPlayer;
}
namespace Meta::Voice::Audio {
class IAudioSystem;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::Voice::Audio {
template<typename TAudioClipStream,typename TAudioPlayer>
class BaseAudioSystem_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::Audio::BaseAudioSystem_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::Audio::BaseAudioSystem_2, "Meta.Voice.Audio", "BaseAudioSystem`2");
// [LogCategory((Meta.Voice.Logging.LogCategory)9)]
// Dependencies Meta.Voice.Audio.AudioClipSettings, UnityEngine.MonoBehaviour
namespace Meta::Voice::Audio {
// cpp template
template<typename TAudioClipStream,typename TAudioPlayer>
// Is value type: false
// CS Name: Meta.Voice.Audio.BaseAudioSystem`2<TAudioClipStream,TAudioPlayer>
class CORDL_TYPE BaseAudioSystem_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ClipSettings, put=set_ClipSettings)) ::Meta::Voice::Audio::AudioClipSettings  ClipSettings;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field <Logger>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _clipSettings, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__clipSettings, put=__cordl_internal_set__clipSettings)) ::Meta::Voice::Audio::AudioClipSettings  _clipSettings;

/// @brief Field _pool, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::Meta::WitAi::ObjectPool_1<TAudioClipStream>*  _pool;

/// @brief Convert operator to "::Meta::Voice::Audio::IAudioSystem"
constexpr operator  ::Meta::Voice::Audio::IAudioSystem*() noexcept;

/// @brief Method GenerateClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TAudioClipStream GenerateClip() ;

/// @brief Method GeneratePool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GeneratePool() ;

/// @brief Method GetAudioClipStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Meta::Voice::Audio::IAudioClipStream* GetAudioClipStream() ;

/// @brief Method GetAudioPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Meta::Voice::Audio::IAudioPlayer* GetAudioPlayer(::UnityEngine::GameObject*  root) ;

static inline ::Meta::Voice::Audio::BaseAudioSystem_2<TAudioClipStream,TAudioPlayer>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PreloadClipStreams, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PreloadClipStreams(int32_t  total) ;

/// @brief Method UnloadAudioClipStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UnloadAudioClipStream(::Meta::Voice::Audio::IAudioClipStream*  clipStream) ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Meta::Voice::Audio::AudioClipSettings const& __cordl_internal_get__clipSettings() const;

constexpr ::Meta::Voice::Audio::AudioClipSettings& __cordl_internal_get__clipSettings() ;

constexpr ::Meta::WitAi::ObjectPool_1<TAudioClipStream>* const& __cordl_internal_get__pool() const;

constexpr ::Meta::WitAi::ObjectPool_1<TAudioClipStream>*& __cordl_internal_get__pool() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__clipSettings(::Meta::Voice::Audio::AudioClipSettings  value) ;

constexpr void __cordl_internal_set__pool(::Meta::WitAi::ObjectPool_1<TAudioClipStream>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClipSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Meta::Voice::Audio::AudioClipSettings get_ClipSettings() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// @brief Convert to "::Meta::Voice::Audio::IAudioSystem"
constexpr ::Meta::Voice::Audio::IAudioSystem* i___Meta__Voice__Audio__IAudioSystem() noexcept;

/// @brief Method set_ClipSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_ClipSettings(::Meta::Voice::Audio::AudioClipSettings  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAudioSystem_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioSystem_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAudioSystem_2(BaseAudioSystem_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioSystem_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAudioSystem_2(BaseAudioSystem_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25506};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _clipSettings, offset: 0x28, size: 0x10, def value: None
 ::Meta::Voice::Audio::AudioClipSettings  ____clipSettings;

/// @brief Field _pool, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::ObjectPool_1<TAudioClipStream>*  ____pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Audio
