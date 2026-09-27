#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_InputEventControlCollection.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_Enumerate_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_InputEventControlCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_InputEventControlEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_InputEventControlCollection.get_eventPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::GlobalNamespace::InputControlExtensions_InputEventControlCollection::*)()>(&::GlobalNamespace::InputControlExtensions_InputEventControlCollection::get_eventPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf55d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"get_eventPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_InputEventControlCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator (::GlobalNamespace::InputControlExtensions_InputEventControlCollection::*)()>(&::GlobalNamespace::InputControlExtensions_InputEventControlCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf555a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_InputEventControlCollection.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* (::GlobalNamespace::InputControlExtensions_InputEventControlCollection::*)()>(&::GlobalNamespace::InputControlExtensions_InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf55f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlExtensions_InputEventControlCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::InputControlExtensions_InputEventControlCollection::*)()>(&::GlobalNamespace::InputControlExtensions_InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf55ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr GlobalNamespace::InputControlExtensions_InputEventControlCollection::get_eventPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"get_eventPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator GlobalNamespace::InputControlExtensions_InputEventControlCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* GlobalNamespace::InputControlExtensions_InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::InputControlExtensions_InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr  GlobalNamespace::InputControlExtensions_InputEventControlCollection::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* GlobalNamespace::InputControlExtensions_InputEventControlCollection::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::InputControlExtensions_InputEventControlCollection::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::InputControlExtensions_InputEventControlCollection::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "::GlobalNamespace::InputControlExtensions_Enumerate", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlExtensions_InputEventControlCollection::InputControlExtensions_InputEventControlCollection(::UnityEngine::InputSystem::InputDevice*  m_Device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr, ::GlobalNamespace::InputControlExtensions_Enumerate  m_Flags, float_t  m_MagnitudeThreshold) noexcept  {
this->m_Device = m_Device;
this->m_EventPtr = m_EventPtr;
this->m_Flags = m_Flags;
this->m_MagnitudeThreshold = m_MagnitudeThreshold;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlExtensions_InputEventControlCollection::InputControlExtensions_InputEventControlCollection()   {
}
