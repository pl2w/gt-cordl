#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerBehaviour.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ControllerBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ControllerBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__UXSettings_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ControllerBehaviour> (*)()>(&::GlobalNamespace::ControllerBehaviour::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a5e1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ControllerBehaviour*)>(&::GlobalNamespace::ControllerBehaviour::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a5e238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ControllerBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_Poller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ControllerInputPoller> (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_Poller)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5a5e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_Poller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_ButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_ButtonDown)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a5e394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_ButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_LeftButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_LeftButtonDown)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a5e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_LeftButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_RightButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_RightButtonDown)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a5e538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_RightButtonDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_IsLeftStick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_IsLeftStick)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a5e600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsLeftStick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_IsRightStick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_IsRightStick)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a5e6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsRightStick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_IsUpStick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_IsUpStick)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a5e78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsUpStick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_IsDownStick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_IsDownStick)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a5e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsDownStick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_StickXValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_StickXValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a5e918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_StickXValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_StickYValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_StickYValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a5e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_StickYValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.get_TriggerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::get_TriggerDown)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a4c0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_TriggerDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.add_OnAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour::*)(::GlobalNamespace::ControllerBehaviour_OnActionEvent*)>(&::GlobalNamespace::ControllerBehaviour::add_OnAction)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a4af94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"add_OnAction", {}, {::i2c::type_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.remove_OnAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour::*)(::GlobalNamespace::ControllerBehaviour_OnActionEvent*)>(&::GlobalNamespace::ControllerBehaviour::remove_OnAction)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a4c674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"remove_OnAction", {}, {::i2c::type_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::Awake)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5a5ea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::Update)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a5ebdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::BuildValidationCheck)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a5ed34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour.CreateNewControllerBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ControllerBehaviour> (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UXSettings*)>(&::GlobalNamespace::ControllerBehaviour::CreateNewControllerBehaviour)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a4ad48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"CreateNewControllerBehaviour", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UXSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour::*)()>(&::GlobalNamespace::ControllerBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a5edec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_actionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionTime;
}
constexpr float_t const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_actionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionTime;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_actionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionTime = value;
}
constexpr float_t& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_repeatAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatAction;
}
constexpr float_t const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_repeatAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatAction;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_repeatAction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatAction = value;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings>& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_uxSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uxSettings;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings> const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_uxSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uxSettings;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_uxSettings(::UnityW<::GlobalNamespace::UXSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uxSettings = value;
}
constexpr float_t& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_actionDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionDelay;
}
constexpr float_t const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_actionDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionDelay;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_actionDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionDelay = value;
}
constexpr float_t& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_actionRepeatDelayReduction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionRepeatDelayReduction;
}
constexpr float_t const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_actionRepeatDelayReduction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionRepeatDelayReduction;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_actionRepeatDelayReduction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionRepeatDelayReduction = value;
}
constexpr bool& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_useTriggersAsSticks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTriggersAsSticks;
}
constexpr bool const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_useTriggersAsSticks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTriggersAsSticks;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_useTriggersAsSticks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTriggersAsSticks = value;
}
constexpr ::UnityW<::GlobalNamespace::ControllerInputPoller>& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_poller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poller;
}
constexpr ::UnityW<::GlobalNamespace::ControllerInputPoller> const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_poller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poller;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_poller(::UnityW<::GlobalNamespace::ControllerInputPoller>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poller = value;
}
constexpr bool& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasLeftStick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLeftStick;
}
constexpr bool const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasLeftStick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLeftStick;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_wasLeftStick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasLeftStick = value;
}
constexpr bool& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasRightStick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRightStick;
}
constexpr bool const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasRightStick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRightStick;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_wasRightStick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasRightStick = value;
}
constexpr bool& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasUpStick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasUpStick;
}
constexpr bool const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasUpStick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasUpStick;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_wasUpStick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasUpStick = value;
}
constexpr bool& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasDownStick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasDownStick;
}
constexpr bool const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasDownStick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasDownStick;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_wasDownStick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasDownStick = value;
}
constexpr bool& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeld;
}
constexpr bool const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_wasHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeld;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_wasHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHeld = value;
}
constexpr ::GlobalNamespace::ControllerBehaviour_OnActionEvent*& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_OnAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAction;
}
constexpr ::GlobalNamespace::ControllerBehaviour_OnActionEvent* const& GlobalNamespace::ControllerBehaviour::__cordl_internal_get_OnAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAction;
}
constexpr void GlobalNamespace::ControllerBehaviour::__cordl_internal_set_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAction = value;
}
inline void GlobalNamespace::ControllerBehaviour::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ControllerBehaviour>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ControllerBehaviour>, "<Instance>k__BackingField", ::GlobalNamespace::ControllerBehaviour*>(std::forward<::UnityW<::GlobalNamespace::ControllerBehaviour>>(value));
}
inline ::UnityW<::GlobalNamespace::ControllerBehaviour> GlobalNamespace::ControllerBehaviour::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ControllerBehaviour>, "<Instance>k__BackingField", ::GlobalNamespace::ControllerBehaviour*>();
}
inline ::UnityW<::GlobalNamespace::ControllerBehaviour> GlobalNamespace::ControllerBehaviour::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ControllerBehaviour>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ControllerBehaviour::set_Instance(::GlobalNamespace::ControllerBehaviour*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ControllerBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::ControllerInputPoller> GlobalNamespace::ControllerBehaviour::get_Poller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_Poller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ControllerInputPoller>>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_ButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_ButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_LeftButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_LeftButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_RightButtonDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_RightButtonDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_IsLeftStick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsLeftStick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_IsRightStick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsRightStick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_IsUpStick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsUpStick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_IsDownStick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_IsDownStick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::ControllerBehaviour::get_StickXValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_StickXValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ControllerBehaviour::get_StickYValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_StickYValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::get_TriggerDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"get_TriggerDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerBehaviour::add_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"add_OnAction", {}, {::i2c::type_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ControllerBehaviour::remove_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"remove_OnAction", {}, {::i2c::type_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ControllerBehaviour::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerBehaviour::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerBehaviour::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ControllerBehaviour> GlobalNamespace::ControllerBehaviour::CreateNewControllerBehaviour(::UnityEngine::GameObject*  gameObject, ::GlobalNamespace::UXSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {"CreateNewControllerBehaviour", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UXSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ControllerBehaviour>>(nullptr, ___internal_method, gameObject, settings);
}
inline void GlobalNamespace::ControllerBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ControllerBehaviour* GlobalNamespace::ControllerBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ControllerBehaviour*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::ControllerBehaviour::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::ControllerBehaviour::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerBehaviour::ControllerBehaviour()   {
}
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour_OnActionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour_OnActionEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ControllerBehaviour_OnActionEvent::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a4aef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour_OnActionEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour_OnActionEvent::*)()>(&::GlobalNamespace::ControllerBehaviour_OnActionEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a5ee04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour_OnActionEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ControllerBehaviour_OnActionEvent::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ControllerBehaviour_OnActionEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a5ee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerBehaviour_OnActionEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerBehaviour_OnActionEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::ControllerBehaviour_OnActionEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5ee34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ControllerBehaviour_OnActionEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::ControllerBehaviour_OnActionEvent::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::ControllerBehaviour_OnActionEvent::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::ControllerBehaviour_OnActionEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::ControllerBehaviour_OnActionEvent* GlobalNamespace::ControllerBehaviour_OnActionEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ControllerBehaviour_OnActionEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerBehaviour_OnActionEvent::ControllerBehaviour_OnActionEvent()   {
}
