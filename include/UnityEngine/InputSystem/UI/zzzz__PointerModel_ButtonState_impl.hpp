#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/PointerModel_ButtonState.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_FramePressState_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_ButtonState_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.get_isPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PointerModel_ButtonState::*)()>(&::GlobalNamespace::PointerModel_ButtonState::get_isPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd9978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_isPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.set_isPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_ButtonState::*)(bool)>(&::GlobalNamespace::PointerModel_ButtonState::set_isPressed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xafd8544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_isPressed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.get_ignoreNextClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PointerModel_ButtonState::*)()>(&::GlobalNamespace::PointerModel_ButtonState::get_ignoreNextClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd9980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_ignoreNextClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.set_ignoreNextClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_ButtonState::*)(bool)>(&::GlobalNamespace::PointerModel_ButtonState::set_ignoreNextClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd9988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_ignoreNextClick", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.get_pressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PointerModel_ButtonState::*)()>(&::GlobalNamespace::PointerModel_ButtonState::get_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_pressTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.set_pressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_ButtonState::*)(float_t)>(&::GlobalNamespace::PointerModel_ButtonState::set_pressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd9998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_pressTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.get_clickedOnSameGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PointerModel_ButtonState::*)()>(&::GlobalNamespace::PointerModel_ButtonState::get_clickedOnSameGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd99a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_clickedOnSameGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.set_clickedOnSameGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_ButtonState::*)(bool)>(&::GlobalNamespace::PointerModel_ButtonState::set_clickedOnSameGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd99a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_clickedOnSameGameObject", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.get_wasPressedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PointerModel_ButtonState::*)()>(&::GlobalNamespace::PointerModel_ButtonState::get_wasPressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafd4d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_wasPressedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.get_wasReleasedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PointerModel_ButtonState::*)()>(&::GlobalNamespace::PointerModel_ButtonState::get_wasReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xafd4458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_wasReleasedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.CopyPressStateTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_ButtonState::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::PointerModel_ButtonState::CopyPressStateTo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xafd34a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"CopyPressStateTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.CopyPressStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_ButtonState::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::PointerModel_ButtonState::CopyPressStateFrom)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xafd4d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"CopyPressStateFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_ButtonState.OnEndFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_ButtonState::*)()>(&::GlobalNamespace::PointerModel_ButtonState::OnEndFrame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafd7e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"OnEndFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PointerModel_ButtonState::get_isPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_isPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::PointerModel_ButtonState::set_isPressed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_isPressed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::PointerModel_ButtonState::get_ignoreNextClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_ignoreNextClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::PointerModel_ButtonState::set_ignoreNextClick(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_ignoreNextClick", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::PointerModel_ButtonState::get_pressTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_pressTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::PointerModel_ButtonState::set_pressTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_pressTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::PointerModel_ButtonState::get_clickedOnSameGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_clickedOnSameGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::PointerModel_ButtonState::set_clickedOnSameGameObject(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"set_clickedOnSameGameObject", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::PointerModel_ButtonState::get_wasPressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_wasPressedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::PointerModel_ButtonState::get_wasReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"get_wasReleasedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::PointerModel_ButtonState::CopyPressStateTo(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"CopyPressStateTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void GlobalNamespace::PointerModel_ButtonState::CopyPressStateFrom(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"CopyPressStateFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void GlobalNamespace::PointerModel_ButtonState::OnEndFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_ButtonState>(),
                        {"OnEndFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_IsPressed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FramePressState", ty: "::GlobalNamespace::PointerEventData_FramePressState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PressTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PressRaycast", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RawPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LastPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DragObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PressPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ClickTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ClickCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Dragging", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ClickedOnSameGameObject", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IgnoreNextClick", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PointerModel_ButtonState::PointerModel_ButtonState(bool  m_IsPressed, ::GlobalNamespace::PointerEventData_FramePressState  m_FramePressState, float_t  m_PressTime, ::UnityEngine::EventSystems::RaycastResult  m_PressRaycast, ::UnityW<::UnityEngine::GameObject>  m_PressObject, ::UnityW<::UnityEngine::GameObject>  m_RawPressObject, ::UnityW<::UnityEngine::GameObject>  m_LastPressObject, ::UnityW<::UnityEngine::GameObject>  m_DragObject, ::UnityEngine::Vector2  m_PressPosition, float_t  m_ClickTime, int32_t  m_ClickCount, bool  m_Dragging, bool  m_ClickedOnSameGameObject, bool  m_IgnoreNextClick) noexcept  {
this->m_IsPressed = m_IsPressed;
this->m_FramePressState = m_FramePressState;
this->m_PressTime = m_PressTime;
this->m_PressRaycast = m_PressRaycast;
this->m_PressObject = m_PressObject;
this->m_RawPressObject = m_RawPressObject;
this->m_LastPressObject = m_LastPressObject;
this->m_DragObject = m_DragObject;
this->m_PressPosition = m_PressPosition;
this->m_ClickTime = m_ClickTime;
this->m_ClickCount = m_ClickCount;
this->m_Dragging = m_Dragging;
this->m_ClickedOnSameGameObject = m_ClickedOnSameGameObject;
this->m_IgnoreNextClick = m_IgnoreNextClick;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointerModel_ButtonState::PointerModel_ButtonState()   {
}
