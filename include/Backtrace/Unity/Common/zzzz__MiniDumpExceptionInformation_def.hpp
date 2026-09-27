#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MiniDumpExceptionInformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MiniDumpExceptionInformation)
namespace Backtrace::Unity::Types {
struct MinidumpException;
}
// Forward declare root types
namespace Backtrace::Unity::Common {
struct MiniDumpExceptionInformation;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Common::MiniDumpExceptionInformation);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::MiniDumpExceptionInformation, "Backtrace.Unity.Common", "MiniDumpExceptionInformation");
// Dependencies System.IntPtr
namespace Backtrace::Unity::Common {
// Is value type: true
// CS Name: Backtrace.Unity.Common.MiniDumpExceptionInformation
#pragma pack(push, 4)
struct CORDL_TYPE MiniDumpExceptionInformation {
public:
// Declarations
/// @brief Method GetInstance, addr 0x5f26a64, size 0x18, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Common::MiniDumpExceptionInformation GetInstance(::Backtrace::Unity::Types::MinidumpException  exceptionInfo) ;

// Ctor Parameters []
// @brief default ctor
constexpr MiniDumpExceptionInformation() ;

// Ctor Parameters [CppParam { name: "ThreadId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExceptionPointers", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClientPointers", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MiniDumpExceptionInformation(uint32_t  ThreadId, ::System::IntPtr  ExceptionPointers, bool  ClientPointers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ThreadId, offset: 0x0, size: 0x4, def value: None
 uint32_t  ThreadId;

/// @brief Field ExceptionPointers, offset: 0x4, size: 0x8, def value: None
 ::System::IntPtr  ExceptionPointers;

/// @brief Field ClientPointers, offset: 0xc, size: 0x1, def value: None
 bool  ClientPointers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Common::MiniDumpExceptionInformation, ThreadId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Common::MiniDumpExceptionInformation, ExceptionPointers) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Common::MiniDumpExceptionInformation, ClientPointers) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Common::MiniDumpExceptionInformation) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
