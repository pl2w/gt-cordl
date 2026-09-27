#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__InitialiseKID_d__94.hpp"
#include "KID/Model/zzzz__AgeStatusType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager__InitialiseKID_d__94_def.hpp"
#include "GlobalNamespace/zzzz__GetPlayerData_Data_def.hpp"
#include "GlobalNamespace/zzzz__GetRequirementsData_def.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDManager__InitialiseKID_d__94.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__InitialiseKID_d__94::*)()>(&::GlobalNamespace::KIDManager__InitialiseKID_d__94::MoveNext)> {
  constexpr static std::size_t size = 0x1d60;
  constexpr static std::size_t addrs = 0x5a33a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__InitialiseKID_d__94>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager__InitialiseKID_d__94.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__InitialiseKID_d__94::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::KIDManager__InitialiseKID_d__94::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a35afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__InitialiseKID_d__94>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager__InitialiseKID_d__94::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__InitialiseKID_d__94>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::KIDManager__InitialiseKID_d__94::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__InitialiseKID_d__94>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::KIDManager__InitialiseKID_d__94::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDManager__InitialiseKID_d__94::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_snapTurnDisabled_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cachedTapHapticsStrength_5__3", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_newSessionData_5__6", ty: "::GlobalNamespace::GetPlayerData_Data*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_newSession_5__7", ty: "::GlobalNamespace::TMPSession*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetRequirementsData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__5", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__6", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__7", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDManager__InitialiseKID_d__94::KIDManager__InitialiseKID_d__94(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  _snapTurnDisabled_5__2, ::System::Nullable_1<float_t>  _cachedTapHapticsStrength_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::GlobalNamespace::GetPlayerData_Data*  _newSessionData_5__6, ::GlobalNamespace::TMPSession*  _newSession_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetRequirementsData*>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>  __u__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__6, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__7) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->_snapTurnDisabled_5__2 = _snapTurnDisabled_5__2;
this->_cachedTapHapticsStrength_5__3 = _cachedTapHapticsStrength_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_newSessionData_5__6 = _newSessionData_5__6;
this->_newSession_5__7 = _newSession_5__7;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
this->__u__5 = __u__5;
this->__u__6 = __u__6;
this->__u__7 = __u__7;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager__InitialiseKID_d__94::KIDManager__InitialiseKID_d__94()   {
}
