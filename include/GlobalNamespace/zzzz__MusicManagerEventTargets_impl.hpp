#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicManagerEventTargets.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicManagerEventTargets_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicManagerEventTargets.StopAllMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManagerEventTargets::*)()>(&::GlobalNamespace::MusicManagerEventTargets::StopAllMusic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d3900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManagerEventTargets*>(),
                        {"StopAllMusic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManagerEventTargets.StopAllMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManagerEventTargets::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::MusicManagerEventTargets::StopAllMusic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d390c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManagerEventTargets*>(),
                        {"StopAllMusic", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicManagerEventTargets._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicManagerEventTargets::*)()>(&::GlobalNamespace::MusicManagerEventTargets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d3918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManagerEventTargets*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MusicManagerEventTargets::StopAllMusic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManagerEventTargets*>(),
                        {"StopAllMusic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicManagerEventTargets::StopAllMusic(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManagerEventTargets*>(),
                        {"StopAllMusic", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::MusicManagerEventTargets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicManagerEventTargets*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicManagerEventTargets* GlobalNamespace::MusicManagerEventTargets::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicManagerEventTargets*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicManagerEventTargets::MusicManagerEventTargets()   {
}
