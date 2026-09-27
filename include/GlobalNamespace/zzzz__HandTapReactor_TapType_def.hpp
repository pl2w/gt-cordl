#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapReactor_TapType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandTapReactor_TapType)
// Forward declare root types
namespace GlobalNamespace {
struct HandTapReactor_TapType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandTapReactor_TapType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapReactor_TapType, "", "HandTapReactor/TapType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HandTapReactor/TapType
struct CORDL_TYPE HandTapReactor_TapType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandTapReactor_TapType_Unwrapped
enum struct __HandTapReactor_TapType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LeftDown = static_cast<int32_t>(0x1),
__E_LeftUp = static_cast<int32_t>(0x2),
__E_LeftHighFive = static_cast<int32_t>(0x4),
__E_LeftFistBump = static_cast<int32_t>(0x8),
__E_LeftTagFirstPerson = static_cast<int32_t>(0x10),
__E_LeftTagThirdPerson = static_cast<int32_t>(0x20),
__E_AllLeft = static_cast<int32_t>(0x3f),
__E_RightDown = static_cast<int32_t>(0x40),
__E_RightUp = static_cast<int32_t>(0x80),
__E_RightHighFive = static_cast<int32_t>(0x100),
__E_RightFistBump = static_cast<int32_t>(0x200),
__E_RightTagFirstPerson = static_cast<int32_t>(0x400),
__E_RightTagThirdPerson = static_cast<int32_t>(0x800),
__E_AllRight = static_cast<int32_t>(0xfc0),
__E_All = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandTapReactor_TapType_Unwrapped () const noexcept {
return static_cast<__HandTapReactor_TapType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandTapReactor_TapType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandTapReactor_TapType(int32_t  value__) noexcept;

/// @brief Field All value: I32(-1)
static ::GlobalNamespace::HandTapReactor_TapType const All;

/// @brief Field AllLeft value: I32(63)
static ::GlobalNamespace::HandTapReactor_TapType const AllLeft;

/// @brief Field AllRight value: I32(4032)
static ::GlobalNamespace::HandTapReactor_TapType const AllRight;

/// @brief Field LeftDown value: I32(1)
static ::GlobalNamespace::HandTapReactor_TapType const LeftDown;

/// @brief Field LeftFistBump value: I32(8)
static ::GlobalNamespace::HandTapReactor_TapType const LeftFistBump;

/// @brief Field LeftHighFive value: I32(4)
static ::GlobalNamespace::HandTapReactor_TapType const LeftHighFive;

/// @brief Field LeftTagFirstPerson value: I32(16)
static ::GlobalNamespace::HandTapReactor_TapType const LeftTagFirstPerson;

/// @brief Field LeftTagThirdPerson value: I32(32)
static ::GlobalNamespace::HandTapReactor_TapType const LeftTagThirdPerson;

/// @brief Field LeftUp value: I32(2)
static ::GlobalNamespace::HandTapReactor_TapType const LeftUp;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandTapReactor_TapType const None;

/// @brief Field RightDown value: I32(64)
static ::GlobalNamespace::HandTapReactor_TapType const RightDown;

/// @brief Field RightFistBump value: I32(512)
static ::GlobalNamespace::HandTapReactor_TapType const RightFistBump;

/// @brief Field RightHighFive value: I32(256)
static ::GlobalNamespace::HandTapReactor_TapType const RightHighFive;

/// @brief Field RightTagFirstPerson value: I32(1024)
static ::GlobalNamespace::HandTapReactor_TapType const RightTagFirstPerson;

/// @brief Field RightTagThirdPerson value: I32(2048)
static ::GlobalNamespace::HandTapReactor_TapType const RightTagThirdPerson;

/// @brief Field RightUp value: I32(128)
static ::GlobalNamespace::HandTapReactor_TapType const RightUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{740};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTapReactor_TapType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTapReactor_TapType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
