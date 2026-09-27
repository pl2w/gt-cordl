#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Axis1D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_Axis1D)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_Axis1D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_Axis1D);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_Axis1D, "", "OVRInput/Axis1D");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Axis1D
struct CORDL_TYPE OVRInput_Axis1D {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_Axis1D_Unwrapped
enum struct __OVRInput_Axis1D_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PrimaryIndexTrigger = static_cast<int32_t>(0x1),
__E_PrimaryHandTrigger = static_cast<int32_t>(0x4),
__E_SecondaryIndexTrigger = static_cast<int32_t>(0x2),
__E_SecondaryHandTrigger = static_cast<int32_t>(0x8),
__E_PrimaryIndexTriggerCurl = static_cast<int32_t>(0x10),
__E_PrimaryIndexTriggerSlide = static_cast<int32_t>(0x20),
__E_PrimaryThumbRestForce = static_cast<int32_t>(0x40),
__E_PrimaryStylusForce = static_cast<int32_t>(0x80),
__E_SecondaryIndexTriggerCurl = static_cast<int32_t>(0x100),
__E_SecondaryIndexTriggerSlide = static_cast<int32_t>(0x200),
__E_SecondaryThumbRestForce = static_cast<int32_t>(0x400),
__E_SecondaryStylusForce = static_cast<int32_t>(0x800),
__E_PrimaryIndexTriggerForce = static_cast<int32_t>(0x1000),
__E_SecondaryIndexTriggerForce = static_cast<int32_t>(0x2000),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_Axis1D_Unwrapped () const noexcept {
return static_cast<__OVRInput_Axis1D_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_Axis1D() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_Axis1D(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_Axis1D const Any;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_Axis1D const None;

/// @brief Field PrimaryHandTrigger value: I32(4)
static ::GlobalNamespace::OVRInput_Axis1D const PrimaryHandTrigger;

/// @brief Field PrimaryIndexTrigger value: I32(1)
static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTrigger;

/// @brief Field PrimaryIndexTriggerCurl value: I32(16)
static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTriggerCurl;

/// @brief Field PrimaryIndexTriggerForce value: I32(4096)
static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTriggerForce;

/// @brief Field PrimaryIndexTriggerSlide value: I32(32)
static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTriggerSlide;

/// @brief Field PrimaryStylusForce value: I32(128)
static ::GlobalNamespace::OVRInput_Axis1D const PrimaryStylusForce;

/// @brief Field PrimaryThumbRestForce value: I32(64)
static ::GlobalNamespace::OVRInput_Axis1D const PrimaryThumbRestForce;

/// @brief Field SecondaryHandTrigger value: I32(8)
static ::GlobalNamespace::OVRInput_Axis1D const SecondaryHandTrigger;

/// @brief Field SecondaryIndexTrigger value: I32(2)
static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTrigger;

/// @brief Field SecondaryIndexTriggerCurl value: I32(256)
static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTriggerCurl;

/// @brief Field SecondaryIndexTriggerForce value: I32(8192)
static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTriggerForce;

/// @brief Field SecondaryIndexTriggerSlide value: I32(512)
static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTriggerSlide;

/// @brief Field SecondaryStylusForce value: I32(2048)
static ::GlobalNamespace::OVRInput_Axis1D const SecondaryStylusForce;

/// @brief Field SecondaryThumbRestForce value: I32(1024)
static ::GlobalNamespace::OVRInput_Axis1D const SecondaryThumbRestForce;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11936};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Axis1D, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_Axis1D) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
