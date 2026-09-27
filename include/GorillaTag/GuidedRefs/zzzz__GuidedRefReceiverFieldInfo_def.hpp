#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefReceiverFieldInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__GRef_EResolveModes_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GuidedRefReceiverFieldInfo)
namespace GorillaTag::GuidedRefs {
class GuidedRefHubIdSO;
}
namespace GorillaTag::GuidedRefs {
class GuidedRefTargetIdSO;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
struct GuidedRefReceiverFieldInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo, "GorillaTag.GuidedRefs", "GuidedRefReceiverFieldInfo");
// Dependencies GorillaTag.GuidedRefs.GRef::EResolveModes
namespace GorillaTag::GuidedRefs {
// Is value type: true
// CS Name: GorillaTag.GuidedRefs.GuidedRefReceiverFieldInfo
struct CORDL_TYPE GuidedRefReceiverFieldInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x5d34878, size 0x40, virtual false, abstract: false, final false
inline void _ctor(bool  useRecommendedDefaults) ;

// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefReceiverFieldInfo() ;

// Ctor Parameters [CppParam { name: "resolveModes", ty: "::GlobalNamespace::GRef_EResolveModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hubId", ty: "::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GuidedRefReceiverFieldInfo(::GlobalNamespace::GRef_EResolveModes  resolveModes, ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  targetId, ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  hubId, int32_t  fieldId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// @brief Field resolveModes, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GRef_EResolveModes  resolveModes;

/// [SerializeField]
/// @brief Field targetId, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  targetId;

/// [Tooltip("(Required) Used to filter down which relay the target can belong to. Only one GuidedRefRelayHub will be used.")]
/// [SerializeField]
/// @brief Field hubId, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  hubId;

/// @brief Field fieldId, offset: 0x18, size: 0x4, def value: None
 int32_t  fieldId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo, resolveModes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo, targetId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo, hubId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo, fieldId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
