#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenStick.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenStick_Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenStick_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenStick_Behaviour_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xafdd0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrag)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xafdd38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafdd7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::Start)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0xafdd88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xafddf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.BeginInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::BeginInteraction)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xafdd158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"BeginInteraction", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.MoveStick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::MoveStick)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xafdd428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"MoveStick", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.EndInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::EndInteraction)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xafdd7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"EndInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xafddfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xafde520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerChanged", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerMove)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xafde664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerMove", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xafde570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.GetCameraFromCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::GetCameraFromCanvas)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xafde3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"GetCameraFromCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xafde774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.DrawGizmoCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::DrawGizmoCircle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xafde95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"DrawGizmoCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.UpdateDynamicOriginClickableArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::UpdateDynamicOriginClickableArea)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xafdea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"UpdateDynamicOriginClickableArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_movementRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_movementRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_movementRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_movementRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(float_t)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_movementRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_movementRange", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_dynamicOriginRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_dynamicOriginRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_dynamicOriginRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_dynamicOriginRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(float_t)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_dynamicOriginRange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafdeb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_dynamicOriginRange", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_useIsolatedInputActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_useIsolatedInputActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_useIsolatedInputActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_useIsolatedInputActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(bool)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_useIsolatedInputActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_useIsolatedInputActions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_controlPathInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_controlPathInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_controlPathInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::StringW)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_controlPathInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_behaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OnScreenStick_Behaviour (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_behaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_behaviour", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_behaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::GlobalNamespace::OnScreenStick_Behaviour)>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_behaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdeb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_behaviour", {}, {::i2c::type_of<::GlobalNamespace::OnScreenStick_Behaviour>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xafdeb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_MovementRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementRange;
}
constexpr float_t const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_MovementRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementRange;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_MovementRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MovementRange = value;
}
constexpr float_t& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_DynamicOriginRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DynamicOriginRange;
}
constexpr float_t const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_DynamicOriginRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DynamicOriginRange;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_DynamicOriginRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DynamicOriginRange = value;
}
constexpr ::StringW& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_ControlPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPath;
}
constexpr ::StringW const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_ControlPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPath;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_ControlPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlPath = value;
}
constexpr ::GlobalNamespace::OnScreenStick_Behaviour& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_Behaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Behaviour;
}
constexpr ::GlobalNamespace::OnScreenStick_Behaviour const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_Behaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Behaviour;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_Behaviour(::GlobalNamespace::OnScreenStick_Behaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Behaviour = value;
}
constexpr bool& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_UseIsolatedInputActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseIsolatedInputActions;
}
constexpr bool const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_UseIsolatedInputActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseIsolatedInputActions;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_UseIsolatedInputActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseIsolatedInputActions = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerDownAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerDownAction;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerDownAction(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointerDownAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerMoveAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerMoveAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerMoveAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerMoveAction;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerMoveAction(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointerMoveAction = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_StartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPos;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_StartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPos;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_StartPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartPos = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerDownPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerDownPos;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerDownPos(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointerDownPos = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_RaycastResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastResults;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_RaycastResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastResults;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastResults = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerEventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerEventData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerEventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerEventData;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerEventData(::UnityEngine::EventSystems::PointerEventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointerEventData = value;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchControl*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_TouchControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TouchControl;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchControl* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_TouchControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TouchControl;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_TouchControl(::UnityEngine::InputSystem::Controls::TouchControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TouchControl = value;
}
constexpr bool& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_IsIsolationActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsIsolationActive;
}
constexpr bool const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_IsIsolationActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsIsolationActive;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_IsIsolationActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsIsolationActive = value;
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::BeginInteraction(::UnityEngine::Vector2  pointerPosition, ::UnityEngine::Camera*  uiCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"BeginInteraction", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition, uiCamera);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::MoveStick(::UnityEngine::Vector2  pointerPosition, ::UnityEngine::Camera*  uiCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"MoveStick", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition, uiCamera);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::EndInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"EndInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown(::GlobalNamespace::InputAction_CallbackContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerChanged(::GlobalNamespace::InputAction_CallbackContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerChanged", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerMove(::GlobalNamespace::InputAction_CallbackContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerMove", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp(::GlobalNamespace::InputAction_CallbackContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::InputSystem::OnScreen::OnScreenStick::GetCameraFromCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"GetCameraFromCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::DrawGizmoCircle(::UnityEngine::Vector2  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"DrawGizmoCircle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, radius);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::UpdateDynamicOriginClickableArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"UpdateDynamicOriginClickableArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::OnScreen::OnScreenStick::get_movementRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_movementRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_movementRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_movementRange", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::OnScreen::OnScreenStick::get_dynamicOriginRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_dynamicOriginRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_dynamicOriginRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_dynamicOriginRange", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::OnScreen::OnScreenStick::get_useIsolatedInputActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_useIsolatedInputActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_useIsolatedInputActions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_useIsolatedInputActions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::OnScreen::OnScreenStick::get_controlPathInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_controlPathInternal(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OnScreenStick_Behaviour UnityEngine::InputSystem::OnScreen::OnScreenStick::get_behaviour()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"get_behaviour", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OnScreenStick_Behaviour>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_behaviour(::GlobalNamespace::OnScreenStick_Behaviour  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {"set_behaviour", {}, {::i2c::type_of<::GlobalNamespace::OnScreenStick_Behaviour>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::OnScreen::OnScreenStick* UnityEngine::InputSystem::OnScreen::OnScreenStick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr  UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnScreenStick()   {
}
