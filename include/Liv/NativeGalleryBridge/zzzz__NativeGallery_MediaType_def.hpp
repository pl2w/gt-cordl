#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery_MediaType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeGallery_MediaType)
// Forward declare root types
namespace GlobalNamespace {
struct NativeGallery_MediaType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeGallery_MediaType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeGallery_MediaType, "Liv.NativeGalleryBridge", "NativeGallery/MediaType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.NativeGalleryBridge.NativeGallery/MediaType
struct CORDL_TYPE NativeGallery_MediaType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NativeGallery_MediaType_Unwrapped
enum struct __NativeGallery_MediaType_Unwrapped : int32_t {
__E_Video = static_cast<int32_t>(0x2),
__E_Image = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeGallery_MediaType_Unwrapped () const noexcept {
return static_cast<__NativeGallery_MediaType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery_MediaType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NativeGallery_MediaType(int32_t  value__) noexcept;

/// @brief Field Image value: I32(4)
static ::GlobalNamespace::NativeGallery_MediaType const Image;

/// @brief Field Video value: I32(2)
static ::GlobalNamespace::NativeGallery_MediaType const Video;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeGallery_MediaType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeGallery_MediaType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
