#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/RegisteredReceiverFieldInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisteredReceiverFieldInfo)
namespace GorillaTag::GuidedRefs {
class IGuidedRefReceiverMono;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
struct RegisteredReceiverFieldInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo, "GorillaTag.GuidedRefs", "RegisteredReceiverFieldInfo");
// Dependencies 
namespace GorillaTag::GuidedRefs {
// Is value type: true
// CS Name: GorillaTag.GuidedRefs.RegisteredReceiverFieldInfo
struct CORDL_TYPE RegisteredReceiverFieldInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RegisteredReceiverFieldInfo() ;

// Ctor Parameters [CppParam { name: "receiverMono", ty: "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*", modifiers: "", def_value: None, comment: None }, CppParam { name: "fieldId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RegisteredReceiverFieldInfo(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*  receiverMono, int32_t  fieldId, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [FormerlySerializedAs("receiver")]
/// @brief Field receiverMono, offset: 0x0, size: 0x8, def value: None
 ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*  receiverMono;

/// @brief Field fieldId, offset: 0x8, size: 0x4, def value: None
 int32_t  fieldId;

/// @brief Field index, offset: 0xc, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo, receiverMono) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo, fieldId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo, index) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
