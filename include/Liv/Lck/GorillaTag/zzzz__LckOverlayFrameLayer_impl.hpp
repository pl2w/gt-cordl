#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/LckOverlayFrameLayer.hpp"
#include "Liv/Lck/Rendering/zzzz__LckOrientedCompositionLayer_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckOverlayFrameLayer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckOverlayFrameLayer.get_CurrentTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::Liv::Lck::GorillaTag::LckOverlayFrameLayer::*)()>(&::Liv::Lck::GorillaTag::LckOverlayFrameLayer::get_CurrentTexture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d31130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::LckOverlayFrameLayer*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::LckOverlayFrameLayer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckOverlayFrameLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::LckOverlayFrameLayer::*)()>(&::Liv::Lck::GorillaTag::LckOverlayFrameLayer::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d31148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckOverlayFrameLayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture> Liv::Lck::GorillaTag::LckOverlayFrameLayer::get_CurrentTexture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::LckOverlayFrameLayer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::LckOverlayFrameLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckOverlayFrameLayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::LckOverlayFrameLayer* Liv::Lck::GorillaTag::LckOverlayFrameLayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::LckOverlayFrameLayer*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::LckOverlayFrameLayer::LckOverlayFrameLayer()   {
}
