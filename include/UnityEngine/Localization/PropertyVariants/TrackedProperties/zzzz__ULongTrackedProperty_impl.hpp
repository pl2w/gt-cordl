#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ULongTrackedProperty.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ULongTrackedProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb053040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty::ULongTrackedProperty()   {
}
