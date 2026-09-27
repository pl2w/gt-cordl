#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ScriptableSettingsBase_1.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_1_def.hpp"
template<typename T>
inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::setStaticF_HasCustomPath(bool  value)  {
::cordl_internals::setStaticField<bool, "HasCustomPath", ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>(std::forward<bool>(value));
}
template<typename T>
inline bool Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::getStaticF_HasCustomPath()  {
return ::cordl_internals::getStaticField<bool, "HasCustomPath", ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>();
}
template<typename T>
inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::setStaticF_BaseInstance(T  value)  {
::cordl_internals::setStaticField<T, "BaseInstance", ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::getStaticF_BaseInstance()  {
return ::cordl_internals::getStaticField<T, "BaseInstance", ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>();
}
template<typename T>
inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::Save(::StringW  savePathFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>(),
                        {"Save", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, savePathFormat);
}
template<typename T>
inline ::StringW Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::GetFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>(),
                        {"GetFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
template<typename T>
inline ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>* Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::ScriptableSettingsBase_1()   {
}
