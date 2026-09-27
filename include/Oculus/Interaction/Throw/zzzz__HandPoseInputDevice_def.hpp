#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/HandPoseInputDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandPoseInputDevice)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Throw {
class HandPoseInputDevice_HandJointPoseMetaData;
}
namespace Oculus::Interaction::Throw {
class IPoseInputDevice;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class HandPoseInputDevice;
}
namespace Oculus::Interaction::Throw {
class HandPoseInputDevice_HandJointPoseMetaData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::HandPoseInputDevice*);
MARK_REF_T(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::HandPoseInputDevice*, "Oculus.Interaction.Throw", "HandPoseInputDevice");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*, "Oculus.Interaction.Throw", "HandPoseInputDevice/HandJointPoseMetaData");
// Dependencies Oculus.Interaction.Throw.HandPoseInputDevice::HandJointPoseMetaData, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.HandPoseInputDevice
class CORDL_TYPE HandPoseInputDevice : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandJointPoseMetaData = ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData;

 __declspec(property(get=get_BufferLengthSeconds, put=set_BufferLengthSeconds)) float_t  BufferLengthSeconds;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsInputValid)) bool  IsInputValid;

 __declspec(property(get=get_SampleFrequency, put=set_SampleFrequency)) float_t  SampleFrequency;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _bufferLengthSeconds, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferLengthSeconds, put=__cordl_internal_set__bufferLengthSeconds)) float_t  _bufferLengthSeconds;

/// @brief Field _bufferSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _jointPoseInfoArray, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointPoseInfoArray, put=__cordl_internal_set__jointPoseInfoArray)) ::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>  _jointPoseInfoArray;

/// @brief Field _sampleFrequency, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleFrequency, put=__cordl_internal_set__sampleFrequency)) float_t  _sampleFrequency;

/// @brief Convert operator to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr operator  ::Oculus::Interaction::Throw::IPoseInputDevice*() noexcept;

/// @brief Method AllocateFingerBonesArrayIfNecessary, addr 0xa493144, size 0x25c, virtual false, abstract: false, final false
inline void AllocateFingerBonesArrayIfNecessary() ;

/// @brief Method Awake, addr 0xa49303c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BufferFingerBoneVelocities, addr 0xa4933a0, size 0xd0, virtual false, abstract: false, final false
inline void BufferFingerBoneVelocities() ;

/// @brief Method BufferFingerVelocities, addr 0xa493118, size 0x2c, virtual false, abstract: false, final false
inline void BufferFingerVelocities() ;

/// @brief Method GetExternalVelocities, addr 0xa4939dc, size 0x200, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> GetExternalVelocities() ;

/// @brief Method GetFingerIsHighConfidence, addr 0xa493520, size 0x130, virtual false, abstract: false, final false
inline bool GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  handFinger) ;

