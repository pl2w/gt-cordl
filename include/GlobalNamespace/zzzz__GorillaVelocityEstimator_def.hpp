#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaVelocityEstimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_VelocityHistorySample_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaVelocityEstimator)
namespace GlobalNamespace {
struct GorillaVelocityEstimator_VelocityHistorySample;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaVelocityEstimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaVelocityEstimator*, "", "GorillaVelocityEstimator");
// Dependencies GorillaVelocityEstimator::VelocityHistorySample, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaVelocityEstimator
class CORDL_TYPE GorillaVelocityEstimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VelocityHistorySample = ::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample;

/// @brief Field <angularVelocity>k__BackingField, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__angularVelocity_k__BackingField, put=__cordl_internal_set__angularVelocity_k__BackingField)) ::UnityEngine::Vector3  _angularVelocity_k__BackingField;

/// @brief Field <handPos>k__BackingField, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__handPos_k__BackingField, put=__cordl_internal_set__handPos_k__BackingField)) ::UnityEngine::Vector3  _handPos_k__BackingField;

/// @brief Field <linearVelocity>k__BackingField, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__linearVelocity_k__BackingField, put=__cordl_internal_set__linearVelocity_k__BackingField)) ::UnityEngine::Vector3  _linearVelocity_k__BackingField;

 __declspec(property(get=get_angularVelocity, put=set_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

/// @brief Field currentFrame, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFrame, put=__cordl_internal_set_currentFrame)) int32_t  currentFrame;

 __declspec(property(get=get_handPos, put=set_handPos)) ::UnityEngine::Vector3  handPos;

/// @brief Field history, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_history, put=__cordl_internal_set_history)) ::ArrayW<::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample>  history;

/// @brief Field lastPos, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPos, put=__cordl_internal_set_lastPos)) ::UnityEngine::Vector3  lastPos;

/// @brief Field lastRotation, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastRotation, put=__cordl_internal_set_lastRotation)) ::UnityEngine::Quaternion  lastRotation;

/// @brief Field lastRotationVec, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRotationVec, put=__cordl_internal_set_lastRotationVec)) ::UnityEngine::Vector3  lastRotationVec;

 __declspec(property(get=get_linearVelocity, put=set_linearVelocity)) ::UnityEngine::Vector3  linearVelocity;

/// @brief Field numFrames, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_numFrames, put=__cordl_internal_set_numFrames)) int32_t  numFrames;

/// @brief Field useGlobalSpace, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGlobalSpace, put=__cordl_internal_set_useGlobalSpace)) bool  useGlobalSpace;

/// @brief Method Awake, addr 0x5dfe010, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaVelocityEstimator* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5dfe4b4, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5dfe328, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5dfe068, size 0x134, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TriggeredLateUpdate, addr 0x5dfe508, size 0x3bc, virtual false, abstract: false, final false
inline void TriggeredLateUpdate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__angularVelocity_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__angularVelocity_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__handPos_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__handPos_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__linearVelocity_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__linearVelocity_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_currentFrame() const;

constexpr int32_t& __cordl_internal_get_currentFrame() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample> const& __cordl_internal_get_history() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample>& __cordl_internal_get_history() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRotationVec() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRotationVec() ;

constexpr int32_t const& __cordl_internal_get_numFrames() const;

constexpr int32_t& __cordl_internal_get_numFrames() ;

constexpr bool const& __cordl_internal_get_useGlobalSpace() const;

constexpr bool& __cordl_internal_get_useGlobalSpace() ;

constexpr void __cordl_internal_set__angularVelocity_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__handPos_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__linearVelocity_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentFrame(int32_t  value) ;

constexpr void __cordl_internal_set_history(::ArrayW<::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample>  value) ;

constexpr void __cordl_internal_set_lastPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastRotationVec(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_numFrames(int32_t  value) ;

constexpr void __cordl_internal_set_useGlobalSpace(bool  value) ;

/// @brief Method .ctor, addr 0x5dfe8c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_angularVelocity, addr 0x5dfdfe0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularVelocity() ;

/// [CompilerGenerated]
/// @brief Method get_handPos, addr 0x5dfdff8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_handPos() ;

/// [CompilerGenerated]
/// @brief Method get_linearVelocity, addr 0x5dfdfc8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_linearVelocity() ;

/// [CompilerGenerated]
/// @brief Method set_angularVelocity, addr 0x5dfdfec, size 0xc, virtual false, abstract: false, final false
inline void set_angularVelocity(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_handPos, addr 0x5dfe004, size 0xc, virtual false, abstract: false, final false
inline void set_handPos(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_linearVelocity, addr 0x5dfdfd4, size 0xc, virtual false, abstract: false, final false
inline void set_linearVelocity(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaVelocityEstimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityEstimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaVelocityEstimator(GorillaVelocityEstimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaVelocityEstimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaVelocityEstimator(GorillaVelocityEstimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{514};

/// [Min(1)]
/// [SerializeField]
/// @brief Field numFrames, offset: 0x20, size: 0x4, def value: None
 int32_t  ___numFrames;

/// [CompilerGenerated]
/// @brief Field <linearVelocity>k__BackingField, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____linearVelocity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <angularVelocity>k__BackingField, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____angularVelocity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <handPos>k__BackingField, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____handPos_k__BackingField;

/// @brief Field history, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample>  ___history;

/// @brief Field currentFrame, offset: 0x50, size: 0x4, def value: None
 int32_t  ___currentFrame;

/// @brief Field lastPos, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPos;

/// @brief Field lastRotation, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastRotation;

/// @brief Field lastRotationVec, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRotationVec;

/// @brief Field useGlobalSpace, offset: 0x7c, size: 0x1, def value: None
 bool  ___useGlobalSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ___numFrames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ____linearVelocity_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ____angularVelocity_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ____handPos_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ___history) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ___currentFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ___lastPos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ___lastRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ___lastRotationVec) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator, ___useGlobalSpace) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaVelocityEstimator) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
