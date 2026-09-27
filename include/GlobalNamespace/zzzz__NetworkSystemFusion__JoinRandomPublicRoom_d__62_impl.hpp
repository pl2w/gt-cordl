#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion__JoinRandomPublicRoom_d__62.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__JoinRandomPublicRoom_d__62_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_def.hpp"
#include "GlobalNamespace/zzzz__RoomConfig_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::*)()>(&::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x56e5970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56e6064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "opts", ty: "::GlobalNamespace::RoomConfig*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemFusion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_shouldCreateIfNone_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_connectTask_5__3", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_createTask_5__4", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::NetworkSystemFusion__JoinRandomPublicRoom_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>  __t__builder, ::GlobalNamespace::RoomConfig*  opts, ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this, bool  _shouldCreateIfNone_5__2, ::System::Threading::Tasks::Task_1<bool>*  _connectTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Threading::Tasks::Task_1<bool>*  _createTask_5__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->opts = opts;
this->__4__this = __4__this;
this->_shouldCreateIfNone_5__2 = _shouldCreateIfNone_5__2;
this->_connectTask_5__3 = _connectTask_5__3;
this->__u__1 = __u__1;
this->_createTask_5__4 = _createTask_5__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62::NetworkSystemFusion__JoinRandomPublicRoom_d__62()   {
}
