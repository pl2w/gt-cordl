#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlayerLineButton_ButtonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPlayerLineButton_ButtonType)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaPlayerLineButton_ButtonType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaPlayerLineButton_ButtonType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlayerLineButton_ButtonType, "", "GorillaPlayerLineButton/ButtonType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaPlayerLineButton/ButtonType
struct CORDL_TYPE GorillaPlayerLineButton_ButtonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaPlayerLineButton_ButtonType_Unwrapped
enum struct __GorillaPlayerLineButton_ButtonType_Unwrapped : int32_t {
__E_HateSpeech = static_cast<int32_t>(0x0),
__E_Cheating = static_cast<int32_t>(0x1),
__E_Toxicity = static_cast<int32_t>(0x2),
__E_Mute = static_cast<int32_t>(0x3),
__E_Report = static_cast<int32_t>(0x4),
__E_Cancel = static_cast<int32_t>(0x5),
__E_MuteAllRoom = static_cast<int32_t>(0x6),
__E_KickRoom = static_cast<int32_t>(0x7),
__E_BanRoom = static_cast<int32_t>(0x8),
__E_Confirm = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaPlayerLineButton_ButtonType_Unwrapped () const noexcept {
return static_cast<__GorillaPlayerLineButton_ButtonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlayerLineButton_ButtonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaPlayerLineButton_ButtonType(int32_t  value__) noexcept;

/// @brief Field BanRoom value: I32(8)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const BanRoom;

/// @brief Field Cancel value: I32(5)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const Cancel;

/// @brief Field Cheating value: I32(1)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const Cheating;

/// @brief Field Confirm value: I32(9)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const Confirm;

/// @brief Field HateSpeech value: I32(0)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const HateSpeech;

/// @brief Field KickRoom value: I32(7)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const KickRoom;

/// @brief Field Mute value: I32(3)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const Mute;

/// @brief Field MuteAllRoom value: I32(6)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const MuteAllRoom;

/// @brief Field Report value: I32(4)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const Report;

/// @brief Field Toxicity value: I32(2)
static ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const Toxicity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2608};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton_ButtonType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPlayerLineButton_ButtonType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
