#pragma once
// IWYU pragma private; include "UnityEngine/Screen.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Screen_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
//  Writing Method size for method: ::UnityEngine::Screen.get_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::get_width)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::get_height)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_dpi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Screen::get_dpi)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_dpi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.GetScreenOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ScreenOrientation (*)()>(&::UnityEngine::Screen::GetScreenOrientation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"GetScreenOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_orientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ScreenOrientation (*)()>(&::UnityEngine::Screen::get_orientation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_orientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_currentResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Resolution (*)()>(&::UnityEngine::Screen::get_currentResolution)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb57bc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_currentResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_fullScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Screen::get_fullScreen)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_fullScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_safeArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)()>(&::UnityEngine::Screen::get_safeArea)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb57bcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_safeArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.SetMSAASamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Screen::SetMSAASamples)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb57bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"SetMSAASamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.GetMSAASamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::GetMSAASamples)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"GetMSAASamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_msaaSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::get_msaaSamples)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_msaaSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_currentResolution_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Resolution>)>(&::UnityEngine::Screen::get_currentResolution_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb57bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_currentResolution_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Resolution>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_safeArea_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Screen::get_safeArea_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb57bd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_safeArea_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Screen::get_width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Screen::get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Screen::get_dpi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_dpi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::ScreenOrientation UnityEngine::Screen::GetScreenOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"GetScreenOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScreenOrientation>(nullptr, ___internal_method);
}
inline ::UnityEngine::ScreenOrientation UnityEngine::Screen::get_orientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_orientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScreenOrientation>(nullptr, ___internal_method);
}
inline ::UnityEngine::Resolution UnityEngine::Screen::get_currentResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_currentResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Resolution>(nullptr, ___internal_method);
}
inline bool UnityEngine::Screen::get_fullScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_fullScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Screen::get_safeArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_safeArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method);
}
inline void UnityEngine::Screen::SetMSAASamples(int32_t  numSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"SetMSAASamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numSamples);
}
inline int32_t UnityEngine::Screen::GetMSAASamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"GetMSAASamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Screen::get_msaaSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_msaaSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Screen::get_currentResolution_Injected(::by_ref<::UnityEngine::Resolution>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_currentResolution_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Resolution>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Screen::get_safeArea_Injected(::by_ref<::UnityEngine::Rect>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Screen*>(),
                        {"get_safeArea_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Screen::Screen()   {
}
