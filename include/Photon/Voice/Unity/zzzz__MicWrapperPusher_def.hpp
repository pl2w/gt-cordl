#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/MicWrapperPusher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicWrapperPusher)
namespace Photon::Voice::Unity {
class AudioOutCapture;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename T>
class IAudioPusher_1;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
template<typename TType,typename TInfo>
class ObjectFactory_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class MicWrapperPusher;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::MicWrapperPusher*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::MicWrapperPusher*, "Photon.Voice.Unity", "MicWrapperPusher");
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.MicWrapperPusher
class CORDL_TYPE MicWrapperPusher : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Field <Error>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field audioOutCapture, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioOutCapture, put=__cordl_internal_set_audioOutCapture)) ::UnityW<::Photon::Voice::Unity::AudioOutCapture>  audioOutCapture;

/// @brief Field audioSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field channels, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field destroyGameObjectOnStop, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyGameObjectOnStop, put=__cordl_internal_set_destroyGameObjectOnStop)) bool  destroyGameObjectOnStop;

/// @brief Field device, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::StringW  device;

/// @brief Field frame2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_frame2, put=__cordl_internal_set_frame2)) ::ArrayW<float_t>  frame2;

/// @brief Field logger, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field mic, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mic, put=__cordl_internal_set_mic)) ::UnityW<::UnityEngine::AudioClip>  mic;

/// @brief Field pushCallback, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_pushCallback, put=__cordl_internal_set_pushCallback)) ::System::Action_1<::ArrayW<float_t>>*  pushCallback;

/// @brief Field sampleRate, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleRate, put=__cordl_internal_set_sampleRate)) int32_t  sampleRate;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IAudioPusher_1<float_t>"
constexpr operator  ::Photon::Voice::IAudioPusher_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AudioOutCaptureOnOnAudioFrame, addr 0xa75f150, size 0x278, virtual false, abstract: false, final false
inline void AudioOutCaptureOnOnAudioFrame(::ArrayW<float_t>  frame, int32_t  channelsNumber) ;

/// @brief Method Dispose, addr 0xa75f468, size 0x150, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::MicWrapperPusher* New_ctor(::StringW  device, ::UnityEngine::AudioSource*  aS, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop) ;

static inline ::Photon::Voice::Unity::MicWrapperPusher* New_ctor(::StringW  device, ::UnityEngine::GameObject*  gO, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop) ;

static inline ::Photon::Voice::Unity::MicWrapperPusher* New_ctor(::StringW  device, ::UnityEngine::Transform*  parentTransform, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop) ;

/// @brief Method SetCallback, addr 0xa75f3c8, size 0xa0, virtual true, abstract: false, final true
inline void SetCallback(::System::Action_1<::ArrayW<float_t>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<float_t>,int32_t>*  bufferFactory) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture> const& __cordl_internal_get_audioOutCapture() const;

constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture>& __cordl_internal_get_audioOutCapture() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr bool const& __cordl_internal_get_destroyGameObjectOnStop() const;

constexpr bool& __cordl_internal_get_destroyGameObjectOnStop() ;

constexpr ::StringW const& __cordl_internal_get_device() const;

constexpr ::StringW& __cordl_internal_get_device() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_frame2() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_frame2() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_mic() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_mic() ;

constexpr ::System::Action_1<::ArrayW<float_t>>* const& __cordl_internal_get_pushCallback() const;

constexpr ::System::Action_1<::ArrayW<float_t>>*& __cordl_internal_get_pushCallback() ;

constexpr int32_t const& __cordl_internal_get_sampleRate() const;

constexpr int32_t& __cordl_internal_get_sampleRate() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_audioOutCapture(::UnityW<::Photon::Voice::Unity::AudioOutCapture>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_destroyGameObjectOnStop(bool  value) ;

constexpr void __cordl_internal_set_device(::StringW  value) ;

constexpr void __cordl_internal_set_frame2(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_mic(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_pushCallback(::System::Action_1<::ArrayW<float_t>>*  value) ;

constexpr void __cordl_internal_set_sampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0xa75b4d0, size 0x1340, virtual false, abstract: false, final false
inline void _ctor(::StringW  device, ::UnityEngine::AudioSource*  aS, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop) ;

/// @brief Method .ctor, addr 0xa75c840, size 0x174c, virtual false, abstract: false, final false
inline void _ctor(::StringW  device, ::UnityEngine::GameObject*  gO, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop) ;

/// @brief Method .ctor, addr 0xa75df8c, size 0x11c4, virtual false, abstract: false, final false
inline void _ctor(::StringW  device, ::UnityEngine::Transform*  parentTransform, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  lg, bool  destroyOnStop) ;

/// @brief Method get_Channels, addr 0xa75c828, size 0x18, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0xa75f5b8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Method get_SamplingRate, addr 0xa75c810, size 0x18, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioPusher_1<float_t>"
constexpr ::Photon::Voice::IAudioPusher_1<float_t>* i___Photon__Voice__IAudioPusher_1_float_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0xa75f5c0, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicWrapperPusher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicWrapperPusher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicWrapperPusher(MicWrapperPusher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicWrapperPusher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicWrapperPusher(MicWrapperPusher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28517};

/// @brief Field audioSource, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field mic, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___mic;

/// @brief Field device, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___device;

/// @brief Field logger, offset: 0x28, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// @brief Field audioOutCapture, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::AudioOutCapture>  ___audioOutCapture;

/// @brief Field sampleRate, offset: 0x38, size: 0x4, def value: None
 int32_t  ___sampleRate;

/// @brief Field channels, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field destroyGameObjectOnStop, offset: 0x40, size: 0x1, def value: None
 bool  ___destroyGameObjectOnStop;

/// @brief Field frame2, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ___frame2;

/// @brief Field pushCallback, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<float_t>>*  ___pushCallback;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___audioSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___mic) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___logger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___audioOutCapture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___sampleRate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___channels) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___destroyGameObjectOnStop) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___frame2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ___pushCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapperPusher, ____Error_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::MicWrapperPusher) == 0x60, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
