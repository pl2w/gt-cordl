#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabPose.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_OVROffsetMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__IGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandGhostProvider_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_OVROffsetMode_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.get_SnapSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::get_SnapSurface)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4e15f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_SnapSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.set_SnapSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*)>(&::Oculus::Interaction::HandGrab::HandGrabPose::set_SnapSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"set_SnapSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.get_HandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandPose* (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::get_HandPose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4dcc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_HandPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.GetOVROffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandGrab::HandGrabPose::GetOVROffset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4e165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"GetOVROffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.get_RelativeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::get_RelativeScale)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4ddcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_RelativeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.get_RelativePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::get_RelativePose)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4e16ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_RelativePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.get_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::get_RelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.get_LocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::get_LocalPose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4e1824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_LocalPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.get_WorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::get_WorldPose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4e17e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_WorldPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e186c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4e1870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.UsesHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::UsesHandPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"UsesHandPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.CalculateBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::UnityEngine::Pose, ::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters, ::UnityEngine::Transform*, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::HandGrabPose::CalculateBestPose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4e1960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.CalculateBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*, ::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::HandGrabPose::CalculateBestPose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4e1a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.CompareNearPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*, ::Oculus::Interaction::Grab::PoseMeasureParameters, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandGrab::HandGrabPose::CompareNearPoses)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa4e1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"CompareNearPoses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.InjectAllHandGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabPose::InjectAllHandGrabPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectAllHandGrabPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.InjectRelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabPose::InjectRelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e1d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.InjectOptionalSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*)>(&::Oculus::Interaction::HandGrab::HandGrabPose::InjectOptionalSurface)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e1d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectOptionalSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose.InjectOptionalHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)(::Oculus::Interaction::HandGrab::HandPose*)>(&::Oculus::Interaction::HandGrab::HandGrabPose::InjectOptionalHandPose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4e1e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectOptionalHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabPose::*)()>(&::Oculus::Interaction::HandGrab::HandGrabPose::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4e1e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__surface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__surface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surface = value;
}
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__snapSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapSurface;
}
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__snapSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapSurface;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__snapSurface(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapSurface = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__usesHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usesHandPose;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__usesHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usesHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__usesHandPose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____usesHandPose = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose*& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__handPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handPose;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose* const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__handPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__handPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handPose = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose*& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__targetHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetHandPose;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose* const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__targetHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__targetHandPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetHandPose = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__ghostProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ghostProvider;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__ghostProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ghostProvider;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__ghostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ghostProvider = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__handGhostProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGhostProvider;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__handGhostProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGhostProvider;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__handGhostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGhostProvider = value;
}
constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__ovrOffsetMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrOffsetMode;
}
constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode const& Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_get__ovrOffsetMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrOffsetMode;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabPose::__cordl_internal_set__ovrOffsetMode(::GlobalNamespace::HandGrabPose_OVROffsetMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ovrOffsetMode = value;
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::setStaticF_OVR_OFFSET_LH(::UnityEngine::Pose  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pose, "OVR_OFFSET_LH", ::Oculus::Interaction::HandGrab::HandGrabPose*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabPose::getStaticF_OVR_OFFSET_LH()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pose, "OVR_OFFSET_LH", ::Oculus::Interaction::HandGrab::HandGrabPose*>();
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::setStaticF_OVR_OFFSET_RH(::UnityEngine::Pose  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pose, "OVR_OFFSET_RH", ::Oculus::Interaction::HandGrab::HandGrabPose*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabPose::getStaticF_OVR_OFFSET_RH()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pose, "OVR_OFFSET_RH", ::Oculus::Interaction::HandGrab::HandGrabPose*>();
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::HandGrab::HandGrabPose::get_SnapSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_SnapSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::set_SnapSurface(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"set_SnapSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::HandGrab::HandPose* Oculus::Interaction::HandGrab::HandGrabPose::get_HandPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_HandPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandPose*>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabPose::GetOVROffset(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"GetOVROffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, handedness);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabPose::get_RelativeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_RelativeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabPose::get_RelativePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_RelativePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::HandGrabPose::get_RelativeTo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabPose::get_LocalPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_LocalPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabPose::get_WorldPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"get_WorldPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabPose::UsesHandPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"UsesHandPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabPose::CalculateBestPose(::UnityEngine::Pose  userPose, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::UnityEngine::Transform*  relativeTo, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userPose, handedness, scoringModifier, relativeTo, result);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userPose, offset, relativeTo, handedness, scoringModifier, result);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::HandGrab::HandGrabPose::CompareNearPoses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPoint, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::UnityEngine::Pose>  bestWorldPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"CompareNearPoses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, worldPoint, offset, relativeTo, scoringModifier, bestWorldPose);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::InjectAllHandGrabPose(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectAllHandGrabPose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::InjectRelativeTo(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::InjectOptionalSurface(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectOptionalSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::InjectOptionalHandPose(::Oculus::Interaction::HandGrab::HandPose*  handPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {"InjectOptionalHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handPose);
}
inline void Oculus::Interaction::HandGrab::HandGrabPose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabPose* Oculus::Interaction::HandGrab::HandGrabPose::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabPose*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabPose::HandGrabPose()   {
}
