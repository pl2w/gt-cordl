#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODStream_VODStreamType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer_VODStream_VODStreamType)
// Forward declare root types
namespace GlobalNamespace {
struct VODStream_VODPlayer_VODStreamType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODStream_VODPlayer_VODStreamType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODStream_VODPlayer_VODStreamType, "", "VODPlayer/VODStream/VODStreamType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/VODStream/VODStreamType
struct CORDL_TYPE VODStream_VODPlayer_VODStreamType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VODStream_VODPlayer_VODStreamType_Unwrapped
enum struct __VODStream_VODPlayer_VODStreamType_Unwrapped : int32_t {
__E_VIDEO = static_cast<int32_t>(0x0),
__E_IMAGE = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VODStream_VODPlayer_VODStreamType_Unwrapped () const noexcept {
return static_cast<__VODStream_VODPlayer_VODStreamType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VODStream_VODPlayer_VODStreamType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VODStream_VODPlayer_VODStreamType(int32_t  value__) noexcept;

/// @brief Field IMAGE value: I32(1)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamType const IMAGE;

/// @brief Field VIDEO value: I32(0)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamType const VIDEO;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODStream_VODPlayer_VODStreamType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODStream_VODPlayer_VODStreamType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
