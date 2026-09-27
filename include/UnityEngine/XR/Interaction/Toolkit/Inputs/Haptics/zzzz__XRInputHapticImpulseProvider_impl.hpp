#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/XRInputHapticImpulseProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__XRInputHapticImpulseProvider_InputSourceMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__XRInputHapticImpulseProvider_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticControlActionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__XRInputHapticImpulseProvider_InputSourceMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.get_inputSourceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::get_inputSourceMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"get_inputSourceMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.set_inputSourceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::set_inputSourceMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"set_inputSourceMode", {}, {::i2c::type_of<::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.get_inputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::get_inputAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"get_inputAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.set_inputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::set_inputAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"set_inputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.get_inputActionReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::get_inputActionReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"get_inputActionReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.set_inputActionReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::set_inputActionReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"set_inputActionReference", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4ccba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)(::StringW, bool, ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb4cbc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.EnableDirectActionIfModeUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::EnableDirectActionIfModeUsed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4ca550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"EnableDirectActionIfModeUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.DisableDirectActionIfModeUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::DisableDirectActionIfModeUsed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4ca528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"DisableDirectActionIfModeUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.GetObjectReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::GetObjectReference)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4ccc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"GetObjectReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.SetObjectReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::SetObjectReference)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4cb65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"SetObjectReference", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider.GetChannelGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::GetChannelGroup)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb4cb8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"GetChannelGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_InputSourceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputSourceMode;
}
constexpr ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_InputSourceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputSourceMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_set_m_InputSourceMode(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputSourceMode = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_InputAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_InputAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_set_m_InputAction(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_InputActionReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_InputActionReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionReference;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_set_m_InputActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputActionReference = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_ObjectReferenceObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectReferenceObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_ObjectReferenceObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectReferenceObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_set_m_ObjectReferenceObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectReferenceObject = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_ObjectReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectReference;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_ObjectReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectReference;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_set_m_ObjectReference(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectReference = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_HapticControlActionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticControlActionManager;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_get_m_HapticControlActionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticControlActionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::__cordl_internal_set_m_HapticControlActionManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticControlActionManager = value;
}
inline ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::get_inputSourceMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"get_inputSourceMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::set_inputSourceMode(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"set_inputSourceMode", {}, {::i2c::type_of<::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::get_inputAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"get_inputAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::set_inputAction(::UnityEngine::InputSystem::InputAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"set_inputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::get_inputActionReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"get_inputActionReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::set_inputActionReference(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"set_inputActionReference", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::_ctor(::StringW  name, bool  wantsInitialStateCheck, ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  inputSourceMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, wantsInitialStateCheck, inputSourceMode);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::EnableDirectActionIfModeUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"EnableDirectActionIfModeUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::DisableDirectActionIfModeUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"DisableDirectActionIfModeUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::GetObjectReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"GetObjectReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::SetObjectReference(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"SetObjectReference", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::GetChannelGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(),
                        {"GetChannelGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>());
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::New_ctor(::StringW  name, bool  wantsInitialStateCheck, ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  inputSourceMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(name, wantsInitialStateCheck, inputSourceMode));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider::XRInputHapticImpulseProvider()   {
}
