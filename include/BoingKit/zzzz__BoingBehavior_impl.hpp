#pragma once
// IWYU pragma private; include "BoingKit/BoingBehavior.hpp"
#include "BoingKit/zzzz__BoingBase_impl.hpp"
#include "BoingKit/zzzz__BoingManager_TranslationLockSpace_impl.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingBehavior_def.hpp"
#include "BoingKit/zzzz__BoingWork_Output_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "BoingKit/zzzz__QuaternionSpring_def.hpp"
#include "BoingKit/zzzz__SharedBoingParams_def.hpp"
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingBehavior.get_PositionSpring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BoingKit::Vector3Spring (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::get_PositionSpring)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e11620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"get_PositionSpring", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.set_PositionSpring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)(::BoingKit::Vector3Spring)>(&::BoingKit::BoingBehavior::set_PositionSpring)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e11630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"set_PositionSpring", {}, {::i2c::type_of<::BoingKit::Vector3Spring>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.get_RotationSpring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BoingKit::QuaternionSpring (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::get_RotationSpring)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e11648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"get_RotationSpring", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.set_RotationSpring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)(::BoingKit::QuaternionSpring)>(&::BoingKit::BoingBehavior::set_RotationSpring)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e11658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"set_RotationSpring", {}, {::i2c::type_of<::BoingKit::QuaternionSpring>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.get_ScaleSpring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BoingKit::Vector3Spring (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::get_ScaleSpring)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e11670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"get_ScaleSpring", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.set_ScaleSpring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)(::BoingKit::Vector3Spring)>(&::BoingKit::BoingBehavior::set_ScaleSpring)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e11680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"set_ScaleSpring", {}, {::i2c::type_of<::BoingKit::Vector3Spring>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e11698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.Reboot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::Reboot)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5e11708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                    {::i2c::class_of<::BoingKit::BoingBehavior*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e118f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                    {::i2c::class_of<::BoingKit::BoingBehavior*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1190c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e11914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                    {::i2c::class_of<::BoingKit::BoingBehavior*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::Register)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e11920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                    {::i2c::class_of<::BoingKit::BoingBehavior*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::Unregister)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e11a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                    {::i2c::class_of<::BoingKit::BoingBehavior*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.UpdateFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::UpdateFlags)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e11b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"UpdateFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.PrepareExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::PrepareExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e11c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                    {::i2c::class_of<::BoingKit::BoingBehavior*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.PrepareExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)(bool)>(&::BoingKit::BoingBehavior::PrepareExecute)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5e11c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"PrepareExecute", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)(float_t)>(&::BoingKit::BoingBehavior::Execute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e11e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"Execute", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.PullResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::PullResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e11e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"PullResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.GatherOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)(::by_ref<::GlobalNamespace::BoingWork_Output>)>(&::BoingKit::BoingBehavior::GatherOutput)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e12098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"GatherOutput", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Output>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.PullResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)(::by_ref<::GlobalNamespace::BoingWork_Params>)>(&::BoingKit::BoingBehavior::PullResults)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5e11e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"PullResults", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBehavior.Restore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBehavior::*)()>(&::BoingKit::BoingBehavior::Restore)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5e12174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                    {::i2c::class_of<::BoingKit::BoingBehavior*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoingManager_UpdateMode& BoingKit::BoingBehavior::__cordl_internal_get_UpdateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMode;
}
constexpr ::GlobalNamespace::BoingManager_UpdateMode const& BoingKit::BoingBehavior::__cordl_internal_get_UpdateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMode;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_UpdateMode(::GlobalNamespace::BoingManager_UpdateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateMode = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_TwoDDistanceCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDDistanceCheck;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_TwoDDistanceCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDDistanceCheck;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_TwoDDistanceCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwoDDistanceCheck = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_TwoDPositionInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDPositionInfluence;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_TwoDPositionInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDPositionInfluence;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_TwoDPositionInfluence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwoDPositionInfluence = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_TwoDRotationInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDRotationInfluence;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_TwoDRotationInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDRotationInfluence;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_TwoDRotationInfluence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwoDRotationInfluence = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_EnablePositionEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePositionEffect;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_EnablePositionEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePositionEffect;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_EnablePositionEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnablePositionEffect = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_EnableRotationEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRotationEffect;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_EnableRotationEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRotationEffect;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_EnableRotationEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableRotationEffect = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_EnableScaleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableScaleEffect;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_EnableScaleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableScaleEffect;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_EnableScaleEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableScaleEffect = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_GlobalReactionUpVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalReactionUpVector;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_GlobalReactionUpVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalReactionUpVector;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_GlobalReactionUpVector(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalReactionUpVector = value;
}
constexpr ::GlobalNamespace::BoingManager_TranslationLockSpace& BoingKit::BoingBehavior::__cordl_internal_get_TranslationLockSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TranslationLockSpace;
}
constexpr ::GlobalNamespace::BoingManager_TranslationLockSpace const& BoingKit::BoingBehavior::__cordl_internal_get_TranslationLockSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TranslationLockSpace;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_TranslationLockSpace(::GlobalNamespace::BoingManager_TranslationLockSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TranslationLockSpace = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_LockTranslationX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockTranslationX;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_LockTranslationX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockTranslationX;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_LockTranslationX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockTranslationX = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_LockTranslationY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockTranslationY;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_LockTranslationY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockTranslationY;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_LockTranslationY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockTranslationY = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_LockTranslationZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockTranslationZ;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_LockTranslationZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockTranslationZ;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_LockTranslationZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockTranslationZ = value;
}
constexpr ::GlobalNamespace::BoingWork_Params& BoingKit::BoingBehavior::__cordl_internal_get_Params()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr ::GlobalNamespace::BoingWork_Params const& BoingKit::BoingBehavior::__cordl_internal_get_Params() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_Params(::GlobalNamespace::BoingWork_Params  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Params = value;
}
constexpr ::UnityW<::BoingKit::SharedBoingParams>& BoingKit::BoingBehavior::__cordl_internal_get_SharedParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedParams;
}
constexpr ::UnityW<::BoingKit::SharedBoingParams> const& BoingKit::BoingBehavior::__cordl_internal_get_SharedParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedParams;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_SharedParams(::UnityW<::BoingKit::SharedBoingParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedParams = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_PositionSpringDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSpringDirty;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_PositionSpringDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSpringDirty;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_PositionSpringDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionSpringDirty = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_RotationSpringDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSpringDirty;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_RotationSpringDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSpringDirty;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_RotationSpringDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationSpringDirty = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_ScaleSpringDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleSpringDirty;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_ScaleSpringDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleSpringDirty;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_ScaleSpringDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScaleSpringDirty = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_CachedTransformValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedTransformValid;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_CachedTransformValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedTransformValid;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_CachedTransformValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedTransformValid = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBehavior::__cordl_internal_get_CachedPositionLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionLs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBehavior::__cordl_internal_get_CachedPositionLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionLs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_CachedPositionLs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedPositionLs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBehavior::__cordl_internal_get_CachedPositionWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionWs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBehavior::__cordl_internal_get_CachedPositionWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionWs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_CachedPositionWs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedPositionWs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBehavior::__cordl_internal_get_RenderPositionWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderPositionWs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBehavior::__cordl_internal_get_RenderPositionWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderPositionWs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_RenderPositionWs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderPositionWs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBehavior::__cordl_internal_get_CachedRotationLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationLs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBehavior::__cordl_internal_get_CachedRotationLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationLs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_CachedRotationLs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedRotationLs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBehavior::__cordl_internal_get_CachedRotationWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationWs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBehavior::__cordl_internal_get_CachedRotationWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationWs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_CachedRotationWs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedRotationWs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBehavior::__cordl_internal_get_RenderRotationWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderRotationWs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBehavior::__cordl_internal_get_RenderRotationWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderRotationWs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_RenderRotationWs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderRotationWs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBehavior::__cordl_internal_get_CachedScaleLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedScaleLs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBehavior::__cordl_internal_get_CachedScaleLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedScaleLs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_CachedScaleLs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedScaleLs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBehavior::__cordl_internal_get_RenderScaleLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderScaleLs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBehavior::__cordl_internal_get_RenderScaleLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderScaleLs;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_RenderScaleLs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderScaleLs = value;
}
constexpr bool& BoingKit::BoingBehavior::__cordl_internal_get_InitRebooted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitRebooted;
}
constexpr bool const& BoingKit::BoingBehavior::__cordl_internal_get_InitRebooted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitRebooted;
}
constexpr void BoingKit::BoingBehavior::__cordl_internal_set_InitRebooted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitRebooted = value;
}
inline ::BoingKit::Vector3Spring BoingKit::BoingBehavior::get_PositionSpring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"get_PositionSpring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BoingKit::Vector3Spring>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::set_PositionSpring(::BoingKit::Vector3Spring  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"set_PositionSpring", {}, {::i2c::type_of<::BoingKit::Vector3Spring>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BoingKit::QuaternionSpring BoingKit::BoingBehavior::get_RotationSpring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"get_RotationSpring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BoingKit::QuaternionSpring>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::set_RotationSpring(::BoingKit::QuaternionSpring  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"set_RotationSpring", {}, {::i2c::type_of<::BoingKit::QuaternionSpring>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BoingKit::Vector3Spring BoingKit::BoingBehavior::get_ScaleSpring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"get_ScaleSpring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BoingKit::Vector3Spring>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::set_ScaleSpring(::BoingKit::Vector3Spring  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"set_ScaleSpring", {}, {::i2c::type_of<::BoingKit::Vector3Spring>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BoingKit::BoingBehavior::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::Reboot()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBehavior*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBehavior*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBehavior*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::Register()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBehavior*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::Unregister()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBehavior*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::UpdateFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"UpdateFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::PrepareExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBehavior*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::PrepareExecute(bool  accumulateEffectors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"PrepareExecute", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accumulateEffectors);
}
inline void BoingKit::BoingBehavior::Execute(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"Execute", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void BoingKit::BoingBehavior::PullResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"PullResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBehavior::GatherOutput(::by_ref<::GlobalNamespace::BoingWork_Output>  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"GatherOutput", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Output>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void BoingKit::BoingBehavior::PullResults(::by_ref<::GlobalNamespace::BoingWork_Params>  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBehavior*>(),
                        {"PullResults", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void BoingKit::BoingBehavior::Restore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBehavior*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingBehavior* BoingKit::BoingBehavior::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingBehavior*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingBehavior::BoingBehavior()   {
}
