#pragma once
// IWYU pragma private; include "PerformanceSystems/TimeSliceControllerBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "PerformanceSystems/zzzz__TimeSliceControllerBehaviour_def.hpp"
#include "PerformanceSystems/zzzz__TimeSliceControllerAsset_def.hpp"
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerBehaviour.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerBehaviour::*)()>(&::PerformanceSystems::TimeSliceControllerBehaviour::Awake)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b71c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerBehaviour*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerBehaviour.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerBehaviour::*)()>(&::PerformanceSystems::TimeSliceControllerBehaviour::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b71c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerBehaviour*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerBehaviour::*)()>(&::PerformanceSystems::TimeSliceControllerBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>& PerformanceSystems::TimeSliceControllerBehaviour::__cordl_internal_get__timeSliceControllerAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceControllerAsset;
}
constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset> const& PerformanceSystems::TimeSliceControllerBehaviour::__cordl_internal_get__timeSliceControllerAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceControllerAsset;
}
constexpr void PerformanceSystems::TimeSliceControllerBehaviour::__cordl_internal_set__timeSliceControllerAsset(::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSliceControllerAsset = value;
}
inline void PerformanceSystems::TimeSliceControllerBehaviour::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerBehaviour*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerBehaviour::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerBehaviour*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PerformanceSystems::TimeSliceControllerBehaviour* PerformanceSystems::TimeSliceControllerBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PerformanceSystems::TimeSliceControllerBehaviour*>());
}
// Ctor Parameters []
constexpr ::PerformanceSystems::TimeSliceControllerBehaviour::TimeSliceControllerBehaviour()   {
}
