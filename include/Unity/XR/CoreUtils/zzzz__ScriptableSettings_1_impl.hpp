#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ScriptableSettings_1.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_1_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettings_1_def.hpp"
template<typename T>
inline T Unity::XR::CoreUtils::ScriptableSettings_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettings_1<T>*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline T Unity::XR::CoreUtils::ScriptableSettings_1<T>::CreateAndLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettings_1<T>*>(),
                        {"CreateAndLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::ScriptableSettings_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettings_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::XR::CoreUtils::ScriptableSettings_1<T>* Unity::XR::CoreUtils::ScriptableSettings_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::ScriptableSettings_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::ScriptableSettings_1<T>::ScriptableSettings_1()   {
}
