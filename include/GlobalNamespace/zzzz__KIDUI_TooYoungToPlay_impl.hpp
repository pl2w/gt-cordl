#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_TooYoungToPlay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_TooYoungToPlay_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_TooYoungToPlay.ShowTooYoungToPlayScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_TooYoungToPlay::*)()>(&::GlobalNamespace::KIDUI_TooYoungToPlay::ShowTooYoungToPlayScreen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a4d998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_TooYoungToPlay*>(),
                        {"ShowTooYoungToPlayScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_TooYoungToPlay.OnQuitPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_TooYoungToPlay::*)()>(&::GlobalNamespace::KIDUI_TooYoungToPlay::OnQuitPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a5bb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_TooYoungToPlay*>(),
                        {"OnQuitPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_TooYoungToPlay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_TooYoungToPlay::*)()>(&::GlobalNamespace::KIDUI_TooYoungToPlay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_TooYoungToPlay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUI_TooYoungToPlay::ShowTooYoungToPlayScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_TooYoungToPlay*>(),
                        {"ShowTooYoungToPlayScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_TooYoungToPlay::OnQuitPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_TooYoungToPlay*>(),
                        {"OnQuitPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_TooYoungToPlay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_TooYoungToPlay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_TooYoungToPlay* GlobalNamespace::KIDUI_TooYoungToPlay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_TooYoungToPlay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_TooYoungToPlay::KIDUI_TooYoungToPlay()   {
}
