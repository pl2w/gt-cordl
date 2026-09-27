#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIToolkitHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelInputConfiguration_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__InteractorHitData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerHitData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIToolkitHandler_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.get_uiToolkitSupportEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::get_uiToolkitSupportEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4412ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"get_uiToolkitSupportEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.set_uiToolkitSupportEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::set_uiToolkitSupportEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb441344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"set_uiToolkitSupportEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::get_count)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb4413a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::Register)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xb44141c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::Unregister)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb441678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.TryGetPointerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::TryGetPointerIndex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4418f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"TryGetPointerIndex", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.UpdateInteractorHitData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::UpdateInteractorHitData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4419b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"UpdateInteractorHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.TryGetInteractorHitData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::TryGetInteractorHitData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb441a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"TryGetInteractorHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.ClearInteractorHitData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ClearInteractorHitData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb441aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ClearInteractorHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::Clear)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb441b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::IsRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb441cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.HandlePointerUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::HandlePointerUpdate)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xb441d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"HandlePointerUpdate", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.TryGetPointerHitData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::TryGetPointerHitData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb442554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"TryGetPointerHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.SetZDepthForInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::SetZDepthForInteractor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xb4426ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"SetZDepthForInteractor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.ResetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ResetDepth)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xb4429e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ResetDepth", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.ClearZDepthForInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ClearZDepthForInteractor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb441810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ClearZDepthForInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.UpdateEventSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::UpdateEventSystem)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb442cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"UpdateEventSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.IsValidUIToolkitInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::IsValidUIToolkitInteraction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb442d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"IsValidUIToolkitInteraction", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.HasUIDocument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::HasUIDocument)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb442e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"HasUIDocument", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.ShouldCheckPanelInputConfigurationValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ShouldCheckPanelInputConfigurationValidation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb4421e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ShouldCheckPanelInputConfigurationValidation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler.ValidatePanelInputConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ValidatePanelInputConfiguration)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb442338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ValidatePanelInputConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_k_ResetPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "k_ResetPos", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_k_ResetPos()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "k_ResetPos", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF__uiToolkitSupportEnabled_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<uiToolkitSupportEnabled>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF__uiToolkitSupportEnabled_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<uiToolkitSupportEnabled>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_RegisteredInteractors(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>*, "s_RegisteredInteractors", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_RegisteredInteractors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>*, "s_RegisteredInteractors", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_InteractorHitData(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>*, "s_InteractorHitData", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_InteractorHitData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>*, "s_InteractorHitData", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_UsedIndices(::ArrayW<bool>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "s_UsedIndices", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_UsedIndices()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "s_UsedIndices", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_LastWasDown(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_LastWasDown", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_LastWasDown()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_LastWasDown", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_WasReset(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_WasReset", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_WasReset()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_WasReset", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_PanelInputConfigurationRef(::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>, "s_PanelInputConfigurationRef", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_PanelInputConfigurationRef()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>, "s_PanelInputConfigurationRef", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_EventSystemValidated(bool  value)  {
::cordl_internals::setStaticField<bool, "s_EventSystemValidated", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_EventSystemValidated()  {
return ::cordl_internals::getStaticField<bool, "s_EventSystemValidated", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_PanelInputConfigurationValidated(bool  value)  {
::cordl_internals::setStaticField<bool, "s_PanelInputConfigurationValidated", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_PanelInputConfigurationValidated()  {
return ::cordl_internals::getStaticField<bool, "s_PanelInputConfigurationValidated", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_DidCheckPanelInputConfiguration(bool  value)  {
::cordl_internals::setStaticField<bool, "s_DidCheckPanelInputConfiguration", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_DidCheckPanelInputConfiguration()  {
return ::cordl_internals::getStaticField<bool, "s_DidCheckPanelInputConfiguration", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_InteractorElements(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>*, "s_InteractorElements", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_InteractorElements()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::UIElements::VisualElement*>*, "s_InteractorElements", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::setStaticF_s_InitialZDepth(::System::Collections::Generic::Dictionary_2<uint32_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,float_t>*, "s_InitialZDepth", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,float_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t,float_t>* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::getStaticF_s_InitialZDepth()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,float_t>*, "s_InitialZDepth", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::get_uiToolkitSupportEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"get_uiToolkitSupportEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::set_uiToolkitSupportEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"set_uiToolkitSupportEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::Register(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::Unregister(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::TryGetPointerIndex(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"TryGetPointerIndex", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, index);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::UpdateInteractorHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"UpdateInteractorHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor, hitData);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::TryGetInteractorHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"TryGetInteractorHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::InteractorHitData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, hitData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ClearInteractorHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ClearInteractorHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::HandlePointerUpdate(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, bool  isUiSelectInputActive, bool  shouldReset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"HandlePointerUpdate", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor, pos, rot, isUiSelectInputActive, shouldReset);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::TryGetPointerHitData(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData>  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"TryGetPointerHitData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerHitData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, hitData);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::SetZDepthForInteractor(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"SetZDepthForInteractor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ve, interactor, z);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ResetDepth(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ResetDepth", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ClearZDepthForInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ClearZDepthForInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::UpdateEventSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"UpdateEventSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::IsValidUIToolkitInteraction(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"IsValidUIToolkitInteraction", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliders);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::HasUIDocument(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"HasUIDocument", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collider);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ShouldCheckPanelInputConfigurationValidation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ShouldCheckPanelInputConfigurationValidation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::ValidatePanelInputConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler*>(),
                        {"ValidatePanelInputConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler::XRUIToolkitHandler()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb441670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::__cordl_internal_get_interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::__cordl_internal_get_interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::__cordl_internal_set_interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactor = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitHandler_InteractorInfo::XRUIToolkitHandler_InteractorInfo()   {
}
