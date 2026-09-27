#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/BoolTrackedProperty.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__BoolTrackedProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty.ConvertFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::ConvertFromString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb053120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty.ConvertToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::*)(bool)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::ConvertToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb053250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb0532b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::ConvertFromString(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::ConvertToString(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty::BoolTrackedProperty()   {
}
