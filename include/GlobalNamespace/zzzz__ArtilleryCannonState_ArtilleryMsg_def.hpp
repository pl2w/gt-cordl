#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannonState_ArtilleryMsg.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArtilleryCannonState_ArtilleryMsg)
// Forward declare root types
namespace GlobalNamespace {
struct ArtilleryCannonState_ArtilleryMsg;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg, "", "ArtilleryCannonState/ArtilleryMsg");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArtilleryCannonState/ArtilleryMsg
struct CORDL_TYPE ArtilleryCannonState_ArtilleryMsg {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ArtilleryCannonState_ArtilleryMsg_Unwrapped
enum struct __ArtilleryCannonState_ArtilleryMsg_Unwrapped : uint8_t {
__E_CrankGrabLeft = static_cast<uint8_t>(0x0u),
__E_CrankGrabRight = static_cast<uint8_t>(0x1u),
__E_CrankRelease = static_cast<uint8_t>(0x2u),
__E_CrankInput = static_cast<uint8_t>(0x3u),
__E_Fire = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArtilleryCannonState_ArtilleryMsg_Unwrapped () const noexcept {
return static_cast<__ArtilleryCannonState_ArtilleryMsg_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArtilleryCannonState_ArtilleryMsg() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ArtilleryCannonState_ArtilleryMsg(uint8_t  value__) noexcept;

/// @brief Field CrankGrabLeft value: U8(0)
static ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg const CrankGrabLeft;

/// @brief Field CrankGrabRight value: U8(1)
static ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg const CrankGrabRight;

/// @brief Field CrankInput value: U8(3)
static ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg const CrankInput;

/// @brief Field CrankRelease value: U8(2)
static ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg const CrankRelease;

/// @brief Field Fire value: U8(4)
static ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg const Fire;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{399};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
