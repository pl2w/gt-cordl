#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializablePerformanceReport_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SerializablePerformanceReport_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::StringW& GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_get_reportDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportDate;
}
template<typename T>
constexpr ::StringW const& GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_get_reportDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportDate;
}
template<typename T>
constexpr void GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_set_reportDate(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportDate = value;
}
template<typename T>
constexpr ::StringW& GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
template<typename T>
constexpr ::StringW const& GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
template<typename T>
constexpr void GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_set_version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_get_results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_get_results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
template<typename T>
constexpr void GlobalNamespace::SerializablePerformanceReport_1<T>::__cordl_internal_set_results(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___results = value;
}
template<typename T>
inline void GlobalNamespace::SerializablePerformanceReport_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializablePerformanceReport_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::SerializablePerformanceReport_1<T>* GlobalNamespace::SerializablePerformanceReport_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SerializablePerformanceReport_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::SerializablePerformanceReport_1<T>::SerializablePerformanceReport_1()   {
}
