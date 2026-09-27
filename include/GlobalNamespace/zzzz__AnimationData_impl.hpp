#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimationData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationData::*)()>(&::GlobalNamespace::AnimationData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5866108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::AnimationData::__cordl_internal_get_animName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr ::StringW const& GlobalNamespace::AnimationData::__cordl_internal_get_animName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr void GlobalNamespace::AnimationData::__cordl_internal_set_animName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animName = value;
}
constexpr float_t& GlobalNamespace::AnimationData::__cordl_internal_get_eventTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventTime;
}
constexpr float_t const& GlobalNamespace::AnimationData::__cordl_internal_get_eventTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventTime;
}
constexpr void GlobalNamespace::AnimationData::__cordl_internal_set_eventTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventTime = value;
}
constexpr float_t& GlobalNamespace::AnimationData::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::AnimationData::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::AnimationData::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::AnimationData::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::AnimationData::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::AnimationData::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
inline void GlobalNamespace::AnimationData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimationData* GlobalNamespace::AnimationData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimationData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationData::AnimationData()   {
}
