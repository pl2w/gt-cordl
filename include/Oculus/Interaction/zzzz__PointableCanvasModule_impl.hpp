#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvasModule.hpp"
#include "Oculus/Interaction/zzzz__PointableCanvasModule_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__PointableCanvasModule_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableCanvas_def.hpp"
#include "Oculus/Interaction/zzzz__PointableCanvasEventArgs_def.hpp"
#include "Oculus/Interaction/zzzz__PointableCanvasModule_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.add_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::add_WhenSelected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa48527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.remove_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::remove_WhenSelected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa485348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.add_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::add_WhenUnselected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa485414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.remove_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::remove_WhenUnselected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4854e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.add_WhenSelectableHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::add_WhenSelectableHovered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4855b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenSelectableHovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.remove_WhenSelectableHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::remove_WhenSelectableHovered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa485684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenSelectableHovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.add_WhenSelectableUnhovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::add_WhenSelectableUnhovered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa485754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenSelectableUnhovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.remove_WhenSelectableUnhovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*)>(&::Oculus::Interaction::PointableCanvasModule::remove_WhenSelectableUnhovered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa485824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenSelectableUnhovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.add_WhenPointerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*)>(&::Oculus::Interaction::PointableCanvasModule::add_WhenPointerStarted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4858f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenPointerStarted", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.remove_WhenPointerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*)>(&::Oculus::Interaction::PointableCanvasModule::remove_WhenPointerStarted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4859c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenPointerStarted", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.get_ExclusiveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::get_ExclusiveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa485a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"get_ExclusiveMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.set_ExclusiveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(bool)>(&::Oculus::Interaction::PointableCanvasModule::set_ExclusiveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa485a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"set_ExclusiveMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::PointableCanvasModule> (*)()>(&::Oculus::Interaction::PointableCanvasModule::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa485aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.RegisterPointableCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::IPointableCanvas*)>(&::Oculus::Interaction::PointableCanvasModule::RegisterPointableCanvas)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa484f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"RegisterPointableCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.UnregisterPointableCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::IPointableCanvas*)>(&::Oculus::Interaction::PointableCanvasModule::UnregisterPointableCanvas)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa484fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"UnregisterPointableCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.AddPointerCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::Oculus::Interaction::IPointableCanvas*)>(&::Oculus::Interaction::PointableCanvasModule::AddPointerCanvas)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa485aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"AddPointerCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.RemovePointerCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::Oculus::Interaction::IPointableCanvas*)>(&::Oculus::Interaction::PointableCanvasModule::RemovePointerCanvas)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xa485c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"RemovePointerCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.HandlePointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::UnityEngine::Canvas*, ::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableCanvasModule::HandlePointerEvent)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xa4861d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"HandlePointerEvent", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa486640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa48669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4866f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa486a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa486acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.DisableOtherModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::DisableOtherModules)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa4867a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"DisableOtherModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::UpdateModule)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa486b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.FindFirstRaycastWithinCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (*)(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, ::UnityEngine::Canvas*)>(&::Oculus::Interaction::PointableCanvasModule::FindFirstRaycastWithinCanvas)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa486c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"FindFirstRaycastWithinCanvas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.UpdateRaycasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::Oculus::Interaction::PointableCanvasModule_PointerImpl*, ::by_ref<bool>, ::by_ref<bool>)>(&::Oculus::Interaction::PointableCanvasModule::UpdateRaycasts)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0xa486dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"UpdateRaycasts", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::Process)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa487538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.ProcessPointers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::System::Collections::Generic::ICollection_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*, bool)>(&::Oculus::Interaction::PointableCanvasModule::ProcessPointers)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa4875a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ProcessPointers", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.ProcessPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::Oculus::Interaction::PointableCanvasModule_PointerImpl*, bool)>(&::Oculus::Interaction::PointableCanvasModule::ProcessPointer)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa4877e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ProcessPointer", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.HandleSelectableHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::Oculus::Interaction::PointableCanvasModule_PointerImpl*, bool)>(&::Oculus::Interaction::PointableCanvasModule::HandleSelectableHover)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa488050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"HandleSelectableHover", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.HandleSelectablePress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::Oculus::Interaction::PointableCanvasModule_PointerImpl*, bool, bool, bool)>(&::Oculus::Interaction::PointableCanvasModule::HandleSelectablePress)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa488260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"HandleSelectablePress", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.UpdatePointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::UnityEngine::EventSystems::PointerEventData*, bool, bool)>(&::Oculus::Interaction::PointableCanvasModule::UpdatePointerEventData)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0xa48793c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"UpdatePointerEventData", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.ProcessDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Oculus::Interaction::PointableCanvasModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa488438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.ClearPointerSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Oculus::Interaction::PointableCanvasModule::ClearPointerSelection)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4860d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ClearPointerSelection", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule.ShouldStartDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(&::Oculus::Interaction::PointableCanvasModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa488670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ShouldStartDrag", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa4886a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule._Start_b__40_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule::*)()>(&::Oculus::Interaction::PointableCanvasModule::_Start_b__40_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4888f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"<Start>b__40_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__useInitialPressPositionForDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useInitialPressPositionForDrag;
}
constexpr bool const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__useInitialPressPositionForDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useInitialPressPositionForDrag;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__useInitialPressPositionForDrag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useInitialPressPositionForDrag = value;
}
constexpr bool& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__exclusiveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exclusiveMode;
}
constexpr bool const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__exclusiveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exclusiveMode;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__exclusiveMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exclusiveMode = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointerEventCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerEventCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointerEventCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerEventCamera;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__pointerEventCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerEventCamera = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointerMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>* const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointerMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerMap;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__pointerMap(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerMap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__raycastResultCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastResultCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__raycastResultCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastResultCache;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__raycastResultCache(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastResultCache = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointersForDeletion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointersForDeletion;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>* const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointersForDeletion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointersForDeletion;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__pointersForDeletion(::System::Collections::Generic::List_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointersForDeletion = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>*& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointerCanvasActionMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerCanvasActionMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>* const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointerCanvasActionMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerCanvasActionMap;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__pointerCanvasActionMap(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::IPointableCanvas*,::System::Action_1<::Oculus::Interaction::PointerEvent>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerCanvasActionMap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__inputModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputModules;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>* const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__inputModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputModules;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__inputModules(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseInputModule>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputModules = value;
}
constexpr ::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointersToProcessScratch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointersToProcessScratch;
}
constexpr ::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*> const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__pointersToProcessScratch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointersToProcessScratch;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__pointersToProcessScratch(::ArrayW<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointersToProcessScratch = value;
}
constexpr bool& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PointableCanvasModule::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PointableCanvasModule::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::PointableCanvasModule::setStaticF_WhenSelected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenSelected", ::Oculus::Interaction::PointableCanvasModule*>(std::forward<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* Oculus::Interaction::PointableCanvasModule::getStaticF_WhenSelected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenSelected", ::Oculus::Interaction::PointableCanvasModule*>();
}
inline void Oculus::Interaction::PointableCanvasModule::setStaticF_WhenUnselected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenUnselected", ::Oculus::Interaction::PointableCanvasModule*>(std::forward<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* Oculus::Interaction::PointableCanvasModule::getStaticF_WhenUnselected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenUnselected", ::Oculus::Interaction::PointableCanvasModule*>();
}
inline void Oculus::Interaction::PointableCanvasModule::setStaticF_WhenSelectableHovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenSelectableHovered", ::Oculus::Interaction::PointableCanvasModule*>(std::forward<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* Oculus::Interaction::PointableCanvasModule::getStaticF_WhenSelectableHovered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenSelectableHovered", ::Oculus::Interaction::PointableCanvasModule*>();
}
inline void Oculus::Interaction::PointableCanvasModule::setStaticF_WhenSelectableUnhovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenSelectableUnhovered", ::Oculus::Interaction::PointableCanvasModule*>(std::forward<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>* Oculus::Interaction::PointableCanvasModule::getStaticF_WhenSelectableUnhovered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*, "WhenSelectableUnhovered", ::Oculus::Interaction::PointableCanvasModule*>();
}
inline void Oculus::Interaction::PointableCanvasModule::setStaticF_WhenPointerStarted(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*, "WhenPointerStarted", ::Oculus::Interaction::PointableCanvasModule*>(std::forward<::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>* Oculus::Interaction::PointableCanvasModule::getStaticF_WhenPointerStarted()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*, "WhenPointerStarted", ::Oculus::Interaction::PointableCanvasModule*>();
}
inline void Oculus::Interaction::PointableCanvasModule::setStaticF__instance(::UnityW<::Oculus::Interaction::PointableCanvasModule>  value)  {
::cordl_internals::setStaticField<::UnityW<::Oculus::Interaction::PointableCanvasModule>, "_instance", ::Oculus::Interaction::PointableCanvasModule*>(std::forward<::UnityW<::Oculus::Interaction::PointableCanvasModule>>(value));
}
inline ::UnityW<::Oculus::Interaction::PointableCanvasModule> Oculus::Interaction::PointableCanvasModule::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Oculus::Interaction::PointableCanvasModule>, "_instance", ::Oculus::Interaction::PointableCanvasModule*>();
}
inline void Oculus::Interaction::PointableCanvasModule::add_WhenSelected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::remove_WhenSelected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::add_WhenUnselected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::remove_WhenUnselected(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::add_WhenSelectableHovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenSelectableHovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::remove_WhenSelectableHovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenSelectableHovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::add_WhenSelectableUnhovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenSelectableUnhovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::remove_WhenSelectableUnhovered(::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenSelectableUnhovered", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::add_WhenPointerStarted(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"add_WhenPointerStarted", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule::remove_WhenPointerStarted(::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"remove_WhenPointerStarted", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointableCanvasModule_Pointer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Oculus::Interaction::PointableCanvasModule::get_ExclusiveMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"get_ExclusiveMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::set_ExclusiveMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"set_ExclusiveMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Oculus::Interaction::PointableCanvasModule> Oculus::Interaction::PointableCanvasModule::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::PointableCanvasModule>>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::RegisterPointableCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"RegisterPointableCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerCanvas);
}
inline void Oculus::Interaction::PointableCanvasModule::UnregisterPointableCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"UnregisterPointableCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerCanvas);
}
inline void Oculus::Interaction::PointableCanvasModule::AddPointerCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"AddPointerCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerCanvas);
}
inline void Oculus::Interaction::PointableCanvasModule::RemovePointerCanvas(::Oculus::Interaction::IPointableCanvas*  pointerCanvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"RemovePointerCanvas", {}, {::i2c::type_of<::Oculus::Interaction::IPointableCanvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerCanvas);
}
inline void Oculus::Interaction::PointableCanvasModule::HandlePointerEvent(::UnityEngine::Canvas*  canvas, ::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"HandlePointerEvent", {}, {::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvas, evt);
}
inline void Oculus::Interaction::PointableCanvasModule::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::DisableOtherModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"DisableOtherModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::RaycastResult Oculus::Interaction::PointableCanvasModule::FindFirstRaycastWithinCanvas(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  candidates, ::UnityEngine::Canvas*  canvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"FindFirstRaycastWithinCanvas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(nullptr, ___internal_method, candidates, canvas);
}
inline void Oculus::Interaction::PointableCanvasModule::UpdateRaycasts(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, ::by_ref<bool>  pressed, ::by_ref<bool>  released)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"UpdateRaycasts", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, pressed, released);
}
inline void Oculus::Interaction::PointableCanvasModule::Process()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::ProcessPointers(::System::Collections::Generic::ICollection_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*  pointers, bool  clearAndReleasePointers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ProcessPointers", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointers, clearAndReleasePointers);
}
inline void Oculus::Interaction::PointableCanvasModule::ProcessPointer(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, bool  forceRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ProcessPointer", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, forceRelease);
}
inline void Oculus::Interaction::PointableCanvasModule::HandleSelectableHover(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, bool  wasDragging)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"HandleSelectableHover", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, wasDragging);
}
inline void Oculus::Interaction::PointableCanvasModule::HandleSelectablePress(::Oculus::Interaction::PointableCanvasModule_PointerImpl*  pointer, bool  pressed, bool  released, bool  wasDragging)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"HandleSelectablePress", {}, {::i2c::type_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, pressed, released, wasDragging);
}
inline void Oculus::Interaction::PointableCanvasModule::UpdatePointerEventData(::UnityEngine::EventSystems::PointerEventData*  pointerEvent, bool  pressed, bool  released)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"UpdatePointerEventData", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent, pressed, released);
}
inline void Oculus::Interaction::PointableCanvasModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline void Oculus::Interaction::PointableCanvasModule::ClearPointerSelection(::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ClearPointerSelection", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline bool Oculus::Interaction::PointableCanvasModule::ShouldStartDrag(::UnityEngine::Vector2  pressPos, ::UnityEngine::Vector2  currentPos, float_t  threshold, bool  useDragThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"ShouldStartDrag", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void Oculus::Interaction::PointableCanvasModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule::_Start_b__40_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule*>(),
                        {"<Start>b__40_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PointableCanvasModule* Oculus::Interaction::PointableCanvasModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableCanvasModule*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableCanvasModule::PointableCanvasModule()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::*)()>(&::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4860c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0._AddPointerCanvas_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::_AddPointerCanvas_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa488df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0*>(),
                        {"<AddPointerCanvas>b__0", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::PointableCanvasModule>& Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::PointableCanvasModule> const& Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PointableCanvasModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Oculus::Interaction::IPointableCanvas*& Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::__cordl_internal_get_pointerCanvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerCanvas;
}
constexpr ::Oculus::Interaction::IPointableCanvas* const& Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::__cordl_internal_get_pointerCanvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerCanvas;
}
constexpr void Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::__cordl_internal_set_pointerCanvas(::Oculus::Interaction::IPointableCanvas*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerCanvas = value;
}
inline void Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::_AddPointerCanvas_b__0(::Oculus::Interaction::PointerEvent  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0*>(),
                        {"<AddPointerCanvas>b__0", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0* Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableCanvasModule___c__DisplayClass32_0::PointableCanvasModule___c__DisplayClass32_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.get_MarkedForDeletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)()>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::get_MarkedForDeletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_MarkedForDeletion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.set_MarkedForDeletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)(bool)>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::set_MarkedForDeletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"set_MarkedForDeletion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.get_Canvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)()>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::get_Canvas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_Canvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)()>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa488ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.get_HoveredSelectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)()>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::get_HoveredSelectable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_HoveredSelectable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)(int32_t, ::UnityEngine::Canvas*)>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4865bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.Press
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)()>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::Press)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa486610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"Press", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)()>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::Release)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa486628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.ReadAndResetPressedReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)(::by_ref<bool>, ::by_ref<bool>)>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::ReadAndResetPressedReleased)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa487510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"ReadAndResetPressedReleased", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.MarkForDeletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)()>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::MarkForDeletion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4861b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"MarkForDeletion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::SetPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4865f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_PointerImpl.SetHoveredSelectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_PointerImpl::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::PointableCanvasModule_PointerImpl::SetHoveredSelectable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"SetHoveredSelectable", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__MarkedForDeletion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MarkedForDeletion_k__BackingField;
}
constexpr bool const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__MarkedForDeletion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MarkedForDeletion_k__BackingField;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__MarkedForDeletion_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MarkedForDeletion_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvas = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____position = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPosition = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__hoveredSelectable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredSelectable;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__hoveredSelectable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredSelectable;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__hoveredSelectable(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoveredSelectable = value;
}
constexpr bool& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__pressing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressing;
}
constexpr bool const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__pressing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressing;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__pressing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressing = value;
}
constexpr bool& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__pressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressed;
}
constexpr bool const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__pressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressed;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__pressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressed = value;
}
constexpr bool& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__released()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____released;
}
constexpr bool const& Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_get__released() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____released;
}
constexpr void Oculus::Interaction::PointableCanvasModule_PointerImpl::__cordl_internal_set__released(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____released = value;
}
inline bool Oculus::Interaction::PointableCanvasModule_PointerImpl::get_MarkedForDeletion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_MarkedForDeletion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::set_MarkedForDeletion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"set_MarkedForDeletion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Canvas> Oculus::Interaction::PointableCanvasModule_PointerImpl::get_Canvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_Canvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PointableCanvasModule_PointerImpl::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Oculus::Interaction::PointableCanvasModule_PointerImpl::get_HoveredSelectable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"get_HoveredSelectable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::_ctor(int32_t  identifier, ::UnityEngine::Canvas*  canvas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Canvas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier, canvas);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::Press()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"Press", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::ReadAndResetPressedReleased(::by_ref<bool>  pressed, ::by_ref<bool>  released)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"ReadAndResetPressedReleased", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressed, released);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::MarkForDeletion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"MarkForDeletion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::SetPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void Oculus::Interaction::PointableCanvasModule_PointerImpl::SetHoveredSelectable(::UnityEngine::GameObject*  hoveredSelectable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(),
                        {"SetHoveredSelectable", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hoveredSelectable);
}
inline ::Oculus::Interaction::PointableCanvasModule_PointerImpl* Oculus::Interaction::PointableCanvasModule_PointerImpl::New_ctor(int32_t  identifier, ::UnityEngine::Canvas*  canvas)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableCanvasModule_PointerImpl*>(identifier, canvas));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableCanvasModule_PointerImpl::PointableCanvasModule_PointerImpl()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)(int32_t)>(&::Oculus::Interaction::PointableCanvasModule_Pointer::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa4888f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PointableCanvasModule_Pointer::*)()>(&::Oculus::Interaction::PointableCanvasModule_Pointer::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.get_PointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Oculus::Interaction::PointableCanvasModule_Pointer::*)()>(&::Oculus::Interaction::PointableCanvasModule_Pointer::get_PointerEventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"get_PointerEventData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.set_PointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Oculus::Interaction::PointableCanvasModule_Pointer::set_PointerEventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"set_PointerEventData", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.add_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(&::Oculus::Interaction::PointableCanvasModule_Pointer::add_WhenUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa488ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.remove_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(&::Oculus::Interaction::PointableCanvasModule_Pointer::remove_WhenUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa488b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.add_WhenDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)(::System::Action*)>(&::Oculus::Interaction::PointableCanvasModule_Pointer::add_WhenDisposed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa488c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"add_WhenDisposed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.remove_WhenDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)(::System::Action*)>(&::Oculus::Interaction::PointableCanvasModule_Pointer::remove_WhenDisposed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa488cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"remove_WhenDisposed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.InvokeWhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)()>(&::Oculus::Interaction::PointableCanvasModule_Pointer::InvokeWhenUpdated)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa488414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"InvokeWhenUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasModule_Pointer.InvokeWhenDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasModule_Pointer::*)()>(&::Oculus::Interaction::PointableCanvasModule_Pointer::InvokeWhenDisposed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa48791c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"InvokeWhenDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get__Identifier_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Identifier_k__BackingField;
}
constexpr int32_t const& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get__Identifier_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Identifier_k__BackingField;
}
constexpr void Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_set__Identifier_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Identifier_k__BackingField = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get__PointerEventData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointerEventData_k__BackingField;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get__PointerEventData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointerEventData_k__BackingField;
}
constexpr void Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_set__PointerEventData_k__BackingField(::UnityEngine::EventSystems::PointerEventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PointerEventData_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get_WhenUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUpdated;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get_WhenUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUpdated;
}
constexpr void Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_set_WhenUpdated(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenUpdated = value;
}
constexpr ::System::Action*& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get_WhenDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDisposed;
}
constexpr ::System::Action* const& Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_get_WhenDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDisposed;
}
constexpr void Oculus::Interaction::PointableCanvasModule_Pointer::__cordl_internal_set_WhenDisposed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenDisposed = value;
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::_ctor(int32_t  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier);
}
inline int32_t Oculus::Interaction::PointableCanvasModule_Pointer::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerEventData* Oculus::Interaction::PointableCanvasModule_Pointer::get_PointerEventData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"get_PointerEventData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::set_PointerEventData(::UnityEngine::EventSystems::PointerEventData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"set_PointerEventData", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::add_WhenUpdated(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::remove_WhenUpdated(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::add_WhenDisposed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"add_WhenDisposed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::remove_WhenDisposed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"remove_WhenDisposed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::InvokeWhenUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"InvokeWhenUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasModule_Pointer::InvokeWhenDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasModule_Pointer*>(),
                        {"InvokeWhenDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PointableCanvasModule_Pointer* Oculus::Interaction::PointableCanvasModule_Pointer::New_ctor(int32_t  identifier)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableCanvasModule_Pointer*>(identifier));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableCanvasModule_Pointer::PointableCanvasModule_Pointer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Pointer_PointableCanvasModule___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Pointer_PointableCanvasModule___c::*)()>(&::Oculus::Interaction::Pointer_PointableCanvasModule___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa488db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Pointer_PointableCanvasModule___c.__ctor_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Pointer_PointableCanvasModule___c::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Oculus::Interaction::Pointer_PointableCanvasModule___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa488dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(),
                        {"<.ctor>b__0_0", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Pointer_PointableCanvasModule___c.__ctor_b__0_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Pointer_PointableCanvasModule___c::*)()>(&::Oculus::Interaction::Pointer_PointableCanvasModule___c::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa488dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(),
                        {"<.ctor>b__0_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Pointer_PointableCanvasModule___c::setStaticF___9(::Oculus::Interaction::Pointer_PointableCanvasModule___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Pointer_PointableCanvasModule___c*, "<>9", ::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(std::forward<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(value));
}
inline ::Oculus::Interaction::Pointer_PointableCanvasModule___c* Oculus::Interaction::Pointer_PointableCanvasModule___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Pointer_PointableCanvasModule___c*, "<>9", ::Oculus::Interaction::Pointer_PointableCanvasModule___c*>();
}
inline void Oculus::Interaction::Pointer_PointableCanvasModule___c::setStaticF___9__0_0(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, "<>9__0_0", ::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(std::forward<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>(value));
}
inline ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* Oculus::Interaction::Pointer_PointableCanvasModule___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, "<>9__0_0", ::Oculus::Interaction::Pointer_PointableCanvasModule___c*>();
}
inline void Oculus::Interaction::Pointer_PointableCanvasModule___c::setStaticF___9__0_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__0_1", ::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Pointer_PointableCanvasModule___c::getStaticF___9__0_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__0_1", ::Oculus::Interaction::Pointer_PointableCanvasModule___c*>();
}
inline void Oculus::Interaction::Pointer_PointableCanvasModule___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Pointer_PointableCanvasModule___c::__ctor_b__0_0(::UnityEngine::EventSystems::PointerEventData*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(),
                        {"<.ctor>b__0_0", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Oculus::Interaction::Pointer_PointableCanvasModule___c::__ctor_b__0_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>(),
                        {"<.ctor>b__0_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Pointer_PointableCanvasModule___c* Oculus::Interaction::Pointer_PointableCanvasModule___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Pointer_PointableCanvasModule___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Pointer_PointableCanvasModule___c::Pointer_PointableCanvasModule___c()   {
}
