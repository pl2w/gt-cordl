#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/DoubleTrackedProperty.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__DoubleTrackedProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb0530d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::DoubleTrackedProperty::DoubleTrackedProperty()   {
}
