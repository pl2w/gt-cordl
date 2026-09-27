#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedUGuiGraphic.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedUGuiGraphic_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic.PostApplyTrackedProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::PostApplyTrackedProperties)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb058f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb05901c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::PostApplyTrackedProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic::TrackedUGuiGraphic()   {
}
