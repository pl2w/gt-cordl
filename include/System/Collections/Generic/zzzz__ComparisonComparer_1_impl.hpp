#pragma once
// IWYU pragma private; include "System/Collections/Generic/ComparisonComparer_1.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__ComparisonComparer_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
template<typename T>
constexpr ::System::Comparison_1<T>*& System::Collections::Generic::ComparisonComparer_1<T>::__cordl_internal_get__comparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
template<typename T>
constexpr ::System::Comparison_1<T>* const& System::Collections::Generic::ComparisonComparer_1<T>::__cordl_internal_get__comparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
template<typename T>
constexpr void System::Collections::Generic::ComparisonComparer_1<T>::__cordl_internal_set__comparison(::System::Comparison_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comparison = value;
}
template<typename T>
inline void System::Collections::Generic::ComparisonComparer_1<T>::_ctor(::System::Comparison_1<T>*  comparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Generic::ComparisonComparer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Comparison_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparison);
}
template<typename T>
inline int32_t System::Collections::Generic::ComparisonComparer_1<T>::Compare(T  x, T  y)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Generic::ComparisonComparer_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template<typename T>
inline ::System::Collections::Generic::ComparisonComparer_1<T>* System::Collections::Generic::ComparisonComparer_1<T>::New_ctor(::System::Comparison_1<T>*  comparison)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::ComparisonComparer_1<T>*>(comparison));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Collections::Generic::ComparisonComparer_1<T>::ComparisonComparer_1()   {
}
