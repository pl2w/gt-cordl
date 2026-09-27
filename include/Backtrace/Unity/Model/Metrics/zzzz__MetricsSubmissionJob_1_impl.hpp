#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/MetricsSubmissionJob_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionJob_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
template<typename T>
constexpr double_t& Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_get__NextInvokeTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextInvokeTime_k__BackingField;
}
template<typename T>
constexpr double_t const& Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_get__NextInvokeTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextInvokeTime_k__BackingField;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_set__NextInvokeTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NextInvokeTime_k__BackingField = value;
}
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>*& Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_get__Events_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* const& Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_get__Events_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_set__Events_k__BackingField(::System::Collections::Generic::ICollection_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events_k__BackingField = value;
}
template<typename T>
constexpr uint32_t& Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_get__NumberOfAttempts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NumberOfAttempts_k__BackingField;
}
template<typename T>
constexpr uint32_t const& Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_get__NumberOfAttempts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NumberOfAttempts_k__BackingField;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::__cordl_internal_set__NumberOfAttempts_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NumberOfAttempts_k__BackingField = value;
}
template<typename T>
inline double_t Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::get_NextInvokeTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>(),
                        {"get_NextInvokeTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::set_NextInvokeTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>(),
                        {"set_NextInvokeTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Collections::Generic::ICollection_1<T>* Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::set_Events(::System::Collections::Generic::ICollection_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>(),
                        {"set_Events", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline uint32_t Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::get_NumberOfAttempts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>(),
                        {"get_NumberOfAttempts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::set_NumberOfAttempts(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>(),
                        {"set_NumberOfAttempts", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>* Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>::MetricsSubmissionJob_1()   {
}
