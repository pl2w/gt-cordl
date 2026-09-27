#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAtlasSliceSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTAtlasSliceSource)
// Forward declare root types
namespace GlobalNamespace {
struct GTAtlasSliceSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTAtlasSliceSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTAtlasSliceSource, "", "GTAtlasSliceSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTAtlasSliceSource
struct CORDL_TYPE GTAtlasSliceSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTAtlasSliceSource_Unwrapped
enum struct __GTAtlasSliceSource_Unwrapped : int32_t {
__E_Property = static_cast<int32_t>(0x0),
__E_UV1_Z = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTAtlasSliceSource_Unwrapped () const noexcept {
return static_cast<__GTAtlasSliceSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTAtlasSliceSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTAtlasSliceSource(int32_t  value__) noexcept;

/// @brief Field Property value: I32(0)
static ::GlobalNamespace::GTAtlasSliceSource const Property;

/// @brief Field UV1_Z value: I32(1)
static ::GlobalNamespace::GTAtlasSliceSource const UV1_Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3709};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTAtlasSliceSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTAtlasSliceSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
