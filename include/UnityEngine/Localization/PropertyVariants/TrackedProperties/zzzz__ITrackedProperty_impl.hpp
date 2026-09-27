#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ITrackedProperty.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty.get_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::get_PropertyPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty.set_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::set_PropertyPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty.HasVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::HasVariant)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::get_PropertyPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::set_PropertyPath(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty::HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier);
}
