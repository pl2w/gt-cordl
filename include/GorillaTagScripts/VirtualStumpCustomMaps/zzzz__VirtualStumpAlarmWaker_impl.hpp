#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/VirtualStumpAlarmWaker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpAlarmWaker_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker.EnterStumpCustomMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::EnterStumpCustomMode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bee748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker*>(),
                        {"EnterStumpCustomMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bee79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::EnterStumpCustomMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker*>(),
                        {"EnterStumpCustomMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker* GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker::VirtualStumpAlarmWaker()   {
}
