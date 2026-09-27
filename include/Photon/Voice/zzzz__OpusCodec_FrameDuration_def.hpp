#pragma once
// IWYU pragma private; include "Photon/Voice/OpusCodec_FrameDuration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusCodec_FrameDuration)
// Forward declare root types
namespace GlobalNamespace {
struct OpusCodec_FrameDuration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpusCodec_FrameDuration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpusCodec_FrameDuration, "Photon.Voice", "OpusCodec/FrameDuration");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Voice.OpusCodec/FrameDuration
struct CORDL_TYPE OpusCodec_FrameDuration {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusCodec_FrameDuration_Unwrapped
enum struct __OpusCodec_FrameDuration_Unwrapped : int32_t {
__E_Frame2dot5ms = static_cast<int32_t>(0x9c4),
__E_Frame5ms = static_cast<int32_t>(0x1388),
__E_Frame10ms = static_cast<int32_t>(0x2710),
__E_Frame20ms = static_cast<int32_t>(0x4e20),
__E_Frame40ms = static_cast<int32_t>(0x9c40),
__E_Frame60ms = static_cast<int32_t>(0xea60),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusCodec_FrameDuration_Unwrapped () const noexcept {
return static_cast<__OpusCodec_FrameDuration_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_FrameDuration() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpusCodec_FrameDuration(int32_t  value__) noexcept;

/// @brief Field Frame10ms value: I32(10000)
static ::GlobalNamespace::OpusCodec_FrameDuration const Frame10ms;

/// @brief Field Frame20ms value: I32(20000)
static ::GlobalNamespace::OpusCodec_FrameDuration const Frame20ms;

/// @brief Field Frame2dot5ms value: I32(2500)
static ::GlobalNamespace::OpusCodec_FrameDuration const Frame2dot5ms;

/// @brief Field Frame40ms value: I32(40000)
static ::GlobalNamespace::OpusCodec_FrameDuration const Frame40ms;

/// @brief Field Frame5ms value: I32(5000)
static ::GlobalNamespace::OpusCodec_FrameDuration const Frame5ms;

/// @brief Field Frame60ms value: I32(60000)
static ::GlobalNamespace::OpusCodec_FrameDuration const Frame60ms;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpusCodec_FrameDuration, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpusCodec_FrameDuration) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
