#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__RequestFileExists_d__116.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequest__RequestFileExists_d__116)
namespace Meta::WitAi::Requests {
class VRequest;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass116_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct VRequest__RequestFileExists_d__116;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRequest__RequestFileExists_d__116);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRequest__RequestFileExists_d__116, "Meta.WitAi.Requests", "VRequest/<RequestFileExists>d__116");
// [CompilerGenerated]
// Dependencies Meta.WitAi.Requests.VRequestResponse`1<TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequest/<RequestFileExists>d__116
struct CORDL_TYPE VRequest__RequestFileExists_d__116 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e8c55c, size 0x738, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e8cc94, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VRequest__RequestFileExists_d__116() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::ArrayW<uint8_t>>>", modifiers: "", def_value: None, comment: None }]
constexpr VRequest__RequestFileExists_d__116(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __t__builder, ::Meta::WitAi::Requests::VRequest*  __4__this, ::StringW  url, ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::ArrayW<uint8_t>>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field url, offset: 0x28, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*  __8__1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::ArrayW<uint8_t>>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileExists_d__116, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileExists_d__116, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileExists_d__116, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileExists_d__116, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileExists_d__116, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileExists_d__116, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileExists_d__116, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRequest__RequestFileExists_d__116) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
