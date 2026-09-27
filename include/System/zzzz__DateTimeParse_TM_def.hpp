#pragma once
// IWYU pragma private; include "System/DateTimeParse_TM.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeParse_TM)
// Forward declare root types
namespace GlobalNamespace {
struct DateTimeParse_TM;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DateTimeParse_TM);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DateTimeParse_TM, "System", "DateTimeParse/TM");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.DateTimeParse/TM
struct CORDL_TYPE DateTimeParse_TM {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DateTimeParse_TM_Unwrapped
enum struct __DateTimeParse_TM_Unwrapped : int32_t {
__E_NotSet = static_cast<int32_t>(0xffffffff),
__E_AM = static_cast<int32_t>(0x0),
__E_PM = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeParse_TM_Unwrapped () const noexcept {
return static_cast<__DateTimeParse_TM_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DateTimeParse_TM() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DateTimeParse_TM(int32_t  value__) noexcept;

/// @brief Field AM value: I32(0)
static ::GlobalNamespace::DateTimeParse_TM const AM;

/// @brief Field NotSet value: I32(-1)
static ::GlobalNamespace::DateTimeParse_TM const NotSet;

/// @brief Field PM value: I32(1)
static ::GlobalNamespace::DateTimeParse_TM const PM;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DateTimeParse_TM, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DateTimeParse_TM) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
