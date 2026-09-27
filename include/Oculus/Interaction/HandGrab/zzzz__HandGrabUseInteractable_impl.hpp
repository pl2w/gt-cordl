#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUseInteractable.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_impl.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUseInteractable_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUseInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabUseDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.get_HandUseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_HandUseDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_HandUseDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.set_HandUseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_HandUseDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_HandUseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.get_UseFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_UseFingers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4e3740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_UseFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.set_UseFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::Oculus::Interaction::GrabAPI::GrabbingRule)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_UseFingers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4e3754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_UseFingers", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.get_StrengthDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_StrengthDeadzone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_StrengthDeadzone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.set_StrengthDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(float_t)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_StrengthDeadzone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_StrengthDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.get_UseProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_UseProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_UseProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.set_UseProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(float_t)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_UseProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_UseProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.get_RelaxGrabPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_RelaxGrabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_RelaxGrabPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.get_TightGrabPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_TightGrabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_TightGrabPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.get_UseStrengthDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_UseStrengthDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_UseStrengthDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::Reset)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4e37a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4e389c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.SelectingInteractorAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::SelectingInteractorAdded)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4e391c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.SelectingInteractorRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::SelectingInteractorRemoved)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4e39f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.ComputeUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(float_t)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::ComputeUseStrength)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4e3ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.FindBestHandPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(float_t, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>, ::by_ref<float_t>)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::FindBestHandPoses)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4e3ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"FindBestHandPoses", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.FindScaledHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*, float_t, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::FindScaledHandPose)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa4e3c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"FindScaledHandPose", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.InjectOptionalForwardUseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::InjectOptionalForwardUseDelegate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e3dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"InjectOptionalForwardUseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.InjectOptionalRelaxedHandGrabPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::InjectOptionalRelaxedHandGrabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"InjectOptionalRelaxedHandGrabPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable.InjectOptionalTightHandGrabPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::InjectOptionalTightHandGrabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"InjectOptionalTightHandGrabPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractable::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractable::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4e3e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__handUseDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handUseDelegate;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__handUseDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handUseDelegate;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_set__handUseDelegate(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handUseDelegate = value;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__HandUseDelegate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandUseDelegate_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* const& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__HandUseDelegate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandUseDelegate_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_set__HandUseDelegate_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandUseDelegate_k__BackingField = value;
}
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__useFingers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useFingers;
}
constexpr ::Oculus::Interaction::GrabAPI::GrabbingRule const& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__useFingers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useFingers;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_set__useFingers(::Oculus::Interaction::GrabAPI::GrabbingRule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useFingers = value;
}
constexpr float_t& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__strengthDeadzone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strengthDeadzone;
}
constexpr float_t const& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__strengthDeadzone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strengthDeadzone;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_set__strengthDeadzone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strengthDeadzone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__relaxedHandGrabPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaxedHandGrabPoses;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__relaxedHandGrabPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaxedHandGrabPoses;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_set__relaxedHandGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relaxedHandGrabPoses = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__tightHandGrabPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tightHandGrabPoses;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__tightHandGrabPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tightHandGrabPoses;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_set__tightHandGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tightHandGrabPoses = value;
}
constexpr float_t& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__UseProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseProgress_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_get__UseProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseProgress_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractable::__cordl_internal_set__UseProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseProgress_k__BackingField = value;
}
inline ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_HandUseDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_HandUseDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_HandUseDelegate(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_HandUseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_UseFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_UseFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_UseFingers(::Oculus::Interaction::GrabAPI::GrabbingRule  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_UseFingers", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::GrabbingRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_StrengthDeadzone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_StrengthDeadzone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_StrengthDeadzone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_StrengthDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_UseProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_UseProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::set_UseProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"set_UseProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_RelaxGrabPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_RelaxGrabPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_TightGrabPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_TightGrabPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabUseInteractable::get_UseStrengthDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"get_UseStrengthDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::SelectingInteractorAdded(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::SelectingInteractorRemoved(::Oculus::Interaction::HandGrab::HandGrabUseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabUseInteractable::ComputeUseStrength(float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, strength);
}
inline bool Oculus::Interaction::HandGrab::HandGrabUseInteractable::FindBestHandPoses(float_t  handScale, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  relaxedHandPose, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  tightHandPose, ::by_ref<float_t>  score)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"FindBestHandPoses", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handScale, relaxedHandPose, tightHandPose, score);
}
inline bool Oculus::Interaction::HandGrab::HandGrabUseInteractable::FindScaledHandPose(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  _handGrabPoses, float_t  handScale, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  handPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"FindScaledHandPose", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _handGrabPoses, handScale, handPose);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::InjectOptionalForwardUseDelegate(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*  useDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"InjectOptionalForwardUseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useDelegate);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::InjectOptionalRelaxedHandGrabPoints(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  relaxedHandGrabPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"InjectOptionalRelaxedHandGrabPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relaxedHandGrabPoints);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::InjectOptionalTightHandGrabPoints(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  tightHandGrabPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {"InjectOptionalTightHandGrabPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tightHandGrabPoints);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractable* Oculus::Interaction::HandGrab::HandGrabUseInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabUseInteractable::HandGrabUseInteractable()   {
}
