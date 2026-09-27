#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_InputEventControlEnumerator_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_ControlBuilder_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_DeviceBuilder_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_Enumerate_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_InputEventControlCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_InputEventControlEnumerator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::IsPressed)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaf53a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"IsPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.IsActuated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::IsActuated)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xaf53b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"IsActuated", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaf527f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadValueAsObject", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueIntoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, void*, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf53d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadValueIntoBuffer", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadDefaultValueAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf53db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadDefaultValueAsObject", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueFromEventAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf53e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadValueFromEventAsObject", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.WriteValueFromObjectIntoEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Object*)>(&::UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf53f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"WriteValueFromObjectIntoEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.WriteValueIntoState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xaf54024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"WriteValueIntoState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CopyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, void*, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions::CopyState)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaf541a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CopyState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf53c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefault", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaf54328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefault", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaf54564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefaultIgnoringNoise", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaf545d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefaultIgnoringNoise", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareStateIgnoringNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaf5469c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CompareStateIgnoringNoise", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*, void*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xaf54400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CompareState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaf54780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CompareState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaf5482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"HasValueChangeInState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaf548d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"HasValueChangeInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf53edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetStatePtrFromStateEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEventUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xaf549b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetStatePtrFromStateEventUnchecked", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ResetToDefaultStateInEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xaf54cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ResetToDefaultStateInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl_1<float_t>*, void*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaf54e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"AccumulateValueInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<float_t>*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*, void*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaf54f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"AccumulateValueInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.BuildPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, ::System::Text::StringBuilder*)>(&::UnityEngine::InputSystem::InputControlExtensions::BuildPath)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xaf55060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"BuildPath", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.EnumerateControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_InputEventControlCollection (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::GlobalNamespace::InputControlExtensions_Enumerate, ::UnityEngine::InputSystem::InputDevice*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::EnumerateControls)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaf55334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"EnumerateControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::GlobalNamespace::InputControlExtensions_Enumerate>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.EnumerateChangedControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_InputEventControlCollection (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf55554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"EnumerateChangedControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(&::UnityEngine::InputSystem::InputControlExtensions::HasButtonPress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaf5558c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"HasButtonPress", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetFirstButtonPressOrNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(&::UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaf516f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetFirstButtonPressOrNull", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetAllButtonPresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(&::UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf55994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetAllButtonPresses", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_ControlBuilder (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaf55a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlExtensions_DeviceBuilder (*)(::UnityEngine::InputSystem::InputDevice*, int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xaf55b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline TControl UnityEngine::InputSystem::InputControlExtensions::FindInParentChain(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"FindInParentChain", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::IsPressed(::UnityEngine::InputSystem::InputControl*  control, float_t  buttonPressPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"IsPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, buttonPressPoint);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::IsActuated(::UnityEngine::InputSystem::InputControl*  control, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"IsActuated", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, threshold);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadValueAsObject", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, control);
}
inline void UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer(::UnityEngine::InputSystem::InputControl*  control, void*  buffer, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadValueIntoBuffer", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadDefaultValueAsObject", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, control);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"ReadValueFromEvent", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, control, inputEvent);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline bool UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent, ::by_ref<TValue>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"ReadValueFromEvent", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::by_ref<TValue>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, inputEvent, value);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ReadValueFromEventAsObject", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, control, inputEvent);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"ReadUnprocessedValueFromEvent", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, control, eventPtr);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline bool UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent, ::by_ref<TValue>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"ReadUnprocessedValueFromEvent", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::by_ref<TValue>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, inputEvent, value);
}
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"WriteValueFromObjectIntoEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, eventPtr, value);
}
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"WriteValueIntoState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, statePtr);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl*  control, TValue  value, void*  statePtr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"WriteValueIntoState", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, statePtr);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, void*  statePtr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"WriteValueIntoState", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, statePtr);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, void*  statePtr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"WriteValueIntoState", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, statePtr);
}
template<typename TValue,typename TState>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TState, ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, ::by_ref<TState>  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"WriteValueIntoState", {::i2c::class_of<TValue>(), ::i2c::class_of<TState>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::by_ref<TState>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, state);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl*  control, TValue  value, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"WriteValueIntoEvent", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, eventPtr);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"WriteValueIntoEvent", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, eventPtr);
}
inline void UnityEngine::InputSystem::InputControlExtensions::CopyState(::UnityEngine::InputSystem::InputDevice*  device, void*  buffer, int32_t  bufferSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CopyState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, buffer, bufferSizeInBytes);
}
template<typename TState>
requires(::cordl_internals::type_constraint<TState, ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState>)
inline void UnityEngine::InputSystem::InputControlExtensions::CopyState(::UnityEngine::InputSystem::InputDevice*  device, ::by_ref<TState>  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"CopyState", {::i2c::class_of<TState>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<TState>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, state);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefault", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr, void*  maskPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefault", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefaultIgnoringNoise", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CheckStateIsAtDefaultIgnoringNoise", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CompareStateIgnoringNoise", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareState(::UnityEngine::InputSystem::InputControl*  control, void*  firstStatePtr, void*  secondStatePtr, void*  maskPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CompareState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, firstStatePtr, secondStatePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareState(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr, void*  maskPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"CompareState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState(::UnityEngine::InputSystem::InputControl*  control, void*  statePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"HasValueChangeInState", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"HasValueChangeInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, eventPtr);
}
inline void* UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetStatePtrFromStateEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, control, eventPtr);
}
inline void* UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::Utilities::FourCC  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetStatePtrFromStateEventUnchecked", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, control, eventPtr, eventType);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"ResetToDefaultStateInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, eventPtr);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::InputSystem::InputControlExtensions::QueueValueChange(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, double_t  time)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"QueueValueChange", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<double_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, time);
}
inline void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<float_t>*  control, void*  currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"AccumulateValueInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<float_t>*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
inline void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*  control, void*  currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"AccumulateValueInEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline void UnityEngine::InputSystem::InputControlExtensions::FindControlsRecursive(::UnityEngine::InputSystem::InputControl*  parent, ::System::Collections::Generic::IList_1<TControl>*  controls, ::System::Func_2<TControl,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                    {"FindControlsRecursive", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<TControl>*>(), ::i2c::type_of<::System::Func_2<TControl,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parent, controls, predicate);
}
inline ::StringW UnityEngine::InputSystem::InputControlExtensions::BuildPath(::UnityEngine::InputSystem::InputControl*  control, ::StringW  deviceLayout, ::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"BuildPath", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, control, deviceLayout, builder);
}
inline ::GlobalNamespace::InputControlExtensions_InputEventControlCollection UnityEngine::InputSystem::InputControlExtensions::EnumerateControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::GlobalNamespace::InputControlExtensions_Enumerate  flags, ::UnityEngine::InputSystem::InputDevice*  device, float_t  magnitudeThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"EnumerateControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::GlobalNamespace::InputControlExtensions_Enumerate>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(nullptr, ___internal_method, eventPtr, flags, device, magnitudeThreshold);
}
inline ::GlobalNamespace::InputControlExtensions_InputEventControlCollection UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device, float_t  magnitudeThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"EnumerateChangedControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_InputEventControlCollection>(nullptr, ___internal_method, eventPtr, device, magnitudeThreshold);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasButtonPress(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"HasButtonPress", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetFirstButtonPressOrNull", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"GetAllButtonPresses", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
inline ::GlobalNamespace::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_ControlBuilder>(nullptr, ___internal_method, control);
}
inline ::GlobalNamespace::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(::UnityEngine::InputSystem::InputDevice*  device, int32_t  controlCount, int32_t  usageCount, int32_t  aliasCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlExtensions_DeviceBuilder>(nullptr, ___internal_method, device, controlCount, usageCount, aliasCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions::InputControlExtensions()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)(int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf55a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaf5705c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xaf57080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__m__Finally1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf572d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf572e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf572ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf57324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaf5732c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(&::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf573d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::InputControl* const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_eventPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_eventPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventPtr;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set_eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventPtr = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__eventPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__eventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__eventPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__eventPtr;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___3__eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__eventPtr = value;
}
constexpr float_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_magnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_magnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set_magnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnitude = value;
}
constexpr float_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__magnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__magnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__magnitude;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___3__magnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__magnitude = value;
}
constexpr bool& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_buttonControlsOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonControlsOnly;
}
constexpr bool const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_buttonControlsOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonControlsOnly;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set_buttonControlsOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonControlsOnly = value;
}
constexpr bool& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__buttonControlsOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__buttonControlsOnly;
}
constexpr bool const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__buttonControlsOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__buttonControlsOnly;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___3__buttonControlsOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__buttonControlsOnly = value;
}
constexpr ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___7__wrap1(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr  UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr  UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::InputControlExtensions__GetAllButtonPresses_d__43()   {
}
