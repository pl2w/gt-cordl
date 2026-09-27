#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoClip.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Video::VideoClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoClip::*)()>(&::UnityEngine::Video::VideoClip::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb930f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoClip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoClip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoClip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Video::VideoClip* UnityEngine::Video::VideoClip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoClip*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoClip::VideoClip()   {
}
