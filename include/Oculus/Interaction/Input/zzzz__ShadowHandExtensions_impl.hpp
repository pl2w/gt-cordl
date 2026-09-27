#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ShadowHandExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ShadowHandExtensions_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ShadowHand_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHandExtensions.FromHandRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::ShadowHandExtensions::FromHandRoot)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa512d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromHandRoot", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHandExtensions.FromHandFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::IHand*, bool)>(&::Oculus::Interaction::Input::ShadowHandExtensions::FromHandFingers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa512ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromHandFingers", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHandExtensions.FromJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::Input::ShadowHand*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*, bool)>(&::Oculus::Interaction::Input::ShadowHandExtensions::FromJoints)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa512f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromJoints", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ShadowHandExtensions.FromHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::IHand*, bool)>(&::Oculus::Interaction::Input::ShadowHandExtensions::FromHand)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa51317c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::ShadowHandExtensions::FromHandRoot(::Oculus::Interaction::Input::ShadowHand*  shadow, ::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromHandRoot", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shadow, hand);
}
inline void Oculus::Interaction::Input::ShadowHandExtensions::FromHandFingers(::Oculus::Interaction::Input::ShadowHand*  shadow, ::Oculus::Interaction::Input::IHand*  hand, bool  flipHandedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromHandFingers", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shadow, hand, flipHandedness);
}
inline void Oculus::Interaction::Input::ShadowHandExtensions::FromJoints(::Oculus::Interaction::Input::ShadowHand*  shadow, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  localJointPoses, bool  flipHandedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromJoints", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shadow, localJointPoses, flipHandedness);
}
inline void Oculus::Interaction::Input::ShadowHandExtensions::FromHand(::Oculus::Interaction::Input::ShadowHand*  shadow, ::Oculus::Interaction::Input::IHand*  hand, bool  flipHandedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ShadowHandExtensions*>(),
                        {"FromHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shadow, hand, flipHandedness);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ShadowHandExtensions::ShadowHandExtensions()   {
}
