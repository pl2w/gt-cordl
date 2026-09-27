#pragma once
// IWYU pragma private; include "Photon/Voice/FrameFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameFlags)
// Forward declare root types
namespace Photon::Voice {
struct FrameFlags;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::FrameFlags);
DEFINE_IL2CPP_CLASS(::Photon::Voice::FrameFlags, "Photon.Voice", "FrameFlags");
// Dependencies 
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.FrameFlags
struct CORDL_TYPE FrameFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __FrameFlags_Unwrapped
enum struct __FrameFlags_Unwrapped : uint8_t {
__E_Config = static_cast<uint8_t>(0x1u),
__E_KeyFrame = static_cast<uint8_t>(0x2u),
__E_PartialFrame = static_cast<uint8_t>(0x4u),
__E_EndOfStream = static_cast<uint8_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FrameFlags_Unwrapped () const noexcept {
return static_cast<__FrameFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FrameFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr FrameFlags(uint8_t  value__) noexcept;

/// @brief Field Config value: U8(1)
static ::Photon::Voice::FrameFlags const Config;

/// @brief Field EndOfStream value: U8(8)
static ::Photon::Voice::FrameFlags const EndOfStream;

/// @brief Field KeyFrame value: U8(2)
static ::Photon::Voice::FrameFlags const KeyFrame;

/// @brief Field PartialFrame value: U8(4)
static ::Photon::Voice::FrameFlags const PartialFrame;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::FrameFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::FrameFlags) == 0x1, "Size mismatch!");

} // namespace end def Photon::Voice
