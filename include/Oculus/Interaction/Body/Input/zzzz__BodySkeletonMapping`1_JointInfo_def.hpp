#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodySkeletonMapping`1_JointInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(BodySkeletonMapping`1_JointInfo)
// Forward declare root types
namespace GlobalNamespace {
template<typename TSourceJointId>
struct BodySkeletonMapping_1_JointInfo;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::BodySkeletonMapping_1_JointInfo);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::BodySkeletonMapping_1_JointInfo, "Oculus.Interaction.Body.Input", "BodySkeletonMapping`1/JointInfo");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TSourceJointId>
// Is value type: true
// CS Name: Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<TSourceJointId>
struct CORDL_TYPE BodySkeletonMapping_1_JointInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TSourceJointId  sourceJointId, TSourceJointId  parentJointId) ;

// Ctor Parameters []
// @brief default ctor
constexpr BodySkeletonMapping_1_JointInfo() ;

// Ctor Parameters [CppParam { name: "SourceJointId", ty: "TSourceJointId", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParentJointId", ty: "TSourceJointId", modifiers: "", def_value: None, comment: None }]
constexpr BodySkeletonMapping_1_JointInfo(TSourceJointId  SourceJointId, TSourceJointId  ParentJointId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field SourceJointId, offset: 0x0, size: 0x8, def value: None
 TSourceJointId  SourceJointId;

/// @brief Field ParentJointId, offset: 0x8, size: 0x8, def value: None
 TSourceJointId  ParentJointId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
