#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/RANSACVelocityCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocity_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RANSACVelocityCalculator)
namespace Oculus::Interaction::Throw {
class IPoseInputDevice;
}
namespace Oculus::Interaction::Throw {
class IThrowVelocityCalculator;
}
namespace Oculus::Interaction::Throw {
class RANSACVelocityCalculator_RANSACOffsettedVelocity;
}
namespace Oculus::Interaction::Throw {
class RANSACVelocityCalculator___c;
}
namespace Oculus::Interaction::Throw {
struct ReleaseVelocityInformation;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class RANSACVelocityCalculator;
}
namespace Oculus::Interaction::Throw {
class RANSACVelocityCalculator_RANSACOffsettedVelocity;
}
namespace Oculus::Interaction::Throw {
class RANSACVelocityCalculator___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::RANSACVelocityCalculator*);
MARK_REF_T(::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*);
MARK_REF_T(::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::RANSACVelocityCalculator*, "Oculus.Interaction.Throw", "RANSACVelocityCalculator");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*, "Oculus.Interaction.Throw", "RANSACVelocityCalculator/RANSACOffsettedVelocity");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*, "Oculus.Interaction.Throw", "RANSACVelocityCalculator/<>c");
// [Obsolete("Use Grabbable instead")]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.RANSACVelocityCalculator
class CORDL_TYPE RANSACVelocityCalculator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RANSACOffsettedVelocity = ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity;

using __c = ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c;

 __declspec(property(get=get_PoseInputDevice, put=set_PoseInputDevice)) ::Oculus::Interaction::Throw::IPoseInputDevice*  PoseInputDevice;

/// @brief Field <PoseInputDevice>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PoseInputDevice_k__BackingField, put=__cordl_internal_set__PoseInputDevice_k__BackingField)) ::Oculus::Interaction::Throw::IPoseInputDevice*  _PoseInputDevice_k__BackingField;

/// @brief Field _poseInputDevice, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseInputDevice, put=__cordl_internal_set__poseInputDevice)) ::UnityW<::UnityEngine::Object>  _poseInputDevice;

/// @brief Field _previousPositionId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousPositionId, put=__cordl_internal_set__previousPositionId)) float_t  _previousPositionId;

/// @brief Field _ransac, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ransac, put=__cordl_internal_set__ransac)) ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*  _ransac;

/// @brief Field _timeProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr operator  ::Oculus::Interaction::Throw::IThrowVelocityCalculator*() noexcept;

/// @brief Method Awake, addr 0xa494c64, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateThrowVelocity, addr 0xa494f00, size 0x74, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Throw::ReleaseVelocityInformation CalculateThrowVelocity(::UnityEngine::Transform*  objectThrown) ;

/// @brief Method GetThrowInformation, addr 0xa494f74, size 0x164, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::ReleaseVelocityInformation GetThrowInformation(::UnityEngine::Pose  grabPoint) ;

/// @brief Method InjectAllRANSACVelocityCalculator, addr 0xa495190, size 0x4, virtual false, abstract: false, final false
inline void InjectAllRANSACVelocityCalculator(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice) ;

/// @brief Method InjectPoseInputDevice, addr 0xa495194, size 0xcc, virtual false, abstract: false, final false
inline void InjectPoseInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice) ;

static inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator* New_ctor() ;

/// @brief Method ProcessInput, addr 0xa494cd4, size 0x22c, virtual false, abstract: false, final false
inline void ProcessInput() ;

/// @brief Method SetTimeProvider, addr 0xa494c5c, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa494cbc, size 0x14, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa494cd0, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* const& __cordl_internal_get__PoseInputDevice_k__BackingField() const;

constexpr ::Oculus::Interaction::Throw::IPoseInputDevice*& __cordl_internal_get__PoseInputDevice_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__poseInputDevice() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__poseInputDevice() ;

constexpr float_t const& __cordl_internal_get__previousPositionId() const;

constexpr float_t& __cordl_internal_get__previousPositionId() ;

constexpr ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity* const& __cordl_internal_get__ransac() const;

constexpr ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*& __cordl_internal_get__ransac() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set__PoseInputDevice_k__BackingField(::Oculus::Interaction::Throw::IPoseInputDevice*  value) ;

