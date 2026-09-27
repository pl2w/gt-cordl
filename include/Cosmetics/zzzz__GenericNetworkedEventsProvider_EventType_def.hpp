#pragma once
// IWYU pragma private; include "Cosmetics/GenericNetworkedEventsProvider_EventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericNetworkedEventsProvider_EventType)
// Forward declare root types
namespace GlobalNamespace {
struct GenericNetworkedEventsProvider_EventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GenericNetworkedEventsProvider_EventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GenericNetworkedEventsProvider_EventType, "Cosmetics", "GenericNetworkedEventsProvider/EventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cosmetics.GenericNetworkedEventsProvider/EventType
struct CORDL_TYPE GenericNetworkedEventsProvider_EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __GenericNetworkedEventsProvider_EventType_Unwrapped
enum struct __GenericNetworkedEventsProvider_EventType_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Int = static_cast<uint8_t>(0x1u),
__E_Float = static_cast<uint8_t>(0x2u),
__E_Bool = static_cast<uint8_t>(0x3u),
__E_Vector3 = static_cast<uint8_t>(0x4u),
__E_String = static_cast<uint8_t>(0x5u),
__E_Long = static_cast<uint8_t>(0x6u),
__E_Quaternion = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GenericNetworkedEventsProvider_EventType_Unwrapped () const noexcept {
return static_cast<__GenericNetworkedEventsProvider_EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GenericNetworkedEventsProvider_EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr GenericNetworkedEventsProvider_EventType(uint8_t  value__) noexcept;

/// @brief Field Bool value: U8(3)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const Bool;

/// @brief Field Float value: U8(2)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const Float;

/// @brief Field Int value: U8(1)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const Int;

/// @brief Field Long value: U8(6)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const Long;

/// @brief Field None value: U8(0)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const None;

/// @brief Field Quaternion value: U8(7)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const Quaternion;

/// @brief Field String value: U8(5)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const String;

/// @brief Field Vector3 value: U8(4)
static ::GlobalNamespace::GenericNetworkedEventsProvider_EventType const Vector3;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GenericNetworkedEventsProvider_EventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GenericNetworkedEventsProvider_EventType) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
