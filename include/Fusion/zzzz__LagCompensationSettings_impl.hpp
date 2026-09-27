#pragma once
// IWYU pragma private; include "Fusion/LagCompensationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__LagCompensationSettings_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensationSettings.get_ExpansionFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::LagCompensationSettings::*)()>(&::Fusion::LagCompensationSettings::get_ExpansionFactor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f93f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensationSettings*>(),
                        {"get_ExpansionFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensationSettings.get_Optimize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensationSettings::*)()>(&::Fusion::LagCompensationSettings::get_Optimize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f948ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensationSettings*>(),
                        {"get_Optimize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensationSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensationSettings::*)()>(&::Fusion::LagCompensationSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f948b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensationSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::LagCompensationSettings::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Fusion::LagCompensationSettings::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Fusion::LagCompensationSettings::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr int32_t& Fusion::LagCompensationSettings::__cordl_internal_get_HitboxBufferLengthInMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitboxBufferLengthInMs;
}
constexpr int32_t const& Fusion::LagCompensationSettings::__cordl_internal_get_HitboxBufferLengthInMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitboxBufferLengthInMs;
}
constexpr void Fusion::LagCompensationSettings::__cordl_internal_set_HitboxBufferLengthInMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HitboxBufferLengthInMs = value;
}
constexpr int32_t& Fusion::LagCompensationSettings::__cordl_internal_get_HitboxDefaultCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitboxDefaultCapacity;
}
constexpr int32_t const& Fusion::LagCompensationSettings::__cordl_internal_get_HitboxDefaultCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitboxDefaultCapacity;
}
constexpr void Fusion::LagCompensationSettings::__cordl_internal_set_HitboxDefaultCapacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HitboxDefaultCapacity = value;
}
constexpr int32_t& Fusion::LagCompensationSettings::__cordl_internal_get_CachedStaticCollidersSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedStaticCollidersSize;
}
constexpr int32_t const& Fusion::LagCompensationSettings::__cordl_internal_get_CachedStaticCollidersSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedStaticCollidersSize;
}
constexpr void Fusion::LagCompensationSettings::__cordl_internal_set_CachedStaticCollidersSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedStaticCollidersSize = value;
}
inline float_t Fusion::LagCompensationSettings::get_ExpansionFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensationSettings*>(),
                        {"get_ExpansionFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Fusion::LagCompensationSettings::get_Optimize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensationSettings*>(),
                        {"get_Optimize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::LagCompensationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensationSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::LagCompensationSettings* Fusion::LagCompensationSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensationSettings*>());
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensationSettings::LagCompensationSettings()   {
}
