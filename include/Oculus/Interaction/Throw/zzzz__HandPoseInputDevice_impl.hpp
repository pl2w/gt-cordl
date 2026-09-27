#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/HandPoseInputDevice.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__HandPoseInputDevice_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__HandPoseInputDevice_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IPoseInputDevice_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.get_BufferLengthSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::get_BufferLengthSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_BufferLengthSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.set_BufferLengthSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(float_t)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::set_BufferLengthSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"set_BufferLengthSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.get_SampleFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::get_SampleFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_SampleFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.set_SampleFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(float_t)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::set_SampleFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"set_SampleFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.get_IsInputValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::get_IsInputValid)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa492d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_IsInputValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.get_IsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::get_IsHighConfidence)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa492de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.GetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::GetRootPose)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa492e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa49303c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa493094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa493114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.BufferFingerVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::BufferFingerVelocities)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa493118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"BufferFingerVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.AllocateFingerBonesArrayIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::AllocateFingerBonesArrayIfNecessary)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa493144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"AllocateFingerBonesArrayIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.GetFingerIsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::GetFingerIsHighConfidence)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa493520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.GetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::GetJointPose)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa493650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.BufferFingerBoneVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::BufferFingerBoneVelocities)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4933a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"BufferFingerBoneVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.GetExternalVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::GetExternalVelocities)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa4939dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetExternalVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.InjectAllHandPoseInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::InjectAllHandPoseInputDevice)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa493e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"InjectAllHandPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Throw::HandPoseInputDevice::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa493e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa493edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__bufferLengthSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLengthSeconds;
}
constexpr float_t const& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__bufferLengthSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLengthSeconds;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_set__bufferLengthSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferLengthSeconds = value;
}
constexpr float_t& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__sampleFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleFrequency;
}
constexpr float_t const& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__sampleFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleFrequency;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_set__sampleFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleFrequency = value;
}
constexpr int32_t& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr int32_t const& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_set__bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__jointPoseInfoArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPoseInfoArray;
}
constexpr ::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*> const& Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_get__jointPoseInfoArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPoseInfoArray;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice::__cordl_internal_set__jointPoseInfoArray(::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointPoseInfoArray = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Throw::HandPoseInputDevice::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::HandPoseInputDevice::get_BufferLengthSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_BufferLengthSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::set_BufferLengthSeconds(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"set_BufferLengthSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::HandPoseInputDevice::get_SampleFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_SampleFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::set_SampleFrequency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"set_SampleFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Throw::HandPoseInputDevice::get_IsInputValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_IsInputValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Throw::HandPoseInputDevice::get_IsHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Throw::HandPoseInputDevice::GetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::BufferFingerVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"BufferFingerVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::AllocateFingerBonesArrayIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"AllocateFingerBonesArrayIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Throw::HandPoseInputDevice::GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  handFinger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handFinger);
}
inline bool Oculus::Interaction::Throw::HandPoseInputDevice::GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::BufferFingerBoneVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"BufferFingerBoneVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Throw::HandPoseInputDevice::GetExternalVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"GetExternalVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::InjectAllHandPoseInputDevice(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"InjectAllHandPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::HandPoseInputDevice* Oculus::Interaction::Throw::HandPoseInputDevice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::HandPoseInputDevice*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr  Oculus::Interaction::Throw::HandPoseInputDevice::operator ::Oculus::Interaction::Throw::IPoseInputDevice*() noexcept {
return static_cast<::Oculus::Interaction::Throw::IPoseInputDevice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* Oculus::Interaction::Throw::HandPoseInputDevice::i___Oculus__Interaction__Throw__IPoseInputDevice() noexcept {
return static_cast<::Oculus::Interaction::Throw::IPoseInputDevice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::HandPoseInputDevice::HandPoseInputDevice()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::Input::HandJointId, int32_t)>(&::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa493470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData.BufferNewValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::BufferNewValue)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa4937cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {"BufferNewValue", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData.GetAverageVelocityVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::GetAverageVelocityVector)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa493bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {"GetAverageVelocityVector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData.ResetSpeedsBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::*)()>(&::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::ResetSpeedsBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa493dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {"ResetSpeedsBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get_Finger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Finger;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get_Finger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Finger;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_set_Finger(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Finger = value;
}
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get_JointId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointId;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get_JointId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointId;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_set_JointId(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JointId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get_Velocities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Velocities;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get_Velocities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Velocities;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_set_Velocities(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Velocities = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get__previousPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get__previousPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPosition;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_set__previousPosition(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousPosition = value;
}
constexpr int32_t& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get__lastWritePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritePos;
}
constexpr int32_t const& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get__lastWritePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritePos;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_set__lastWritePos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWritePos = value;
}
constexpr int32_t& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get__bufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
constexpr int32_t const& Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_get__bufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
constexpr void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::__cordl_internal_set__bufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferLength = value;
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::_ctor(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::HandJointId  joint, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger, joint, bufferLength);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::BufferNewValue(::UnityEngine::Pose  newPose, float_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {"BufferNewValue", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPose, delta);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::GetAverageVelocityVector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {"GetAverageVelocityVector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::ResetSpeedsBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(),
                        {"ResetSpeedsBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData* Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::New_ctor(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::HandJointId  joint, int32_t  bufferLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>(finger, joint, bufferLength));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData::HandPoseInputDevice_HandJointPoseMetaData()   {
}
