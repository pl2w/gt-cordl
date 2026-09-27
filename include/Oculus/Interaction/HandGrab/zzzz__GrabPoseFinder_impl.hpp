#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/GrabPoseFinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__GrabPoseFinder_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__GrabPoseFinder_FindResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__GrabPoseFinder_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder.get_UsesHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::GrabPoseFinder::*)()>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::get_UsesHandPose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4dcbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"get_UsesHandPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::GrabPoseFinder::*)(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4dcca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder.SupportsHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::GrabPoseFinder::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::SupportsHandedness)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4dcdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"SupportsHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder.FindBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::GrabPoseFinder::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, float_t, ::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::FindBestPose)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4dce54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder.CalculateBestScaleInterpolatedPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::GrabPoseFinder::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Input::Handedness, float_t, ::Oculus::Interaction::Grab::PoseMeasureParameters, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::CalculateBestScaleInterpolatedPose)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0xa4dcf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"CalculateBestScaleInterpolatedPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder.FindInterpolationRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>, ::by_ref<float_t>)>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::FindInterpolationRange)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa4dd3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindInterpolationRange", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder.FindPreviousScaledGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> (*)(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*, float_t, bool)>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::FindPreviousScaledGrabPose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa4dd9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindPreviousScaledGrabPose", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder.FindNextScaledGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> (*)(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*, float_t, bool)>(&::Oculus::Interaction::HandGrab::GrabPoseFinder::FindNextScaledGrabPose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa4ddb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindNextScaledGrabPose", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_get__handGrabPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabPoses;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_get__handGrabPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabPoses;
}
constexpr void Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_set__handGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabPoses = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*& Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_get__interpolationCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpolationCache;
}
constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache* const& Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_get__interpolationCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpolationCache;
}
constexpr void Oculus::Interaction::HandGrab::GrabPoseFinder::__cordl_internal_set__interpolationCache(::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpolationCache = value;
}
inline bool Oculus::Interaction::HandGrab::GrabPoseFinder::get_UsesHandPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"get_UsesHandPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::GrabPoseFinder::_ctor(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  handGrabPoses, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabPoses, relativeTo);
}
inline bool Oculus::Interaction::HandGrab::GrabPoseFinder::SupportsHandedness(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"SupportsHandedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handedness);
}
inline bool Oculus::Interaction::HandGrab::GrabPoseFinder::FindBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindBestPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userPose, offset, handScale, handedness, scoringModifier, result);
}
inline void Oculus::Interaction::HandGrab::GrabPoseFinder::CalculateBestScaleInterpolatedPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::Oculus::Interaction::Input::Handedness  handedness, float_t  handScale, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"CalculateBestScaleInterpolatedPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Grab::PoseMeasureParameters>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userPose, offset, handedness, handScale, scoringModifier, result);
}
inline bool Oculus::Interaction::HandGrab::GrabPoseFinder::FindInterpolationRange(float_t  relativeHandScale, ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  grabPoses, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>  from, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>  to, ::by_ref<float_t>  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindInterpolationRange", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, relativeHandScale, grabPoses, from, to, t);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> Oculus::Interaction::HandGrab::GrabPoseFinder::FindPreviousScaledGrabPose(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  grabPoses, float_t  upLimit, bool  notEqual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindPreviousScaledGrabPose", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>(nullptr, ___internal_method, grabPoses, upLimit, notEqual);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> Oculus::Interaction::HandGrab::GrabPoseFinder::FindNextScaledGrabPose(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  grabPoses, float_t  lowLimit, bool  notEqual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(),
                        {"FindNextScaledGrabPose", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>(nullptr, ___internal_method, grabPoses, lowLimit, notEqual);
}
inline ::Oculus::Interaction::HandGrab::GrabPoseFinder* Oculus::Interaction::HandGrab::GrabPoseFinder::New_ctor(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  handGrabPoses, ::UnityEngine::Transform*  relativeTo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::GrabPoseFinder*>(handGrabPoses, relativeTo));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder::GrabPoseFinder()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::*)()>(&::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4dcd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::__cordl_internal_get_underResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underResult;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::__cordl_internal_get_underResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underResult;
}
constexpr void Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::__cordl_internal_set_underResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___underResult = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::__cordl_internal_get_overResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overResult;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::__cordl_internal_get_overResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overResult;
}
constexpr void Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::__cordl_internal_set_overResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overResult = value;
}
inline void Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache* Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache::GrabPoseFinder_InterpolationCache()   {
}
