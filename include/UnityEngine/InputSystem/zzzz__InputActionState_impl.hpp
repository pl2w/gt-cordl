#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_GlobalState_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_UnmanagedMemory_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_ActionMapIndices_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_BindingState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_GlobalState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_InteractionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_TriggerState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_UnmanagedMemory_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingResolver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalCompositeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalCompositeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf285f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalCompositeCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalMapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalMapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalActionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalActionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalActionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalBindingCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalBindingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalBindingCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalInteractionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalInteractionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalInteractionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_totalControlCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_totalControlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalControlCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_mapIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionState_ActionMapIndices* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_mapIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_mapIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_actionStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionState_TriggerState* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_actionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_actionStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_bindingStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionState_BindingState* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_bindingStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_bindingStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_interactionStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionState_InteractionState* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_interactionStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_interactionStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlIndexToBindingIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_controlIndexToBindingIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlGroupingAndComplexity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_controlGroupingAndComplexity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_controlMagnitudes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_controlMagnitudes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_controlMagnitudes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_enabledControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_enabledControls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_enabledControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.get_isProcessingControlStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_isProcessingControlStateChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputBindingResolver)>(&::UnityEngine::InputSystem::InputActionState::Initialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaf28670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ComputeControlGroupingIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xaf287f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ComputeControlGroupingIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ClaimDataFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputBindingResolver)>(&::UnityEngine::InputSystem::InputActionState::ClaimDataFrom)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaf286ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ClaimDataFrom", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::Finalize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaf289d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf28bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(bool)>(&::UnityEngine::InputSystem::InputActionState::Destroy)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xaf28a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Destroy", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionState* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::Clone)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xaf28f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.System_ICloneable_Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf29198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsUsingDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputActionState::IsUsingDevice)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xaf2919c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsUsingDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CanUseDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputActionState::CanUseDevice)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xaf29360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"CanUseDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.HasEnabledActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::HasEnabledActions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaf2956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"HasEnabledActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FinishBindingCompositeSetups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaf295e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FinishBindingCompositeSetups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.PrepareForBindingReResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(bool, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>, ::by_ref<bool>)>(&::UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xaf296cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"PrepareForBindingReResolution", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FinishBindingResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(bool, ::GlobalNamespace::InputActionState_UnmanagedMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, bool)>(&::UnityEngine::InputSystem::InputActionState::FinishBindingResolution)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaf2a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FinishBindingResolution", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.RestoreActionStatesAfterReResolvingBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::GlobalNamespace::InputActionState_UnmanagedMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, bool)>(&::UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0xaf2a1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"RestoreActionStatesAfterReResolvingBindings", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActiveControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::IsActiveControl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaf2b0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsActiveControl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FindControlIndexOnBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaf2ab64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FindControlIndexOnBinding", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetActionStatesDrivenBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xaf2b1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetActionStatesDrivenBy", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActionBoundToControlFromDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(&::UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaf2b39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsActionBoundToControlFromDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetActionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::UnityEngine::InputSystem::InputActionPhase, bool)>(&::UnityEngine::InputSystem::InputActionState::ResetActionState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaf29e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetActionState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FetchActionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::InputActionState_TriggerState> (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionState::FetchActionState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaf2b798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FetchActionState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FetchMapIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionState_ActionMapIndices (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionState::FetchMapIndices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf2b7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FetchMapIndices", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableAllActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionState::EnableAllActions)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaf2b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableAllActions", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf2b8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableSingleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionState::EnableSingleAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf2b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaf2b9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableAllActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xaf29ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableAllActions", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf29fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableSingleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionState::DisableSingleAction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf2ba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaf2bb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EnableControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::EnableControls)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xaf2a9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableControls", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::DisableControls)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xaf28c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableControls", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(&::UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf2bca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetInitialStateCheckPending", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetInitialStateCheckPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::GlobalNamespace::InputActionState_BindingState*, bool)>(&::UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaf2bc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetInitialStateCheckPending", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_BindingState*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsControlEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::IsControlEnabled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaf2bbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsControlEnabled", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetControlEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, bool)>(&::UnityEngine::InputSystem::InputActionState::SetControlEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf2bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetControlEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.HookOnBeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaf2aefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"HookOnBeforeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnhookOnBeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaf2bd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"UnhookOnBeforeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.OnBeforeInitialUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xaf2bdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"OnBeforeInitialUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(&::UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaf2bfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputControl*, double_t, int64_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf2c60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ToCombinedMapAndControlAndBindingIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf2bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ToCombinedMapAndControlAndBindingIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SplitUpMapAndControlAndBindingIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf2bfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SplitUpMapAndControlAndBindingIndex", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetComplexityFromMonitorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf2c858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetComplexityFromMonitorIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessControlStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputActionState::ProcessControlStateChange)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0xaf2bfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessControlStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>, int32_t, ::GlobalNamespace::InputActionState_BindingState*)>(&::UnityEngine::InputSystem::InputActionState::ProcessButtonState)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xaf2cecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessButtonState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputActionState_BindingState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ShouldIgnoreInputOnCompositeBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::InputActionState_BindingState*, ::UnityEngine::InputSystem::LowLevel::InputEvent*)>(&::UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaf2c8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ShouldIgnoreInputOnCompositeBinding", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_BindingState*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsConflictingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>, int32_t)>(&::UnityEngine::InputSystem::InputActionState::IsConflictingInput)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xaf2cacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsConflictingInput", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionBindingStartIndexAndCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::by_ref<uint16_t>)>(&::UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf2b458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionBindingStartIndexAndCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessDefaultInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xaf2d0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessDefaultInteraction", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessInteractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ProcessInteractions)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xaf2c8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessInteractions", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ProcessTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(double_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ProcessTimeout)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xaf2c620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessTimeout", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SetTotalTimeoutCompletionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(float_t, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaf2d588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetTotalTimeoutCompletionTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.StartTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(float_t, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::StartTimeout)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xaf2ada8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"StartTimeout", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.StopTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::StopTimeout)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaf2d5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"StopTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>, ::UnityEngine::InputSystem::InputActionPhase, ::UnityEngine::InputSystem::InputActionPhase, bool)>(&::UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xaf2d67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ChangePhaseOfInteraction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>, ::UnityEngine::InputSystem::InputActionPhase)>(&::UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xaf2b520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ChangePhaseOfAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ChangePhaseOfActionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::GlobalNamespace::InputActionState_TriggerState*, ::UnityEngine::InputSystem::InputActionPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>, bool)>(&::UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xaf2db68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ChangePhaseOfActionInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputActionState_TriggerState*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CallActionListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputActionPhase, ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>>, ::StringW)>(&::UnityEngine::InputSystem::InputActionState::CallActionListeners)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaf2debc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"CallActionListeners", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNoneString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetActionOrNoneString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaf2e0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionOrNoneString", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf2e1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionOrNull", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionOrNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetActionOrNull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf2e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionOrNull", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetControl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaf2e268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetControl", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetInteractionOrNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (::UnityEngine::InputSystem::InputActionState::*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>)>(&::UnityEngine::InputSystem::InputActionState::GetInteractionOrNull)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf2e2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetInteractionOrNull", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingIndexInMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf2e2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBindingIndexInMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingIndexInState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetBindingIndexInState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf2e328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBindingIndexInState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBindingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::InputActionState_BindingState> (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetBindingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf2e350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBindingState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetBinding)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaf2e360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBinding", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetActionMap)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaf2e3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetInteractionStateAndCancelIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, int32_t, ::UnityEngine::InputSystem::InputActionPhase)>(&::UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaf2b478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetInteractionStateAndCancelIfNecessary", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetInteractionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionState::ResetInteractionState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaf29d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetInteractionState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetValueSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf2e41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetValueSizeInBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetValueType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf2e4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetValueType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.IsActuated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::InputActionState_TriggerState>, float_t)>(&::UnityEngine::InputSystem::InputActionState::IsActuated)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaf2d4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsActuated", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, void*, int32_t, bool)>(&::UnityEngine::InputSystem::InputActionState::ReadValue)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaf2e544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.EvaluateCompositePartMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaf2e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EvaluateCompositePartMagnitude", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.GetCompositePartPressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaf2e7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetCompositePartPressTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadCompositePartValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, void*, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ReadCompositePartValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaf2e84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadCompositePartValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadCompositePartValueAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaf2e95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadCompositePartValueAsObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValueAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t, bool)>(&::UnityEngine::InputSystem::InputActionState::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaf2ea58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadValueAsObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ReadValueAsButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionState::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::InputActionState::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xaf2ebf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadValueAsButton", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.SaveAndResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(&::UnityEngine::InputSystem::InputActionState::SaveAndResetState)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xaf2ed24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SaveAndResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.AddToGlobalList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::AddToGlobalList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf28768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"AddToGlobalList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.RemoveMapFromGlobalList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaf28d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"RemoveMapFromGlobalList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.CompactGlobalList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::CompactGlobalList)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xaf2ef38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"CompactGlobalList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)(::UnityEngine::InputSystem::InputActionChange)>(&::UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xaf29ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"NotifyListenersOfActionChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.NotifyListenersOfActionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionChange, ::System::Object*)>(&::UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaf2afdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"NotifyListenersOfActionChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.ResetGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::ResetGlobals)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xaf2f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetGlobals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.FindAllEnabledActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*)>(&::UnityEngine::InputSystem::InputActionState::FindAllEnabledActions)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xaf2f438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FindAllEnabledActions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.OnDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::InputSystem::InputActionState::OnDeviceChange)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xaf2f708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"OnDeviceChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DeferredResolutionOfBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xaf2227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DeferredResolutionOfBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DisableAllActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DisableAllActions)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaf2fa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableAllActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState.DestroyAllActionMapStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xaf2f278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DestroyAllActionMapStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState::*)()>(&::UnityEngine::InputSystem::InputActionState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf290ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_maps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maps;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_maps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maps;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maps = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_controls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_controls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controls;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controls = value;
}
constexpr ::ArrayW<Il2CppObject*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_interactions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactions;
}
constexpr ::ArrayW<Il2CppObject*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_interactions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactions;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_interactions(::ArrayW<Il2CppObject*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactions = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_processors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processors;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_processors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processors;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processors = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_composites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___composites;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*> const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_composites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___composites;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___composites = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_totalProcessorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalProcessorCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_totalProcessorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalProcessorCount;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_totalProcessorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalProcessorCount = value;
}
constexpr ::GlobalNamespace::InputActionState_UnmanagedMemory& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_memory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memory;
}
constexpr ::GlobalNamespace::InputActionState_UnmanagedMemory const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_memory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memory;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_memory(::GlobalNamespace::InputActionState_UnmanagedMemory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memory = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateHooked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnBeforeUpdateHooked;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateHooked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnBeforeUpdateHooked;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnBeforeUpdateHooked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnBeforeUpdateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateHooked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnAfterUpdateHooked;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateHooked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnAfterUpdateHooked;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnAfterUpdateHooked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnAfterUpdateHooked = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_InProcessControlStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InProcessControlStateChange;
}
constexpr bool const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_InProcessControlStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InProcessControlStateChange;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_InProcessControlStateChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InProcessControlStateChange = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_CurrentlyProcessingThisEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentlyProcessingThisEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_CurrentlyProcessingThisEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentlyProcessingThisEvent;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_CurrentlyProcessingThisEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentlyProcessingThisEvent = value;
}
constexpr ::System::Action*& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnBeforeUpdateDelegate;
}
constexpr ::System::Action* const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnBeforeUpdateDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnBeforeUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnBeforeUpdateDelegate(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnBeforeUpdateDelegate = value;
}
constexpr ::System::Action*& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnAfterUpdateDelegate;
}
constexpr ::System::Action* const& UnityEngine::InputSystem::InputActionState::__cordl_internal_get_m_OnAfterUpdateDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnAfterUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::InputActionState::__cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnAfterUpdateDelegate = value;
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputInitialActionStateCheckMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputInitialActionStateCheckMarker", ::UnityEngine::InputSystem::InputActionState*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputInitialActionStateCheckMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputInitialActionStateCheckMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputActionResolveConflictMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionResolveConflictMarker", ::UnityEngine::InputSystem::InputActionState*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputActionResolveConflictMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionResolveConflictMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputActionCallbackMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionCallbackMarker", ::UnityEngine::InputSystem::InputActionState*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputActionCallbackMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionCallbackMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputOnActionChangeMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnActionChangeMarker", ::UnityEngine::InputSystem::InputActionState*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputOnActionChangeMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnActionChangeMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_k_InputOnDeviceChangeMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceChangeMarker", ::UnityEngine::InputSystem::InputActionState*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionState::getStaticF_k_InputOnDeviceChangeMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputOnDeviceChangeMarker", ::UnityEngine::InputSystem::InputActionState*>();
}
inline void UnityEngine::InputSystem::InputActionState::setStaticF_s_GlobalState(::GlobalNamespace::InputActionState_GlobalState  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InputActionState_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::InputActionState*>(std::forward<::GlobalNamespace::InputActionState_GlobalState>(value));
}
inline ::GlobalNamespace::InputActionState_GlobalState UnityEngine::InputSystem::InputActionState::getStaticF_s_GlobalState()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InputActionState_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::InputActionState*>();
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalCompositeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalCompositeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalMapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalMapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalActionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalActionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalBindingCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalBindingCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalInteractionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalInteractionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::get_totalControlCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_totalControlCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::InputActionState_ActionMapIndices* UnityEngine::InputSystem::InputActionState::get_mapIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_mapIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionState_ActionMapIndices*>(this, ___internal_method);
}
inline ::GlobalNamespace::InputActionState_TriggerState* UnityEngine::InputSystem::InputActionState::get_actionStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_actionStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionState_TriggerState*>(this, ___internal_method);
}
inline ::GlobalNamespace::InputActionState_BindingState* UnityEngine::InputSystem::InputActionState::get_bindingStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_bindingStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionState_BindingState*>(this, ___internal_method);
}
inline ::GlobalNamespace::InputActionState_InteractionState* UnityEngine::InputSystem::InputActionState::get_interactionStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_interactionStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionState_InteractionState*>(this, ___internal_method);
}
inline int32_t* UnityEngine::InputSystem::InputActionState::get_controlIndexToBindingIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_controlIndexToBindingIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(this, ___internal_method);
}
inline uint16_t* UnityEngine::InputSystem::InputActionState::get_controlGroupingAndComplexity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_controlGroupingAndComplexity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t*>(this, ___internal_method);
}
inline float_t* UnityEngine::InputSystem::InputActionState::get_controlMagnitudes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_controlMagnitudes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t*>(this, ___internal_method);
}
inline uint32_t* UnityEngine::InputSystem::InputActionState::get_enabledControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_enabledControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState::get_isProcessingControlStateChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"get_isProcessingControlStateChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Initialize(::UnityEngine::InputSystem::InputBindingResolver  resolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolver);
}
inline void UnityEngine::InputSystem::InputActionState::ComputeControlGroupingIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ComputeControlGroupingIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver  resolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ClaimDataFrom", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBindingResolver>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolver);
}
inline void UnityEngine::InputSystem::InputActionState::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::Destroy(bool  isFinalizing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Destroy", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFinalizing);
}
inline ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionState::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionState*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionState::IsUsingDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsUsingDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::CanUseDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"CanUseDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::HasEnabledActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"HasEnabledActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::FinishBindingCompositeSetups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FinishBindingCompositeSetups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::PrepareForBindingReResolution(bool  needFullResolve, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>  activeControls, ::by_ref<bool>  hasEnabledActions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"PrepareForBindingReResolution", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needFullResolve, activeControls, hasEnabledActions);
}
inline void UnityEngine::InputSystem::InputActionState::FinishBindingResolution(bool  hasEnabledActions, ::GlobalNamespace::InputActionState_UnmanagedMemory  oldMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  activeControls, bool  isFullResolve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FinishBindingResolution", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasEnabledActions, oldMemory, activeControls, isFullResolve);
}
inline void UnityEngine::InputSystem::InputActionState::RestoreActionStatesAfterReResolvingBindings(::GlobalNamespace::InputActionState_UnmanagedMemory  oldState, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  activeControls, bool  isFullResolve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"RestoreActionStatesAfterReResolvingBindings", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, activeControls, isFullResolve);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActiveControl(int32_t  bindingIndex, int32_t  controlIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsActiveControl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingIndex, controlIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::FindControlIndexOnBinding(int32_t  bindingIndex, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FindControlIndexOnBinding", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bindingIndex, control);
}
inline void UnityEngine::InputSystem::InputActionState::ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetActionStatesDrivenBy", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice*  device, int32_t  actionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsActionBoundToControlFromDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device, actionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ResetActionState(int32_t  actionIndex, ::UnityEngine::InputSystem::InputActionPhase  toPhase, bool  hardReset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetActionState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, toPhase, hardReset);
}
inline ::by_ref<::GlobalNamespace::InputActionState_TriggerState> UnityEngine::InputSystem::InputActionState::FetchActionState(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FetchActionState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(this, ___internal_method, action);
}
inline ::GlobalNamespace::InputActionState_ActionMapIndices UnityEngine::InputSystem::InputActionState::FetchMapIndices(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FetchMapIndices", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionState_ActionMapIndices>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableAllActions(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableAllActions", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::EnableSingleAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::DisableAllActions(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableAllActions", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::InputActionState::DisableSingleAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionState::EnableControls(int32_t  mapIndex, int32_t  controlStartIndex, int32_t  numControls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EnableControls", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, controlStartIndex, numControls);
}
inline void UnityEngine::InputSystem::InputActionState::DisableControls(int32_t  mapIndex, int32_t  controlStartIndex, int32_t  numControls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableControls", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, controlStartIndex, numControls);
}
inline void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(int32_t  actionIndex, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetInitialStateCheckPending", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, value);
}
inline void UnityEngine::InputSystem::InputActionState::SetInitialStateCheckPending(::GlobalNamespace::InputActionState_BindingState*  bindingStatePtr, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetInitialStateCheckPending", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_BindingState*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingStatePtr, value);
}
inline bool UnityEngine::InputSystem::InputActionState::IsControlEnabled(int32_t  controlIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsControlEnabled", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controlIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SetControlEnabled(int32_t  controlIndex, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetControlEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlIndex, state);
}
inline void UnityEngine::InputSystem::InputActionState::HookOnBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"HookOnBeforeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::UnhookOnBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"UnhookOnBeforeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::OnBeforeInitialUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"OnBeforeInitialUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, int64_t  mapControlAndBindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, eventPtr, mapControlAndBindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl*  control, double_t  time, int64_t  mapControlAndBindingIndex, int32_t  interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control, time, mapControlAndBindingIndex, interactionIndex);
}
inline int64_t UnityEngine::InputSystem::InputActionState::ToCombinedMapAndControlAndBindingIndex(int32_t  mapIndex, int32_t  controlIndex, int32_t  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ToCombinedMapAndControlAndBindingIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mapIndex, controlIndex, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SplitUpMapAndControlAndBindingIndex(int64_t  mapControlAndBindingIndex, ::by_ref<int32_t>  mapIndex, ::by_ref<int32_t>  controlIndex, ::by_ref<int32_t>  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SplitUpMapAndControlAndBindingIndex", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapControlAndBindingIndex, mapIndex, controlIndex, bindingIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetComplexityFromMonitorIndex(int64_t  mapControlAndBindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetComplexityFromMonitorIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mapControlAndBindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessControlStateChange(int32_t  mapIndex, int32_t  controlIndex, int32_t  bindingIndex, double_t  time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessControlStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, controlIndex, bindingIndex, time, eventPtr);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessButtonState(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  actionIndex, ::GlobalNamespace::InputActionState_BindingState*  bindingStatePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessButtonState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputActionState_BindingState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, actionIndex, bindingStatePtr);
}
inline bool UnityEngine::InputSystem::InputActionState::ShouldIgnoreInputOnCompositeBinding(::GlobalNamespace::InputActionState_BindingState*  binding, ::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ShouldIgnoreInputOnCompositeBinding", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_BindingState*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, binding, eventPtr);
}
inline bool UnityEngine::InputSystem::InputActionState::IsConflictingInput(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  actionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsConflictingInput", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trigger, actionIndex);
}
inline uint16_t UnityEngine::InputSystem::InputActionState::GetActionBindingStartIndexAndCount(int32_t  actionIndex, ::by_ref<uint16_t>  bindingCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionBindingStartIndexAndCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, actionIndex, bindingCount);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessDefaultInteraction(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  actionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessDefaultInteraction", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, actionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessInteractions(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  interactionStartIndex, int32_t  interactionCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessInteractions", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, interactionStartIndex, interactionCount);
}
inline void UnityEngine::InputSystem::InputActionState::ProcessTimeout(double_t  time, int32_t  mapIndex, int32_t  controlIndex, int32_t  bindingIndex, int32_t  interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ProcessTimeout", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, mapIndex, controlIndex, bindingIndex, interactionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::SetTotalTimeoutCompletionTime(float_t  seconds, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SetTotalTimeoutCompletionTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds, trigger);
}
inline void UnityEngine::InputSystem::InputActionState::StartTimeout(float_t  seconds, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"StartTimeout", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds, trigger);
}
inline void UnityEngine::InputSystem::InputActionState::StopTimeout(int32_t  interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"StopTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase  newPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterPerformed, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterCanceled, bool  processNextInteractionOnCancel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ChangePhaseOfInteraction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPhase, trigger, phaseAfterPerformed, phaseAfterCanceled, processNextInteractionOnCancel);
}
inline bool UnityEngine::InputSystem::InputActionState::ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase  newPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterPerformedOrCanceled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ChangePhaseOfAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newPhase, trigger, phaseAfterPerformedOrCanceled);
}
inline void UnityEngine::InputSystem::InputActionState::ChangePhaseOfActionInternal(int32_t  actionIndex, ::GlobalNamespace::InputActionState_TriggerState*  actionState, ::UnityEngine::InputSystem::InputActionPhase  newPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, bool  isDisablingAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ChangePhaseOfActionInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputActionState_TriggerState*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, actionState, newPhase, trigger, isDisablingAction);
}
inline void UnityEngine::InputSystem::InputActionState::CallActionListeners(int32_t  actionIndex, ::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputActionPhase  phase, ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>>  listeners, ::StringW  callbackName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"CallActionListeners", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionIndex, actionMap, phase, listeners, callbackName);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::GetActionOrNoneString(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionOrNoneString", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, trigger);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionState::GetActionOrNull(int32_t  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionOrNull", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, bindingIndex);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionState::GetActionOrNull(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionOrNull", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, trigger);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputActionState::GetControl(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetControl", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method, trigger);
}
inline Il2CppObject* UnityEngine::InputSystem::InputActionState::GetInteractionOrNull(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetInteractionOrNull", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(this, ___internal_method, trigger);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInMap(int32_t  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBindingIndexInMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bindingIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetBindingIndexInState(int32_t  mapIndex, int32_t  bindingIndexInMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBindingIndexInState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mapIndex, bindingIndexInMap);
}
inline ::by_ref<::GlobalNamespace::InputActionState_BindingState> UnityEngine::InputSystem::InputActionState::GetBindingState(int32_t  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBindingState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::InputActionState_BindingState>>(this, ___internal_method, bindingIndex);
}
inline ::by_ref<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionState::GetBinding(int32_t  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetBinding", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method, bindingIndex);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionState::GetActionMap(int32_t  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetActionMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method, bindingIndex);
}
inline void UnityEngine::InputSystem::InputActionState::ResetInteractionStateAndCancelIfNecessary(int32_t  mapIndex, int32_t  bindingIndex, int32_t  interactionIndex, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterCanceled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetInteractionStateAndCancelIfNecessary", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapIndex, bindingIndex, interactionIndex, phaseAfterCanceled);
}
inline void UnityEngine::InputSystem::InputActionState::ResetInteractionState(int32_t  interactionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetInteractionState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionIndex);
}
inline int32_t UnityEngine::InputSystem::InputActionState::GetValueSizeInBytes(int32_t  bindingIndex, int32_t  controlIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetValueSizeInBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bindingIndex, controlIndex);
}
inline ::System::Type* UnityEngine::InputSystem::InputActionState::GetValueType(int32_t  bindingIndex, int32_t  controlIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetValueType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, bindingIndex, controlIndex);
}
inline bool UnityEngine::InputSystem::InputActionState::IsActuated(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"IsActuated", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_TriggerState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trigger, threshold);
}
inline void UnityEngine::InputSystem::InputActionState::ReadValue(int32_t  bindingIndex, int32_t  controlIndex, void*  buffer, int32_t  bufferSize, bool  ignoreComposites)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingIndex, controlIndex, buffer, bufferSize, ignoreComposites);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue UnityEngine::InputSystem::InputActionState::ReadValue(int32_t  bindingIndex, int32_t  controlIndex, bool  ignoreComposites)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                    {"ReadValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue UnityEngine::InputSystem::InputActionState::ApplyProcessors(int32_t  bindingIndex, TValue  value, ::UnityEngine::InputSystem::InputControl_1<TValue>*  controlOfType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                    {"ApplyProcessors", {::i2c::class_of<TValue>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, bindingIndex, value, controlOfType);
}
inline float_t UnityEngine::InputSystem::InputActionState::EvaluateCompositePartMagnitude(int32_t  bindingIndex, int32_t  partNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"EvaluateCompositePartMagnitude", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, bindingIndex, partNumber);
}
inline double_t UnityEngine::InputSystem::InputActionState::GetCompositePartPressTime(int32_t  bindingIndex, int32_t  partNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"GetCompositePartPressTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, bindingIndex, partNumber);
}
template<typename TValue,typename TComparer>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TComparer, ::System::Collections::Generic::IComparer_1<TValue>*>)
inline TValue UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t  bindingIndex, int32_t  partNumber, bool*  buttonValuePtr, ::by_ref<int32_t>  controlIndex, TComparer  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                    {"ReadCompositePartValue", {::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<TComparer>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, bindingIndex, partNumber, buttonValuePtr, controlIndex, comparer);
}
inline bool UnityEngine::InputSystem::InputActionState::ReadCompositePartValue(int32_t  bindingIndex, int32_t  partNumber, void*  buffer, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadCompositePartValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingIndex, partNumber, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::ReadCompositePartValueAsObject(int32_t  bindingIndex, int32_t  partNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadCompositePartValueAsObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, bindingIndex, partNumber);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionState::ReadValueAsObject(int32_t  bindingIndex, int32_t  controlIndex, bool  ignoreComposites)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadValueAsObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, bindingIndex, controlIndex, ignoreComposites);
}
inline bool UnityEngine::InputSystem::InputActionState::ReadValueAsButton(int32_t  bindingIndex, int32_t  controlIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ReadValueAsButton", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingIndex, controlIndex);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::InputActionState::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"SaveAndResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::AddToGlobalList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"AddToGlobalList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::RemoveMapFromGlobalList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"RemoveMapFromGlobalList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::CompactGlobalList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"CompactGlobalList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"NotifyListenersOfActionChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, change);
}
inline void UnityEngine::InputSystem::InputActionState::NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange  change, ::System::Object*  actionOrMapOrAsset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"NotifyListenersOfActionChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, change, actionOrMapOrAsset);
}
inline void UnityEngine::InputSystem::InputActionState::ResetGlobals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"ResetGlobals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionState::FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"FindAllEnabledActions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, result);
}
inline void UnityEngine::InputSystem::InputActionState::OnDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"OnDeviceChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::InputActionState::DeferredResolutionOfBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DeferredResolutionOfBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::DisableAllActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DisableAllActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::DestroyAllActionMapStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {"DestroyAllActionMapStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionState*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr  UnityEngine::InputSystem::InputActionState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* UnityEngine::InputSystem::InputActionState::i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  UnityEngine::InputSystem::InputActionState::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::InputSystem::InputActionState::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputActionState::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionState::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState::InputActionState()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState___c::*)()>(&::UnityEngine::InputSystem::InputActionState___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf30940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState___c._SaveAndResetState_b__140_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState___c::*)(::by_ref<::GlobalNamespace::InputActionState_GlobalState>)>(&::UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf30948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                        {"<SaveAndResetState>b__140_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_GlobalState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionState___c._SaveAndResetState_b__140_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionState___c::*)()>(&::UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaf309d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                        {"<SaveAndResetState>b__140_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputActionState___c::setStaticF___9(::UnityEngine::InputSystem::InputActionState___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputActionState___c*, "<>9", ::UnityEngine::InputSystem::InputActionState___c*>(std::forward<::UnityEngine::InputSystem::InputActionState___c*>(value));
}
inline ::UnityEngine::InputSystem::InputActionState___c* UnityEngine::InputSystem::InputActionState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputActionState___c*, "<>9", ::UnityEngine::InputSystem::InputActionState___c*>();
}
inline void UnityEngine::InputSystem::InputActionState___c::setStaticF___9__140_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>*, "<>9__140_0", ::UnityEngine::InputSystem::InputActionState___c*>(std::forward<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>* UnityEngine::InputSystem::InputActionState___c::getStaticF___9__140_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>*, "<>9__140_0", ::UnityEngine::InputSystem::InputActionState___c*>();
}
inline void UnityEngine::InputSystem::InputActionState___c::setStaticF___9__140_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__140_1", ::UnityEngine::InputSystem::InputActionState___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::InputActionState___c::getStaticF___9__140_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__140_1", ::UnityEngine::InputSystem::InputActionState___c*>();
}
inline void UnityEngine::InputSystem::InputActionState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_0(::by_ref<::GlobalNamespace::InputActionState_GlobalState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                        {"<SaveAndResetState>b__140_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionState_GlobalState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::InputActionState___c::_SaveAndResetState_b__140_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionState___c*>(),
                        {"<SaveAndResetState>b__140_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionState___c* UnityEngine::InputSystem::InputActionState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionState___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionState___c::InputActionState___c()   {
}
