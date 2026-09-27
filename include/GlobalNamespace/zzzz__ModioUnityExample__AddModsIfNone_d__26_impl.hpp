#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample__AddModsIfNone_d__26.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_DummyModData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__AddModsIfNone_d__26_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_DummyModData_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__ModioPage_1_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::*)()>(&::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::MoveNext)> {
  constexpr static std::size_t size = 0xbcc;
  constexpr static std::size_t addrs = 0x9f986e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f992ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ModioUnityExample>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::ModioUnityExample_DummyModData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::ModioUnityExample_DummyModData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::ModioUnityExample_DummyModData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ModioUnityExample_DummyModData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::ArrayW<::GlobalNamespace::ModioUnityExample_DummyModData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::ModioUnityExample__AddModsIfNone_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ModioUnityExample>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__1, ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap1, ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap2, ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ModioUnityExample_DummyModData>  __u__2, ::ArrayW<::GlobalNamespace::ModioUnityExample_DummyModData>  __7__wrap4, int32_t  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__u__2 = __u__2;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26::ModioUnityExample__AddModsIfNone_d__26()   {
}
