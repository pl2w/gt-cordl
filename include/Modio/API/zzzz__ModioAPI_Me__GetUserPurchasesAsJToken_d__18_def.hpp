#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI_Me__GetUserPurchasesAsJToken_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPI_Me__GetUserPurchasesAsJToken_d__18)
namespace Modio::API {
class Me_ModioAPI_GetUserPurchasesFilter;
}
namespace Modio::API {
class ModioAPIRequest;
}
namespace Modio {
class Error;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserPurchasesAsJToken_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18, "Modio.API", "ModioAPI/Me/<GetUserPurchasesAsJToken>d__18");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.ModioAPI/Me/<GetUserPurchasesAsJToken>d__18
struct CORDL_TYPE Me_ModioAPI__GetUserPurchasesAsJToken_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa0bb340, size 0x600, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0bb940, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI__GetUserPurchasesAsJToken_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "filter", ty: "::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_request_5__2", ty: "::Modio::API::ModioAPIRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>", modifiers: "", def_value: None, comment: None }]
constexpr Me_ModioAPI__GetUserPurchasesAsJToken_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __t__builder, ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*  filter, ::Modio::API::ModioAPIRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "modObjects" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __t__builder;

/// @brief Field filter, offset: 0x20, size: 0x8, def value: None
 ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*  filter;

/// @brief Field <request>5__2, offset: 0x28, size: 0x8, def value: None
 ::Modio::API::ModioAPIRequest*  _request_5__2;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18, filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18, _request_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
