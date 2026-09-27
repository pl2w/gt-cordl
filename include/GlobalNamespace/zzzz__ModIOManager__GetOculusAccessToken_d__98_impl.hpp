#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__GetOculusAccessToken_d__98.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetOculusAccessToken_d__98_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::*)()>(&::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::MoveNext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59d210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59d21a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::ModIOManager__GetOculusAccessToken_d__98(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIOManager__GetOculusAccessToken_d__98::ModIOManager__GetOculusAccessToken_d__98()   {
}
