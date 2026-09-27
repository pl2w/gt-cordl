#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineClip_Versions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineClip_Versions)
// Forward declare root types
namespace GlobalNamespace {
struct TimelineClip_Versions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimelineClip_Versions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimelineClip_Versions, "UnityEngine.Timeline", "TimelineClip/Versions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineClip/Versions
struct CORDL_TYPE TimelineClip_Versions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimelineClip_Versions_Unwrapped
enum struct __TimelineClip_Versions_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_ClipInFromGlobalToLocal = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimelineClip_Versions_Unwrapped () const noexcept {
return static_cast<__TimelineClip_Versions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimelineClip_Versions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimelineClip_Versions(int32_t  value__) noexcept;

/// @brief Field ClipInFromGlobalToLocal value: I32(1)
static ::GlobalNamespace::TimelineClip_Versions const ClipInFromGlobalToLocal;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::TimelineClip_Versions const Initial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelineClip_Versions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimelineClip_Versions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
