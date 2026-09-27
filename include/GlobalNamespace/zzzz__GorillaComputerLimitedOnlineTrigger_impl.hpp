#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaComputerLimitedOnlineTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaComputerLimitedOnlineTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaComputerLimitedOnlineTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaComputerLimitedOnlineTrigger::*)()>(&::GlobalNamespace::GorillaComputerLimitedOnlineTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5996c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaComputerLimitedOnlineTrigger.OnBoxExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaComputerLimitedOnlineTrigger::*)()>(&::GlobalNamespace::GorillaComputerLimitedOnlineTrigger::OnBoxExited)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5996c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaComputerLimitedOnlineTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaComputerLimitedOnlineTrigger::*)()>(&::GlobalNamespace::GorillaComputerLimitedOnlineTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5996cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaComputerLimitedOnlineTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaComputerLimitedOnlineTrigger::OnBoxExited()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaComputerLimitedOnlineTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaComputerLimitedOnlineTrigger* GlobalNamespace::GorillaComputerLimitedOnlineTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaComputerLimitedOnlineTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaComputerLimitedOnlineTrigger::GorillaComputerLimitedOnlineTrigger()   {
}
