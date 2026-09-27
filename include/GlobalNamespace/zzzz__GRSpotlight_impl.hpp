#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSpotlight.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GRSpotlight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSpotlight.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSpotlight::*)()>(&::GlobalNamespace::GRSpotlight::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58b73d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpotlight*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSpotlight.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSpotlight::*)()>(&::GlobalNamespace::GRSpotlight::Tick)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58b74b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRSpotlight*>(),
                    {::i2c::class_of<::GlobalNamespace::GRSpotlight*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSpotlight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSpotlight::*)()>(&::GlobalNamespace::GRSpotlight::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58b7554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpotlight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRSpotlight::__cordl_internal_get_yAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yAmplitude;
}
constexpr float_t const& GlobalNamespace::GRSpotlight::__cordl_internal_get_yAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yAmplitude;
}
constexpr void GlobalNamespace::GRSpotlight::__cordl_internal_set_yAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yAmplitude = value;
}
constexpr float_t& GlobalNamespace::GRSpotlight::__cordl_internal_get_xAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xAmplitude;
}
constexpr float_t const& GlobalNamespace::GRSpotlight::__cordl_internal_get_xAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xAmplitude;
}
constexpr void GlobalNamespace::GRSpotlight::__cordl_internal_set_xAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xAmplitude = value;
}
constexpr float_t& GlobalNamespace::GRSpotlight::__cordl_internal_get_yFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFrequency;
}
constexpr float_t const& GlobalNamespace::GRSpotlight::__cordl_internal_get_yFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFrequency;
}
constexpr void GlobalNamespace::GRSpotlight::__cordl_internal_set_yFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yFrequency = value;
}
constexpr float_t& GlobalNamespace::GRSpotlight::__cordl_internal_get_xFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xFrequency;
}
constexpr float_t const& GlobalNamespace::GRSpotlight::__cordl_internal_get_xFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xFrequency;
}
constexpr void GlobalNamespace::GRSpotlight::__cordl_internal_set_xFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xFrequency = value;
}
constexpr float_t& GlobalNamespace::GRSpotlight::__cordl_internal_get_yStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yStart;
}
constexpr float_t const& GlobalNamespace::GRSpotlight::__cordl_internal_get_yStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yStart;
}
constexpr void GlobalNamespace::GRSpotlight::__cordl_internal_set_yStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yStart = value;
}
constexpr float_t& GlobalNamespace::GRSpotlight::__cordl_internal_get_xStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xStart;
}
constexpr float_t const& GlobalNamespace::GRSpotlight::__cordl_internal_get_xStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xStart;
}
constexpr void GlobalNamespace::GRSpotlight::__cordl_internal_set_xStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xStart = value;
}
constexpr float_t& GlobalNamespace::GRSpotlight::__cordl_internal_get_timeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOffset;
}
constexpr float_t const& GlobalNamespace::GRSpotlight::__cordl_internal_get_timeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOffset;
}
constexpr void GlobalNamespace::GRSpotlight::__cordl_internal_set_timeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOffset = value;
}
inline void GlobalNamespace::GRSpotlight::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpotlight*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSpotlight::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRSpotlight*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSpotlight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpotlight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSpotlight* GlobalNamespace::GRSpotlight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSpotlight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSpotlight::GRSpotlight()   {
}
