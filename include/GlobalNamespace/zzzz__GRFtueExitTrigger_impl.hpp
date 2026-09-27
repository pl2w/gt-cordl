#pragma once
// IWYU pragma private; include "GlobalNamespace/GRFtueExitTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GRFtueExitTrigger_def.hpp"
#include "GlobalNamespace/zzzz__GRFirstTimeUserExperience_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRFtueExitTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFtueExitTrigger::*)()>(&::GlobalNamespace::GRFtueExitTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x589b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRFtueExitTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::GRFtueExitTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRFtueExitTrigger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFtueExitTrigger::*)()>(&::GlobalNamespace::GRFtueExitTrigger::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x589b74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFtueExitTrigger*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRFtueExitTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFtueExitTrigger::*)()>(&::GlobalNamespace::GRFtueExitTrigger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x589b7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFtueExitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRFirstTimeUserExperience>& GlobalNamespace::GRFtueExitTrigger::__cordl_internal_get_ftueObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ftueObject;
}
constexpr ::UnityW<::GlobalNamespace::GRFirstTimeUserExperience> const& GlobalNamespace::GRFtueExitTrigger::__cordl_internal_get_ftueObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ftueObject;
}
constexpr void GlobalNamespace::GRFtueExitTrigger::__cordl_internal_set_ftueObject(::UnityW<::GlobalNamespace::GRFirstTimeUserExperience>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ftueObject = value;
}
constexpr float_t& GlobalNamespace::GRFtueExitTrigger::__cordl_internal_get_delayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTime;
}
constexpr float_t const& GlobalNamespace::GRFtueExitTrigger::__cordl_internal_get_delayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTime;
}
constexpr void GlobalNamespace::GRFtueExitTrigger::__cordl_internal_set_delayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayTime = value;
}
constexpr float_t& GlobalNamespace::GRFtueExitTrigger::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::GRFtueExitTrigger::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::GRFtueExitTrigger::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
inline void GlobalNamespace::GRFtueExitTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRFtueExitTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRFtueExitTrigger::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFtueExitTrigger*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRFtueExitTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFtueExitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRFtueExitTrigger* GlobalNamespace::GRFtueExitTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRFtueExitTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRFtueExitTrigger::GRFtueExitTrigger()   {
}
