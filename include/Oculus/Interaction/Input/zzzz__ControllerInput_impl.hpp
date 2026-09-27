#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerInput.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerInput_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis1DUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis2DUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_ButtonUsageMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerButtonUsage (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_ButtonUsageMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5058dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_ButtonUsageMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.set_ButtonUsageMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::Input::ControllerInput::set_ButtonUsageMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5058e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_ButtonUsageMask", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_PrimaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_PrimaryButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa5058ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_PrimaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_PrimaryTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_PrimaryTouch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa5058f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_PrimaryTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_SecondaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_SecondaryButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa505904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_SecondaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_SecondaryTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_SecondaryTouch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa505910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_SecondaryTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_GripButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_GripButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4fbd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_GripButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_TriggerButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_TriggerButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4fbcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_TriggerButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_MenuButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_MenuButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa50591c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_MenuButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_Primary2DAxisClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_Primary2DAxisClick)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa505928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Primary2DAxisClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_Primary2DAxisTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_Primary2DAxisTouch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa505934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Primary2DAxisTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_Thumbrest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_Thumbrest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa505940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Thumbrest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_Trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50594c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Trigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.set_Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(float_t)>(&::Oculus::Interaction::Input::ControllerInput::set_Trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa505954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Trigger", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_Grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_Grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50595c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Grip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.set_Grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(float_t)>(&::Oculus::Interaction::Input::ControllerInput::set_Grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa505964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Grip", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_Primary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_Primary2DAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50596c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Primary2DAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.set_Primary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::Input::ControllerInput::set_Primary2DAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa505974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Primary2DAxis", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.get_Secondary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::get_Secondary2DAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50597c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Secondary2DAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.set_Secondary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::Input::ControllerInput::set_Secondary2DAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa505984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Secondary2DAxis", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)()>(&::Oculus::Interaction::Input::ControllerInput::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa50598c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.SetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(::Oculus::Interaction::Input::ControllerButtonUsage, bool)>(&::Oculus::Interaction::Input::ControllerInput::SetButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5059f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"SetButton", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.SetAxis1D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(::Oculus::Interaction::Input::ControllerAxis1DUsage, float_t)>(&::Oculus::Interaction::Input::ControllerInput::SetAxis1D)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa505a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"SetAxis1D", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis1DUsage>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerInput.SetAxis2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerInput::*)(::Oculus::Interaction::Input::ControllerAxis2DUsage, ::UnityEngine::Vector2)>(&::Oculus::Interaction::Input::ControllerInput::SetAxis2D)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa505a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"SetAxis2D", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis2DUsage>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Input::ControllerButtonUsage Oculus::Interaction::Input::ControllerInput::get_ButtonUsageMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_ButtonUsageMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerButtonUsage>(*this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerInput::set_ButtonUsageMask(::Oculus::Interaction::Input::ControllerButtonUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_ButtonUsageMask", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_PrimaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_PrimaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_PrimaryTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_PrimaryTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_SecondaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_SecondaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_SecondaryTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_SecondaryTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_GripButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_GripButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_TriggerButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_TriggerButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_MenuButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_MenuButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_Primary2DAxisClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Primary2DAxisClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_Primary2DAxisTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Primary2DAxisTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerInput::get_Thumbrest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Thumbrest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t Oculus::Interaction::Input::ControllerInput::get_Trigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Trigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerInput::set_Trigger(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Trigger", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Input::ControllerInput::get_Grip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Grip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerInput::set_Grip(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Grip", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::Input::ControllerInput::get_Primary2DAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Primary2DAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerInput::set_Primary2DAxis(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Primary2DAxis", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::Input::ControllerInput::get_Secondary2DAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"get_Secondary2DAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerInput::set_Secondary2DAxis(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"set_Secondary2DAxis", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::ControllerInput::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerInput::SetButton(::Oculus::Interaction::Input::ControllerButtonUsage  usage, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"SetButton", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usage, value);
}
inline void Oculus::Interaction::Input::ControllerInput::SetAxis1D(::Oculus::Interaction::Input::ControllerAxis1DUsage  usage, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"SetAxis1D", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis1DUsage>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usage, value);
}
inline void Oculus::Interaction::Input::ControllerInput::SetAxis2D(::Oculus::Interaction::Input::ControllerAxis2DUsage  usage, ::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerInput>(),
                        {"SetAxis2D", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerAxis2DUsage>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usage, value);
}
// Ctor Parameters [CppParam { name: "_ButtonUsageMask_k__BackingField", ty: "::Oculus::Interaction::Input::ControllerButtonUsage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Trigger_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Grip_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Primary2DAxis_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Secondary2DAxis_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::ControllerInput::ControllerInput(::Oculus::Interaction::Input::ControllerButtonUsage  _ButtonUsageMask_k__BackingField, float_t  _Trigger_k__BackingField, float_t  _Grip_k__BackingField, ::UnityEngine::Vector2  _Primary2DAxis_k__BackingField, ::UnityEngine::Vector2  _Secondary2DAxis_k__BackingField) noexcept  {
this->_ButtonUsageMask_k__BackingField = _ButtonUsageMask_k__BackingField;
this->_Trigger_k__BackingField = _Trigger_k__BackingField;
this->_Grip_k__BackingField = _Grip_k__BackingField;
this->_Primary2DAxis_k__BackingField = _Primary2DAxis_k__BackingField;
this->_Secondary2DAxis_k__BackingField = _Secondary2DAxis_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerInput::ControllerInput()   {
}
