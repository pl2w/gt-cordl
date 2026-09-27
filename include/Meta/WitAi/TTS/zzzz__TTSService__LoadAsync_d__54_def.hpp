#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/TTSService__LoadAsync_d__54.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSService__LoadAsync_d__54)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS {
class TTSService;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct TTSService__LoadAsync_d__54;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TTSService__LoadAsync_d__54);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TTSService__LoadAsync_d__54, "Meta.WitAi.TTS", "TTSService/<LoadAsync>d__54");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.TTSService/<LoadAsync>d__54
struct CORDL_TYPE TTSService__LoadAsync_d__54 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e4d6c4, size 0x8a8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e4df6c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TTSService__LoadAsync_d__54() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "clipData", ty: "::Meta::WitAi::TTS::Data::TTSClipData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::WitAi::TTS::TTSService>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onStreamComplete", ty: "::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onStreamReady", ty: "::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr TTSService__LoadAsync_d__54(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field clipData, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this;

/// @brief Field onStreamComplete, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete;

/// @brief Field onStreamReady, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, clipData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, onStreamComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, onStreamReady) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSService__LoadAsync_d__54, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TTSService__LoadAsync_d__54) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
