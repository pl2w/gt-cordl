#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FPSInput_def.hpp"
#include "GlobalNamespace/zzzz__FpsKey_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FPSInput.get_IsMouseCaptured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::FPSInput::get_IsMouseCaptured)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5adf9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_IsMouseCaptured", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.SetMouseCaptured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::FPSInput::SetMouseCaptured)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5adf9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"SetMouseCaptured", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::FpsKey)>(&::GlobalNamespace::FPSInput::IsPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5adf9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"IsPressed", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.WasPressedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::FpsKey)>(&::GlobalNamespace::FPSInput::WasPressedThisFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5adfb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"WasPressedThisFrame", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.WasReleasedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::FpsKey)>(&::GlobalNamespace::FPSInput::WasReleasedThisFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5adfb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"WasReleasedThisFrame", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::FpsKey)>(&::GlobalNamespace::FPSInput::Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5adfb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"Value", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.get_LeftButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::FPSInput::get_LeftButton)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5adfb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_LeftButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.get_LeftButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::FPSInput::get_LeftButtonDown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5adfbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_LeftButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.get_RightButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::FPSInput::get_RightButton)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5adfc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_RightButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.get_RightButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::FPSInput::get_RightButtonDown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5adfc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_RightButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.get_MouseDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::GlobalNamespace::FPSInput::get_MouseDelta)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5adfcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_MouseDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.get_MousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::GlobalNamespace::FPSInput::get_MousePosition)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5adfdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_MousePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.GetControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (*)(::GlobalNamespace::FpsKey)>(&::GlobalNamespace::FPSInput::GetControl)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5adf9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"GetControl", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSInput.ToInputSystemKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Key (*)(::GlobalNamespace::FpsKey)>(&::GlobalNamespace::FPSInput::ToInputSystemKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5adfe64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"ToInputSystemKey", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::FPSInput::get_IsMouseCaptured()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_IsMouseCaptured", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FPSInput::SetMouseCaptured(bool  captured)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"SetMouseCaptured", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, captured);
}
inline bool GlobalNamespace::FPSInput::IsPressed(::GlobalNamespace::FpsKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"IsPressed", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool GlobalNamespace::FPSInput::WasPressedThisFrame(::GlobalNamespace::FpsKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"WasPressedThisFrame", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool GlobalNamespace::FPSInput::WasReleasedThisFrame(::GlobalNamespace::FpsKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"WasReleasedThisFrame", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline float_t GlobalNamespace::FPSInput::Value(::GlobalNamespace::FpsKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"Value", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, key);
}
inline bool GlobalNamespace::FPSInput::get_LeftButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_LeftButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::FPSInput::get_LeftButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_LeftButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::FPSInput::get_RightButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_RightButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::FPSInput::get_RightButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_RightButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::FPSInput::get_MouseDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_MouseDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::FPSInput::get_MousePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"get_MousePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* GlobalNamespace::FPSInput::GetControl(::GlobalNamespace::FpsKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"GetControl", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(nullptr, ___internal_method, key);
}
inline ::UnityEngine::InputSystem::Key GlobalNamespace::FPSInput::ToInputSystemKey(::GlobalNamespace::FpsKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSInput*>(),
                        {"ToInputSystemKey", {}, {::i2c::type_of<::GlobalNamespace::FpsKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Key>(nullptr, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FPSInput::FPSInput()   {
}
