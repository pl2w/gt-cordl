#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedMonoBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedMonoBehaviour_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Components::LocalizedMonoBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Components::LocalizedMonoBehaviour::*)()>(&::UnityEngine::Localization::Components::LocalizedMonoBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04ef64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedMonoBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Components::LocalizedMonoBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedMonoBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Components::LocalizedMonoBehaviour* UnityEngine::Localization::Components::LocalizedMonoBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Components::LocalizedMonoBehaviour*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Components::LocalizedMonoBehaviour::LocalizedMonoBehaviour()   {
}
