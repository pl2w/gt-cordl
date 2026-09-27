#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequest`5_<>c__DisplayClass29_0___EnqueueDecode_b__0_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NLPRequest`5_<>c__DisplayClass29_0___EnqueueDecode_b__0_d)
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass29_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
struct __c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::__c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::__c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d, "Meta.Voice", "NLPRequest`5/<>c__DisplayClass29_0/<<EnqueueDecode>b__0>d");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
// Is value type: true
// CS Name: Meta.Voice.NLPRequest`5/<>c__DisplayClass29_0/<<EnqueueDecode>b__0>d<TUnityEvent,TOptions,TEvents,TResults,TResponseData>
struct CORDL_TYPE __c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr __c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
