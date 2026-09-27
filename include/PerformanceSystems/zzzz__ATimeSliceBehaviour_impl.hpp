#pragma once
// IWYU pragma private; include "PerformanceSystems/ATimeSliceBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "PerformanceSystems/zzzz__ATimeSliceBehaviour_def.hpp"
#include "PerformanceSystems/zzzz__ITimeSlice_def.hpp"
#include "PerformanceSystems/zzzz__TimeSliceControllerAsset_def.hpp"
//  Writing Method size for method: ::PerformanceSystems::ATimeSliceBehaviour.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ATimeSliceBehaviour::*)()>(&::PerformanceSystems::ATimeSliceBehaviour::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b712ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ATimeSliceBehaviour.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ATimeSliceBehaviour::*)()>(&::PerformanceSystems::ATimeSliceBehaviour::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b71354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ATimeSliceBehaviour.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ATimeSliceBehaviour::*)()>(&::PerformanceSystems::ATimeSliceBehaviour::SliceUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b71420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ATimeSliceBehaviour.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ATimeSliceBehaviour::*)(float_t)>(&::PerformanceSystems::ATimeSliceBehaviour::SliceUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                    {::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ATimeSliceBehaviour.SliceUpdateAlways
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ATimeSliceBehaviour::*)(float_t)>(&::PerformanceSystems::ATimeSliceBehaviour::SliceUpdateAlways)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                    {::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::ATimeSliceBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::ATimeSliceBehaviour::*)()>(&::PerformanceSystems::ATimeSliceBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b714ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>& PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_get__timeSliceControllerAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceControllerAsset;
}
constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset> const& PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_get__timeSliceControllerAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceControllerAsset;
}
constexpr void PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_set__timeSliceControllerAsset(::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSliceControllerAsset = value;
}
constexpr bool& PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_get__updateIfDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateIfDisabled;
}
constexpr bool const& PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_get__updateIfDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateIfDisabled;
}
constexpr void PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_set__updateIfDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateIfDisabled = value;
}
constexpr float_t& PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_get__lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr float_t const& PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_get__lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr void PerformanceSystems::ATimeSliceBehaviour::__cordl_internal_set__lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateTime = value;
}
inline void PerformanceSystems::ATimeSliceBehaviour::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::ATimeSliceBehaviour::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::ATimeSliceBehaviour::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::ATimeSliceBehaviour::SliceUpdate(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void PerformanceSystems::ATimeSliceBehaviour::SliceUpdateAlways(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void PerformanceSystems::ATimeSliceBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::ATimeSliceBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PerformanceSystems::ATimeSliceBehaviour* PerformanceSystems::ATimeSliceBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PerformanceSystems::ATimeSliceBehaviour*>());
}
/// @brief Convert operator to "::PerformanceSystems::ITimeSlice"
constexpr  PerformanceSystems::ATimeSliceBehaviour::operator ::PerformanceSystems::ITimeSlice*() noexcept {
return static_cast<::PerformanceSystems::ITimeSlice*>(static_cast<void*>(this));
}
/// @brief Convert to "::PerformanceSystems::ITimeSlice"
constexpr ::PerformanceSystems::ITimeSlice* PerformanceSystems::ATimeSliceBehaviour::i___PerformanceSystems__ITimeSlice() noexcept {
return static_cast<::PerformanceSystems::ITimeSlice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PerformanceSystems::ATimeSliceBehaviour::ATimeSliceBehaviour()   {
}
