#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandJointUtils.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandJointUtils_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandJointId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils.GetHandFingerTip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId (*)(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::GetHandFingerTip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa515500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {"GetHandFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils.IsFingerTip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::IsFingerTip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa515508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {"IsFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils.GetHandFingerProximal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId (*)(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::GetHandFingerProximal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa515518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {"GetHandFingerProximal", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa515594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::setStaticF_FingerToJointList(::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>*, "FingerToJointList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(std::forward<::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>*>(value));
}
inline ::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>* Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::getStaticF_FingerToJointList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>*, "FingerToJointList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::setStaticF_JointToFingerList(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>, "JointToFingerList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(std::forward<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger> Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::getStaticF_JointToFingerList()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>, "JointToFingerList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::setStaticF_JointParentList(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>, "JointParentList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(std::forward<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId> Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::getStaticF_JointParentList()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>, "JointParentList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::setStaticF_JointChildrenList(::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>, "JointChildrenList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(std::forward<::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>>(value));
}
inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>> Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::getStaticF_JointChildrenList()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>, "JointChildrenList", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::setStaticF_JointIds(::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>*, "JointIds", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(std::forward<::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>*>(value));
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>* Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::getStaticF_JointIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>*, "JointIds", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::setStaticF__handFingerProximals(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>, "_handFingerProximals", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(std::forward<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>(value));
}
inline ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId> Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::getStaticF__handFingerProximals()  {
return ::cordl_internals::getStaticField<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>, "_handFingerProximals", ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>();
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::GetHandFingerTip(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {"GetHandFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>(nullptr, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::IsFingerTip(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId  joint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {"IsFingerTip", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, joint);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::GetHandFingerProximal(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {"GetHandFingerProximal", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>(nullptr, ___internal_method, finger);
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils* Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils::HandJointUtils()   {
}
