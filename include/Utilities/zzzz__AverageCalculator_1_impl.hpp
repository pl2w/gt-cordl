#pragma once
// IWYU pragma private; include "Utilities/AverageCalculator_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Utilities/zzzz__AverageCalculator_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_samples;
}
template<typename T>
constexpr ::ArrayW<T> const& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_samples;
}
template<typename T>
constexpr void Utilities::AverageCalculator_1<T>::__cordl_internal_set_m_samples(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_samples = value;
}
template<typename T>
constexpr T& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_average()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_average;
}
template<typename T>
constexpr T const& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_average() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_average;
}
template<typename T>
constexpr void Utilities::AverageCalculator_1<T>::__cordl_internal_set_m_average(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_average = value;
}
template<typename T>
constexpr T& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_total()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_total;
}
template<typename T>
constexpr T const& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_total() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_total;
}
template<typename T>
constexpr void Utilities::AverageCalculator_1<T>::__cordl_internal_set_m_total(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_total = value;
}
template<typename T>
constexpr int32_t& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_index;
}
template<typename T>
constexpr int32_t const& Utilities::AverageCalculator_1<T>::__cordl_internal_get_m_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_index;
}
template<typename T>
constexpr void Utilities::AverageCalculator_1<T>::__cordl_internal_set_m_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_index = value;
}
template<typename T>
inline T Utilities::AverageCalculator_1<T>::get_Average()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(),
                        {"get_Average", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Utilities::AverageCalculator_1<T>::_ctor(int32_t  sampleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCount);
}
template<typename T>
inline void Utilities::AverageCalculator_1<T>::AddSample(T  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample);
}
template<typename T>
inline void Utilities::AverageCalculator_1<T>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Utilities::AverageCalculator_1<T>::DefaultTypeValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline T Utilities::AverageCalculator_1<T>::PlusEquals(T  value, T  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value, sample);
}
template<typename T>
inline T Utilities::AverageCalculator_1<T>::MinusEquals(T  value, T  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value, sample);
}
template<typename T>
inline T Utilities::AverageCalculator_1<T>::Divide(T  value, int32_t  sampleCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value, sampleCount);
}
template<typename T>
inline T Utilities::AverageCalculator_1<T>::Multiply(T  value, int32_t  sampleCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::AverageCalculator_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value, sampleCount);
}
template<typename T>
inline ::Utilities::AverageCalculator_1<T>* Utilities::AverageCalculator_1<T>::New_ctor(int32_t  sampleCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Utilities::AverageCalculator_1<T>*>(sampleCount));
}
// Ctor Parameters []
template<typename T>
constexpr ::Utilities::AverageCalculator_1<T>::AverageCalculator_1()   {
}
