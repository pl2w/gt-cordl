#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_NetSecurityNative_GssFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_NetSecurityNative_GssFlags)
// Forward declare root types
namespace GlobalNamespace {
struct NetSecurityNative_Interop_GssFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetSecurityNative_Interop_GssFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetSecurityNative_Interop_GssFlags, "", "Interop/NetSecurityNative/GssFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NetSecurityNative/GssFlags
struct CORDL_TYPE NetSecurityNative_Interop_GssFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NetSecurityNative_Interop_GssFlags_Unwrapped
enum struct __NetSecurityNative_Interop_GssFlags_Unwrapped : uint32_t {
__E_GSS_C_DELEG_FLAG = static_cast<uint32_t>(0x1u),
__E_GSS_C_MUTUAL_FLAG = static_cast<uint32_t>(0x2u),
__E_GSS_C_REPLAY_FLAG = static_cast<uint32_t>(0x4u),
__E_GSS_C_SEQUENCE_FLAG = static_cast<uint32_t>(0x8u),
__E_GSS_C_CONF_FLAG = static_cast<uint32_t>(0x10u),
__E_GSS_C_INTEG_FLAG = static_cast<uint32_t>(0x20u),
__E_GSS_C_ANON_FLAG = static_cast<uint32_t>(0x40u),
__E_GSS_C_PROT_READY_FLAG = static_cast<uint32_t>(0x80u),
__E_GSS_C_TRANS_FLAG = static_cast<uint32_t>(0x100u),
__E_GSS_C_DCE_STYLE = static_cast<uint32_t>(0x1000u),
__E_GSS_C_IDENTIFY_FLAG = static_cast<uint32_t>(0x2000u),
__E_GSS_C_EXTENDED_ERROR_FLAG = static_cast<uint32_t>(0x4000u),
__E_GSS_C_DELEG_POLICY_FLAG = static_cast<uint32_t>(0x8000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetSecurityNative_Interop_GssFlags_Unwrapped () const noexcept {
return static_cast<__NetSecurityNative_Interop_GssFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetSecurityNative_Interop_GssFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetSecurityNative_Interop_GssFlags(uint32_t  value__) noexcept;

/// @brief Field GSS_C_ANON_FLAG value: U32(64)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_ANON_FLAG;

/// @brief Field GSS_C_CONF_FLAG value: U32(16)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_CONF_FLAG;

/// @brief Field GSS_C_DCE_STYLE value: U32(4096)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_DCE_STYLE;

/// @brief Field GSS_C_DELEG_FLAG value: U32(1)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_DELEG_FLAG;

/// @brief Field GSS_C_DELEG_POLICY_FLAG value: U32(32768)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_DELEG_POLICY_FLAG;

/// @brief Field GSS_C_EXTENDED_ERROR_FLAG value: U32(16384)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_EXTENDED_ERROR_FLAG;

/// @brief Field GSS_C_IDENTIFY_FLAG value: U32(8192)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_IDENTIFY_FLAG;

/// @brief Field GSS_C_INTEG_FLAG value: U32(32)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_INTEG_FLAG;

/// @brief Field GSS_C_MUTUAL_FLAG value: U32(2)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_MUTUAL_FLAG;

/// @brief Field GSS_C_PROT_READY_FLAG value: U32(128)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_PROT_READY_FLAG;

/// @brief Field GSS_C_REPLAY_FLAG value: U32(4)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_REPLAY_FLAG;

/// @brief Field GSS_C_SEQUENCE_FLAG value: U32(8)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_SEQUENCE_FLAG;

/// @brief Field GSS_C_TRANS_FLAG value: U32(256)
static ::GlobalNamespace::NetSecurityNative_Interop_GssFlags const GSS_C_TRANS_FLAG;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetSecurityNative_Interop_GssFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetSecurityNative_Interop_GssFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
