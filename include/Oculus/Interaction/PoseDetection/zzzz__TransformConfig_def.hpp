#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__UpVectorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransformConfig)
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateThresholds;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class TransformConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformConfig*, "Oculus.Interaction.PoseDetection", "TransformConfig");
// Dependencies Oculus.Interaction.PoseDetection.UpVectorType, System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformConfig
class CORDL_TYPE TransformConfig : public ::System::Object {
public:
// Declarations
/// @brief Field FeatureThresholds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FeatureThresholds, put=__cordl_internal_set_FeatureThresholds)) ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds>  FeatureThresholds;

 __declspec(property(get=get_InstanceId, put=set_InstanceId)) int32_t  InstanceId;

/// @brief Field PositionOffset, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_PositionOffset, put=__cordl_internal_set_PositionOffset)) ::UnityEngine::Vector3  PositionOffset;

/// @brief Field RotationOffset, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_RotationOffset, put=__cordl_internal_set_RotationOffset)) ::UnityEngine::Vector3  RotationOffset;

/// @brief Field UpVectorType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpVectorType, put=__cordl_internal_set_UpVectorType)) ::Oculus::Interaction::PoseDetection::UpVectorType  UpVectorType;

/// @brief Field <InstanceId>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__InstanceId_k__BackingField, put=__cordl_internal_set__InstanceId_k__BackingField)) int32_t  _InstanceId_k__BackingField;

static inline ::Oculus::Interaction::PoseDetection::TransformConfig* New_ctor() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds> const& __cordl_internal_get_FeatureThresholds() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds>& __cordl_internal_get_FeatureThresholds() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PositionOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RotationOffset() ;

constexpr ::Oculus::Interaction::PoseDetection::UpVectorType const& __cordl_internal_get_UpVectorType() const;

constexpr ::Oculus::Interaction::PoseDetection::UpVectorType& __cordl_internal_get_UpVectorType() ;

constexpr int32_t const& __cordl_internal_get__InstanceId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__InstanceId_k__BackingField() ;

constexpr void __cordl_internal_set_FeatureThresholds(::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds>  value) ;

constexpr void __cordl_internal_set_PositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_UpVectorType(::Oculus::Interaction::PoseDetection::UpVectorType  value) ;

constexpr void __cordl_internal_set__InstanceId_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xa4a68e8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_InstanceId, addr 0xa4a6974, size 0x8, virtual false, abstract: false, final false
inline int32_t get_InstanceId() ;

/// [CompilerGenerated]
/// @brief Method set_InstanceId, addr 0xa4a697c, size 0x1a8, virtual false, abstract: false, final false
inline void set_InstanceId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformConfig(TransformConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformConfig(TransformConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16159};

/// @brief Field PositionOffset, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PositionOffset;

/// @brief Field RotationOffset, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RotationOffset;

/// @brief Field UpVectorType, offset: 0x28, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::UpVectorType  ___UpVectorType;

/// @brief Field FeatureThresholds, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds>  ___FeatureThresholds;

/// [CompilerGenerated]
/// @brief Field <InstanceId>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____InstanceId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformConfig, ___PositionOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformConfig, ___RotationOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformConfig, ___UpVectorType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformConfig, ___FeatureThresholds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformConfig, ____InstanceId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformConfig) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
