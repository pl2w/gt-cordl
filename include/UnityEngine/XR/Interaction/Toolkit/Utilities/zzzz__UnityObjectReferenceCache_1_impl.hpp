#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/UnityObjectReferenceCache_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_1_def.hpp"
template<typename T>
constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::__cordl_internal_get_m_CapturedField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapturedField;
}
template<typename T>
constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::__cordl_internal_get_m_CapturedField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapturedField;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::__cordl_internal_set_m_CapturedField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CapturedField = value;
}
template<typename T>
constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::__cordl_internal_get_m_FieldOrNull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FieldOrNull;
}
template<typename T>
constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::__cordl_internal_get_m_FieldOrNull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FieldOrNull;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::__cordl_internal_set_m_FieldOrNull(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FieldOrNull = value;
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::TryGet(T  field, ::by_ref<T>  fieldOrNull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>*>(),
                        {"TryGet", {}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, field, fieldOrNull);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>::UnityObjectReferenceCache_1()   {
}
