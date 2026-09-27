#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeaker__Load_d__122.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSSpeaker__Load_d__122)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
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
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass122_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct TTSSpeaker__Load_d__122;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TTSSpeaker__Load_d__122);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TTSSpeaker__Load_d__122, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<Load>d__122");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<Load>d__122
struct CORDL_TYPE TTSSpeaker__Load_d__122 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e61fd4, size 0x640, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e62614, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__Load_d__122() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>", modifiers: "", def_value: None, comment: None }, CppParam { name: "responseNode", ty: "::Meta::WitAi::Json::WitResponseNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "clearQueue", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "playbackEvents", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "diskCacheSettings", ty: "::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_requestData_5__2", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr TTSSpeaker__Load_d__122(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this, ::Meta::WitAi::Json::WitResponseNode*  responseNode, bool  clearQueue, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*  __8__1, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  _requestData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field responseNode, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Field clearQueue, offset: 0x30, size: 0x1, def value: None
 bool  clearQueue;

/// @brief Field playbackEvents, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*  __8__1;

/// @brief Field diskCacheSettings, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field <requestData>5__2, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  _requestData_5__2;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, responseNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, clearQueue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, playbackEvents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, diskCacheSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, _requestData_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSSpeaker__Load_d__122, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TTSSpeaker__Load_d__122) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
