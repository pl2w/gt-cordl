#pragma once
// IWYU pragma private; include "System/Number_ParsingStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number_ParsingStatus)
// Forward declare root types
namespace GlobalNamespace {
struct Number_ParsingStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Number_ParsingStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Number_ParsingStatus, "System", "Number/ParsingStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Number/ParsingStatus
struct CORDL_TYPE Number_ParsingStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Number_ParsingStatus_Unwrapped
enum struct __Number_ParsingStatus_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
__E_Overflow = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Number_ParsingStatus_Unwrapped () const noexcept {
return static_cast<__Number_ParsingStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Number_ParsingStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Number_ParsingStatus(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(1)
static ::GlobalNamespace::Number_ParsingStatus const Failed;

/// @brief Field OK value: I32(0)
static ::GlobalNamespace::Number_ParsingStatus const OK;

/// @brief Field Overflow value: I32(2)
static ::GlobalNamespace::Number_ParsingStatus const Overflow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Number_ParsingStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Number_ParsingStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
