#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioClipPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioClipPlayable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioClipPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioClipPlayable, "UnityEngine.Audio", "AudioClipPlayable");
// [NativeHeader("Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.h")]
// [NativeHeader("Modules/Audio/Public/Director/AudioClipPlayable.h")]
// [RequiredByNativeCode]
// [StaticAccessor("AudioClipPlayableBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Runtime/Director/Core/HPlayable.h")]
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioClipPlayable
struct CORDL_TYPE AudioClipPlayable {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Create, addr 0xb558894, size 0x104, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping) ;

/// @brief Method CreateHandle, addr 0xb558998, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping) ;

/// @brief Method Equals, addr 0xb558c9c, size 0x78, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Audio::AudioClipPlayable  other) ;

/// @brief Method GetHandle, addr 0xb558bdc, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// [NativeThrows]
/// @brief Method InternalCreateAudioClipPlayable, addr 0xb558b38, size 0xa4, virtual false, abstract: false, final false
static inline bool InternalCreateAudioClipPlayable(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::UnityEngine::AudioClip*  clip, bool  looping, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method InternalCreateAudioClipPlayable_Injected, addr 0xb5592ac, size 0x5c, virtual false, abstract: false, final false
static inline bool InternalCreateAudioClipPlayable_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  clip, bool  looping, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method Seek, addr 0xb559068, size 0x1ac, virtual false, abstract: false, final false
inline void Seek(double_t  startTime, double_t  startDelay, /* [DefaultValue("0")] */ double_t  duration) ;

/// [NativeThrows]
/// @brief Method SetPauseDelayInternal, addr 0xb559260, size 0x4c, virtual false, abstract: false, final false
static inline void SetPauseDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay) ;

/// @brief Method SetSpatialBlend, addr 0xb558f4c, size 0xd0, virtual false, abstract: false, final false
inline void SetSpatialBlend(float_t  value) ;

/// [NativeThrows]
/// @brief Method SetSpatialBlendInternal, addr 0xb55901c, size 0x4c, virtual false, abstract: false, final false
static inline void SetSpatialBlendInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  spatialBlend) ;

/// [NativeThrows]
/// @brief Method SetStartDelayInternal, addr 0xb559214, size 0x4c, virtual false, abstract: false, final false
static inline void SetStartDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay) ;

/// @brief Method SetStereoPan, addr 0xb558e30, size 0xd0, virtual false, abstract: false, final false
inline void SetStereoPan(float_t  value) ;

/// [NativeThrows]
/// @brief Method SetStereoPanInternal, addr 0xb558f00, size 0x4c, virtual false, abstract: false, final false
static inline void SetStereoPanInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  stereoPan) ;

/// @brief Method SetVolume, addr 0xb558d14, size 0xd0, virtual false, abstract: false, final false
inline void SetVolume(float_t  value) ;

/// [NativeThrows]
/// @brief Method SetVolumeInternal, addr 0xb558de4, size 0x4c, virtual false, abstract: false, final false
static inline void SetVolumeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  volume) ;

/// @brief Method .ctor, addr 0xb558a48, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>* i___System__IEquatable_1___UnityEngine__Audio__AudioClipPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Explicit, addr 0xb558c18, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioClipPlayable op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method op_Implicit, addr 0xb558be8, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable  playable) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioClipPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None, comment: None }]
constexpr AudioClipPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioClipPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioClipPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Audio
