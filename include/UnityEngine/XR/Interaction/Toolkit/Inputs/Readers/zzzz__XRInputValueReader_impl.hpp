#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputValueReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_InputSourceMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_InputSourceMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.get_inputSourceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRInputValueReader_InputSourceMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::get_inputSourceMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"get_inputSourceMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.set_inputSourceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)(::GlobalNamespace::XRInputValueReader_InputSourceMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::set_inputSourceMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"set_inputSourceMode", {}, {::i2c::type_of<::GlobalNamespace::XRInputValueReader_InputSourceMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.get_inputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::get_inputAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"get_inputAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.set_inputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::set_inputAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"set_inputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.get_inputActionReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::get_inputActionReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"get_inputActionReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.set_inputActionReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::set_inputActionReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"set_inputActionReference", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4ca778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)(::UnityEngine::InputSystem::InputAction*, ::GlobalNamespace::XRInputValueReader_InputSourceMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4ca808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::GlobalNamespace::XRInputValueReader_InputSourceMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.EnableDirectActionIfModeUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::EnableDirectActionIfModeUsed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4ca8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"EnableDirectActionIfModeUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.DisableDirectActionIfModeUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::DisableDirectActionIfModeUsed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4ca8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"DisableDirectActionIfModeUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader.TryGetInputActionReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::*)(::by_ref<::UnityEngine::InputSystem::InputActionReference*>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::TryGetInputActionReference)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4ca910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"TryGetInputActionReference", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionReference*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XRInputValueReader_InputSourceMode& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputSourceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputSourceMode;
}
constexpr ::GlobalNamespace::XRInputValueReader_InputSourceMode const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputSourceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputSourceMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_set_m_InputSourceMode(::GlobalNamespace::XRInputValueReader_InputSourceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputSourceMode = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_set_m_InputAction(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputActionReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputActionReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionReference;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_set_m_InputActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputActionReference = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputActionReferenceCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionReferenceCache;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_get_m_InputActionReferenceCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionReferenceCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::__cordl_internal_set_m_InputActionReferenceCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputActionReferenceCache = value;
}
inline ::GlobalNamespace::XRInputValueReader_InputSourceMode UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::get_inputSourceMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"get_inputSourceMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRInputValueReader_InputSourceMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::set_inputSourceMode(::GlobalNamespace::XRInputValueReader_InputSourceMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"set_inputSourceMode", {}, {::i2c::type_of<::GlobalNamespace::XRInputValueReader_InputSourceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::get_inputAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"get_inputAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::set_inputAction(::UnityEngine::InputSystem::InputAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"set_inputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::get_inputActionReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"get_inputActionReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::set_inputActionReference(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"set_inputActionReference", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::_ctor(::UnityEngine::InputSystem::InputAction*  inputAction, ::GlobalNamespace::XRInputValueReader_InputSourceMode  inputSourceMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::GlobalNamespace::XRInputValueReader_InputSourceMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputAction, inputSourceMode);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::EnableDirectActionIfModeUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"EnableDirectActionIfModeUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::DisableDirectActionIfModeUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"DisableDirectActionIfModeUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::TryGetInputActionReference(::by_ref<::UnityEngine::InputSystem::InputActionReference*>  reference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(),
                        {"TryGetInputActionReference", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionReference*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reference);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>());
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::New_ctor(::UnityEngine::InputSystem::InputAction*  inputAction, ::GlobalNamespace::XRInputValueReader_InputSourceMode  inputSourceMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>(inputAction, inputSourceMode));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader::XRInputValueReader()   {
}
