#pragma once
// IWYU pragma private; include "Modio/Reports/ReportType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReportType)
// Forward declare root types
namespace Modio::Reports {
struct ReportType;
}
// Write type traits
MARK_VAL_T(::Modio::Reports::ReportType);
DEFINE_IL2CPP_CLASS(::Modio::Reports::ReportType, "Modio.Reports", "ReportType");
// Dependencies 
namespace Modio::Reports {
// Is value type: true
// CS Name: Modio.Reports.ReportType
struct CORDL_TYPE ReportType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReportType_Unwrapped
enum struct __ReportType_Unwrapped : int32_t {
__E_Generic = static_cast<int32_t>(0x0),
__E_DMCA = static_cast<int32_t>(0x1),
__E_NotWorking = static_cast<int32_t>(0x2),
__E_RudeContent = static_cast<int32_t>(0x3),
__E_IllegalContent = static_cast<int32_t>(0x4),
__E_StolenContent = static_cast<int32_t>(0x5),
__E_FalseInformation = static_cast<int32_t>(0x6),
__E_Other = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReportType_Unwrapped () const noexcept {
return static_cast<__ReportType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReportType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReportType(int32_t  value__) noexcept;

/// @brief Field DMCA value: I32(1)
static ::Modio::Reports::ReportType const DMCA;

/// @brief Field FalseInformation value: I32(6)
static ::Modio::Reports::ReportType const FalseInformation;

/// @brief Field Generic value: I32(0)
static ::Modio::Reports::ReportType const Generic;

/// @brief Field IllegalContent value: I32(4)
static ::Modio::Reports::ReportType const IllegalContent;

/// @brief Field NotWorking value: I32(2)
static ::Modio::Reports::ReportType const NotWorking;

/// @brief Field Other value: I32(7)
static ::Modio::Reports::ReportType const Other;

/// @brief Field RudeContent value: I32(3)
static ::Modio::Reports::ReportType const RudeContent;

/// @brief Field StolenContent value: I32(5)
static ::Modio::Reports::ReportType const StolenContent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Reports::ReportType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Reports::ReportType) == 0x4, "Size mismatch!");

} // namespace end def Modio::Reports
