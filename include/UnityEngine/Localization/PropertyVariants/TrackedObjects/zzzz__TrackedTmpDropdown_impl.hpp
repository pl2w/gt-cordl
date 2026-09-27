#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedTmpDropdown.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedTmpDropdown_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown.PostApplyTrackedProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::PostApplyTrackedProperties)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb058e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb058eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::PostApplyTrackedProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown::TrackedTmpDropdown()   {
}
