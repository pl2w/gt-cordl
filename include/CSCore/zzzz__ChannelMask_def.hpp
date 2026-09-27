#pragma once
// IWYU pragma private; include "CSCore/ChannelMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelMask)
// Forward declare root types
namespace CSCore {
struct ChannelMask;
}
// Write type traits
MARK_VAL_T(::CSCore::ChannelMask);
DEFINE_IL2CPP_CLASS(::CSCore::ChannelMask, "CSCore", "ChannelMask");
// [Flags]
// Dependencies 
namespace CSCore {
// Is value type: true
// CS Name: CSCore.ChannelMask
struct CORDL_TYPE ChannelMask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChannelMask_Unwrapped
enum struct __ChannelMask_Unwrapped : int32_t {
__E_SpeakerFrontLeft = static_cast<int32_t>(0x1),
__E_SpeakerFrontRight = static_cast<int32_t>(0x2),
__E_SpeakerFrontCenter = static_cast<int32_t>(0x4),
__E_SpeakerLowFrequency = static_cast<int32_t>(0x8),
__E_SpeakerBackLeft = static_cast<int32_t>(0x10),
__E_SpeakerBackRight = static_cast<int32_t>(0x20),
__E_SpeakerFrontLeftOfCenter = static_cast<int32_t>(0x40),
__E_SpeakerFrontRightOfCenter = static_cast<int32_t>(0x80),
__E_SpeakerBackCenter = static_cast<int32_t>(0x100),
__E_SpeakerSideLeft = static_cast<int32_t>(0x200),
__E_SpeakerSideRight = static_cast<int32_t>(0x400),
__E_SpeakerTopCenter = static_cast<int32_t>(0x800),
__E_SpeakerTopFrontLeft = static_cast<int32_t>(0x1000),
__E_SpeakerTopFrontCenter = static_cast<int32_t>(0x2000),
__E_SpeakerTopFrontRight = static_cast<int32_t>(0x4000),
__E_SpeakerTopBackLeft = static_cast<int32_t>(0x8000),
__E_SpeakerTopBackCenter = static_cast<int32_t>(0x10000),
__E_SpeakerTopBackRight = static_cast<int32_t>(0x20000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChannelMask_Unwrapped () const noexcept {
return static_cast<__ChannelMask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChannelMask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChannelMask(int32_t  value__) noexcept;

/// @brief Field SpeakerBackCenter value: I32(256)
static ::CSCore::ChannelMask const SpeakerBackCenter;

/// @brief Field SpeakerBackLeft value: I32(16)
static ::CSCore::ChannelMask const SpeakerBackLeft;

/// @brief Field SpeakerBackRight value: I32(32)
static ::CSCore::ChannelMask const SpeakerBackRight;

/// @brief Field SpeakerFrontCenter value: I32(4)
static ::CSCore::ChannelMask const SpeakerFrontCenter;

/// @brief Field SpeakerFrontLeft value: I32(1)
static ::CSCore::ChannelMask const SpeakerFrontLeft;

/// @brief Field SpeakerFrontLeftOfCenter value: I32(64)
static ::CSCore::ChannelMask const SpeakerFrontLeftOfCenter;

/// @brief Field SpeakerFrontRight value: I32(2)
static ::CSCore::ChannelMask const SpeakerFrontRight;

/// @brief Field SpeakerFrontRightOfCenter value: I32(128)
static ::CSCore::ChannelMask const SpeakerFrontRightOfCenter;

/// @brief Field SpeakerLowFrequency value: I32(8)
static ::CSCore::ChannelMask const SpeakerLowFrequency;

/// @brief Field SpeakerSideLeft value: I32(512)
static ::CSCore::ChannelMask const SpeakerSideLeft;

/// @brief Field SpeakerSideRight value: I32(1024)
static ::CSCore::ChannelMask const SpeakerSideRight;

/// @brief Field SpeakerTopBackCenter value: I32(65536)
static ::CSCore::ChannelMask const SpeakerTopBackCenter;

/// @brief Field SpeakerTopBackLeft value: I32(32768)
static ::CSCore::ChannelMask const SpeakerTopBackLeft;

/// @brief Field SpeakerTopBackRight value: I32(131072)
static ::CSCore::ChannelMask const SpeakerTopBackRight;

/// @brief Field SpeakerTopCenter value: I32(2048)
static ::CSCore::ChannelMask const SpeakerTopCenter;

/// @brief Field SpeakerTopFrontCenter value: I32(8192)
static ::CSCore::ChannelMask const SpeakerTopFrontCenter;

/// @brief Field SpeakerTopFrontLeft value: I32(4096)
static ::CSCore::ChannelMask const SpeakerTopFrontLeft;

/// @brief Field SpeakerTopFrontRight value: I32(16384)
static ::CSCore::ChannelMask const SpeakerTopFrontRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::CSCore::ChannelMask, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::CSCore::ChannelMask) == 0x4, "Size mismatch!");

} // namespace end def CSCore
