#pragma once
// IWYU pragma private; include "Oculus/Voice/AppVoiceExperience__Activate_d__37.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppVoiceExperience__Activate_d__37)
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Oculus::Voice {
class AppVoiceExperience;
}
namespace Oculus::Voice {
class AppVoiceExperience___c__DisplayClass37_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AppVoiceExperience__Activate_d__37;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AppVoiceExperience__Activate_d__37);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppVoiceExperience__Activate_d__37, "Oculus.Voice", "AppVoiceExperience/<Activate>d__37");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Voice.AppVoiceExperience/<Activate>d__37
struct CORDL_TYPE AppVoiceExperience__Activate_d__37 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xb947db8, size 0x604, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xb9483bc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AppVoiceExperience__Activate_d__37() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VoiceServiceRequest*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Oculus::Voice::AppVoiceExperience>", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestOptions", ty: "::Meta::WitAi::Configuration::WitRequestOptions*", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestEvents", ty: "::Meta::WitAi::Requests::VoiceServiceRequestEvents*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VoiceServiceRequest*>", modifiers: "", def_value: None, comment: None }]
constexpr AppVoiceExperience__Activate_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VoiceServiceRequest*>  __t__builder, ::StringW  text, ::UnityW<::Oculus::Voice::AppVoiceExperience>  __4__this, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VoiceServiceRequest*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31690};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VoiceServiceRequest*>  __t__builder;

/// @brief Field text, offset: 0x20, size: 0x8, def value: None
 ::StringW  text;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Voice::AppVoiceExperience>  __4__this;

/// @brief Field requestOptions, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions;

/// @brief Field requestEvents, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*  __8__1;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VoiceServiceRequest*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, requestOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, requestEvents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppVoiceExperience__Activate_d__37, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppVoiceExperience__Activate_d__37) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
