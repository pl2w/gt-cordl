#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizeTextureEvent.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_impl.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizeTextureEvent_def.hpp"
#include "UnityEngine/Localization/Events/zzzz__UnityEventTexture_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Components::LocalizeTextureEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Components::LocalizeTextureEvent::*)()>(&::UnityEngine::Localization::Components::LocalizeTextureEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb04f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizeTextureEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Components::LocalizeTextureEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizeTextureEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Components::LocalizeTextureEvent* UnityEngine::Localization::Components::LocalizeTextureEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Components::LocalizeTextureEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Components::LocalizeTextureEvent::LocalizeTextureEvent()   {
}
