#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/MiniDumpType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MiniDumpType)
// Forward declare root types
namespace Backtrace::Unity::Types {
struct MiniDumpType;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Types::MiniDumpType);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Types::MiniDumpType, "Backtrace.Unity.Types", "MiniDumpType");
// Dependencies 
namespace Backtrace::Unity::Types {
// Is value type: true
// CS Name: Backtrace.Unity.Types.MiniDumpType
struct CORDL_TYPE MiniDumpType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __MiniDumpType_Unwrapped
enum struct __MiniDumpType_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x7fffeu),
__E_Normal = static_cast<uint32_t>(0x0u),
__E_WithDataSegs = static_cast<uint32_t>(0x1u),
__E_WithFullMemory = static_cast<uint32_t>(0x2u),
__E_WithHandleData = static_cast<uint32_t>(0x4u),
__E_FilterMemory = static_cast<uint32_t>(0x8u),
__E_ScanMemory = static_cast<uint32_t>(0x10u),
__E_WithUnloadedModules = static_cast<uint32_t>(0x20u),
__E_WithIndirectlyReferencedMemory = static_cast<uint32_t>(0x40u),
__E_FilterModulePaths = static_cast<uint32_t>(0x80u),
__E_WithProcessThreadData = static_cast<uint32_t>(0x100u),
__E_WithPrivateReadWriteMemory = static_cast<uint32_t>(0x200u),
__E_WithoutOptionalData = static_cast<uint32_t>(0x400u),
__E_WithFullMemoryInfo = static_cast<uint32_t>(0x800u),
__E_WithThreadInfo = static_cast<uint32_t>(0x1000u),
__E_WithCodeSegs = static_cast<uint32_t>(0x2000u),
__E_WithoutAuxiliaryState = static_cast<uint32_t>(0x4000u),
__E_WithFullAuxiliaryState = static_cast<uint32_t>(0x8000u),
__E_WithPrivateWriteCopyMemory = static_cast<uint32_t>(0x10000u),
__E_IgnoreInaccessibleMemory = static_cast<uint32_t>(0x20000u),
__E_ValidTypeFlags = static_cast<uint32_t>(0x3ffffu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MiniDumpType_Unwrapped () const noexcept {
return static_cast<__MiniDumpType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MiniDumpType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr MiniDumpType(uint32_t  value__) noexcept;

/// @brief Field FilterMemory value: U32(8)
static ::Backtrace::Unity::Types::MiniDumpType const FilterMemory;

/// @brief Field FilterModulePaths value: U32(128)
static ::Backtrace::Unity::Types::MiniDumpType const FilterModulePaths;

/// @brief Field IgnoreInaccessibleMemory value: U32(131072)
static ::Backtrace::Unity::Types::MiniDumpType const IgnoreInaccessibleMemory;

/// @brief Field None value: U32(524286)
static ::Backtrace::Unity::Types::MiniDumpType const None;

/// @brief Field Normal value: U32(0)
static ::Backtrace::Unity::Types::MiniDumpType const Normal;

/// @brief Field ScanMemory value: U32(16)
static ::Backtrace::Unity::Types::MiniDumpType const ScanMemory;

/// @brief Field ValidTypeFlags value: U32(262143)
static ::Backtrace::Unity::Types::MiniDumpType const ValidTypeFlags;

/// @brief Field WithCodeSegs value: U32(8192)
static ::Backtrace::Unity::Types::MiniDumpType const WithCodeSegs;

/// @brief Field WithDataSegs value: U32(1)
static ::Backtrace::Unity::Types::MiniDumpType const WithDataSegs;

/// @brief Field WithFullAuxiliaryState value: U32(32768)
static ::Backtrace::Unity::Types::MiniDumpType const WithFullAuxiliaryState;

/// @brief Field WithFullMemory value: U32(2)
static ::Backtrace::Unity::Types::MiniDumpType const WithFullMemory;

/// @brief Field WithFullMemoryInfo value: U32(2048)
static ::Backtrace::Unity::Types::MiniDumpType const WithFullMemoryInfo;

/// @brief Field WithHandleData value: U32(4)
static ::Backtrace::Unity::Types::MiniDumpType const WithHandleData;

/// @brief Field WithIndirectlyReferencedMemory value: U32(64)
static ::Backtrace::Unity::Types::MiniDumpType const WithIndirectlyReferencedMemory;

/// @brief Field WithPrivateReadWriteMemory value: U32(512)
static ::Backtrace::Unity::Types::MiniDumpType const WithPrivateReadWriteMemory;

/// @brief Field WithPrivateWriteCopyMemory value: U32(65536)
static ::Backtrace::Unity::Types::MiniDumpType const WithPrivateWriteCopyMemory;

/// @brief Field WithProcessThreadData value: U32(256)
static ::Backtrace::Unity::Types::MiniDumpType const WithProcessThreadData;

/// @brief Field WithThreadInfo value: U32(4096)
static ::Backtrace::Unity::Types::MiniDumpType const WithThreadInfo;

/// @brief Field WithUnloadedModules value: U32(32)
static ::Backtrace::Unity::Types::MiniDumpType const WithUnloadedModules;

/// @brief Field WithoutAuxiliaryState value: U32(16384)
static ::Backtrace::Unity::Types::MiniDumpType const WithoutAuxiliaryState;

/// @brief Field WithoutOptionalData value: U32(1024)
static ::Backtrace::Unity::Types::MiniDumpType const WithoutOptionalData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27564};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Types::MiniDumpType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Types::MiniDumpType) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Types
