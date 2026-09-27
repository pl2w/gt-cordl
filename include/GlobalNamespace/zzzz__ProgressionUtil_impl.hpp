#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionUtil_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionUtil__WaitForMothershipSessionToken_d__0_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionUtil__WaitForPlayFabSessionTicket_d__1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressionUtil.WaitForMothershipSessionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::ProgressionUtil::WaitForMothershipSessionToken)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x597bbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionUtil*>(),
                        {"WaitForMothershipSessionToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionUtil.WaitForPlayFabSessionTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::ProgressionUtil::WaitForPlayFabSessionTicket)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x597d18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionUtil*>(),
                        {"WaitForPlayFabSessionTicket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionUtil::*)()>(&::GlobalNamespace::ProgressionUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597d82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* GlobalNamespace::ProgressionUtil::WaitForMothershipSessionToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionUtil*>(),
                        {"WaitForMothershipSessionToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ProgressionUtil::WaitForPlayFabSessionTicket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionUtil*>(),
                        {"WaitForPlayFabSessionTicket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProgressionUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionUtil* GlobalNamespace::ProgressionUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionUtil*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionUtil::ProgressionUtil()   {
}
