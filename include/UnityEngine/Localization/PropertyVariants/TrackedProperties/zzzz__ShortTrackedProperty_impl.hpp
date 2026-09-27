#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ShortTrackedProperty.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ShortTrackedProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb052ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ShortTrackedProperty::ShortTrackedProperty()   {
}
