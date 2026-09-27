#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PipResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PipResult)
// Forward declare root types
namespace Unity::Cinemachine {
struct PipResult;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::PipResult);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PipResult, "Unity.Cinemachine", "PipResult");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.PipResult
struct CORDL_TYPE PipResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PipResult_Unwrapped
enum struct __PipResult_Unwrapped : int32_t {
__E_Inside = static_cast<int32_t>(0x0),
__E_Outside = static_cast<int32_t>(0x1),
__E_OnEdge = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PipResult_Unwrapped () const noexcept {
return static_cast<__PipResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PipResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PipResult(int32_t  value__) noexcept;

/// @brief Field Inside value: I32(0)
static ::Unity::Cinemachine::PipResult const Inside;

/// @brief Field OnEdge value: I32(2)
static ::Unity::Cinemachine::PipResult const OnEdge;

/// @brief Field Outside value: I32(1)
static ::Unity::Cinemachine::PipResult const Outside;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PipResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PipResult) == 0x4, "Size mismatch!");

} // namespace end def Unity::Cinemachine
