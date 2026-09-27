#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefTryResolveInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GuidedRefTryResolveInfo)
namespace GorillaTag::GuidedRefs {
class IGuidedRefTargetMono;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
struct GuidedRefTryResolveInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo, "GorillaTag.GuidedRefs", "GuidedRefTryResolveInfo");
// Dependencies 
namespace GorillaTag::GuidedRefs {
// Is value type: true
// CS Name: GorillaTag.GuidedRefs.GuidedRefTryResolveInfo
struct CORDL_TYPE GuidedRefTryResolveInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefTryResolveInfo() ;

// Ctor Parameters [CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetMono", ty: "::GorillaTag::GuidedRefs::IGuidedRefTargetMono*", modifiers: "", def_value: None, comment: None }]
constexpr GuidedRefTryResolveInfo(int32_t  fieldId, int32_t  index, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*  targetMono) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4734};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field fieldId, offset: 0x0, size: 0x4, def value: None
 int32_t  fieldId;

/// @brief Field index, offset: 0x4, size: 0x4, def value: None
 int32_t  index;

/// [FormerlySerializedAs("target")]
/// @brief Field targetMono, offset: 0x8, size: 0x8, def value: None
 ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*  targetMono;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo, fieldId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo, index) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo, targetMono) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
