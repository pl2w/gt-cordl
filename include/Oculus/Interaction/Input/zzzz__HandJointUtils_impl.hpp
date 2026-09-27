#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandJointUtils.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointUtils_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointUtils.GetHandFingerTip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandJointId (*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::HandJointUtils::GetHandFingerTip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4fb648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"GetHandFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointUtils.IsFingerTip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::HandJointUtils::IsFingerTip)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa50089c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"IsFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointUtils.GetHandFingerProximal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandJointId (*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::HandJointUtils::GetHandFingerProximal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa5008b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"GetHandFingerProximal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointUtils.WristJointPosesToLocalRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Pose>, ::by_ref<::ArrayW<::UnityEngine::Quaternion>>)>(&::Oculus::Interaction::Input::HandJointUtils::WristJointPosesToLocalRotations)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa500934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"WristJointPosesToLocalRotations", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandJointUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandJointUtils::*)()>(&::Oculus::Interaction::Input::HandJointUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa500b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::HandJointUtils::setStaticF_FingerToJointList(::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>*, "FingerToJointList", ::Oculus::Interaction::Input::HandJointUtils*>(std::forward<::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>*>(value));
}
inline ::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>* Oculus::Interaction::Input::HandJointUtils::getStaticF_FingerToJointList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>*, "FingerToJointList", ::Oculus::Interaction::Input::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::HandJointUtils::setStaticF_JointToFingerList(::ArrayW<::Oculus::Interaction::Input::HandFinger>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::HandFinger>, "JointToFingerList", ::Oculus::Interaction::Input::HandJointUtils*>(std::forward<::ArrayW<::Oculus::Interaction::Input::HandFinger>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::HandFinger> Oculus::Interaction::Input::HandJointUtils::getStaticF_JointToFingerList()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::HandFinger>, "JointToFingerList", ::Oculus::Interaction::Input::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::HandJointUtils::setStaticF_JointParentList(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::HandJointId>, "JointParentList", ::Oculus::Interaction::Input::HandJointUtils*>(std::forward<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::HandJointId> Oculus::Interaction::Input::HandJointUtils::getStaticF_JointParentList()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::HandJointId>, "JointParentList", ::Oculus::Interaction::Input::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::HandJointUtils::setStaticF_JointChildrenList(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "JointChildrenList", ::Oculus::Interaction::Input::HandJointUtils*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> Oculus::Interaction::Input::HandJointUtils::getStaticF_JointChildrenList()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>, "JointChildrenList", ::Oculus::Interaction::Input::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::HandJointUtils::setStaticF_JointIds(::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*, "JointIds", ::Oculus::Interaction::Input::HandJointUtils*>(std::forward<::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>(value));
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>* Oculus::Interaction::Input::HandJointUtils::getStaticF_JointIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*, "JointIds", ::Oculus::Interaction::Input::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::HandJointUtils::setStaticF__handFingerProximals(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::HandJointId>, "_handFingerProximals", ::Oculus::Interaction::Input::HandJointUtils*>(std::forward<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::HandJointId> Oculus::Interaction::Input::HandJointUtils::getStaticF__handFingerProximals()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::HandJointId>, "_handFingerProximals", ::Oculus::Interaction::Input::HandJointUtils*>();
}
inline ::Oculus::Interaction::Input::HandJointId Oculus::Interaction::Input::HandJointUtils::GetHandFingerTip(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"GetHandFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandJointId>(nullptr, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::HandJointUtils::IsFingerTip(::Oculus::Interaction::Input::HandJointId  joint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"IsFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, joint);
}
inline ::Oculus::Interaction::Input::HandJointId Oculus::Interaction::Input::HandJointUtils::GetHandFingerProximal(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"GetHandFingerProximal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandJointId>(nullptr, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::HandJointUtils::WristJointPosesToLocalRotations(::ArrayW<::UnityEngine::Pose>  jointPoses, ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  joints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {"WristJointPosesToLocalRotations", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jointPoses, joints);
}
inline void Oculus::Interaction::Input::HandJointUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandJointUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandJointUtils* Oculus::Interaction::Input::HandJointUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandJointUtils*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandJointUtils::HandJointUtils()   {
}
