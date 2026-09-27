#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineAsset_MediaType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineAsset_MediaType)
// Forward declare root types
namespace GlobalNamespace {
struct TimelineAsset_MediaType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimelineAsset_MediaType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimelineAsset_MediaType, "UnityEngine.Timeline", "TimelineAsset/MediaType");
// [Obsolete("MediaType has been deprecated. It is no longer required, and will be removed in a future release.", false)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineAsset/MediaType
struct CORDL_TYPE TimelineAsset_MediaType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimelineAsset_MediaType_Unwrapped
enum struct __TimelineAsset_MediaType_Unwrapped : int32_t {
__E_Animation = static_cast<int32_t>(0x0),
__E_Audio = static_cast<int32_t>(0x1),
__E_Texture = static_cast<int32_t>(0x2),
__E_Video = static_cast<int32_t>(0x2),
__E_Script = static_cast<int32_t>(0x3),
__E_Hybrid = static_cast<int32_t>(0x4),
__E_Group = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimelineAsset_MediaType_Unwrapped () const noexcept {
return static_cast<__TimelineAsset_MediaType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimelineAsset_MediaType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimelineAsset_MediaType(int32_t  value__) noexcept;

/// @brief Field Animation value: I32(0)
static ::GlobalNamespace::TimelineAsset_MediaType const Animation;

/// @brief Field Audio value: I32(1)
static ::GlobalNamespace::TimelineAsset_MediaType const Audio;

/// @brief Field Group value: I32(5)
static ::GlobalNamespace::TimelineAsset_MediaType const Group;

/// @brief Field Hybrid value: I32(4)
static ::GlobalNamespace::TimelineAsset_MediaType const Hybrid;

/// @brief Field Script value: I32(3)
static ::GlobalNamespace::TimelineAsset_MediaType const Script;

/// @brief Field Texture value: I32(2)
static ::GlobalNamespace::TimelineAsset_MediaType const Texture;

/// @brief Field Video value: I32(2)
static ::GlobalNamespace::TimelineAsset_MediaType const Video;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelineAsset_MediaType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimelineAsset_MediaType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
