#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/LogicalCallContext_Reader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LogicalCallContext_Reader)
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
// Forward declare root types
namespace GlobalNamespace {
struct LogicalCallContext_Reader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LogicalCallContext_Reader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogicalCallContext_Reader, "System.Runtime.Remoting.Messaging", "LogicalCallContext/Reader");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.Remoting.Messaging.LogicalCallContext/Reader
struct CORDL_TYPE LogicalCallContext_Reader {
public:
// Declarations
 __declspec(property(get=get_HasInfo)) bool  HasInfo;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Method Clone, addr 0xa1b2224, size 0x68, virtual false, abstract: false, final false
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* Clone() ;

/// @brief Method .ctor, addr 0xa1b21fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext*  ctx) ;

/// @brief Method get_HasInfo, addr 0xa1b2214, size 0x10, virtual false, abstract: false, final false
inline bool get_HasInfo() ;

/// @brief Method get_IsNull, addr 0xa1b2204, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNull() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogicalCallContext_Reader() ;

// Ctor Parameters [CppParam { name: "m_ctx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext*", modifiers: "", def_value: None, comment: None }]
constexpr LogicalCallContext_Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext*  m_ctx) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6279};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ctx, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::Remoting::Messaging::LogicalCallContext*  m_ctx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogicalCallContext_Reader, m_ctx) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogicalCallContext_Reader) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
