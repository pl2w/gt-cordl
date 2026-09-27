#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext_Reader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ExecutionContext_Reader)
namespace GlobalNamespace {
struct LogicalCallContext_Reader;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class SynchronizationContext;
}
// Forward declare root types
namespace GlobalNamespace {
struct ExecutionContext_Reader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExecutionContext_Reader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExecutionContext_Reader, "System.Threading", "ExecutionContext/Reader");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.ExecutionContext/Reader
struct CORDL_TYPE ExecutionContext_Reader {
public:
// Declarations
 __declspec(property(get=get_IsFlowSuppressed)) bool  IsFlowSuppressed;

 __declspec(property(get=get_IsNull)) bool  IsNull;

 __declspec(property(get=get_LogicalCallContext)) ::GlobalNamespace::LogicalCallContext_Reader  LogicalCallContext;

 __declspec(property(get=get_SynchronizationContext)) ::System::Threading::SynchronizationContext*  SynchronizationContext;

 __declspec(property(get=get_SynchronizationContextNoFlow)) ::System::Threading::SynchronizationContext*  SynchronizationContextNoFlow;

/// @brief Method DangerousGetRawExecutionContext, addr 0xa34d060, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::ExecutionContext* DangerousGetRawExecutionContext() ;

/// @brief Method HasSameLocalValues, addr 0xa34d110, size 0x28, virtual false, abstract: false, final false
inline bool HasSameLocalValues(::System::Threading::ExecutionContext*  other) ;

/// @brief Method IsDefaultFTContext, addr 0xa34d078, size 0x1c, virtual false, abstract: false, final false
inline bool IsDefaultFTContext(bool  ignoreSyncCtx) ;

/// @brief Method .ctor, addr 0xa34d058, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::ExecutionContext*  ec) ;

/// @brief Method get_IsFlowSuppressed, addr 0xa34d094, size 0x14, virtual false, abstract: false, final false
inline bool get_IsFlowSuppressed() ;

/// @brief Method get_IsNull, addr 0xa34d068, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNull() ;

/// @brief Method get_LogicalCallContext, addr 0xa34d0d8, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::LogicalCallContext_Reader get_LogicalCallContext() ;

/// @brief Method get_SynchronizationContext, addr 0xa34d0a8, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::SynchronizationContext* get_SynchronizationContext() ;

/// @brief Method get_SynchronizationContextNoFlow, addr 0xa34d0c0, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow() ;

// Ctor Parameters []
// @brief default ctor
constexpr ExecutionContext_Reader() ;

// Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: None, comment: None }]
constexpr ExecutionContext_Reader(::System::Threading::ExecutionContext*  m_ec) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ec, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::ExecutionContext*  m_ec;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExecutionContext_Reader, m_ec) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExecutionContext_Reader) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
