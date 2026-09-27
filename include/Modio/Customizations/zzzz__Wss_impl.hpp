#pragma once
// IWYU pragma private; include "Modio/Customizations/Wss.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__Wss_def.hpp"
#include "Modio/Customizations/zzzz__ExternalAuthenticationToken_def.hpp"
#include "Modio/Customizations/zzzz__WssLoginSuccess_def.hpp"
#include "Modio/Customizations/zzzz__Wss__BeginAuthenticationProcess_d__0_def.hpp"
#include "Modio/Customizations/zzzz__Wss__WaitForAccessToken_d__1_def.hpp"
#include "Modio/Customizations/zzzz__Wss_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::Wss.BeginAuthenticationProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::ExternalAuthenticationToken>>* (*)(bool)>(&::Modio::Customizations::Wss::BeginAuthenticationProcess)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa05a844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss*>(),
                        {"BeginAuthenticationProcess", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Wss.WaitForAccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>* (*)()>(&::Modio::Customizations::Wss::WaitForAccessToken)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa05a9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss*>(),
                        {"WaitForAccessToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::ExternalAuthenticationToken>>* Modio::Customizations::Wss::BeginAuthenticationProcess(bool  restartProcess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss*>(),
                        {"BeginAuthenticationProcess", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::ExternalAuthenticationToken>>*>(nullptr, ___internal_method, restartProcess);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>* Modio::Customizations::Wss::WaitForAccessToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss*>(),
                        {"WaitForAccessToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::Customizations::Wss::Wss()   {
}
//  Writing Method size for method: ::Modio::Customizations::Wss___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Wss___c::*)()>(&::Modio::Customizations::Wss___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Wss___c._BeginAuthenticationProcess_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Wss___c::*)()>(&::Modio::Customizations::Wss___c::_BeginAuthenticationProcess_b__0_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa05ab08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss___c*>(),
                        {"<BeginAuthenticationProcess>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Customizations::Wss___c::setStaticF___9(::Modio::Customizations::Wss___c*  value)  {
::cordl_internals::setStaticField<::Modio::Customizations::Wss___c*, "<>9", ::Modio::Customizations::Wss___c*>(std::forward<::Modio::Customizations::Wss___c*>(value));
}
inline ::Modio::Customizations::Wss___c* Modio::Customizations::Wss___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Customizations::Wss___c*, "<>9", ::Modio::Customizations::Wss___c*>();
}
inline void Modio::Customizations::Wss___c::setStaticF___9__0_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__0_0", ::Modio::Customizations::Wss___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Modio::Customizations::Wss___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__0_0", ::Modio::Customizations::Wss___c*>();
}
inline void Modio::Customizations::Wss___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Customizations::Wss___c::_BeginAuthenticationProcess_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Wss___c*>(),
                        {"<BeginAuthenticationProcess>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Customizations::Wss___c* Modio::Customizations::Wss___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::Wss___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Customizations::Wss___c::Wss___c()   {
}
