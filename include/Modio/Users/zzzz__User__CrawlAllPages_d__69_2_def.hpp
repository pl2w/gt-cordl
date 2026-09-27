#pragma once
// IWYU pragma private; include "Modio/Users/User__CrawlAllPages_d__69_2.hpp"
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
CORDL_MODULE_EXPORT(User__CrawlAllPages_d__69_2)
namespace Modio::API::SchemaDefinitions {
template<typename T>
struct Pagination_1;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename F,typename T>
struct User__CrawlAllPages_d__69_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::User__CrawlAllPages_d__69_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::User__CrawlAllPages_d__69_2, "Modio.Users", "User/<CrawlAllPages>d__69`2");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.Pagination`1<T>, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// cpp template
template<typename F,typename T>
// Is value type: true
// CS Name: Modio.Users.User/<CrawlAllPages>d__69`2<F,T>
struct CORDL_TYPE User__CrawlAllPages_d__69_2 {
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
constexpr User__CrawlAllPages_d__69_2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "method", ty: "::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "filter", ty: "F", modifiers: "", def_value: None, comment: None }, CppParam { name: "_output_5__2", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>", modifiers: "", def_value: None, comment: None }]
constexpr User__CrawlAllPages_d__69_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>  __t__builder, ::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*  method, F  filter, ::System::Collections::Generic::List_1<T>*  _output_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "results" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>  __t__builder;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field method, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*  method;

/// @brief Field filter, offset: 0x28, size: 0x8, def value: None
 F  filter;

/// @brief Field <output>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  _output_5__2;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