constexpr void __cordl_internal_set__poseInputDevice(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__previousPositionId(float_t  value) ;

constexpr void __cordl_internal_set__ransac(::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa495260, size 0x134, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PoseInputDevice, addr 0xa494c4c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::IPoseInputDevice* get_PoseInputDevice() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* i___Oculus__Interaction__Throw__IThrowVelocityCalculator() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PoseInputDevice, addr 0xa494c54, size 0x8, virtual false, abstract: false, final false
inline void set_PoseInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RANSACVelocityCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocityCalculator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RANSACVelocityCalculator(RANSACVelocityCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocityCalculator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RANSACVelocityCalculator(RANSACVelocityCalculator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16079};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Throw.IPoseInputDevice), new[] {  })]
/// @brief Field _poseInputDevice, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____poseInputDevice;

/// [CompilerGenerated]
/// @brief Field <PoseInputDevice>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::IPoseInputDevice*  ____PoseInputDevice_k__BackingField;

/// @brief Field _timeProvider, offset: 0x30, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _previousPositionId, offset: 0x38, size: 0x4, def value: None
 float_t  ____previousPositionId;

/// @brief Field _ransac, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity*  ____ransac;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocityCalculator, ____poseInputDevice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocityCalculator, ____PoseInputDevice_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocityCalculator, ____timeProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocityCalculator, ____previousPositionId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocityCalculator, ____ransac) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::RANSACVelocityCalculator) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.RANSACVelocityCalculator/<>c
class CORDL_TYPE RANSACVelocityCalculator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*  __9;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Func_1<float_t>*  __9__18_0;

static inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c* New_ctor() ;

/// @brief Method <.ctor>b__18_0, addr 0xa4955a0, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__18_0() ;

/// @brief Method .ctor, addr 0xa495598, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__18_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Throw::RANSACVelocityCalculator___c*  value) ;

static inline void setStaticF___9__18_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RANSACVelocityCalculator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocityCalculator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RANSACVelocityCalculator___c(RANSACVelocityCalculator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocityCalculator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RANSACVelocityCalculator___c(RANSACVelocityCalculator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16078};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Throw::RANSACVelocityCalculator___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
// Dependencies Oculus.Interaction.Throw.RANSACVelocity, UnityEngine.Pose
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.RANSACVelocityCalculator/RANSACOffsettedVelocity
class CORDL_TYPE RANSACVelocityCalculator_RANSACOffsettedVelocity : public ::Oculus::Interaction::Throw::RANSACVelocity {
public:
// Declarations
/// @brief Field _offset, offset 0x30, size 0x1c 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Pose  _offset;

/// @brief Method GetOffsettedVelocities, addr 0xa4950d8, size 0xb8, virtual false, abstract: false, final false
inline void GetOffsettedVelocities(::UnityEngine::Pose  offset, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  torque) ;

static inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity* New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone) ;

/// @brief [Obsolete("The minHighConfidenceSamples parameter will be ignored. Use the constructor without it")]
static inline ::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity* New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples) ;

/// @brief Method PositionOffset, addr 0xa4954bc, size 0x74, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 PositionOffset(::UnityEngine::Pose  youngerPose, ::UnityEngine::Pose  olderPose) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__offset() ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa495394, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplesCount, int32_t  samplesDeadZone) ;

/// [Obsolete("The minHighConfidenceSamples parameter will be ignored. Use the constructor without it")]
/// @brief Method .ctor, addr 0xa495428, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RANSACVelocityCalculator_RANSACOffsettedVelocity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocityCalculator_RANSACOffsettedVelocity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RANSACVelocityCalculator_RANSACOffsettedVelocity(RANSACVelocityCalculator_RANSACOffsettedVelocity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocityCalculator_RANSACOffsettedVelocity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RANSACVelocityCalculator_RANSACOffsettedVelocity(RANSACVelocityCalculator_RANSACOffsettedVelocity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16077};

/// @brief Field _offset, offset: 0x30, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity, ____offset) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::RANSACVelocityCalculator_RANSACOffsettedVelocity) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
