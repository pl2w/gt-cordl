#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticRefID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticRefID)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticRefID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticRefID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticRefID, "", "CosmeticRefID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CosmeticRefID
struct CORDL_TYPE CosmeticRefID {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticRefID_Unwrapped
enum struct __CosmeticRefID_Unwrapped : int32_t {
__E_PleaseCreateUniqueID = static_cast<int32_t>(0x0),
__E_LeafblowerHoseSocket = static_cast<int32_t>(0x1),
__E_LeafblowerFan = static_cast<int32_t>(0x2),
__E_SlingshotSnapLeft = static_cast<int32_t>(0x3),
__E_SlingshotSnapRight = static_cast<int32_t>(0x4),
__E_ElfLauncherHoseSocket = static_cast<int32_t>(0x5),
__E_ShadeRevealerHoseSocket = static_cast<int32_t>(0x6),
__E_GreenMonkeLauncherHoseSocket = static_cast<int32_t>(0x7),
__E_HotPepperFaceEffect = static_cast<int32_t>(0x8),
__E__COUNT = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticRefID_Unwrapped () const noexcept {
return static_cast<__CosmeticRefID_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticRefID() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticRefID(int32_t  value__) noexcept;

/// @brief Field ElfLauncherHoseSocket value: I32(5)
static ::GlobalNamespace::CosmeticRefID const ElfLauncherHoseSocket;

/// @brief Field GreenMonkeLauncherHoseSocket value: I32(7)
static ::GlobalNamespace::CosmeticRefID const GreenMonkeLauncherHoseSocket;

/// @brief Field HotPepperFaceEffect value: I32(8)
static ::GlobalNamespace::CosmeticRefID const HotPepperFaceEffect;

/// @brief Field LeafblowerFan value: I32(2)
static ::GlobalNamespace::CosmeticRefID const LeafblowerFan;

/// @brief Field LeafblowerHoseSocket value: I32(1)
static ::GlobalNamespace::CosmeticRefID const LeafblowerHoseSocket;

/// @brief Field PleaseCreateUniqueID value: I32(0)
static ::GlobalNamespace::CosmeticRefID const PleaseCreateUniqueID;

/// @brief Field ShadeRevealerHoseSocket value: I32(6)
static ::GlobalNamespace::CosmeticRefID const ShadeRevealerHoseSocket;

/// @brief Field SlingshotSnapLeft value: I32(3)
static ::GlobalNamespace::CosmeticRefID const SlingshotSnapLeft;

/// @brief Field SlingshotSnapRight value: I32(4)
static ::GlobalNamespace::CosmeticRefID const SlingshotSnapRight;

/// @brief Field _COUNT value: I32(9)
static ::GlobalNamespace::CosmeticRefID const _COUNT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{697};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticRefID, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticRefID) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
