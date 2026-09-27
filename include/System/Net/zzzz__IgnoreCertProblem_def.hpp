#pragma once
// IWYU pragma private; include "System/Net/IgnoreCertProblem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoreCertProblem)
// Forward declare root types
namespace System::Net {
struct IgnoreCertProblem;
}
// Write type traits
MARK_VAL_T(::System::Net::IgnoreCertProblem);
DEFINE_IL2CPP_CLASS(::System::Net::IgnoreCertProblem, "System.Net", "IgnoreCertProblem");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.IgnoreCertProblem
struct CORDL_TYPE IgnoreCertProblem {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IgnoreCertProblem_Unwrapped
enum struct __IgnoreCertProblem_Unwrapped : int32_t {
__E_not_time_valid = static_cast<int32_t>(0x1),
__E_ctl_not_time_valid = static_cast<int32_t>(0x2),
__E_not_time_nested = static_cast<int32_t>(0x4),
__E_invalid_basic_constraints = static_cast<int32_t>(0x8),
__E_all_not_time_valid = static_cast<int32_t>(0x7),
__E_allow_unknown_ca = static_cast<int32_t>(0x10),
__E_wrong_usage = static_cast<int32_t>(0x20),
__E_invalid_name = static_cast<int32_t>(0x40),
__E_invalid_policy = static_cast<int32_t>(0x80),
__E_end_rev_unknown = static_cast<int32_t>(0x100),
__E_ctl_signer_rev_unknown = static_cast<int32_t>(0x200),
__E_ca_rev_unknown = static_cast<int32_t>(0x400),
__E_root_rev_unknown = static_cast<int32_t>(0x800),
__E_all_rev_unknown = static_cast<int32_t>(0xf00),
__E_none = static_cast<int32_t>(0xfff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IgnoreCertProblem_Unwrapped () const noexcept {
return static_cast<__IgnoreCertProblem_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IgnoreCertProblem() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IgnoreCertProblem(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10523};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field all_not_time_valid value: I32(7)
static ::System::Net::IgnoreCertProblem const all_not_time_valid;

/// @brief Field all_rev_unknown value: I32(3840)
static ::System::Net::IgnoreCertProblem const all_rev_unknown;

/// @brief Field allow_unknown_ca value: I32(16)
static ::System::Net::IgnoreCertProblem const allow_unknown_ca;

/// @brief Field ca_rev_unknown value: I32(1024)
static ::System::Net::IgnoreCertProblem const ca_rev_unknown;

/// @brief Field ctl_not_time_valid value: I32(2)
static ::System::Net::IgnoreCertProblem const ctl_not_time_valid;

/// @brief Field ctl_signer_rev_unknown value: I32(512)
static ::System::Net::IgnoreCertProblem const ctl_signer_rev_unknown;

/// @brief Field end_rev_unknown value: I32(256)
static ::System::Net::IgnoreCertProblem const end_rev_unknown;

/// @brief Field invalid_basic_constraints value: I32(8)
static ::System::Net::IgnoreCertProblem const invalid_basic_constraints;

/// @brief Field invalid_name value: I32(64)
static ::System::Net::IgnoreCertProblem const invalid_name;

/// @brief Field invalid_policy value: I32(128)
static ::System::Net::IgnoreCertProblem const invalid_policy;

/// @brief Field none value: I32(4095)
static ::System::Net::IgnoreCertProblem const none;

/// @brief Field not_time_nested value: I32(4)
static ::System::Net::IgnoreCertProblem const not_time_nested;

/// @brief Field not_time_valid value: I32(1)
static ::System::Net::IgnoreCertProblem const not_time_valid;

/// @brief Field root_rev_unknown value: I32(2048)
static ::System::Net::IgnoreCertProblem const root_rev_unknown;

/// @brief Field wrong_usage value: I32(32)
static ::System::Net::IgnoreCertProblem const wrong_usage;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::IgnoreCertProblem, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::IgnoreCertProblem) == 0x4, "Size mismatch!");

} // namespace end def System::Net
