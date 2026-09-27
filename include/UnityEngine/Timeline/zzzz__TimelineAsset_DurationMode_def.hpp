#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineAsset_DurationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineAsset_DurationMode)
// Forward declare root types
namespace GlobalNamespace {
struct TimelineAsset_DurationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimelineAsset_DurationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimelineAsset_DurationMode, "UnityEngine.Timeline", "TimelineAsset/DurationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineAsset/DurationMode
struct CORDL_TYPE TimelineAsset_DurationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimelineAsset_DurationMode_Unwrapped
enum struct __TimelineAsset_DurationMode_Unwrapped : int32_t {
__E_BasedOnClips = static_cast<int32_t>(0x0),
__E_FixedLength = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimelineAsset_DurationMode_Unwrapped () const noexcept {
return static_cast<__TimelineAsset_DurationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimelineAsset_DurationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimelineAsset_DurationMode(int32_t  value__) noexcept;

/// @brief Field BasedOnClips value: I32(0)
static ::GlobalNamespace::TimelineAsset_DurationMode const BasedOnClips;

/// @brief Field FixedLength value: I32(1)
static ::GlobalNamespace::TimelineAsset_DurationMode const FixedLength;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelineAsset_DurationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimelineAsset_DurationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
