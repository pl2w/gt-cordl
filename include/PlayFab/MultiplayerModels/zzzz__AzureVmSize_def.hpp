#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AzureVmSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AzureVmSize)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct AzureVmSize;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::AzureVmSize);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AzureVmSize, "PlayFab.MultiplayerModels", "AzureVmSize");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.AzureVmSize
struct CORDL_TYPE AzureVmSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AzureVmSize_Unwrapped
enum struct __AzureVmSize_Unwrapped : int32_t {
__E_Standard_A1 = static_cast<int32_t>(0x0),
__E_Standard_A2 = static_cast<int32_t>(0x1),
__E_Standard_A3 = static_cast<int32_t>(0x2),
__E_Standard_A4 = static_cast<int32_t>(0x3),
__E_Standard_A1_v2 = static_cast<int32_t>(0x4),
__E_Standard_A2_v2 = static_cast<int32_t>(0x5),
__E_Standard_A4_v2 = static_cast<int32_t>(0x6),
__E_Standard_A8_v2 = static_cast<int32_t>(0x7),
__E_Standard_D1_v2 = static_cast<int32_t>(0x8),
__E_Standard_D2_v2 = static_cast<int32_t>(0x9),
__E_Standard_D3_v2 = static_cast<int32_t>(0xa),
__E_Standard_D4_v2 = static_cast<int32_t>(0xb),
__E_Standard_D5_v2 = static_cast<int32_t>(0xc),
__E_Standard_D2_v3 = static_cast<int32_t>(0xd),
__E_Standard_D4_v3 = static_cast<int32_t>(0xe),
__E_Standard_D8_v3 = static_cast<int32_t>(0xf),
__E_Standard_D16_v3 = static_cast<int32_t>(0x10),
__E_Standard_F1 = static_cast<int32_t>(0x11),
__E_Standard_F2 = static_cast<int32_t>(0x12),
__E_Standard_F4 = static_cast<int32_t>(0x13),
__E_Standard_F8 = static_cast<int32_t>(0x14),
__E_Standard_F16 = static_cast<int32_t>(0x15),
__E_Standard_F2s_v2 = static_cast<int32_t>(0x16),
__E_Standard_F4s_v2 = static_cast<int32_t>(0x17),
__E_Standard_F8s_v2 = static_cast<int32_t>(0x18),
__E_Standard_F16s_v2 = static_cast<int32_t>(0x19),
__E_Standard_D2as_v4 = static_cast<int32_t>(0x1a),
__E_Standard_D4as_v4 = static_cast<int32_t>(0x1b),
__E_Standard_D8as_v4 = static_cast<int32_t>(0x1c),
__E_Standard_D16as_v4 = static_cast<int32_t>(0x1d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AzureVmSize_Unwrapped () const noexcept {
return static_cast<__AzureVmSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AzureVmSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AzureVmSize(int32_t  value__) noexcept;

/// @brief Field Standard_A1 value: I32(0)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A1;

/// @brief Field Standard_A1_v2 value: I32(4)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A1_v2;

/// @brief Field Standard_A2 value: I32(1)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A2;

/// @brief Field Standard_A2_v2 value: I32(5)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A2_v2;

/// @brief Field Standard_A3 value: I32(2)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A3;

/// @brief Field Standard_A4 value: I32(3)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A4;

/// @brief Field Standard_A4_v2 value: I32(6)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A4_v2;

/// @brief Field Standard_A8_v2 value: I32(7)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_A8_v2;

/// @brief Field Standard_D16_v3 value: I32(16)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D16_v3;

/// @brief Field Standard_D16as_v4 value: I32(29)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D16as_v4;

/// @brief Field Standard_D1_v2 value: I32(8)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D1_v2;

/// @brief Field Standard_D2_v2 value: I32(9)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D2_v2;

/// @brief Field Standard_D2_v3 value: I32(13)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D2_v3;

/// @brief Field Standard_D2as_v4 value: I32(26)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D2as_v4;

/// @brief Field Standard_D3_v2 value: I32(10)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D3_v2;

/// @brief Field Standard_D4_v2 value: I32(11)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D4_v2;

/// @brief Field Standard_D4_v3 value: I32(14)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D4_v3;

/// @brief Field Standard_D4as_v4 value: I32(27)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D4as_v4;

/// @brief Field Standard_D5_v2 value: I32(12)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D5_v2;

/// @brief Field Standard_D8_v3 value: I32(15)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D8_v3;

/// @brief Field Standard_D8as_v4 value: I32(28)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_D8as_v4;

/// @brief Field Standard_F1 value: I32(17)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F1;

/// @brief Field Standard_F16 value: I32(21)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F16;

/// @brief Field Standard_F16s_v2 value: I32(25)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F16s_v2;

/// @brief Field Standard_F2 value: I32(18)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F2;

/// @brief Field Standard_F2s_v2 value: I32(22)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F2s_v2;

/// @brief Field Standard_F4 value: I32(19)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F4;

/// @brief Field Standard_F4s_v2 value: I32(23)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F4s_v2;

/// @brief Field Standard_F8 value: I32(20)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F8;

/// @brief Field Standard_F8s_v2 value: I32(24)
static ::PlayFab::MultiplayerModels::AzureVmSize const Standard_F8s_v2;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AzureVmSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AzureVmSize) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
