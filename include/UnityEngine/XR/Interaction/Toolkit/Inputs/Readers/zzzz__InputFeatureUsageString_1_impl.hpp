#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/InputFeatureUsageString_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__InputFeatureUsageString_1_def.hpp"
template<typename T>
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
template<typename T>
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
template<typename T>
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::_ctor(::StringW  usageName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usageName);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>*>());
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::New_ctor(::StringW  usageName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>*>(usageName));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>::InputFeatureUsageString_1()   {
}
