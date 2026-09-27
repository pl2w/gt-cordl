#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__GetError_d__103.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequest__GetError_d__103)
namespace Meta::WitAi::Requests {
class VRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
struct VRequest__GetError_d__103;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRequest__GetError_d__103);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRequest__GetError_d__103, "Meta.WitAi.Requests", "VRequest/<GetError>d__103");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequest/<GetError>d__103
struct CORDL_TYPE VRequest__GetError_d__103 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e8b0f0, size 0x634, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e8b724, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VRequest__GetError_d__103() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Tuple_2<int32_t,::StringW>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_code_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error_5__3", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr VRequest__GetError_d__103(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Tuple_2<int32_t,::StringW>*>  __t__builder, ::Meta::WitAi::Requests::VRequest*  __4__this, ::UnityEngine::Networking::UnityWebRequest*  request, int32_t  _code_5__2, ::StringW  _error_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25611};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Tuple_2<int32_t,::StringW>*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field request, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Field <code>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _code_5__2;

/// @brief Field <error>5__3, offset: 0x38, size: 0x8, def value: None
 ::StringW  _error_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRequest__GetError_d__103, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__GetError_d__103, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__GetError_d__103, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__GetError_d__103, request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__GetError_d__103, _code_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__GetError_d__103, _error_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__GetError_d__103, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRequest__GetError_d__103) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
