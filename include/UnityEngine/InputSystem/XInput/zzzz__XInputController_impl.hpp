#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceFlags_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceSubType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_Capabilities_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceFlags_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceSubType_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_menu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafcb844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_menu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_menu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::InputSystem::XInput::XInputController::set_menu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafcb84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"set_menu", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_view
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafcb85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_view", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_view
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::InputSystem::XInput::XInputController::set_view)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafcb864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"set_view", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_subType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XInputController_DeviceSubType (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_subType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xafcb874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_subType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XInputController_DeviceFlags (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_flags)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xafcb908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.FinishSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::FinishSetup)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xafcb92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.ParseCapabilities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::ParseCapabilities)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xafcb898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"ParseCapabilities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafcb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__menu_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__menu_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menu_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menu_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__view_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____view_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get__view_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____view_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set__view_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____view_k__BackingField = value;
}
constexpr bool& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_HaveParsedCapabilities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HaveParsedCapabilities;
}
constexpr bool const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_HaveParsedCapabilities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HaveParsedCapabilities;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set_m_HaveParsedCapabilities(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HaveParsedCapabilities = value;
}
constexpr ::GlobalNamespace::XInputController_DeviceSubType& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_SubType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubType;
}
constexpr ::GlobalNamespace::XInputController_DeviceSubType const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_SubType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubType;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set_m_SubType(::GlobalNamespace::XInputController_DeviceSubType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubType = value;
}
constexpr ::GlobalNamespace::XInputController_DeviceFlags& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr ::GlobalNamespace::XInputController_DeviceFlags const& UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_get_m_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::XInput::XInputController::__cordl_internal_set_m_Flags(::GlobalNamespace::XInputController_DeviceFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flags = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::XInput::XInputController::get_menu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_menu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"set_menu", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::XInput::XInputController::get_view()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_view", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::set_view(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"set_view", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XInputController_DeviceSubType UnityEngine::InputSystem::XInput::XInputController::get_subType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_subType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XInputController_DeviceSubType>(this, ___internal_method);
}
inline ::GlobalNamespace::XInputController_DeviceFlags UnityEngine::InputSystem::XInput::XInputController::get_flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"get_flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XInputController_DeviceFlags>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::FinishSetup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::ParseCapabilities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {"ParseCapabilities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XInput::XInputController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::XInput::XInputController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XInput::XInputController* UnityEngine::InputSystem::XInput::XInputController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XInput::XInputController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XInput::XInputController::XInputController()   {
}
