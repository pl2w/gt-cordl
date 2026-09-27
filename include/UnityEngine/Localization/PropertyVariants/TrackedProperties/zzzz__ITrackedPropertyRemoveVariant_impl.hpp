#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ITrackedPropertyRemoveVariant.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedPropertyRemoveVariant_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant.RemoveVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant::RemoveVariant)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant::RemoveVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier);
}
