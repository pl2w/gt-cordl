#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedLayoutGroup.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedLayoutGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup.PostApplyTrackedProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::PostApplyTrackedProperties)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb0590a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb059184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::PostApplyTrackedProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedLayoutGroup::TrackedLayoutGroup()   {
}
