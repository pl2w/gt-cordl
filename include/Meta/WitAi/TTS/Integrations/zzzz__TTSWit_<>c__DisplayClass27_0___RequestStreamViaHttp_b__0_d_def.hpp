#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWit_<>c__DisplayClass27_0___RequestStreamViaHttp_b__0_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSWit_<>c__DisplayClass27_0___RequestStreamViaHttp_b__0_d)
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass27_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct __c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass27_0/<<RequestStreamViaHttp>b__0>d");
// Dependencies Meta.WitAi.Requests.VRequestResponse`1<TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass27_0/<<RequestStreamViaHttp>b__0>d
struct CORDL_TYPE __c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e580fc, size 0x41c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e58518, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: None, comment: None }]
constexpr __c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass27_0*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::__c__DisplayClass27_0_TTSWit___RequestStreamViaHttp_b__0_d) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
