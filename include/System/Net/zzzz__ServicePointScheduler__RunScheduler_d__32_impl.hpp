#pragma once
// IWYU pragma private; include "System/Net/ServicePointScheduler__RunScheduler_d__32.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "System/Net/zzzz__ServicePointScheduler__RunScheduler_d__32_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__ServicePointScheduler_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::*)()>(&::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::MoveNext)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0xacb4270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xacb4e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::ServicePointScheduler*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_operationArray_5__2", ty: "::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_idleArray_5__3", ty: "::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_taskList_5__4", ty: "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_schedulerTask_5__5", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_finalCleanup_5__6", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::ServicePointScheduler__RunScheduler_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::ServicePointScheduler*  __4__this, ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>  _operationArray_5__2, ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>  _idleArray_5__3, ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  _taskList_5__4, ::System::Threading::Tasks::Task_1<bool>*  _schedulerTask_5__5, bool  _finalCleanup_5__6, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_operationArray_5__2 = _operationArray_5__2;
this->_idleArray_5__3 = _idleArray_5__3;
this->_taskList_5__4 = _taskList_5__4;
this->_schedulerTask_5__5 = _schedulerTask_5__5;
this->_finalCleanup_5__6 = _finalCleanup_5__6;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32::ServicePointScheduler__RunScheduler_d__32()   {
}
