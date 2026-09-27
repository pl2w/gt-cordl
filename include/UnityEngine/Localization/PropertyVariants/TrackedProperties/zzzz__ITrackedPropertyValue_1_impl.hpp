#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ITrackedPropertyValue_1.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedPropertyValue_1_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
template<typename T>
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>::GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::by_ref<T>  foundValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier, foundValue);
}
template<typename T>
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>::GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback, ::by_ref<T>  foundValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier, fallback, foundValue);
}
template<typename T>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>::SetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier, value);
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
template<typename T>
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
template<typename T>
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<T>::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
