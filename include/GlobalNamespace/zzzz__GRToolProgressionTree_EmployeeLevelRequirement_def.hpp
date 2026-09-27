#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolProgressionTree_EmployeeLevelRequirement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolProgressionTree_EmployeeLevelRequirement)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolProgressionTree_EmployeeLevelRequirement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement, "", "GRToolProgressionTree/EmployeeLevelRequirement");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolProgressionTree/EmployeeLevelRequirement
struct CORDL_TYPE GRToolProgressionTree_EmployeeLevelRequirement {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolProgressionTree_EmployeeLevelRequirement_Unwrapped
enum struct __GRToolProgressionTree_EmployeeLevelRequirement_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Intern = static_cast<int32_t>(0x1),
__E_PartTime = static_cast<int32_t>(0x2),
__E_FullTime = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolProgressionTree_EmployeeLevelRequirement_Unwrapped () const noexcept {
return static_cast<__GRToolProgressionTree_EmployeeLevelRequirement_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolProgressionTree_EmployeeLevelRequirement() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolProgressionTree_EmployeeLevelRequirement(int32_t  value__) noexcept;

/// @brief Field FullTime value: I32(3)
static ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const FullTime;

/// @brief Field Intern value: I32(1)
static ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const Intern;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const None;

/// @brief Field PartTime value: I32(2)
static ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const PartTime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
