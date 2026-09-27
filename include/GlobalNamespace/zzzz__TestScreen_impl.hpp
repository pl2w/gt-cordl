#pragma once
// IWYU pragma private; include "GlobalNamespace/TestScreen.hpp"
#include "GlobalNamespace/zzzz__ArcadeGame_impl.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_impl.hpp"
#include "GlobalNamespace/zzzz__TestScreen_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestScreen.GetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::TestScreen::*)()>(&::GlobalNamespace::TestScreen::GetNetworkState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d344c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScreen.SetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestScreen::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::TestScreen::SetNetworkState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d3454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScreen.buttonToLightIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TestScreen::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::TestScreen::buttonToLightIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56d3458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                        {"buttonToLightIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScreen.ButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestScreen::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::TestScreen::ButtonUp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56d34f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScreen.ButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestScreen::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::TestScreen::ButtonDown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56d353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScreen.OnTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestScreen::*)()>(&::GlobalNamespace::TestScreen::OnTimeout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d3588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestScreen::*)()>(&::GlobalNamespace::TestScreen::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56d358c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>& GlobalNamespace::TestScreen::__cordl_internal_get_lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>> const& GlobalNamespace::TestScreen::__cordl_internal_get_lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr void GlobalNamespace::TestScreen::__cordl_internal_set_lights(::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lights = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TestScreen::__cordl_internal_get_dot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TestScreen::__cordl_internal_get_dot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dot;
}
constexpr void GlobalNamespace::TestScreen::__cordl_internal_set_dot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dot = value;
}
inline ::ArrayW<uint8_t> GlobalNamespace::TestScreen::GetNetworkState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void GlobalNamespace::TestScreen::SetNetworkState(::ArrayW<uint8_t>  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline int32_t GlobalNamespace::TestScreen::buttonToLightIndex(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                        {"buttonToLightIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player, button);
}
inline void GlobalNamespace::TestScreen::ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void GlobalNamespace::TestScreen::ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void GlobalNamespace::TestScreen::OnTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TestScreen*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestScreen* GlobalNamespace::TestScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestScreen::TestScreen()   {
}
