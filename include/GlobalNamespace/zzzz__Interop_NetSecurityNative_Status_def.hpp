#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_NetSecurityNative_Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_NetSecurityNative_Status)
// Forward declare root types
namespace GlobalNamespace {
struct NetSecurityNative_Interop_Status;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetSecurityNative_Interop_Status);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetSecurityNative_Interop_Status, "", "Interop/NetSecurityNative/Status");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NetSecurityNative/Status
struct CORDL_TYPE NetSecurityNative_Interop_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NetSecurityNative_Interop_Status_Unwrapped
enum struct __NetSecurityNative_Interop_Status_Unwrapped : uint32_t {
__E_GSS_S_COMPLETE = static_cast<uint32_t>(0x0u),
__E_GSS_S_CONTINUE_NEEDED = static_cast<uint32_t>(0x1u),
__E_GSS_S_BAD_MECH = static_cast<uint32_t>(0x10000u),
__E_GSS_S_BAD_NAME = static_cast<uint32_t>(0x20000u),
__E_GSS_S_BAD_NAMETYPE = static_cast<uint32_t>(0x30000u),
__E_GSS_S_BAD_BINDINGS = static_cast<uint32_t>(0x40000u),
__E_GSS_S_BAD_STATUS = static_cast<uint32_t>(0x50000u),
__E_GSS_S_BAD_SIG = static_cast<uint32_t>(0x60000u),
__E_GSS_S_NO_CRED = static_cast<uint32_t>(0x70000u),
__E_GSS_S_NO_CONTEXT = static_cast<uint32_t>(0x80000u),
__E_GSS_S_DEFECTIVE_TOKEN = static_cast<uint32_t>(0x90000u),
__E_GSS_S_DEFECTIVE_CREDENTIAL = static_cast<uint32_t>(0xa0000u),
__E_GSS_S_CREDENTIALS_EXPIRED = static_cast<uint32_t>(0xb0000u),
__E_GSS_S_CONTEXT_EXPIRED = static_cast<uint32_t>(0xc0000u),
__E_GSS_S_FAILURE = static_cast<uint32_t>(0xd0000u),
__E_GSS_S_BAD_QOP = static_cast<uint32_t>(0xe0000u),
__E_GSS_S_UNAUTHORIZED = static_cast<uint32_t>(0xf0000u),
__E_GSS_S_UNAVAILABLE = static_cast<uint32_t>(0x100000u),
__E_GSS_S_DUPLICATE_ELEMENT = static_cast<uint32_t>(0x110000u),
__E_GSS_S_NAME_NOT_MN = static_cast<uint32_t>(0x120000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetSecurityNative_Interop_Status_Unwrapped () const noexcept {
return static_cast<__NetSecurityNative_Interop_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetSecurityNative_Interop_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetSecurityNative_Interop_Status(uint32_t  value__) noexcept;

/// @brief Field GSS_S_BAD_BINDINGS value: U32(262144)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_BAD_BINDINGS;

/// @brief Field GSS_S_BAD_MECH value: U32(65536)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_BAD_MECH;

/// @brief Field GSS_S_BAD_NAME value: U32(131072)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_BAD_NAME;

/// @brief Field GSS_S_BAD_NAMETYPE value: U32(196608)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_BAD_NAMETYPE;

/// @brief Field GSS_S_BAD_QOP value: U32(917504)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_BAD_QOP;

/// @brief Field GSS_S_BAD_SIG value: U32(393216)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_BAD_SIG;

/// @brief Field GSS_S_BAD_STATUS value: U32(327680)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_BAD_STATUS;

/// @brief Field GSS_S_COMPLETE value: U32(0)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_COMPLETE;

/// @brief Field GSS_S_CONTEXT_EXPIRED value: U32(786432)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_CONTEXT_EXPIRED;

/// @brief Field GSS_S_CONTINUE_NEEDED value: U32(1)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_CONTINUE_NEEDED;

/// @brief Field GSS_S_CREDENTIALS_EXPIRED value: U32(720896)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_CREDENTIALS_EXPIRED;

/// @brief Field GSS_S_DEFECTIVE_CREDENTIAL value: U32(655360)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_DEFECTIVE_CREDENTIAL;

/// @brief Field GSS_S_DEFECTIVE_TOKEN value: U32(589824)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_DEFECTIVE_TOKEN;

/// @brief Field GSS_S_DUPLICATE_ELEMENT value: U32(1114112)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_DUPLICATE_ELEMENT;

/// @brief Field GSS_S_FAILURE value: U32(851968)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_FAILURE;

/// @brief Field GSS_S_NAME_NOT_MN value: U32(1179648)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_NAME_NOT_MN;

/// @brief Field GSS_S_NO_CONTEXT value: U32(524288)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_NO_CONTEXT;

/// @brief Field GSS_S_NO_CRED value: U32(458752)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_NO_CRED;

/// @brief Field GSS_S_UNAUTHORIZED value: U32(983040)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_UNAUTHORIZED;

/// @brief Field GSS_S_UNAVAILABLE value: U32(1048576)
static ::GlobalNamespace::NetSecurityNative_Interop_Status const GSS_S_UNAVAILABLE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9795};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetSecurityNative_Interop_Status, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetSecurityNative_Interop_Status) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
