#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SendUpgradeEmailScreen_def.hpp"
#include "GlobalNamespace/zzzz__UpgradeSessionData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::*)()>(&::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x5a5adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a5b444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestedPermissions", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UpgradeSessionData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<bool,::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Collections::Generic::List_1<::StringW>*  requestedPermissions, ::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UpgradeSessionData*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<bool,::StringW>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->requestedPermissions = requestedPermissions;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4()   {
}
