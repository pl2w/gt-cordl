#pragma once
// IWYU pragma private; include "Liv/Lck/Core/CosmeticsReturnCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsReturnCode)
// Forward declare root types
namespace Liv::Lck::Core {
struct CosmeticsReturnCode;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::CosmeticsReturnCode);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::CosmeticsReturnCode, "Liv.Lck.Core", "CosmeticsReturnCode");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.CosmeticsReturnCode
struct CORDL_TYPE CosmeticsReturnCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __CosmeticsReturnCode_Unwrapped
enum struct __CosmeticsReturnCode_Unwrapped : uint32_t {
__E_Ok = static_cast<uint32_t>(0x0u),
__E_Panic = static_cast<uint32_t>(0x1u),
__E_FailedToRetrieveState = static_cast<uint32_t>(0x2u),
__E_InvalidArgument = static_cast<uint32_t>(0x3u),
__E_BackendError = static_cast<uint32_t>(0x4u),
__E_FailedToCacheCosmetics = static_cast<uint32_t>(0x5u),
__E_FailedToNotifyOnCosmeticAvailable = static_cast<uint32_t>(0x6u),
__E_MutexLockError = static_cast<uint32_t>(0x7u),
__E_Unauthorized = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsReturnCode_Unwrapped () const noexcept {
return static_cast<__CosmeticsReturnCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsReturnCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsReturnCode(uint32_t  value__) noexcept;

/// @brief Field BackendError value: U32(4)
static ::Liv::Lck::Core::CosmeticsReturnCode const BackendError;

/// @brief Field FailedToCacheCosmetics value: U32(5)
static ::Liv::Lck::Core::CosmeticsReturnCode const FailedToCacheCosmetics;

/// @brief Field FailedToNotifyOnCosmeticAvailable value: U32(6)
static ::Liv::Lck::Core::CosmeticsReturnCode const FailedToNotifyOnCosmeticAvailable;

/// @brief Field FailedToRetrieveState value: U32(2)
static ::Liv::Lck::Core::CosmeticsReturnCode const FailedToRetrieveState;

/// @brief Field InvalidArgument value: U32(3)
static ::Liv::Lck::Core::CosmeticsReturnCode const InvalidArgument;

/// @brief Field MutexLockError value: U32(7)
static ::Liv::Lck::Core::CosmeticsReturnCode const MutexLockError;

/// @brief Field Ok value: U32(0)
static ::Liv::Lck::Core::CosmeticsReturnCode const Ok;

/// @brief Field Panic value: U32(1)
static ::Liv::Lck::Core::CosmeticsReturnCode const Panic;

/// @brief Field Unauthorized value: U32(8)
static ::Liv::Lck::Core::CosmeticsReturnCode const Unauthorized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31927};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::CosmeticsReturnCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::CosmeticsReturnCode) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Core
