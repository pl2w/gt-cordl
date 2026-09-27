#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigTransform::*)()>(&::UnityEngine::Animations::Rigging::RigTransform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7b2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::Rigging::RigTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Animations::Rigging::RigTransform* UnityEngine::Animations::Rigging::RigTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::RigTransform*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigTransform::RigTransform()   {
}
