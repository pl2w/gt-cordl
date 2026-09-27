#pragma once
// IWYU pragma private; include "GameObjectScheduling/SchedulingOptions.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GameObjectScheduling/zzzz__SchedulingOptions_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::SchedulingOptions.get_DtDebugServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GameObjectScheduling::SchedulingOptions::*)()>(&::GameObjectScheduling::SchedulingOptions::get_DtDebugServerTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5de0da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::SchedulingOptions*>(),
                        {"get_DtDebugServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::SchedulingOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::SchedulingOptions::*)()>(&::GameObjectScheduling::SchedulingOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5de0e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::SchedulingOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GameObjectScheduling::SchedulingOptions::__cordl_internal_get_debugServerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugServerTime;
}
constexpr ::StringW const& GameObjectScheduling::SchedulingOptions::__cordl_internal_get_debugServerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugServerTime;
}
constexpr void GameObjectScheduling::SchedulingOptions::__cordl_internal_set_debugServerTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugServerTime = value;
}
constexpr ::System::DateTime& GameObjectScheduling::SchedulingOptions::__cordl_internal_get_dtDebugServerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtDebugServerTime;
}
constexpr ::System::DateTime const& GameObjectScheduling::SchedulingOptions::__cordl_internal_get_dtDebugServerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtDebugServerTime;
}
constexpr void GameObjectScheduling::SchedulingOptions::__cordl_internal_set_dtDebugServerTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dtDebugServerTime = value;
}
constexpr float_t& GameObjectScheduling::SchedulingOptions::__cordl_internal_get_timescale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timescale;
}
constexpr float_t const& GameObjectScheduling::SchedulingOptions::__cordl_internal_get_timescale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timescale;
}
constexpr void GameObjectScheduling::SchedulingOptions::__cordl_internal_set_timescale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timescale = value;
}
inline ::System::DateTime GameObjectScheduling::SchedulingOptions::get_DtDebugServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::SchedulingOptions*>(),
                        {"get_DtDebugServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GameObjectScheduling::SchedulingOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::SchedulingOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::SchedulingOptions* GameObjectScheduling::SchedulingOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::SchedulingOptions*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::SchedulingOptions::SchedulingOptions()   {
}
