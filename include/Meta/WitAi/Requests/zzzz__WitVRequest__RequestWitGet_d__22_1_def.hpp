#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitVRequest__RequestWitGet_d__22_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitVRequest__RequestWitGet_d__22_1)
namespace Meta::WitAi::Requests {
class WitVRequest;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct WitVRequest__RequestWitGet_d__22_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::WitVRequest__RequestWitGet_d__22_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::WitVRequest__RequestWitGet_d__22_1, "Meta.WitAi.Requests", "WitVRequest/<RequestWitGet>d__22`1");
// [CompilerGenerated]
// Dependencies Meta.WitAi.Requests.VRequestResponse`1<TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: Meta.WitAi.Requests.WitVRequest/<RequestWitGet>d__22`1<TValue>
struct CORDL_TYPE WitVRequest__RequestWitGet_d__22_1 {
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
constexpr WitVRequest__RequestWitGet_d__22_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::WitVRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "endpoint", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "urlParameters", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onPartial", ty: "::System::Action_1<TValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>", modifiers: "", def_value: None, comment: None }]
constexpr WitVRequest__RequestWitGet_d__22_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __t__builder, ::Meta::WitAi::Requests::WitVRequest*  __4__this, ::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::System::Action_1<TValue>*  onPartial, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitVRequest*  __4__this;

/// @brief Field endpoint, offset: 0x28, size: 0x8, def value: None
 ::StringW  endpoint;

/// @brief Field urlParameters, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters;

/// @brief Field onPartial, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<TValue>*  onPartial;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
