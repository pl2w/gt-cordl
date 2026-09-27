#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbInteractable.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbSettingsDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationMultiAnchorVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.get_climbProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.set_climbProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb456ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.get_climbTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbTransform)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb456ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.set_climbTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb456b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.get_filterInteractionByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_filterInteractionByDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_filterInteractionByDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.set_filterInteractionByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_filterInteractionByDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_filterInteractionByDistance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.get_maxInteractionDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_maxInteractionDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.set_maxInteractionDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_maxInteractionDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_maxInteractionDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.get_climbAssistanceTeleportVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbAssistanceTeleportVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbAssistanceTeleportVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.set_climbAssistanceTeleportVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbAssistanceTeleportVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb456b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbAssistanceTeleportVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.get_climbSettingsOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbSettingsOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbSettingsOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.set_climbSettingsOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbSettingsOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb456ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbSettingsOverride", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::OnValidate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb456bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 114}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb456c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb456c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.IsHoverableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::IsHoverableBy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb456d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.IsSelectableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::IsSelectableBy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb456d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::OnSelectEntered)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb456e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4572dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4574f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_set_m_ClimbProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClimbProvider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_set_m_ClimbTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClimbTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_FilterInteractionByDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FilterInteractionByDistance;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_FilterInteractionByDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FilterInteractionByDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_set_m_FilterInteractionByDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FilterInteractionByDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_MaxInteractionDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxInteractionDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_MaxInteractionDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxInteractionDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_set_m_MaxInteractionDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxInteractionDistance = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbAssistanceTeleportVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbAssistanceTeleportVolume;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbAssistanceTeleportVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbAssistanceTeleportVolume;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_set_m_ClimbAssistanceTeleportVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClimbAssistanceTeleportVolume = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbSettingsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbSettingsOverride;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_get_m_ClimbSettingsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbSettingsOverride;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::__cordl_internal_set_m_ClimbSettingsOverride(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClimbSettingsOverride = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_filterInteractionByDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_filterInteractionByDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_filterInteractionByDistance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_filterInteractionByDistance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_maxInteractionDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_maxInteractionDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_maxInteractionDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_maxInteractionDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume> UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbAssistanceTeleportVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbAssistanceTeleportVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbAssistanceTeleportVolume(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbAssistanceTeleportVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::get_climbSettingsOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"get_climbSettingsOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::set_climbSettingsOverride(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {"set_climbSettingsOverride", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 114}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable::ClimbInteractable()   {
}
