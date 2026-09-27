#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/RecordingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingState)
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct RecordingState;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::RecordingState);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::RecordingState, "Liv.Lck.GorillaTag", "RecordingState");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.RecordingState
struct CORDL_TYPE RecordingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RecordingState_Unwrapped
enum struct __RecordingState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Recording = static_cast<int32_t>(0x1),
__E_Saving = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RecordingState_Unwrapped () const noexcept {
return static_cast<__RecordingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RecordingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RecordingState(int32_t  value__) noexcept;

/// @brief Field Idle value: I32(0)
static ::Liv::Lck::GorillaTag::RecordingState const Idle;

/// @brief Field Recording value: I32(1)
static ::Liv::Lck::GorillaTag::RecordingState const Recording;

/// @brief Field Saving value: I32(2)
static ::Liv::Lck::GorillaTag::RecordingState const Saving;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29677};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::RecordingState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::RecordingState) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
