#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions_ParameterEnumerable.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterOverride_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterOverride_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_Parameter_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::*)(::UnityEngine::InputSystem::InputActionState*, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride, int32_t)>(&::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf1654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionState*>(), ::i2c::type_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator (::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::*)()>(&::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf16594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>* (::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::*)()>(&::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaf1bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::*)()>(&::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaf1bbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::_ctor(::UnityEngine::InputSystem::InputActionState*  state, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  parameter, int32_t  mapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionState*>(), ::i2c::type_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, parameter, mapIndex);
}
inline ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>* GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>"
constexpr  GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>* GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputActionRebindingExtensions_Parameter_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Parameter", ty: "::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::InputActionRebindingExtensions_ParameterEnumerable(::UnityEngine::InputSystem::InputActionState*  m_State, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  m_Parameter, int32_t  m_MapIndex) noexcept  {
this->m_State = m_State;
this->m_Parameter = m_Parameter;
this->m_MapIndex = m_MapIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable::InputActionRebindingExtensions_ParameterEnumerable()   {
}
