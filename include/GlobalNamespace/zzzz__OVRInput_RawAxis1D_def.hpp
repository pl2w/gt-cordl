#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_RawAxis1D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_RawAxis1D)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_RawAxis1D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_RawAxis1D);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_RawAxis1D, "", "OVRInput/RawAxis1D");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawAxis1D
struct CORDL_TYPE OVRInput_RawAxis1D {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_RawAxis1D_Unwrapped
enum struct __OVRInput_RawAxis1D_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LIndexTrigger = static_cast<int32_t>(0x1),
__E_LHandTrigger = static_cast<int32_t>(0x4),
__E_RIndexTrigger = static_cast<int32_t>(0x2),
__E_RHandTrigger = static_cast<int32_t>(0x8),
__E_LIndexTriggerCurl = static_cast<int32_t>(0x10),
__E_LIndexTriggerSlide = static_cast<int32_t>(0x20),
__E_LThumbRestForce = static_cast<int32_t>(0x40),
__E_LStylusForce = static_cast<int32_t>(0x80),
__E_RIndexTriggerCurl = static_cast<int32_t>(0x100),
__E_RIndexTriggerSlide = static_cast<int32_t>(0x200),
__E_RThumbRestForce = static_cast<int32_t>(0x400),
__E_RStylusForce = static_cast<int32_t>(0x800),
__E_LIndexTriggerForce = static_cast<int32_t>(0x1000),
__E_RIndexTriggerForce = static_cast<int32_t>(0x2000),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_RawAxis1D_Unwrapped () const noexcept {
return static_cast<__OVRInput_RawAxis1D_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_RawAxis1D() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_RawAxis1D(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_RawAxis1D const Any;

/// @brief Field LHandTrigger value: I32(4)
static ::GlobalNamespace::OVRInput_RawAxis1D const LHandTrigger;

/// @brief Field LIndexTrigger value: I32(1)
static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTrigger;

/// @brief Field LIndexTriggerCurl value: I32(16)
static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTriggerCurl;

/// @brief Field LIndexTriggerForce value: I32(4096)
static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTriggerForce;

/// @brief Field LIndexTriggerSlide value: I32(32)
static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTriggerSlide;

/// @brief Field LStylusForce value: I32(128)
static ::GlobalNamespace::OVRInput_RawAxis1D const LStylusForce;

/// @brief Field LThumbRestForce value: I32(64)
static ::GlobalNamespace::OVRInput_RawAxis1D const LThumbRestForce;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_RawAxis1D const None;

/// @brief Field RHandTrigger value: I32(8)
static ::GlobalNamespace::OVRInput_RawAxis1D const RHandTrigger;

/// @brief Field RIndexTrigger value: I32(2)
static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTrigger;

/// @brief Field RIndexTriggerCurl value: I32(256)
static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTriggerCurl;

/// @brief Field RIndexTriggerForce value: I32(8192)
static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTriggerForce;

/// @brief Field RIndexTriggerSlide value: I32(512)
static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTriggerSlide;

/// @brief Field RStylusForce value: I32(2048)
static ::GlobalNamespace::OVRInput_RawAxis1D const RStylusForce;

/// @brief Field RThumbRestForce value: I32(1024)
static ::GlobalNamespace::OVRInput_RawAxis1D const RThumbRestForce;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11937};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawAxis1D, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_RawAxis1D) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
