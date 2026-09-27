#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsGraphBase_FusionStatBuffer.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_FusionStatBuffer_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.get_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)()>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f797c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_Index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)()>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60f7984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.get_MaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)()>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_MaxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f799c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_MaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)(int32_t, bool, int32_t)>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60f79a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.SetAccumulateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)(int32_t)>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::SetAccumulateTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60f7aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"SetAccumulateTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.SetIgnoreZeroOnAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)(bool)>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::SetIgnoreZeroOnAverage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f7b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"SetIgnoreZeroOnAverage", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)(int32_t)>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60f7b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)(float_t, ::by_ref<::System::DateTime>)>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::Add)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60f7b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"Add", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.AddOnBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)(float_t)>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::AddOnBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x60f7c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"AddOnBuffer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.get_LatestValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)()>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_LatestValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60f7d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_LatestValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.get_AverageValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)()>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_AverageValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60f7de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_AverageValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer.CalculateMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::*)()>(&::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::CalculateMax)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60f7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"CalculateMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_MaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_MaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::_ctor(int32_t  size, bool  ignoreZeroOnAverage, int32_t  accumulateTimeMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, ignoreZeroOnAverage, accumulateTimeMs);
}
inline void GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::SetAccumulateTime(int32_t  accumulateTimeMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"SetAccumulateTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, accumulateTimeMs);
}
inline void GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::SetIgnoreZeroOnAverage(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"SetIgnoreZeroOnAverage", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::Add(float_t  value, ::by_ref<::System::DateTime>  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"Add", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, now);
}
inline void GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::AddOnBuffer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"AddOnBuffer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_LatestValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_LatestValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::get_AverageValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"get_AverageValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::CalculateMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer>(),
                        {"CalculateMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_zeroCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ignoreZeroOnAverage", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_accumulateTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sum", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_max", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_accumulated", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lastBufferInsertTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::FusionStatsGraphBase_FusionStatBuffer(::ArrayW<float_t>  _buffer, int32_t  _index, int32_t  _count, int32_t  _zeroCount, bool  _ignoreZeroOnAverage, ::System::TimeSpan  _accumulateTimeSpan, float_t  _sum, float_t  _max, float_t  _accumulated, ::System::DateTime  _lastBufferInsertTime) noexcept  {
this->_buffer = _buffer;
this->_index = _index;
this->_count = _count;
this->_zeroCount = _zeroCount;
this->_ignoreZeroOnAverage = _ignoreZeroOnAverage;
this->_accumulateTimeSpan = _accumulateTimeSpan;
this->_sum = _sum;
this->_max = _max;
this->_accumulated = _accumulated;
this->_lastBufferInsertTime = _lastBufferInsertTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer::FusionStatsGraphBase_FusionStatBuffer()   {
}
