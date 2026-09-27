#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/Datum_1.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableAlloc_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
template<typename T>
constexpr ::StringW& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Comments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Comments;
}
template<typename T>
constexpr ::StringW const& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Comments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Comments;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_Comments(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Comments = value;
}
template<typename T>
constexpr bool& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_ReadOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReadOnly;
}
template<typename T>
constexpr bool const& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_ReadOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReadOnly;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_ReadOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReadOnly = value;
}
template<typename T>
constexpr T& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
template<typename T>
constexpr T const& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_Value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Value = value;
}
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_BindableVariableReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindableVariableReference;
}
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>* const& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_BindableVariableReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindableVariableReference;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_BindableVariableReference(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindableVariableReference = value;
}
template<typename T>
inline ::StringW Unity::XR::CoreUtils::Datums::Datum_1<T>::get_Comments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"get_Comments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::set_Comments(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"set_Comments", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Datums::Datum_1<T>::get_ReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"get_ReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::set_ReadOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"set_ReadOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* Unity::XR::CoreUtils::Datums::Datum_1<T>::get_BindableVariableReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"get_BindableVariableReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(this, ___internal_method);
}
template<typename T>
inline T Unity::XR::CoreUtils::Datums::Datum_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Datums::Datum_1<T>* Unity::XR::CoreUtils::Datums::Datum_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Datums::Datum_1<T>::Datum_1()   {
}
