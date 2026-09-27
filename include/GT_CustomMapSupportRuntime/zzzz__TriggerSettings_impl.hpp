#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TriggerSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::TriggerSettings.PropagateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::TriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::TriggerSettings::PropagateProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cb8d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::TriggerSettings*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::TriggerSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::TriggerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::TriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::TriggerSettings::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cb71bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::TriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GT_CustomMapSupportRuntime::TriggerSource& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredBy;
}
constexpr ::GT_CustomMapSupportRuntime::TriggerSource const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredBy;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_triggeredBy(::GT_CustomMapSupportRuntime::TriggerSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggeredBy = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredByHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredByHands;
}
constexpr bool const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredByHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredByHands;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_triggeredByHands(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggeredByHands = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredByBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredByBody;
}
constexpr bool const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredByBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredByBody;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_triggeredByBody(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggeredByBody = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredByHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredByHead;
}
constexpr bool const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggeredByHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredByHead;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_triggeredByHead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggeredByHead = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_retriggerAfterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerAfterDuration;
}
constexpr bool const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_retriggerAfterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerAfterDuration;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_retriggerAfterDuration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retriggerAfterDuration = value;
}
constexpr double_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_retriggerStayDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerStayDuration;
}
constexpr double_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_retriggerStayDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerStayDuration;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_retriggerStayDuration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retriggerStayDuration = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_retriggerDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerDelay;
}
constexpr float_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_retriggerDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerDelay;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_retriggerDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retriggerDelay = value;
}
constexpr double_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_onEnableTriggerDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnableTriggerDelay;
}
constexpr double_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_onEnableTriggerDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnableTriggerDelay;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_onEnableTriggerDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnableTriggerDelay = value;
}
constexpr double_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_generalRetriggerDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generalRetriggerDelay;
}
constexpr double_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_generalRetriggerDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generalRetriggerDelay;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_generalRetriggerDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generalRetriggerDelay = value;
}
constexpr uint8_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_numAllowedTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numAllowedTriggers;
}
constexpr uint8_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_numAllowedTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numAllowedTriggers;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_numAllowedTriggers(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numAllowedTriggers = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_validationDistanceOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationDistanceOverride;
}
constexpr float_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_validationDistanceOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationDistanceOverride;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_validationDistanceOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validationDistanceOverride = value;
}
constexpr uint8_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerId;
}
constexpr uint8_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_triggerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerId;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_triggerId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerId = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_validationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationDistance;
}
constexpr float_t const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_validationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationDistance;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_validationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validationDistance = value;
}
constexpr bool& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_syncedToAllPlayers_private()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers_private;
}
constexpr bool const& GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_get_syncedToAllPlayers_private() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers_private;
}
constexpr void GT_CustomMapSupportRuntime::TriggerSettings::__cordl_internal_set_syncedToAllPlayers_private(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedToAllPlayers_private = value;
}
inline void GT_CustomMapSupportRuntime::TriggerSettings::PropagateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::TriggerSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::TriggerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::TriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::TriggerSettings* GT_CustomMapSupportRuntime::TriggerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::TriggerSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::TriggerSettings::TriggerSettings()   {
}
