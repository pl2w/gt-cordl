#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/IStringProperty.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__IStringProperty_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty.GetValueAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::GetValueAsString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty.GetValueAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::*)(::UnityEngine::Localization::LocaleIdentifier, ::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::GetValueAsString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty.SetValueFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::*)(::UnityEngine::Localization::LocaleIdentifier, ::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::SetValueFromString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, localeIdentifier);
}
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, localeIdentifier, fallback);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::SetValueFromString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier, value);
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
