#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeaker__Load_d__124.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSSpeaker__Load_d__124)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipEvents;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker_TTSSpeakerRequestData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
struct TTSSpeaker__Load_d__124;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TTSSpeaker__Load_d__124);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TTSSpeaker__Load_d__124, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<Load>d__124");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.Tasks.Task
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<Load>d__124
struct CORDL_TYPE TTSSpeaker__Load_d__124 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e6267c, size 0xaf8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e63174, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__Load_d__124() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "voiceSettings", ty: "::Meta::WitAi::TTS::Data::TTSVoiceSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestPlaceholder", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "textsToSpeak", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "clearQueue", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "speechNode", ty: "::Meta::WitAi::Json::WitResponseNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "playbackEvents", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*", modifiers: "", def_value: None, comment: None }, CppParam { name: "diskCacheSettings", ty: "::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tasks_5__2", ty: "::ArrayW<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr TTSSpeaker__Load_d__124(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestPlaceholder, ::ArrayW<::StringW>  textsToSpeak, bool  clearQueue, ::Meta::WitAi::Json::WitResponseNode*  speechNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::ArrayW<::System::Threading::Tasks::Task*>  _tasks_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field voiceSettings, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field requestPlaceholder, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestPlaceholder;

/// @brief Field textsToSpeak, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  textsToSpeak;

/// @brief Field clearQueue, offset: 0x40, size: 0x1, def value: None
 bool  clearQueue;

/// @brief Field speechNode, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  speechNode;

/// @brief Field playbackEvents, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field diskCacheSettings, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field <tasks>5__2, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::System::Threading::Tasks::Task*>  _tasks_5__2;

/// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, voiceSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, requestPlaceholder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, textsToSpeak) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, clearQueue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, speechNode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, playbackEvents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, diskCacheSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, _tasks_5__2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__124, __u__1) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TTSSpeaker__Load_d__124) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
