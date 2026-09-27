#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioPlayableOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioPlayableOutput)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioPlayableOutput);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
// [NativeHeader("Modules/Audio/Public/ScriptBindings/AudioPlayableOutput.bindings.h")]
// [NativeHeader("Modules/Audio/Public/Director/AudioPlayableOutput.h")]
// [NativeHeader("Modules/Audio/Public/AudioSource.h")]
// [StaticAccessor("AudioPlayableOutputBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [RequiredByNativeCode]
// Dependencies UnityEngine.Playables.PlayableOutputHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioPlayableOutput
struct CORDL_TYPE AudioPlayableOutput {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr operator  ::UnityEngine::Playables::IPlayableOutput*() ;

/// @brief Method Create, addr 0xb55ad84, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioPlayableOutput Create(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name, ::UnityEngine::AudioSource*  target) ;

/// @brief Method GetHandle, addr 0xb55b164, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// [NativeThrows]
/// @brief Method InternalSetEvaluateOnSeek, addr 0xb55b2c4, size 0x44, virtual false, abstract: false, final false
static inline void InternalSetEvaluateOnSeek(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, bool  value) ;

/// [NativeThrows]
/// @brief Method InternalSetTarget, addr 0xb55b1f4, size 0x8c, virtual false, abstract: false, final false
static inline void InternalSetTarget(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, ::UnityEngine::AudioSource*  target) ;

/// @brief Method InternalSetTarget_Injected, addr 0xb55b308, size 0x1d4, virtual false, abstract: false, final false
static inline void InternalSetTarget_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, ::System::IntPtr  target) ;

/// @brief Method SetEvaluateOnSeek, addr 0xb55b280, size 0x44, virtual false, abstract: false, final false
inline void SetEvaluateOnSeek(bool  value) ;

/// @brief Method SetTarget, addr 0xb55b160, size 0x4, virtual false, abstract: false, final false
inline void SetTarget(::UnityEngine::AudioSource*  value) ;

/// @brief Method .ctor, addr 0xb55b070, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle  handle) ;

/// @brief Method get_Null, addr 0xb55aff4, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioPlayableOutput get_Null() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput() ;

/// @brief Method op_Explicit, addr 0xb55b170, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioPlayableOutput op_Explicit___UnityEngine__Audio__AudioPlayableOutput(::UnityEngine::Playables::PlayableOutput  output) ;

/// @brief Method op_Implicit, addr 0xb55ade4, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Audio::AudioPlayableOutput  output) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioPlayableOutput() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None, comment: None }]
constexpr AudioPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableOutputHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioPlayableOutput) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Audio
