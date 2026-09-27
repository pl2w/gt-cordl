#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Samples/BodyPoseSwitcher.hpp"
#include "Oculus/Interaction/Body/Samples/zzzz__BodyPoseSwitcher_PoseSource_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Body/Samples/zzzz__BodyPoseSwitcher_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "Oculus/Interaction/Body/Samples/zzzz__BodyPoseSwitcher_PoseSource_def.hpp"
#include "Oculus/Interaction/Body/Samples/zzzz__BodyPoseSwitcher_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.add_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)(::System::Action*)>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::add_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa434080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.remove_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)(::System::Action*)>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::remove_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa43411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.get_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::get_SkeletonMapping)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4341b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa43428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa43435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.get_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyPoseSwitcher_PoseSource (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::get_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43442c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"get_Source", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.set_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)(::GlobalNamespace::BodyPoseSwitcher_PoseSource)>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::set_Source)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa434434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"set_Source", {}, {::i2c::type_of<::GlobalNamespace::BodyPoseSwitcher_PoseSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.UsePoseA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::UsePoseA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa434468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"UsePoseA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.UsePoseB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::UsePoseB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa434470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"UsePoseB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa434478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa434518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::OnEnable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa434544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::OnDisable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa4346ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.OnPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)(::GlobalNamespace::BodyPoseSwitcher_PoseSource)>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::OnPoseUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa43489c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"OnPoseUpdated", {}, {::i2c::type_of<::GlobalNamespace::BodyPoseSwitcher_PoseSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher.GetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose* (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::GetPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa434270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"GetPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4348cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher._OnEnable_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnEnable_b__21_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4349c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnEnable>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher._OnEnable_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnEnable_b__21_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4349f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnEnable>b__21_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher._OnDisable_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnDisable_b__22_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa434a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnDisable>b__22_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher._OnDisable_b__22_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnDisable_b__22_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa434a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnDisable>b__22_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get_WhenBodyPoseUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get_WhenBodyPoseUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenBodyPoseUpdated = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__poseA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseA;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__poseA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseA;
}
constexpr void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_set__poseA(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseA = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get_PoseA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseA;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get_PoseA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseA;
}
constexpr void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_set_PoseA(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoseA = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__poseB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseB;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__poseB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseB;
}
constexpr void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_set__poseB(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseB = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get_PoseB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseB;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get_PoseB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseB;
}
constexpr void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_set_PoseB(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoseB = value;
}
constexpr ::GlobalNamespace::BodyPoseSwitcher_PoseSource& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::GlobalNamespace::BodyPoseSwitcher_PoseSource const& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_set__source(::GlobalNamespace::BodyPoseSwitcher_PoseSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr bool& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::add_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::remove_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::Samples::BodyPoseSwitcher::get_SkeletonMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::Samples::BodyPoseSwitcher::GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::Samples::BodyPoseSwitcher::GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline ::GlobalNamespace::BodyPoseSwitcher_PoseSource Oculus::Interaction::Body::Samples::BodyPoseSwitcher::get_Source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"get_Source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyPoseSwitcher_PoseSource>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::set_Source(::GlobalNamespace::BodyPoseSwitcher_PoseSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"set_Source", {}, {::i2c::type_of<::GlobalNamespace::BodyPoseSwitcher_PoseSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::UsePoseA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"UsePoseA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::UsePoseB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"UsePoseB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::OnPoseUpdated(::GlobalNamespace::BodyPoseSwitcher_PoseSource  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"OnPoseUpdated", {}, {::i2c::type_of<::GlobalNamespace::BodyPoseSwitcher_PoseSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Oculus::Interaction::Body::PoseDetection::IBodyPose* Oculus::Interaction::Body::Samples::BodyPoseSwitcher::GetPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"GetPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnEnable_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnEnable>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnEnable_b__21_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnEnable>b__21_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnDisable_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnDisable>b__22_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher::_OnDisable_b__22_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>(),
                        {"<OnDisable>b__22_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher* Oculus::Interaction::Body::Samples::BodyPoseSwitcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr  Oculus::Interaction::Body::Samples::BodyPoseSwitcher::operator ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* Oculus::Interaction::Body::Samples::BodyPoseSwitcher::i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher::BodyPoseSwitcher()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa434ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c.__ctor_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::*)()>(&::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::__ctor_b__25_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa434aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>(),
                        {"<.ctor>b__25_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::setStaticF___9(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*, "<>9", ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>(std::forward<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>(value));
}
inline ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c* Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*, "<>9", ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>();
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::setStaticF___9__25_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__25_0", ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__25_0", ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>();
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::__ctor_b__25_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>(),
                        {"<.ctor>b__25_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c* Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c::BodyPoseSwitcher___c()   {
}
