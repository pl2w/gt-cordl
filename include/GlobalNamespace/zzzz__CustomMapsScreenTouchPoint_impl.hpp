#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsScreenTouchPoint.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_TouchPointDirections_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_TouchPointDirections_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_def.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
#include "GorillaTag/zzzz__ButtonColorSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a03930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a048e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CustomMapsScreenTouchPoint::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x5a04b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint.PressButtonColourUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint::PressButtonColourUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a04aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint.GetForwardDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CustomMapsScreenTouchPoint::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint::GetForwardDirection)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a05158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"GetForwardDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint.OnButtonPressedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint::OnButtonPressedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint::*)(bool)>(&::GlobalNamespace::CustomMapsScreenTouchPoint::Click)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a03fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint._PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CustomMapsScreenTouchPoint::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint::_PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a05210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"<PressButtonColourUpdate>g__ButtonColorUpdate_Local|12_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalScreen>& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_screen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalScreen> const& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_screen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_set_screen(::UnityW<::GlobalNamespace::CustomMapsTerminalScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screen = value;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_keyBinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyBinding;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_keyBinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyBinding;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_set_keyBinding(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyBinding = value;
}
constexpr ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_forwardDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardDirection;
}
constexpr ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_forwardDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardDirection;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_set_forwardDirection(::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardDirection = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_touchPointRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchPointRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_touchPointRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchPointRenderer;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_set_touchPointRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchPointRenderer = value;
}
constexpr ::UnityW<::GorillaTag::ButtonColorSettings>& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_buttonColorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonColorSettings;
}
constexpr ::UnityW<::GorillaTag::ButtonColorSettings> const& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_buttonColorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonColorSettings;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_set_buttonColorSettings(::UnityW<::GorillaTag::ButtonColorSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonColorSettings = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_colorUpdateCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUpdateCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_get_colorUpdateCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUpdateCoroutine;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint::__cordl_internal_set_colorUpdateCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorUpdateCoroutine = value;
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::setStaticF_pressedTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "pressedTime", ::GlobalNamespace::CustomMapsScreenTouchPoint*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::CustomMapsScreenTouchPoint::getStaticF_pressedTime()  {
return ::cordl_internals::getStaticField<float_t, "pressedTime", ::GlobalNamespace::CustomMapsScreenTouchPoint*>();
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::setStaticF_pressTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "pressTime", ::GlobalNamespace::CustomMapsScreenTouchPoint*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::CustomMapsScreenTouchPoint::getStaticF_pressTime()  {
return ::cordl_internals::getStaticField<float_t, "pressTime", ::GlobalNamespace::CustomMapsScreenTouchPoint*>();
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::PressButtonColourUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CustomMapsScreenTouchPoint::GetForwardDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"GetForwardDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapsScreenTouchPoint::_PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint*>(),
                        {"<PressButtonColourUpdate>g__ButtonColorUpdate_Local|12_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsScreenTouchPoint* GlobalNamespace::CustomMapsScreenTouchPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsScreenTouchPoint*>());
}
/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr  GlobalNamespace::CustomMapsScreenTouchPoint::operator ::GlobalNamespace::IClickable*() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* GlobalNamespace::CustomMapsScreenTouchPoint::i___GlobalNamespace__IClickable() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsScreenTouchPoint::CustomMapsScreenTouchPoint()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::*)(int32_t)>(&::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a052cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a052f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5a052f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0547c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a05484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::*)()>(&::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a054bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint>& GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint> const& GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d* GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d()   {
}
