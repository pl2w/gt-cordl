#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabInteractable.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.get_HandAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandAlignType (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::get_HandAlignment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.get_UsesHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::get_UsesHandPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.get_Slippiness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::get_Slippiness)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.SupportsHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::SupportsHandedness)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.GenerateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::GenerateMovement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.CalculateBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)(::UnityEngine::Pose, float_t, ::Oculus::Interaction::Input::Handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::CalculateBestPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.CalculateBestPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*, float_t, ::Oculus::Interaction::Input::Handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::CalculateBestPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.get_SupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::get_SupportedGrabTypes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.get_PinchGrabRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::get_PinchGrabRules)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractable.get_PalmGrabRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (::Oculus::Interaction::HandGrab::IHandGrabInteractable::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractable::get_PalmGrabRules)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 9}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::HandGrab::HandAlignType Oculus::Interaction::HandGrab::IHandGrabInteractable::get_HandAlignment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandAlignType>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::IHandGrabInteractable::get_UsesHandPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::IHandGrabInteractable::get_Slippiness()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::IHandGrabInteractable::SupportsHandedness(::Oculus::Interaction::Input::Handedness  handedness)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handedness);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::HandGrab::IHandGrabInteractable::GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method, from, to);
}
inline bool Oculus::Interaction::HandGrab::IHandGrabInteractable::CalculateBestPose(::UnityEngine::Pose  userPose, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userPose, handScale, handedness, result);
}
inline void Oculus::Interaction::HandGrab::IHandGrabInteractable::CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userPose, offset, relativeTo, handScale, handedness, result);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::IHandGrabInteractable::get_SupportedGrabTypes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::HandGrab::IHandGrabInteractable::get_PinchGrabRules()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::GrabbingRule Oculus::Interaction::HandGrab::IHandGrabInteractable::get_PalmGrabRules()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::GrabAPI::GrabbingRule>(this, ___internal_method);
}
/// @brief Convert operator to "::Oculus::Interaction::IRelativeToRef"
constexpr  Oculus::Interaction::HandGrab::IHandGrabInteractable::operator ::Oculus::Interaction::IRelativeToRef*() noexcept {
return static_cast<::Oculus::Interaction::IRelativeToRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRelativeToRef"
constexpr ::Oculus::Interaction::IRelativeToRef* Oculus::Interaction::HandGrab::IHandGrabInteractable::i___Oculus__Interaction__IRelativeToRef() noexcept {
return static_cast<::Oculus::Interaction::IRelativeToRef*>(static_cast<void*>(this));
}
