#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion__Connect_d__60.hpp"
#include "Fusion/zzzz__GameMode_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__Connect_d__60_def.hpp"
#include "Fusion/zzzz__StartGameResult_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_def.hpp"
#include "GlobalNamespace/zzzz__RoomConfig_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion__Connect_d__60.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion__Connect_d__60::*)()>(&::GlobalNamespace::NetworkSystemFusion__Connect_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x1144;
  constexpr static std::size_t addrs = 0x56e2924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__Connect_d__60>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion__Connect_d__60.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion__Connect_d__60::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::NetworkSystemFusion__Connect_d__60::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56e3c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__Connect_d__60>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemFusion__Connect_d__60::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__Connect_d__60>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion__Connect_d__60::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__Connect_d__60>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::NetworkSystemFusion__Connect_d__60::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::NetworkSystemFusion__Connect_d__60::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemFusion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mode", ty: "::Fusion::GameMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "opts", ty: "::GlobalNamespace::RoomConfig*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetSessionName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_startupTask_5__2", ty: "::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_goingBetweenRooms_5__3", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemFusion__Connect_d__60::NetworkSystemFusion__Connect_d__60(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this, ::Fusion::GameMode  mode, ::GlobalNamespace::RoomConfig*  opts, ::StringW  targetSessionName, ::System::Threading::Tasks::Task_1<::Fusion::StartGameResult*>*  _startupTask_5__2, bool  _goingBetweenRooms_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->mode = mode;
this->opts = opts;
this->targetSessionName = targetSessionName;
this->_startupTask_5__2 = _startupTask_5__2;
this->_goingBetweenRooms_5__3 = _goingBetweenRooms_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion__Connect_d__60::NetworkSystemFusion__Connect_d__60()   {
}
