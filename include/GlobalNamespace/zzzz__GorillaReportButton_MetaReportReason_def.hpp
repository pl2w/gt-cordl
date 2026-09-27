#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaReportButton_MetaReportReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaReportButton_MetaReportReason)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaReportButton_MetaReportReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaReportButton_MetaReportReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaReportButton_MetaReportReason, "", "GorillaReportButton/MetaReportReason");
// [SerializeField]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaReportButton/MetaReportReason
struct CORDL_TYPE GorillaReportButton_MetaReportReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaReportButton_MetaReportReason_Unwrapped
enum struct __GorillaReportButton_MetaReportReason_Unwrapped : int32_t {
__E_HateSpeech = static_cast<int32_t>(0x0),
__E_Cheating = static_cast<int32_t>(0x1),
__E_Toxicity = static_cast<int32_t>(0x2),
__E_Bullying = static_cast<int32_t>(0x3),
__E_Doxing = static_cast<int32_t>(0x4),
__E_Impersonation = static_cast<int32_t>(0x5),
__E_Submit = static_cast<int32_t>(0x6),
__E_Cancel = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaReportButton_MetaReportReason_Unwrapped () const noexcept {
return static_cast<__GorillaReportButton_MetaReportReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaReportButton_MetaReportReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaReportButton_MetaReportReason(int32_t  value__) noexcept;

/// @brief Field Bullying value: I32(3)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const Bullying;

/// @brief Field Cancel value: I32(7)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const Cancel;

/// @brief Field Cheating value: I32(1)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const Cheating;

/// @brief Field Doxing value: I32(4)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const Doxing;

/// @brief Field HateSpeech value: I32(0)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const HateSpeech;

/// @brief Field Impersonation value: I32(5)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const Impersonation;

/// @brief Field Submit value: I32(6)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const Submit;

/// @brief Field Toxicity value: I32(2)
static ::GlobalNamespace::GorillaReportButton_MetaReportReason const Toxicity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaReportButton_MetaReportReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaReportButton_MetaReportReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
