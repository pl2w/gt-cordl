#pragma once
// IWYU pragma private; include "Modio/Users/User__CrawlAllPages_d__69_2.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Pagination_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Users/zzzz__User__CrawlAllPages_d__69_2_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Pagination_1_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename F,typename T>
inline void GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename F,typename T>
inline void GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename F,typename T>
constexpr  GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename F,typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "method", ty: "::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filter", ty: "F", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_output_5__2", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename F,typename T>
constexpr ::GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>::User__CrawlAllPages_d__69_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>  __t__builder, ::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*  method, F  filter, ::System::Collections::Generic::List_1<T>*  _output_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->method = method;
this->filter = filter;
this->_output_5__2 = _output_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename F,typename T>
constexpr ::GlobalNamespace::User__CrawlAllPages_d__69_2<F,T>::User__CrawlAllPages_d__69_2()   {
}
