#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/TalkingCosmeticType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TalkingCosmeticType)
// Forward declare root types
namespace GorillaTag::Cosmetics {
struct TalkingCosmeticType;
}
// Write type traits
MARK_VAL_T(::GorillaTag::Cosmetics::TalkingCosmeticType);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::TalkingCosmeticType, "GorillaTag.Cosmetics", "TalkingCosmeticType");
// Dependencies 
namespace GorillaTag::Cosmetics {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.TalkingCosmeticType
struct CORDL_TYPE TalkingCosmeticType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TalkingCosmeticType_Unwrapped
enum struct __TalkingCosmeticType_Unwrapped : int32_t {
__E_RobotSkull = static_cast<int32_t>(0x0),
__E_CreepyDoll = static_cast<int32_t>(0x1),
__E_MicrophoneGNN = static_cast<int32_t>(0x2),
__E_MicrophoneGC = static_cast<int32_t>(0x3),
__E_MicrophonePirateRadio = static_cast<int32_t>(0x4),
__E_AddYourNewCosmeticHere = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TalkingCosmeticType_Unwrapped () const noexcept {
return static_cast<__TalkingCosmeticType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TalkingCosmeticType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TalkingCosmeticType(int32_t  value__) noexcept;

/// @brief Field AddYourNewCosmeticHere value: I32(5)
static ::GorillaTag::Cosmetics::TalkingCosmeticType const AddYourNewCosmeticHere;

/// @brief Field CreepyDoll value: I32(1)
static ::GorillaTag::Cosmetics::TalkingCosmeticType const CreepyDoll;

/// @brief Field MicrophoneGC value: I32(3)
static ::GorillaTag::Cosmetics::TalkingCosmeticType const MicrophoneGC;

/// @brief Field MicrophoneGNN value: I32(2)
static ::GorillaTag::Cosmetics::TalkingCosmeticType const MicrophoneGNN;

/// @brief Field MicrophonePirateRadio value: I32(4)
static ::GorillaTag::Cosmetics::TalkingCosmeticType const MicrophonePirateRadio;

/// @brief Field RobotSkull value: I32(0)
static ::GorillaTag::Cosmetics::TalkingCosmeticType const RobotSkull;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4984};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::TalkingCosmeticType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::TalkingCosmeticType) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
