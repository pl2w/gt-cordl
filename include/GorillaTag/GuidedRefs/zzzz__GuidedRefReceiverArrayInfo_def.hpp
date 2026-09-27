#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefReceiverArrayInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__GRef_EResolveModes_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GuidedRefReceiverArrayInfo)
namespace GorillaTag::GuidedRefs {
class GuidedRefHubIdSO;
}
namespace GorillaTag::GuidedRefs {
class GuidedRefTargetIdSO;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
struct GuidedRefReceiverArrayInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo, "GorillaTag.GuidedRefs", "GuidedRefReceiverArrayInfo");
// Dependencies GorillaTag.GuidedRefs.GRef::EResolveModes, GorillaTag.GuidedRefs.GuidedRefTargetIdSO
namespace GorillaTag::GuidedRefs {
// Is value type: true
// CS Name: GorillaTag.GuidedRefs.GuidedRefReceiverArrayInfo
struct CORDL_TYPE GuidedRefReceiverArrayInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x5d459a4, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(bool  useRecommendedDefaults) ;

// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefReceiverArrayInfo() ;

// Ctor Parameters [CppParam { name: "resolveModes", ty: "::GlobalNamespace::GRef_EResolveModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "hubId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>", modifiers: "", def_value: None, comment: None }, CppParam { name: "targets", ty: "::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "resolveCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GuidedRefReceiverArrayInfo(::GlobalNamespace::GRef_EResolveModes  resolveModes, ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  hubId, ::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>  targets, int32_t  fieldId, int32_t  resolveCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("Controls whether the array should be overridden by the guided refs.")]
/// [SerializeField]
/// @brief Field resolveModes, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GRef_EResolveModes  resolveModes;

/// [Tooltip("(Required) Used to filter down which relay the target can belong to. Only one GuidedRefRelayHub will be used.")]
/// [SerializeField]
/// @brief Field hubId, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  hubId;

/// [SerializeField]
/// @brief Field targets, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>  targets;

/// @brief Field fieldId, offset: 0x18, size: 0x4, def value: None
 int32_t  fieldId;

/// @brief Field resolveCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  resolveCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo, resolveModes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo, hubId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo, targets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo, fieldId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo, resolveCount) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
