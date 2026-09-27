#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODStream_VODStreamChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer_VODStream_VODStreamChannel)
// Forward declare root types
namespace GlobalNamespace {
struct VODStream_VODPlayer_VODStreamChannel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel, "", "VODPlayer/VODStream/VODStreamChannel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/VODStream/VODStreamChannel
struct CORDL_TYPE VODStream_VODPlayer_VODStreamChannel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VODStream_VODPlayer_VODStreamChannel_Unwrapped
enum struct __VODStream_VODPlayer_VODStreamChannel_Unwrapped : int32_t {
__E_DEFAULT = static_cast<int32_t>(0x0),
__E_VIM = static_cast<int32_t>(0x1),
__E_MM = static_cast<int32_t>(0x2),
__E_GCORP = static_cast<int32_t>(0x3),
__E_EVENT = static_cast<int32_t>(0x4),
__E_FEATURED = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VODStream_VODPlayer_VODStreamChannel_Unwrapped () const noexcept {
return static_cast<__VODStream_VODPlayer_VODStreamChannel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VODStream_VODPlayer_VODStreamChannel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VODStream_VODPlayer_VODStreamChannel(int32_t  value__) noexcept;

/// @brief Field DEFAULT value: I32(0)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const DEFAULT;

/// @brief Field EVENT value: I32(4)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const EVENT;

/// @brief Field FEATURED value: I32(5)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const FEATURED;

/// @brief Field GCORP value: I32(3)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const GCORP;

/// @brief Field MM value: I32(2)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const MM;

/// @brief Field VIM value: I32(1)
static ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const VIM;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
