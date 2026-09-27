#pragma once
// IWYU pragma private; include "UnityEngine/Playables/FrameData_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameData_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct FrameData_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FrameData_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FrameData_Flags, "UnityEngine.Playables", "FrameData/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Playables.FrameData/Flags
struct CORDL_TYPE FrameData_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FrameData_Flags_Unwrapped
enum struct __FrameData_Flags_Unwrapped : int32_t {
__E_Evaluate = static_cast<int32_t>(0x1),
__E_SeekOccured = static_cast<int32_t>(0x2),
__E_Loop = static_cast<int32_t>(0x4),
__E_Hold = static_cast<int32_t>(0x8),
__E_EffectivePlayStateDelayed = static_cast<int32_t>(0x10),
__E_EffectivePlayStatePlaying = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FrameData_Flags_Unwrapped () const noexcept {
return static_cast<__FrameData_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FrameData_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FrameData_Flags(int32_t  value__) noexcept;

/// @brief Field EffectivePlayStateDelayed value: I32(16)
static ::GlobalNamespace::FrameData_Flags const EffectivePlayStateDelayed;

/// @brief Field EffectivePlayStatePlaying value: I32(32)
static ::GlobalNamespace::FrameData_Flags const EffectivePlayStatePlaying;

/// @brief Field Evaluate value: I32(1)
static ::GlobalNamespace::FrameData_Flags const Evaluate;

/// @brief Field Hold value: I32(8)
static ::GlobalNamespace::FrameData_Flags const Hold;

/// @brief Field Loop value: I32(4)
static ::GlobalNamespace::FrameData_Flags const Loop;

/// @brief Field SeekOccured value: I32(2)
static ::GlobalNamespace::FrameData_Flags const SeekOccured;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FrameData_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FrameData_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
