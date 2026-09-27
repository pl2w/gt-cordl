#pragma once
// IWYU pragma private; include "Photon/Voice/ImageFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageFormat)
// Forward declare root types
namespace Photon::Voice {
struct ImageFormat;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::ImageFormat);
DEFINE_IL2CPP_CLASS(::Photon::Voice::ImageFormat, "Photon.Voice", "ImageFormat");
// Dependencies 
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.ImageFormat
struct CORDL_TYPE ImageFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImageFormat_Unwrapped
enum struct __ImageFormat_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_I420 = static_cast<int32_t>(0x1),
__E_YV12 = static_cast<int32_t>(0x2),
__E_Android420 = static_cast<int32_t>(0x3),
__E_ABGR = static_cast<int32_t>(0x4),
__E_BGRA = static_cast<int32_t>(0x5),
__E_ARGB = static_cast<int32_t>(0x6),
__E_NV12 = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImageFormat_Unwrapped () const noexcept {
return static_cast<__ImageFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ImageFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ImageFormat(int32_t  value__) noexcept;

/// @brief Field ABGR value: I32(4)
static ::Photon::Voice::ImageFormat const ABGR;

/// @brief Field ARGB value: I32(6)
static ::Photon::Voice::ImageFormat const ARGB;

/// @brief Field Android420 value: I32(3)
static ::Photon::Voice::ImageFormat const Android420;

/// @brief Field BGRA value: I32(5)
static ::Photon::Voice::ImageFormat const BGRA;

/// @brief Field I420 value: I32(1)
static ::Photon::Voice::ImageFormat const I420;

/// @brief Field NV12 value: I32(7)
static ::Photon::Voice::ImageFormat const NV12;

/// @brief Field Undefined value: I32(0)
static ::Photon::Voice::ImageFormat const Undefined;

/// @brief Field YV12 value: I32(2)
static ::Photon::Voice::ImageFormat const YV12;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28475};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::ImageFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::ImageFormat) == 0x4, "Size mismatch!");

} // namespace end def Photon::Voice
