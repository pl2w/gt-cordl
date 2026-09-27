#pragma once
// IWYU pragma private; include "Fusion/TimeSeries.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__TimeSeries_def.hpp"
#include "Fusion/zzzz__RingBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Fusion::TimeSeries.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fa68dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Capacity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fa692c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_IsEmpty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fa697c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_IsFull)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fa69cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_IsFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Latest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Latest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fa6a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Latest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Avg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Avg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa6a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Avg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Var
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Var)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fa6a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Var", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Dev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Dev)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fa6ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Dev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Min)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fa6b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Max)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fa6c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_Median
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_Median)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa6cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Median", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_MeanAbsDev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_MeanAbsDev)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fa6d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_MeanAbsDev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.get_MedianAbsDev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::get_MedianAbsDev)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fa6e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_MedianAbsDev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.Smoothed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)(double_t)>(&::Fusion::TimeSeries::Smoothed)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fa70fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Smoothed", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeSeries::*)(int32_t)>(&::Fusion::TimeSeries::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fa720c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeSeries::*)(double_t)>(&::Fusion::TimeSeries::Add)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5fa72dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Add", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeSeries::*)(double_t)>(&::Fusion::TimeSeries::Fill)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fa7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Fill", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.QuantileNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimeSeries::*)(double_t)>(&::Fusion::TimeSeries::QuantileNormal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fa74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"QuantileNormal", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.InverseCdfNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::Fusion::TimeSeries::InverseCdfNormal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fa7524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"InverseCdfNormal", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.FindMedian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Collections::Generic::IEnumerable_1<double_t>*)>(&::Fusion::TimeSeries::FindMedian)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa6d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"FindMedian", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.FindMedian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Collections::Generic::List_1<double_t>*)>(&::Fusion::TimeSeries::FindMedian)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fa7004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"FindMedian", {}, {::i2c::type_of<::System::Collections::Generic::List_1<double_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TimeSeries::*)()>(&::Fusion::TimeSeries::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fa749c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimeSeries._InverseCdfNormal_g__Polynomial_34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::Fusion::TimeSeries::_InverseCdfNormal_g__Polynomial_34_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fa75b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"<InverseCdfNormal>g__Polynomial|34_0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Fusion::TimeSeries::__cordl_internal_get__mean()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mean;
}
constexpr double_t const& Fusion::TimeSeries::__cordl_internal_get__mean() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mean;
}
constexpr void Fusion::TimeSeries::__cordl_internal_set__mean(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mean = value;
}
constexpr double_t& Fusion::TimeSeries::__cordl_internal_get__varSum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____varSum;
}
constexpr double_t const& Fusion::TimeSeries::__cordl_internal_get__varSum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____varSum;
}
constexpr void Fusion::TimeSeries::__cordl_internal_set__varSum(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____varSum = value;
}
constexpr ::Fusion::RingBuffer_1<double_t>*& Fusion::TimeSeries::__cordl_internal_get__samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr ::Fusion::RingBuffer_1<double_t>* const& Fusion::TimeSeries::__cordl_internal_get__samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr void Fusion::TimeSeries::__cordl_internal_set__samples(::Fusion::RingBuffer_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samples = value;
}
inline int32_t Fusion::TimeSeries::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::TimeSeries::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::TimeSeries::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::TimeSeries::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_Latest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Latest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_Avg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Avg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_Var()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Var", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_Dev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Dev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_Min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_Max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_Median()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_Median", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_MeanAbsDev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_MeanAbsDev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::get_MedianAbsDev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"get_MedianAbsDev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::Smoothed(double_t  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Smoothed", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, alpha);
}
inline void Fusion::TimeSeries::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void Fusion::TimeSeries::Add(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Add", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::TimeSeries::Fill(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Fill", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::TimeSeries::QuantileNormal(double_t  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"QuantileNormal", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, p);
}
inline double_t Fusion::TimeSeries::InverseCdfNormal(double_t  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"InverseCdfNormal", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, p);
}
inline double_t Fusion::TimeSeries::FindMedian(::System::Collections::Generic::IEnumerable_1<double_t>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"FindMedian", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, values);
}
inline double_t Fusion::TimeSeries::FindMedian(::System::Collections::Generic::List_1<double_t>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"FindMedian", {}, {::i2c::type_of<::System::Collections::Generic::List_1<double_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, list);
}
inline void Fusion::TimeSeries::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t Fusion::TimeSeries::_InverseCdfNormal_g__Polynomial_34_0(double_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimeSeries*>(),
                        {"<InverseCdfNormal>g__Polynomial|34_0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, x);
}
inline ::Fusion::TimeSeries* Fusion::TimeSeries::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::TimeSeries*>(capacity));
}
// Ctor Parameters []
constexpr ::Fusion::TimeSeries::TimeSeries()   {
}
