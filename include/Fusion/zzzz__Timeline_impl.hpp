#pragma once
// IWYU pragma private; include "Fusion/Timeline.hpp"
#include "Fusion/zzzz__InterpolationParams_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Timeline_def.hpp"
#include "Fusion/zzzz__InterpolationParams_def.hpp"
#include "Fusion/zzzz__RingBuffer_1_def.hpp"
#include "Fusion/zzzz__TimelinePoint_def.hpp"
//  Writing Method size for method: ::Fusion::Timeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timeline::*)(int32_t)>(&::Fusion::Timeline::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fe1530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timeline.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Timeline::*)()>(&::Fusion::Timeline::get_IsEmpty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fe15cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timeline.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timeline::*)()>(&::Fusion::Timeline::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fe161c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timeline.AddPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timeline::*)(::Fusion::TimelinePoint, double_t, bool)>(&::Fusion::Timeline::AddPoint)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fe1678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"AddPoint", {}, {::i2c::type_of<::Fusion::TimelinePoint>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timeline.GetInterpolationParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::InterpolationParams (::Fusion::Timeline::*)(double_t)>(&::Fusion::Timeline::GetInterpolationParams)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5fe1784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"GetInterpolationParams", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timeline.UpdateInterpolationParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timeline::*)(double_t)>(&::Fusion::Timeline::UpdateInterpolationParams)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fe1b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"UpdateInterpolationParams", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::RingBuffer_1<::Fusion::TimelinePoint>*& Fusion::Timeline::__cordl_internal_get_Points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr ::Fusion::RingBuffer_1<::Fusion::TimelinePoint>* const& Fusion::Timeline::__cordl_internal_get_Points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr void Fusion::Timeline::__cordl_internal_set_Points(::Fusion::RingBuffer_1<::Fusion::TimelinePoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Points = value;
}
constexpr ::Fusion::InterpolationParams& Fusion::Timeline::__cordl_internal_get_Params()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr ::Fusion::InterpolationParams const& Fusion::Timeline::__cordl_internal_get_Params() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr void Fusion::Timeline::__cordl_internal_set_Params(::Fusion::InterpolationParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Params = value;
}
inline void Fusion::Timeline::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline bool Fusion::Timeline::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Timeline::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Timeline::AddPoint(::Fusion::TimelinePoint  point, double_t  tickDeltaDouble, bool  allowInactiveHandling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"AddPoint", {}, {::i2c::type_of<::Fusion::TimelinePoint>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, tickDeltaDouble, allowInactiveHandling);
}
inline ::Fusion::InterpolationParams Fusion::Timeline::GetInterpolationParams(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"GetInterpolationParams", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::InterpolationParams>(this, ___internal_method, time);
}
inline void Fusion::Timeline::UpdateInterpolationParams(double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timeline*>(),
                        {"UpdateInterpolationParams", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline ::Fusion::Timeline* Fusion::Timeline::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Timeline*>(capacity));
}
// Ctor Parameters []
constexpr ::Fusion::Timeline::Timeline()   {
}
