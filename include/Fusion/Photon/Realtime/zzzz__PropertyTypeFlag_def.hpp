#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PropertyTypeFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyTypeFlag)
// Forward declare root types
namespace Fusion::Photon::Realtime {
struct PropertyTypeFlag;
}
// Write type traits
MARK_VAL_T(::Fusion::Photon::Realtime::PropertyTypeFlag);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::PropertyTypeFlag, "Fusion.Photon.Realtime", "PropertyTypeFlag");
// [Flags]
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: true
// CS Name: Fusion.Photon.Realtime.PropertyTypeFlag
struct CORDL_TYPE PropertyTypeFlag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PropertyTypeFlag_Unwrapped
enum struct __PropertyTypeFlag_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Game = static_cast<uint8_t>(0x1u),
__E_Actor = static_cast<uint8_t>(0x2u),
__E_GameAndActor = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropertyTypeFlag_Unwrapped () const noexcept {
return static_cast<__PropertyTypeFlag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PropertyTypeFlag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PropertyTypeFlag(uint8_t  value__) noexcept;

/// @brief Field Actor value: U8(2)
static ::Fusion::Photon::Realtime::PropertyTypeFlag const Actor;

/// @brief Field Game value: U8(1)
static ::Fusion::Photon::Realtime::PropertyTypeFlag const Game;

/// @brief Field GameAndActor value: U8(3)
static ::Fusion::Photon::Realtime::PropertyTypeFlag const GameAndActor;

/// @brief Field None value: U8(0)
static ::Fusion::Photon::Realtime::PropertyTypeFlag const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28084};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::PropertyTypeFlag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::PropertyTypeFlag) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
