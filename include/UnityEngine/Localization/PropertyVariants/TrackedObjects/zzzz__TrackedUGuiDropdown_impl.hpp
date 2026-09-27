#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedUGuiDropdown.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedUGuiDropdown_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown.PostApplyTrackedProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::PostApplyTrackedProperties)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb059020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb0590a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::PostApplyTrackedProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown::TrackedUGuiDropdown()   {
}
