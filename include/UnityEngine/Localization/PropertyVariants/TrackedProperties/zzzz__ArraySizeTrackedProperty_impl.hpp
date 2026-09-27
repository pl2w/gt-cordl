#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ArraySizeTrackedProperty.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__UIntTrackedProperty_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ArraySizeTrackedProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb053118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty::ArraySizeTrackedProperty()   {
}
