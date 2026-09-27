#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/ScheduledDuration.hpp"
#include "Liv/Lck/GorillaTag/zzzz__ScheduledDuration_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::ScheduledDuration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::ScheduledDuration::*)(int64_t, int64_t)>(&::Liv::Lck::GorillaTag::ScheduledDuration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::ScheduledDuration>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::ScheduledDuration.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::ScheduledDuration::*)()>(&::Liv::Lck::GorillaTag::ScheduledDuration::IsActive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d31090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::ScheduledDuration>(),
                        {"IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::GorillaTag::ScheduledDuration::_ctor(int64_t  startTimeTicks, int64_t  endTimeTicks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::ScheduledDuration>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startTimeTicks, endTimeTicks);
}
inline bool Liv::Lck::GorillaTag::ScheduledDuration::IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::ScheduledDuration>(),
                        {"IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_startTimeTicks", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_endTimeTicks", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::GorillaTag::ScheduledDuration::ScheduledDuration(int64_t  _startTimeTicks, int64_t  _endTimeTicks) noexcept  {
this->_startTimeTicks = _startTimeTicks;
this->_endTimeTicks = _endTimeTicks;
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::ScheduledDuration::ScheduledDuration()   {
}