/// @brief Method GetJointPose, addr 0xa493650, size 0x17c, virtual false, abstract: false, final false
inline bool GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRootPose, addr 0xa492e84, size 0x1b8, virtual true, abstract: false, final true
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method InjectAllHandPoseInputDevice, addr 0xa493e08, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandPoseInputDevice(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa493e0c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method LateUpdate, addr 0xa493114, size 0x4, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Throw::HandPoseInputDevice* New_ctor() ;

/// @brief Method Start, addr 0xa493094, size 0x80, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__bufferLengthSeconds() const;

constexpr float_t& __cordl_internal_get__bufferLengthSeconds() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*> const& __cordl_internal_get__jointPoseInfoArray() const;

constexpr ::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>& __cordl_internal_get__jointPoseInfoArray() ;

constexpr float_t const& __cordl_internal_get__sampleFrequency() const;

constexpr float_t& __cordl_internal_get__sampleFrequency() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__bufferLengthSeconds(float_t  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__jointPoseInfoArray(::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>  value) ;

constexpr void __cordl_internal_set__sampleFrequency(float_t  value) ;

/// @brief Method .ctor, addr 0xa493edc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BufferLengthSeconds, addr 0xa492d1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BufferLengthSeconds() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa492d0c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_IsHighConfidence, addr 0xa492de0, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsInputValid, addr 0xa492d3c, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsInputValid() ;

/// @brief Method get_SampleFrequency, addr 0xa492d2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_SampleFrequency() ;

/// @brief Convert to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* i___Oculus__Interaction__Throw__IPoseInputDevice() noexcept;

/// @brief Method set_BufferLengthSeconds, addr 0xa492d24, size 0x8, virtual false, abstract: false, final false
inline void set_BufferLengthSeconds(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa492d14, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_SampleFrequency, addr 0xa492d34, size 0x8, virtual false, abstract: false, final false
inline void set_SampleFrequency(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPoseInputDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPoseInputDevice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPoseInputDevice(HandPoseInputDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPoseInputDevice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPoseInputDevice(HandPoseInputDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16069};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _bufferLengthSeconds, offset: 0x30, size: 0x4, def value: None
 float_t  ____bufferLengthSeconds;

/// [SerializeField]
/// @brief Field _sampleFrequency, offset: 0x34, size: 0x4, def value: None
 float_t  ____sampleFrequency;

/// @brief Field _bufferSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _jointPoseInfoArray, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData*>  ____jointPoseInfoArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice, ____bufferLengthSeconds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice, ____sampleFrequency) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice, ____bufferSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice, ____jointPoseInfoArray) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::HandPoseInputDevice) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
// Dependencies Oculus.Interaction.Input.HandFinger, Oculus.Interaction.Input.HandJointId, System.Nullable`1<T>, System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.HandPoseInputDevice/HandJointPoseMetaData
class CORDL_TYPE HandPoseInputDevice_HandJointPoseMetaData : public ::System::Object {
public:
// Declarations
/// @brief Field Finger, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Finger, put=__cordl_internal_set_Finger)) ::Oculus::Interaction::Input::HandFinger  Finger;

/// @brief Field JointId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_JointId, put=__cordl_internal_set_JointId)) ::Oculus::Interaction::Input::HandJointId  JointId;

/// @brief Field Velocities, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Velocities, put=__cordl_internal_set_Velocities)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  Velocities;

/// @brief Field _bufferLength, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferLength, put=__cordl_internal_set__bufferLength)) int32_t  _bufferLength;

/// @brief Field _lastWritePos, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWritePos, put=__cordl_internal_set__lastWritePos)) int32_t  _lastWritePos;

/// @brief Field _previousPosition, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__previousPosition, put=__cordl_internal_set__previousPosition)) ::System::Nullable_1<::UnityEngine::Vector3>  _previousPosition;

/// @brief Method BufferNewValue, addr 0xa4937cc, size 0x210, virtual false, abstract: false, final false
inline void BufferNewValue(::UnityEngine::Pose  newPose, float_t  delta) ;

/// @brief Method GetAverageVelocityVector, addr 0xa493bdc, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAverageVelocityVector() ;

static inline ::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData* New_ctor(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::HandJointId  joint, int32_t  bufferLength) ;

/// @brief Method ResetSpeedsBuffer, addr 0xa493dac, size 0x5c, virtual false, abstract: false, final false
inline void ResetSpeedsBuffer() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get_Finger() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get_Finger() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get_JointId() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get_JointId() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_Velocities() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_Velocities() ;

constexpr int32_t const& __cordl_internal_get__bufferLength() const;

constexpr int32_t& __cordl_internal_get__bufferLength() ;

constexpr int32_t const& __cordl_internal_get__lastWritePos() const;

constexpr int32_t& __cordl_internal_get__lastWritePos() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__previousPosition() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__previousPosition() ;

constexpr void __cordl_internal_set_Finger(::Oculus::Interaction::Input::HandFinger  value) ;

constexpr void __cordl_internal_set_JointId(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set_Velocities(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__bufferLength(int32_t  value) ;

constexpr void __cordl_internal_set__lastWritePos(int32_t  value) ;

constexpr void __cordl_internal_set__previousPosition(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0xa493470, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::Input::HandJointId  joint, int32_t  bufferLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPoseInputDevice_HandJointPoseMetaData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPoseInputDevice_HandJointPoseMetaData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPoseInputDevice_HandJointPoseMetaData(HandPoseInputDevice_HandJointPoseMetaData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPoseInputDevice_HandJointPoseMetaData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPoseInputDevice_HandJointPoseMetaData(HandPoseInputDevice_HandJointPoseMetaData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16068};

/// @brief Field Finger, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ___Finger;

/// @brief Field JointId, offset: 0x14, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ___JointId;

/// @brief Field Velocities, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___Velocities;

/// @brief Field _previousPosition, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____previousPosition;

/// @brief Field _lastWritePos, offset: 0x30, size: 0x4, def value: None
 int32_t  ____lastWritePos;

/// @brief Field _bufferLength, offset: 0x34, size: 0x4, def value: None
 int32_t  ____bufferLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData, ___Finger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData, ___JointId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData, ___Velocities) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData, ____previousPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData, ____lastWritePos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData, ____bufferLength) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::HandPoseInputDevice_HandJointPoseMetaData) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
