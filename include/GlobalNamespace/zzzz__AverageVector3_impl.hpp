#pragma once
// IWYU pragma private; include "GlobalNamespace/AverageVector3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AverageVector3_def.hpp"
#include "GlobalNamespace/zzzz__AverageVector3_Sample_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AverageVector3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AverageVector3::*)(float_t)>(&::GlobalNamespace::AverageVector3::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ae1198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AverageVector3.AddSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AverageVector3::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::AverageVector3::AddSample)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ae1240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"AddSample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AverageVector3.GetAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AverageVector3::*)()>(&::GlobalNamespace::AverageVector3::GetAverage)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ae13e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"GetAverage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AverageVector3.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AverageVector3::*)()>(&::GlobalNamespace::AverageVector3::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ae14d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AverageVector3.RefreshSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AverageVector3::*)()>(&::GlobalNamespace::AverageVector3::RefreshSamples)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ae1310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"RefreshSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>*& GlobalNamespace::AverageVector3::__cordl_internal_get_samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>* const& GlobalNamespace::AverageVector3::__cordl_internal_get_samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samples;
}
constexpr void GlobalNamespace::AverageVector3::__cordl_internal_set_samples(::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samples = value;
}
constexpr float_t& GlobalNamespace::AverageVector3::__cordl_internal_get_timeWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeWindow;
}
constexpr float_t const& GlobalNamespace::AverageVector3::__cordl_internal_get_timeWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeWindow;
}
constexpr void GlobalNamespace::AverageVector3::__cordl_internal_set_timeWindow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeWindow = value;
}
inline void GlobalNamespace::AverageVector3::_ctor(float_t  averagingWindow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, averagingWindow);
}
inline void GlobalNamespace::AverageVector3::AddSample(::UnityEngine::Vector3  sample, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"AddSample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample, time);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AverageVector3::GetAverage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"GetAverage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::AverageVector3::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AverageVector3::RefreshSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AverageVector3*>(),
                        {"RefreshSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AverageVector3* GlobalNamespace::AverageVector3::New_ctor(float_t  averagingWindow)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AverageVector3*>(averagingWindow));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AverageVector3::AverageVector3()   {
}
