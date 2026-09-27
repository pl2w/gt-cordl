#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__Request_d__92_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequest__Request_d__92_1)
namespace Meta::WitAi::Requests {
template<typename TValue>
class VRequestDecodeDelegate_1;
}
namespace Meta::WitAi::Requests {
class VRequest;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
class VRequest___c__DisplayClass92_0_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct VRequest__Request_d__92_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::VRequest__Request_d__92_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::VRequest__Request_d__92_1, "Meta.WitAi.Requests", "VRequest/<Request>d__92`1");
// [CompilerGenerated]
// Dependencies Meta.WitAi.Requests.VRequestResponse`1<TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequest/<Request>d__92`1<TValue>
struct CORDL_TYPE VRequest__Request_d__92_1 {
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
constexpr VRequest__Request_d__92_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "decoder", ty: "::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Tuple_2<int32_t,::StringW>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: None, comment: None }]
constexpr VRequest__Request_d__92_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __t__builder, ::Meta::WitAi::Requests::VRequest*  __4__this, ::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder, ::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Tuple_2<int32_t,::StringW>*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field decoder, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*  __8__1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Tuple_2<int32_t,::StringW>*>  __u__2;

/// @brief Field <>u__3, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
