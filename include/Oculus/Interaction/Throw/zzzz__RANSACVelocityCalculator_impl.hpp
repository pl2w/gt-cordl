#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/RANSACVelocityCalculator.hpp"
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocity_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IPoseInputDevice_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__ReleaseVelocityInformation_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.get_PoseInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::IPoseInputDevice* (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::get_PoseInputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa494c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"get_PoseInputDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.set_PoseInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)(::Oculus::Interaction::Throw::IPoseInputDevice*)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::set_PoseInputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa494c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"set_PoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa494c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa494c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::Start)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa494cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa494cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.CalculateThrowVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::ReleaseVelocityInformation (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::CalculateThrowVelocity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa494f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"CalculateThrowVelocity", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.ProcessInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::ProcessInput)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa494cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"ProcessInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.GetThrowInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::ReleaseVelocityInformation (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::GetThrowInformation)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa494f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"GetThrowInformation", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.InjectAllRANSACVelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)(::Oculus::Interaction::Throw::IPoseInputDevice*)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::InjectAllRANSACVelocityCalculator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa495190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"InjectAllRANSACVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator.InjectPoseInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)(::Oculus::Interaction::Throw::IPoseInputDevice*)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::InjectPoseInputDevice)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa495194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"InjectPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa495260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__poseInputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseInputDevice;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__poseInputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseInputDevice;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_set__poseInputDevice(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseInputDevice = value;
}
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice*& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__PoseInputDevice_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PoseInputDevice_k__BackingField;
}
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* const& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__PoseInputDevice_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PoseInputDevice_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_set__PoseInputDevice_k__BackingField(::Oculus::Interaction::Throw::IPoseInputDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PoseInputDevice_k__BackingField = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr float_t& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__previousPositionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPositionId;
}
constexpr float_t const& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__previousPositionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPositionId;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_set__previousPositionId(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousPositionId = value;
}
constexpr ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__ransac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ransac;
}
constexpr ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity* const& Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_get__ransac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ransac;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocityCalculator::__cordl_internal_set__ransac(::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ransac = value;
}
inline ::Oculus::Interaction::Throw::IPoseInputDevice* Oculus::Interaction::Throw::RANSACVelocityCalculator::get_PoseInputDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"get_PoseInputDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::IPoseInputDevice*>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::set_PoseInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"set_PoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::ReleaseVelocityInformation Oculus::Interaction::Throw::RANSACVelocityCalculator::CalculateThrowVelocity(::UnityEngine::Transform*  objectThrown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"CalculateThrowVelocity", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::ReleaseVelocityInformation>(this, ___internal_method, objectThrown);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::ProcessInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"ProcessInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::ReleaseVelocityInformation Oculus::Interaction::Throw::RANSACVelocityCalculator::GetThrowInformation(::UnityEngine::Pose  grabPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"GetThrowInformation", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::ReleaseVelocityInformation>(this, ___internal_method, grabPoint);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::InjectAllRANSACVelocityCalculator(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"InjectAllRANSACVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseInputDevice);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::InjectPoseInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {"InjectPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseInputDevice);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator* Oculus::Interaction::Throw::RANSACVelocityCalculator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::RANSACVelocityCalculator*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr  Oculus::Interaction::Throw::RANSACVelocityCalculator::operator ::Oculus::Interaction::Throw::IThrowVelocityCalculator*() noexcept {
return static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* Oculus::Interaction::Throw::RANSACVelocityCalculator::i___Oculus__Interaction__Throw__IThrowVelocityCalculator() noexcept {
return static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Throw::RANSACVelocityCalculator::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Throw::RANSACVelocityCalculator::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::RANSACVelocityCalculator::RANSACVelocityCalculator()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator___c::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c.__ctor_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::RANSACVelocityCalculator___c::*)()>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator___c::__ctor_b__18_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>(),
                        {"<.ctor>b__18_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator___c::setStaticF___9(::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*, "<>9", ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>(std::forward<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>(value));
}
inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c* Oculus::Interaction::Throw::RANSACVelocityCalculator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*, "<>9", ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>();
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator___c::setStaticF___9__18_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__18_0", ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Throw::RANSACVelocityCalculator___c::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__18_0", ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>();
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Throw::RANSACVelocityCalculator___c::__ctor_b__18_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>(),
                        {"<.ctor>b__18_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c* Oculus::Interaction::Throw::RANSACVelocityCalculator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c::RANSACVelocityCalculator___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::*)(int32_t, int32_t, int32_t)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa495428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::*)(int32_t, int32_t)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa495394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity.GetOffsettedVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::*)(::UnityEngine::Pose, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::GetOffsettedVelocities)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4950d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(),
                        {"GetOffsettedVelocities", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity.PositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::PositionOffset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa4954bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::__cordl_internal_set__offset(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::_ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplesCount, samplesDeadZone, minHighConfidenceSamples);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::_ctor(int32_t  samplesCount, int32_t  samplesDeadZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplesCount, samplesDeadZone);
}
inline void Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::GetOffsettedVelocities(::UnityEngine::Pose  offset, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  torque)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(),
                        {"GetOffsettedVelocities", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, velocity, torque);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::PositionOffset(::UnityEngine::Pose  youngerPose, ::UnityEngine::Pose  olderPose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, youngerPose, olderPose);
}
/// @brief [Obsolete("The minHighConfidenceSamples parameter will be ignored. Use the constructor without it")]
inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity* Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(samplesCount, samplesDeadZone, minHighConfidenceSamples));
}
inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity* Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*>(samplesCount, samplesDeadZone));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity::RANSACVelocityCalculator_RANSACOffsettedVelocity()   {
}
