#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectScheduleGenerator.hpp"
#include "GameObjectScheduling/zzzz__GameObjectSchedule_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectScheduleGenerator_ScheduleType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectScheduleGenerator_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectScheduleGenerator_ScheduleType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameObjectScheduleGenerator.GenerateSchedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectScheduleGenerator::*)()>(&::GlobalNamespace::GameObjectScheduleGenerator::GenerateSchedule)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x57ec5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectScheduleGenerator*>(),
                        {"GenerateSchedule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectScheduleGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectScheduleGenerator::*)()>(&::GlobalNamespace::GameObjectScheduleGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57ec82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectScheduleGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>>& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_schedules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedules;
}
constexpr ::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>> const& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_schedules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedules;
}
constexpr void GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_set_schedules(::ArrayW<::UnityW<::GameObjectScheduling::GameObjectSchedule>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schedules = value;
}
constexpr ::StringW& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_scheduleStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduleStart;
}
constexpr ::StringW const& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_scheduleStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduleStart;
}
constexpr void GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_set_scheduleStart(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduleStart = value;
}
constexpr ::StringW& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_scheduleEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduleEnd;
}
constexpr ::StringW const& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_scheduleEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduleEnd;
}
constexpr void GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_set_scheduleEnd(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduleEnd = value;
}
constexpr ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_scheduleType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduleType;
}
constexpr ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType const& GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_get_scheduleType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduleType;
}
constexpr void GlobalNamespace::GameObjectScheduleGenerator::__cordl_internal_set_scheduleType(::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduleType = value;
}
inline void GlobalNamespace::GameObjectScheduleGenerator::GenerateSchedule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectScheduleGenerator*>(),
                        {"GenerateSchedule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameObjectScheduleGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectScheduleGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameObjectScheduleGenerator* GlobalNamespace::GameObjectScheduleGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameObjectScheduleGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectScheduleGenerator::GameObjectScheduleGenerator()   {
}
