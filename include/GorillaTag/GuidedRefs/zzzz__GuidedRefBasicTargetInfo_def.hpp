#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefBasicTargetInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHubIdSO_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GuidedRefBasicTargetInfo)
namespace GorillaTag::GuidedRefs {
class GuidedRefHubIdSO;
}
namespace GorillaTag::GuidedRefs {
class GuidedRefTargetIdSO;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
struct GuidedRefBasicTargetInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo, "GorillaTag.GuidedRefs", "GuidedRefBasicTargetInfo");
// Dependencies GorillaTag.GuidedRefs.GuidedRefHubIdSO
namespace GorillaTag::GuidedRefs {
// Is value type: true
// CS Name: GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo
struct CORDL_TYPE GuidedRefBasicTargetInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefBasicTargetInfo() ;

// Ctor Parameters [CppParam { name: "targetId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hubIds", ty: "::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hackIgnoreDuplicateRegistration", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GuidedRefBasicTargetInfo(::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  targetId, ::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>>  hubIds, bool  hackIgnoreDuplicateRegistration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field targetId, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  targetId;

/// [Tooltip("Used to filter down which relay the target can belong to. If null or empty then all parents with a GuidedRefRelayHub will be used.")]
/// [SerializeField]
/// @brief Field hubIds, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>>  hubIds;

/// [DebugOption]
/// [SerializeField]
/// @brief Field hackIgnoreDuplicateRegistration, offset: 0x10, size: 0x1, def value: None
 bool  hackIgnoreDuplicateRegistration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo, targetId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo, hubIds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo, hackIgnoreDuplicateRegistration) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
