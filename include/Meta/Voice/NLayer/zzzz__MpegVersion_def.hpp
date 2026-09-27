#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/MpegVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MpegVersion)
// Forward declare root types
namespace Meta::Voice::NLayer {
struct MpegVersion;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::NLayer::MpegVersion);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::MpegVersion, "Meta.Voice.NLayer", "MpegVersion");
// Dependencies 
namespace Meta::Voice::NLayer {
// Is value type: true
// CS Name: Meta.Voice.NLayer.MpegVersion
struct CORDL_TYPE MpegVersion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MpegVersion_Unwrapped
enum struct __MpegVersion_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Version1 = static_cast<int32_t>(0xa),
__E_Version2 = static_cast<int32_t>(0x14),
__E_Version25 = static_cast<int32_t>(0x19),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MpegVersion_Unwrapped () const noexcept {
return static_cast<__MpegVersion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MpegVersion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MpegVersion(int32_t  value__) noexcept;

/// @brief Field Unknown value: I32(0)
static ::Meta::Voice::NLayer::MpegVersion const Unknown;

/// @brief Field Version1 value: I32(10)
static ::Meta::Voice::NLayer::MpegVersion const Version1;

/// @brief Field Version2 value: I32(20)
static ::Meta::Voice::NLayer::MpegVersion const Version2;

/// @brief Field Version25 value: I32(25)
static ::Meta::Voice::NLayer::MpegVersion const Version25;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::MpegVersion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::MpegVersion) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer
