#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticFan.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticFan_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticFan.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticFan::*)()>(&::GlobalNamespace::CosmeticFan::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56485e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticFan.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticFan::*)()>(&::GlobalNamespace::CosmeticFan::Run)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5648600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticFan.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticFan::*)()>(&::GlobalNamespace::CosmeticFan::Stop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5648650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticFan.InstantStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticFan::*)()>(&::GlobalNamespace::CosmeticFan::InstantStop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5648690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"InstantStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticFan.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticFan::*)()>(&::GlobalNamespace::CosmeticFan::Update)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x56486a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticFan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticFan::*)()>(&::GlobalNamespace::CosmeticFan::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5648820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticFan::__cordl_internal_get_axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticFan::__cordl_internal_get_axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_axis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinUpDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinUpDuration;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinUpDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinUpDuration;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_spinUpDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinUpDuration = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinDownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinDownDuration;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinDownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinDownDuration;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_spinDownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinDownDuration = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_currentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_currentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_currentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpeed = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_targetSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSpeed;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_targetSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSpeed;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_targetSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSpeed = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_currentAccelRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAccelRate;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_currentAccelRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAccelRate;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_currentAccelRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAccelRate = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinUpRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinUpRate;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinUpRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinUpRate;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_spinUpRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinUpRate = value;
}
constexpr float_t& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinDownRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinDownRate;
}
constexpr float_t const& GlobalNamespace::CosmeticFan::__cordl_internal_get_spinDownRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinDownRate;
}
constexpr void GlobalNamespace::CosmeticFan::__cordl_internal_set_spinDownRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinDownRate = value;
}
inline void GlobalNamespace::CosmeticFan::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticFan::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticFan::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticFan::InstantStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"InstantStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticFan::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticFan::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticFan*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticFan* GlobalNamespace::CosmeticFan::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticFan*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticFan::CosmeticFan()   {
}
