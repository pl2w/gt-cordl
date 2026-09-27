#pragma once
// IWYU pragma private; include "Photon/Realtime/EventCaching.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventCaching)
// Forward declare root types
namespace Photon::Realtime {
struct EventCaching;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::EventCaching);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::EventCaching, "Photon.Realtime", "EventCaching");
// Dependencies 
namespace Photon::Realtime {
// Is value type: true
// CS Name: Photon.Realtime.EventCaching
struct CORDL_TYPE EventCaching {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __EventCaching_Unwrapped
enum struct __EventCaching_Unwrapped : uint8_t {
__E_DoNotCache = static_cast<uint8_t>(0x0u),
__E_MergeCache = static_cast<uint8_t>(0x1u),
__E_ReplaceCache = static_cast<uint8_t>(0x2u),
__E_RemoveCache = static_cast<uint8_t>(0x3u),
__E_AddToRoomCache = static_cast<uint8_t>(0x4u),
__E_AddToRoomCacheGlobal = static_cast<uint8_t>(0x5u),
__E_RemoveFromRoomCache = static_cast<uint8_t>(0x6u),
__E_RemoveFromRoomCacheForActorsLeft = static_cast<uint8_t>(0x7u),
__E_SliceIncreaseIndex = static_cast<uint8_t>(0xau),
__E_SliceSetIndex = static_cast<uint8_t>(0xbu),
__E_SlicePurgeIndex = static_cast<uint8_t>(0xcu),
__E_SlicePurgeUpToIndex = static_cast<uint8_t>(0xdu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventCaching_Unwrapped () const noexcept {
return static_cast<__EventCaching_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EventCaching() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr EventCaching(uint8_t  value__) noexcept;

/// @brief Field AddToRoomCache value: U8(4)
static ::Photon::Realtime::EventCaching const AddToRoomCache;

/// @brief Field AddToRoomCacheGlobal value: U8(5)
static ::Photon::Realtime::EventCaching const AddToRoomCacheGlobal;

/// @brief Field DoNotCache value: U8(0)
static ::Photon::Realtime::EventCaching const DoNotCache;

/// @brief Field MergeCache value: U8(1)
static ::Photon::Realtime::EventCaching const MergeCache;

/// @brief Field RemoveCache value: U8(3)
static ::Photon::Realtime::EventCaching const RemoveCache;

/// @brief Field RemoveFromRoomCache value: U8(6)
static ::Photon::Realtime::EventCaching const RemoveFromRoomCache;

/// @brief Field RemoveFromRoomCacheForActorsLeft value: U8(7)
static ::Photon::Realtime::EventCaching const RemoveFromRoomCacheForActorsLeft;

/// @brief Field ReplaceCache value: U8(2)
static ::Photon::Realtime::EventCaching const ReplaceCache;

/// @brief Field SliceIncreaseIndex value: U8(10)
static ::Photon::Realtime::EventCaching const SliceIncreaseIndex;

/// @brief Field SlicePurgeIndex value: U8(12)
static ::Photon::Realtime::EventCaching const SlicePurgeIndex;

/// @brief Field SlicePurgeUpToIndex value: U8(13)
static ::Photon::Realtime::EventCaching const SlicePurgeUpToIndex;

/// @brief Field SliceSetIndex value: U8(11)
static ::Photon::Realtime::EventCaching const SliceSetIndex;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29880};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::EventCaching, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::EventCaching) == 0x1, "Size mismatch!");

} // namespace end def Photon::Realtime
