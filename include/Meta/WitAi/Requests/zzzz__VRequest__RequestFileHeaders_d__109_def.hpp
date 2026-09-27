#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__RequestFileHeaders_d__109.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequest__RequestFileHeaders_d__109)
namespace Meta::WitAi::Requests {
class VRequest;
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
struct VRequest__RequestFileHeaders_d__109;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRequest__RequestFileHeaders_d__109);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRequest__RequestFileHeaders_d__109, "Meta.WitAi.Requests", "VRequest/<RequestFileHeaders>d__109");
// [CompilerGenerated]
// Dependencies Meta.WitAi.Requests.VRequestResponse`1<TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequest/<RequestFileHeaders>d__109
struct CORDL_TYPE VRequest__RequestFileHeaders_d__109 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e8cd10, size 0x328, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e8d038, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VRequest__RequestFileHeaders_d__109() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>", modifiers: "", def_value: None, comment: None }]
constexpr VRequest__RequestFileHeaders_d__109(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>  __t__builder, ::Meta::WitAi::Requests::VRequest*  __4__this, ::StringW  url, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field url, offset: 0x28, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileHeaders_d__109, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileHeaders_d__109, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileHeaders_d__109, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileHeaders_d__109, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileHeaders_d__109, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRequest__RequestFileHeaders_d__109) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
