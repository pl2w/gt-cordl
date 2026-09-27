#pragma once
// IWYU pragma private; include "Fusion/Histogram.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Histogram_def.hpp"
#include "Fusion/zzzz__Histogram_QuantileEstimator_def.hpp"
#include "Fusion/zzzz__Histogram___c__DisplayClass26_0_def.hpp"
#include "Fusion/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::Histogram.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)()>(&::Fusion::Histogram::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)(double_t, double_t, double_t)>(&::Fusion::Histogram::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f9e85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)(double_t, int32_t)>(&::Fusion::Histogram::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f9e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)(int32_t)>(&::Fusion::Histogram::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f9e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Print
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)()>(&::Fusion::Histogram::Print)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5f9eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Print", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)()>(&::Fusion::Histogram::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f9ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Record
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)(double_t)>(&::Fusion::Histogram::Record)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Record", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Record
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)(double_t, double_t)>(&::Fusion::Histogram::Record)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5f9efdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Record", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)()>(&::Fusion::Histogram::Normalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9f73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Normalize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Rescale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Histogram::*)(double_t)>(&::Fusion::Histogram::Rescale)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f9f74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Rescale", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Mean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::Mean)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f9f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Mean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.MeanGeometric
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::MeanGeometric)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5f9f9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MeanGeometric", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.MeanHarmonic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::MeanHarmonic)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f9fba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MeanHarmonic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Variance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::Variance)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f9fd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Variance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Quantile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)(double_t)>(&::Fusion::Histogram::Quantile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9fe7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Quantile", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.QuantileWithEstimator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)(double_t, ::GlobalNamespace::Histogram_QuantileEstimator)>(&::Fusion::Histogram::QuantileWithEstimator)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x5f9fe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"QuantileWithEstimator", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::Histogram_QuantileEstimator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.MaxRelativeSampleError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::MaxRelativeSampleError)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeSampleError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.MaxRelativeQuantileError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::MaxRelativeQuantileError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f9ef38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeQuantileError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Downsample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Histogram::*)(int32_t, int32_t)>(&::Fusion::Histogram::Downsample)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x5f9f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Downsample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Exponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Histogram::*)(double_t)>(&::Fusion::Histogram::Exponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9f308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Exponent", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.BinExponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Histogram::*)(int32_t)>(&::Fusion::Histogram::BinExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9ef54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinExponent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.BinIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Histogram::*)(int32_t)>(&::Fusion::Histogram::BinIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9f714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.BinLowerBound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)(int32_t)>(&::Fusion::Histogram::BinLowerBound)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinLowerBound", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.BinMidpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)(int32_t)>(&::Fusion::Histogram::BinMidpoint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f9f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinMidpoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t)>(&::Fusion::Histogram::Resolution)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9e928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Resolution", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Contrast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::Fusion::Histogram::Contrast)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9e8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Contrast", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t, int32_t)>(&::Fusion::Histogram::Capacity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f9ea08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Capacity", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.MaxRelativeSampleError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t)>(&::Fusion::Histogram::MaxRelativeSampleError)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fa0340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeSampleError", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.MaxRelativeQuantileError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t)>(&::Fusion::Histogram::MaxRelativeQuantileError)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fa0364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeQuantileError", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Base
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Histogram::*)()>(&::Fusion::Histogram::Base)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9ef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Base", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Base
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t)>(&::Fusion::Histogram::Base)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fa0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Base", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.CopySign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::Fusion::Histogram::CopySign)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fa0594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"CopySign", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.FrExp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<double_t,int32_t> (*)(double_t)>(&::Fusion::Histogram::FrExp)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5fa05a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"FrExp", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.Exponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, double_t)>(&::Fusion::Histogram::Exponent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5fa037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Exponent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram.LowerBound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t, int32_t)>(&::Fusion::Histogram::LowerBound)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fa0498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"LowerBound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Histogram._QuantileWithEstimator_g__Upsample_26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, ::by_ref<::GlobalNamespace::Histogram___c__DisplayClass26_0>)>(&::Fusion::Histogram::_QuantileWithEstimator_g__Upsample_26_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fa0318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"<QuantileWithEstimator>g__Upsample|26_0", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Histogram___c__DisplayClass26_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Histogram::__cordl_internal_get_resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr int32_t const& Fusion::Histogram::__cordl_internal_get_resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr void Fusion::Histogram::__cordl_internal_set_resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolution = value;
}
constexpr int32_t& Fusion::Histogram::__cordl_internal_get_minExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minExp;
}
constexpr int32_t const& Fusion::Histogram::__cordl_internal_get_minExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minExp;
}
constexpr void Fusion::Histogram::__cordl_internal_set_minExp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minExp = value;
}
constexpr int32_t& Fusion::Histogram::__cordl_internal_get_maxExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxExp;
}
constexpr int32_t const& Fusion::Histogram::__cordl_internal_get_maxExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxExp;
}
constexpr void Fusion::Histogram::__cordl_internal_set_maxExp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxExp = value;
}
constexpr double_t& Fusion::Histogram::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr double_t const& Fusion::Histogram::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void Fusion::Histogram::__cordl_internal_set_count(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr double_t& Fusion::Histogram::__cordl_internal_get_zeroCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroCount;
}
constexpr double_t const& Fusion::Histogram::__cordl_internal_get_zeroCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroCount;
}
constexpr void Fusion::Histogram::__cordl_internal_set_zeroCount(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zeroCount = value;
}
constexpr ::Fusion::RingBuffer_1<double_t>*& Fusion::Histogram::__cordl_internal_get_bins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bins;
}
constexpr ::Fusion::RingBuffer_1<double_t>* const& Fusion::Histogram::__cordl_internal_get_bins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bins;
}
constexpr void Fusion::Histogram::__cordl_internal_set_bins(::Fusion::RingBuffer_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bins = value;
}
inline double_t Fusion::Histogram::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::Histogram::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Histogram::_ctor(double_t  min, double_t  max, double_t  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max, error);
}
inline void Fusion::Histogram::_ctor(double_t  contrast, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contrast, resolution);
}
inline void Fusion::Histogram::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void Fusion::Histogram::Print()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Print", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Histogram::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Histogram::Record(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Record", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Histogram::Record(double_t  value, double_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Record", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, count);
}
inline void Fusion::Histogram::Normalize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Normalize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Histogram::Rescale(double_t  scaleFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Rescale", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaleFactor);
}
inline double_t Fusion::Histogram::Mean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Mean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::Histogram::MeanGeometric()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MeanGeometric", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::Histogram::MeanHarmonic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MeanHarmonic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::Histogram::Variance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Variance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::Histogram::Quantile(double_t  fraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Quantile", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, fraction);
}
inline double_t Fusion::Histogram::QuantileWithEstimator(double_t  fraction, ::GlobalNamespace::Histogram_QuantileEstimator  estimator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"QuantileWithEstimator", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::Histogram_QuantileEstimator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, fraction, estimator);
}
inline double_t Fusion::Histogram::MaxRelativeSampleError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeSampleError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::Histogram::MaxRelativeQuantileError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeQuantileError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t Fusion::Histogram::Downsample(int32_t  desiredMinExp, int32_t  desiredMaxExp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Downsample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, desiredMinExp, desiredMaxExp);
}
inline int32_t Fusion::Histogram::Exponent(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Exponent", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t Fusion::Histogram::BinExponent(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinExponent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline int32_t Fusion::Histogram::BinIndex(int32_t  exponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, exponent);
}
inline double_t Fusion::Histogram::BinLowerBound(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinLowerBound", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Fusion::Histogram::BinMidpoint(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"BinMidpoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline int32_t Fusion::Histogram::Resolution(double_t  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Resolution", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, error);
}
inline double_t Fusion::Histogram::Contrast(double_t  min, double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Contrast", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, min, max);
}
inline int32_t Fusion::Histogram::Capacity(double_t  contrast, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Capacity", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, contrast, resolution);
}
inline double_t Fusion::Histogram::MaxRelativeSampleError(int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeSampleError", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, resolution);
}
inline double_t Fusion::Histogram::MaxRelativeQuantileError(int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"MaxRelativeQuantileError", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, resolution);
}
inline double_t Fusion::Histogram::Base()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Base", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::Histogram::Base(int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Base", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, resolution);
}
inline double_t Fusion::Histogram::CopySign(double_t  x, double_t  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"CopySign", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, x, s);
}
inline ::System::ValueTuple_2<double_t,int32_t> Fusion::Histogram::FrExp(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"FrExp", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<double_t,int32_t>>(nullptr, ___internal_method, value);
}
inline int32_t Fusion::Histogram::Exponent(int32_t  resolution, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"Exponent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, resolution, value);
}
inline double_t Fusion::Histogram::LowerBound(int32_t  resolution, int32_t  exp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"LowerBound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, resolution, exp);
}
inline double_t Fusion::Histogram::_QuantileWithEstimator_g__Upsample_26_0(double_t  cutCount, ::by_ref<::GlobalNamespace::Histogram___c__DisplayClass26_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Histogram*>(),
                        {"<QuantileWithEstimator>g__Upsample|26_0", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Histogram___c__DisplayClass26_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, cutCount, _cordl_fixed_empty_name_whitespace);
}
inline ::Fusion::Histogram* Fusion::Histogram::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Histogram*>());
}
inline ::Fusion::Histogram* Fusion::Histogram::New_ctor(double_t  min, double_t  max, double_t  error)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Histogram*>(min, max, error));
}
inline ::Fusion::Histogram* Fusion::Histogram::New_ctor(double_t  contrast, int32_t  resolution)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Histogram*>(contrast, resolution));
}
inline ::Fusion::Histogram* Fusion::Histogram::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Histogram*>(capacity));
}
// Ctor Parameters []
constexpr ::Fusion::Histogram::Histogram()   {
}
