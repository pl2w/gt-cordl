#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_TrackType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeEncodingApi_TrackType)
// Forward declare root types
namespace GlobalNamespace {
struct LckNativeEncodingApi_TrackType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckNativeEncodingApi_TrackType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckNativeEncodingApi_TrackType, "Liv.Lck.Encoding", "LckNativeEncodingApi/TrackType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi/TrackType
struct CORDL_TYPE LckNativeEncodingApi_TrackType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __LckNativeEncodingApi_TrackType_Unwrapped
enum struct __LckNativeEncodingApi_TrackType_Unwrapped : uint32_t {
__E_Video = static_cast<uint32_t>(0x0u),
__E_Audio = static_cast<uint32_t>(0x1u),
__E_Metadata = static_cast<uint32_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckNativeEncodingApi_TrackType_Unwrapped () const noexcept {
return static_cast<__LckNativeEncodingApi_TrackType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi_TrackType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckNativeEncodingApi_TrackType(uint32_t  value__) noexcept;

/// @brief Field Audio value: U32(1)
static ::GlobalNamespace::LckNativeEncodingApi_TrackType const Audio;

/// @brief Field Metadata value: U32(2)
static ::GlobalNamespace::LckNativeEncodingApi_TrackType const Metadata;

/// @brief Field Video value: U32(0)
static ::GlobalNamespace::LckNativeEncodingApi_TrackType const Video;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckNativeEncodingApi_TrackType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
