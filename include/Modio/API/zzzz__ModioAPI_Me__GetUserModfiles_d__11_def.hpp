#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI_Me__GetUserModfiles_d__11.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__Pagination_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPI_Me__GetUserModfiles_d__11)
namespace Modio::API::SchemaDefinitions {
struct ModfileObject;
}
namespace Modio::API {
class Me_ModioAPI_GetUserModfilesFilter;
}
namespace Modio::API {
class ModioAPIRequest;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserModfiles_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11, "Modio.API", "ModioAPI/Me/<GetUserModfiles>d__11");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.Pagination`1<T>, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.ModioAPI/Me/<GetUserModfiles>d__11
struct CORDL_TYPE Me_ModioAPI__GetUserModfiles_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa0b9190, size 0x66c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0b97fc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI__GetUserModfiles_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "filter", ty: "::Modio::API::Me_ModioAPI_GetUserModfilesFilter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_request_5__2", ty: "::Modio::API::ModioAPIRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>", modifiers: "", def_value: None, comment: None }]
constexpr Me_ModioAPI__GetUserModfiles_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>  __t__builder, ::Modio::API::Me_ModioAPI_GetUserModfilesFilter*  filter, ::Modio::API::ModioAPIRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "modfileObjects" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>  __t__builder;

/// @brief Field filter, offset: 0x20, size: 0x8, def value: None
 ::Modio::API::Me_ModioAPI_GetUserModfilesFilter*  filter;

/// @brief Field <request>5__2, offset: 0x28, size: 0x8, def value: None
 ::Modio::API::ModioAPIRequest*  _request_5__2;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11, filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11, _request_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
