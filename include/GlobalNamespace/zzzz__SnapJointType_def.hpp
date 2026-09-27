#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapJointType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SnapJointType)
// Forward declare root types
namespace GlobalNamespace {
struct SnapJointType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SnapJointType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapJointType, "", "SnapJointType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SnapJointType
struct CORDL_TYPE SnapJointType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SnapJointType_Unwrapped
enum struct __SnapJointType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HandL = static_cast<int32_t>(0x1),
__E_HandR = static_cast<int32_t>(0x4),
__E_Chest = static_cast<int32_t>(0x8),
__E_Back = static_cast<int32_t>(0x10),
__E_Head = static_cast<int32_t>(0x20),
__E_Holster = static_cast<int32_t>(0x40),
__E_ForearmL = static_cast<int32_t>(0x80),
__E_ForearmR = static_cast<int32_t>(0x100),
__E_AuxHead = static_cast<int32_t>(0x200),
__E_AuxBody1 = static_cast<int32_t>(0x400),
__E_AuxBody2 = static_cast<int32_t>(0x800),
__E_AuxShoulderL = static_cast<int32_t>(0x1000),
__E_AuxShoulderR = static_cast<int32_t>(0x2000),
__E_Max = static_cast<int32_t>(0x4000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SnapJointType_Unwrapped () const noexcept {
return static_cast<__SnapJointType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SnapJointType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SnapJointType(int32_t  value__) noexcept;

/// @brief Field AuxBody1 value: I32(1024)
static ::GlobalNamespace::SnapJointType const AuxBody1;

/// @brief Field AuxBody2 value: I32(2048)
static ::GlobalNamespace::SnapJointType const AuxBody2;

/// @brief Field AuxHead value: I32(512)
static ::GlobalNamespace::SnapJointType const AuxHead;

/// @brief Field AuxShoulderL value: I32(4096)
static ::GlobalNamespace::SnapJointType const AuxShoulderL;

/// @brief Field AuxShoulderR value: I32(8192)
static ::GlobalNamespace::SnapJointType const AuxShoulderR;

/// @brief Field Back value: I32(16)
static ::GlobalNamespace::SnapJointType const Back;

/// @brief Field Chest value: I32(8)
static ::GlobalNamespace::SnapJointType const Chest;

/// @brief Field ForearmL value: I32(128)
static ::GlobalNamespace::SnapJointType const ForearmL;

/// @brief Field ForearmR value: I32(256)
static ::GlobalNamespace::SnapJointType const ForearmR;

/// @brief Field HandL value: I32(1)
static ::GlobalNamespace::SnapJointType const HandL;

/// @brief Field HandR value: I32(4)
static ::GlobalNamespace::SnapJointType const HandR;

/// @brief Field Head value: I32(32)
static ::GlobalNamespace::SnapJointType const Head;

/// @brief Field Holster value: I32(64)
static ::GlobalNamespace::SnapJointType const Holster;

/// @brief Field Max value: I32(16384)
static ::GlobalNamespace::SnapJointType const Max;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SnapJointType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnapJointType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnapJointType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
