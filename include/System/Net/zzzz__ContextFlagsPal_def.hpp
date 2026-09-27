#pragma once
// IWYU pragma private; include "System/Net/ContextFlagsPal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextFlagsPal)
// Forward declare root types
namespace System::Net {
struct ContextFlagsPal;
}
// Write type traits
MARK_VAL_T(::System::Net::ContextFlagsPal);
DEFINE_IL2CPP_CLASS(::System::Net::ContextFlagsPal, "System.Net", "ContextFlagsPal");
// [Flags]
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ContextFlagsPal
struct CORDL_TYPE ContextFlagsPal {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContextFlagsPal_Unwrapped
enum struct __ContextFlagsPal_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Delegate = static_cast<int32_t>(0x1),
__E_MutualAuth = static_cast<int32_t>(0x2),
__E_ReplayDetect = static_cast<int32_t>(0x4),
__E_SequenceDetect = static_cast<int32_t>(0x8),
__E_Confidentiality = static_cast<int32_t>(0x10),
__E_UseSessionKey = static_cast<int32_t>(0x20),
__E_AllocateMemory = static_cast<int32_t>(0x100),
__E_Connection = static_cast<int32_t>(0x800),
__E_InitExtendedError = static_cast<int32_t>(0x4000),
__E_AcceptExtendedError = static_cast<int32_t>(0x8000),
__E_InitStream = static_cast<int32_t>(0x8000),
__E_AcceptStream = static_cast<int32_t>(0x10000),
__E_InitIntegrity = static_cast<int32_t>(0x10000),
__E_AcceptIntegrity = static_cast<int32_t>(0x20000),
__E_InitManualCredValidation = static_cast<int32_t>(0x80000),
__E_InitUseSuppliedCreds = static_cast<int32_t>(0x80),
__E_InitIdentify = static_cast<int32_t>(0x20000),
__E_AcceptIdentify = static_cast<int32_t>(0x80000),
__E_ProxyBindings = static_cast<int32_t>(0x4000000),
__E_AllowMissingBindings = static_cast<int32_t>(0x10000000),
__E_UnverifiedTargetName = static_cast<int32_t>(0x20000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContextFlagsPal_Unwrapped () const noexcept {
return static_cast<__ContextFlagsPal_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContextFlagsPal() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContextFlagsPal(int32_t  value__) noexcept;

/// @brief Field AcceptExtendedError value: I32(32768)
static ::System::Net::ContextFlagsPal const AcceptExtendedError;

/// @brief Field AcceptIdentify value: I32(524288)
static ::System::Net::ContextFlagsPal const AcceptIdentify;

/// @brief Field AcceptIntegrity value: I32(131072)
static ::System::Net::ContextFlagsPal const AcceptIntegrity;

/// @brief Field AcceptStream value: I32(65536)
static ::System::Net::ContextFlagsPal const AcceptStream;

/// @brief Field AllocateMemory value: I32(256)
static ::System::Net::ContextFlagsPal const AllocateMemory;

/// @brief Field AllowMissingBindings value: I32(268435456)
static ::System::Net::ContextFlagsPal const AllowMissingBindings;

/// @brief Field Confidentiality value: I32(16)
static ::System::Net::ContextFlagsPal const Confidentiality;

/// @brief Field Connection value: I32(2048)
static ::System::Net::ContextFlagsPal const Connection;

/// @brief Field Delegate value: I32(1)
static ::System::Net::ContextFlagsPal const Delegate;

/// @brief Field InitExtendedError value: I32(16384)
static ::System::Net::ContextFlagsPal const InitExtendedError;

/// @brief Field InitIdentify value: I32(131072)
static ::System::Net::ContextFlagsPal const InitIdentify;

/// @brief Field InitIntegrity value: I32(65536)
static ::System::Net::ContextFlagsPal const InitIntegrity;

/// @brief Field InitManualCredValidation value: I32(524288)
static ::System::Net::ContextFlagsPal const InitManualCredValidation;

/// @brief Field InitStream value: I32(32768)
static ::System::Net::ContextFlagsPal const InitStream;

/// @brief Field InitUseSuppliedCreds value: I32(128)
static ::System::Net::ContextFlagsPal const InitUseSuppliedCreds;

/// @brief Field MutualAuth value: I32(2)
static ::System::Net::ContextFlagsPal const MutualAuth;

/// @brief Field None value: I32(0)
static ::System::Net::ContextFlagsPal const None;

/// @brief Field ProxyBindings value: I32(67108864)
static ::System::Net::ContextFlagsPal const ProxyBindings;

/// @brief Field ReplayDetect value: I32(4)
static ::System::Net::ContextFlagsPal const ReplayDetect;

/// @brief Field SequenceDetect value: I32(8)
static ::System::Net::ContextFlagsPal const SequenceDetect;

/// @brief Field UnverifiedTargetName value: I32(536870912)
static ::System::Net::ContextFlagsPal const UnverifiedTargetName;

/// @brief Field UseSessionKey value: I32(32)
static ::System::Net::ContextFlagsPal const UseSessionKey;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContextFlagsPal, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::ContextFlagsPal) == 0x4, "Size mismatch!");

} // namespace end def System::Net
