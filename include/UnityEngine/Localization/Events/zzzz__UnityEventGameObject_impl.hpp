#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Events/UnityEventGameObject.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Localization/Events/zzzz__UnityEventGameObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Events::UnityEventGameObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Events::UnityEventGameObject::*)()>(&::UnityEngine::Localization::Events::UnityEventGameObject::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb04ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Events::UnityEventGameObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Events::UnityEventGameObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Events::UnityEventGameObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Events::UnityEventGameObject* UnityEngine::Localization::Events::UnityEventGameObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Events::UnityEventGameObject*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Events::UnityEventGameObject::UnityEventGameObject()   {
}
