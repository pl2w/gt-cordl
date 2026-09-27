#pragma once
// IWYU pragma private; include "GlobalNamespace/RealWorldDateTimeWindow.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RealWorldDateTimeWindow_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UniLabs/Time/zzzz__UDateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RealWorldDateTimeWindow.MatchesDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RealWorldDateTimeWindow::*)(::System::DateTime)>(&::GlobalNamespace::RealWorldDateTimeWindow::MatchesDate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56fce9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RealWorldDateTimeWindow*>(),
                        {"MatchesDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RealWorldDateTimeWindow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RealWorldDateTimeWindow::*)()>(&::GlobalNamespace::RealWorldDateTimeWindow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fcf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RealWorldDateTimeWindow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UniLabs::Time::UDateTime*& GlobalNamespace::RealWorldDateTimeWindow::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr ::UniLabs::Time::UDateTime* const& GlobalNamespace::RealWorldDateTimeWindow::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::RealWorldDateTimeWindow::__cordl_internal_set_startTime(::UniLabs::Time::UDateTime*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr ::UniLabs::Time::UDateTime*& GlobalNamespace::RealWorldDateTimeWindow::__cordl_internal_get_endTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr ::UniLabs::Time::UDateTime* const& GlobalNamespace::RealWorldDateTimeWindow::__cordl_internal_get_endTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr void GlobalNamespace::RealWorldDateTimeWindow::__cordl_internal_set_endTime(::UniLabs::Time::UDateTime*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTime = value;
}
inline bool GlobalNamespace::RealWorldDateTimeWindow::MatchesDate(::System::DateTime  utcDate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RealWorldDateTimeWindow*>(),
                        {"MatchesDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, utcDate);
}
inline void GlobalNamespace::RealWorldDateTimeWindow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RealWorldDateTimeWindow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RealWorldDateTimeWindow* GlobalNamespace::RealWorldDateTimeWindow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RealWorldDateTimeWindow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RealWorldDateTimeWindow::RealWorldDateTimeWindow()   {
}
