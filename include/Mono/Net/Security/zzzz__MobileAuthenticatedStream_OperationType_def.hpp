#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream_OperationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileAuthenticatedStream_OperationType)
// Forward declare root types
namespace GlobalNamespace {
struct MobileAuthenticatedStream_OperationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MobileAuthenticatedStream_OperationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MobileAuthenticatedStream_OperationType, "Mono.Net.Security", "MobileAuthenticatedStream/OperationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/OperationType
struct CORDL_TYPE MobileAuthenticatedStream_OperationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MobileAuthenticatedStream_OperationType_Unwrapped
enum struct __MobileAuthenticatedStream_OperationType_Unwrapped : int32_t {
__E_Read = static_cast<int32_t>(0x0),
__E_Write = static_cast<int32_t>(0x1),
__E_Renegotiate = static_cast<int32_t>(0x2),
__E_Shutdown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MobileAuthenticatedStream_OperationType_Unwrapped () const noexcept {
return static_cast<__MobileAuthenticatedStream_OperationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MobileAuthenticatedStream_OperationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MobileAuthenticatedStream_OperationType(int32_t  value__) noexcept;

/// @brief Field Read value: I32(0)
static ::GlobalNamespace::MobileAuthenticatedStream_OperationType const Read;

/// @brief Field Renegotiate value: I32(2)
static ::GlobalNamespace::MobileAuthenticatedStream_OperationType const Renegotiate;

/// @brief Field Shutdown value: I32(3)
static ::GlobalNamespace::MobileAuthenticatedStream_OperationType const Shutdown;

/// @brief Field Write value: I32(1)
static ::GlobalNamespace::MobileAuthenticatedStream_OperationType const Write;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MobileAuthenticatedStream_OperationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MobileAuthenticatedStream_OperationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
