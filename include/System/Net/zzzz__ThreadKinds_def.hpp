#pragma once
// IWYU pragma private; include "System/Net/ThreadKinds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadKinds)
// Forward declare root types
namespace System::Net {
struct ThreadKinds;
}
// Write type traits
MARK_VAL_T(::System::Net::ThreadKinds);
DEFINE_IL2CPP_CLASS(::System::Net::ThreadKinds, "System.Net", "ThreadKinds");
// [Flags]
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ThreadKinds
struct CORDL_TYPE ThreadKinds {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThreadKinds_Unwrapped
enum struct __ThreadKinds_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_User = static_cast<int32_t>(0x1),
__E_System = static_cast<int32_t>(0x2),
__E_Sync = static_cast<int32_t>(0x4),
__E_Async = static_cast<int32_t>(0x8),
__E_Timer = static_cast<int32_t>(0x10),
__E_CompletionPort = static_cast<int32_t>(0x20),
__E_Worker = static_cast<int32_t>(0x40),
__E_Finalization = static_cast<int32_t>(0x80),
__E_Other = static_cast<int32_t>(0x100),
__E_OwnerMask = static_cast<int32_t>(0x3),
__E_SyncMask = static_cast<int32_t>(0xc),
__E_SourceMask = static_cast<int32_t>(0x1f0),
__E_SafeSources = static_cast<int32_t>(0x160),
__E_ThreadPool = static_cast<int32_t>(0x60),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThreadKinds_Unwrapped () const noexcept {
return static_cast<__ThreadKinds_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ThreadKinds() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ThreadKinds(int32_t  value__) noexcept;

/// @brief Field Async value: I32(8)
static ::System::Net::ThreadKinds const Async;

/// @brief Field CompletionPort value: I32(32)
static ::System::Net::ThreadKinds const CompletionPort;

/// @brief Field Finalization value: I32(128)
static ::System::Net::ThreadKinds const Finalization;

/// @brief Field Other value: I32(256)
static ::System::Net::ThreadKinds const Other;

/// @brief Field OwnerMask value: I32(3)
static ::System::Net::ThreadKinds const OwnerMask;

/// @brief Field SafeSources value: I32(352)
static ::System::Net::ThreadKinds const SafeSources;

/// @brief Field SourceMask value: I32(496)
static ::System::Net::ThreadKinds const SourceMask;

/// @brief Field Sync value: I32(4)
static ::System::Net::ThreadKinds const Sync;

/// @brief Field SyncMask value: I32(12)
static ::System::Net::ThreadKinds const SyncMask;

/// @brief Field System value: I32(2)
static ::System::Net::ThreadKinds const System;

/// @brief Field ThreadPool value: I32(96)
static ::System::Net::ThreadKinds const ThreadPool;

/// @brief Field Timer value: I32(16)
static ::System::Net::ThreadKinds const Timer;

/// @brief Field Unknown value: I32(0)
static ::System::Net::ThreadKinds const Unknown;

/// @brief Field User value: I32(1)
static ::System::Net::ThreadKinds const User;

/// @brief Field Worker value: I32(64)
static ::System::Net::ThreadKinds const Worker;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ThreadKinds, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::ThreadKinds) == 0x4, "Size mismatch!");

} // namespace end def System::Net
