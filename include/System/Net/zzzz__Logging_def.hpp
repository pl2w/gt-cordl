#pragma once
// IWYU pragma private; include "System/Net/Logging.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Logging)
namespace System::Net {
class TraceSource;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class Logging;
}
// Write type traits
MARK_REF_T(::System::Net::Logging*);
DEFINE_IL2CPP_CLASS(::System::Net::Logging*, "System.Net", "Logging");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Logging
class CORDL_TYPE Logging : public ::System::Object {
public:
// Declarations
/// [Conditional("TRACE")]
/// @brief Method Enter, addr 0xac897d0, size 0x4, virtual false, abstract: false, final false
static inline void Enter(::System::Net::TraceSource*  traceSource, ::StringW  msg) ;

/// [Conditional("TRACE")]
/// @brief Method Enter, addr 0xac897d4, size 0x4, virtual false, abstract: false, final false
static inline void Enter(::System::Net::TraceSource*  traceSource, ::StringW  msg, ::StringW  parameters) ;

/// [Conditional("TRACE")]
/// @brief Method Enter, addr 0xac897cc, size 0x4, virtual false, abstract: false, final false
static inline void Enter(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::System::Object*  paramObject) ;

/// [Conditional("TRACE")]
/// @brief Method Exception, addr 0xac897d8, size 0x4, virtual false, abstract: false, final false
static inline void Exception(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::System::Exception*  e) ;

/// [Conditional("TRACE")]
/// @brief Method Exit, addr 0xac897e0, size 0x4, virtual false, abstract: false, final false
static inline void Exit(::System::Net::TraceSource*  traceSource, ::StringW  msg) ;

/// [Conditional("TRACE")]
/// @brief Method Exit, addr 0xac897e4, size 0x4, virtual false, abstract: false, final false
static inline void Exit(::System::Net::TraceSource*  traceSource, ::StringW  msg, ::StringW  parameters) ;

/// [Conditional("TRACE")]
/// @brief Method Exit, addr 0xac897dc, size 0x4, virtual false, abstract: false, final false
static inline void Exit(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::System::Object*  retObject) ;

/// [Conditional("TRACE")]
/// @brief Method PrintError, addr 0xac897fc, size 0x4, virtual false, abstract: false, final false
static inline void PrintError(::System::Net::TraceSource*  traceSource, ::StringW  msg) ;

/// [Conditional("TRACE")]
/// @brief Method PrintInfo, addr 0xac897f0, size 0x4, virtual false, abstract: false, final false
static inline void PrintInfo(::System::Net::TraceSource*  traceSource, ::StringW  msg) ;

/// [Conditional("TRACE")]
/// @brief Method PrintInfo, addr 0xac897e8, size 0x4, virtual false, abstract: false, final false
static inline void PrintInfo(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::StringW  msg) ;

/// [Conditional("TRACE")]
/// @brief Method PrintInfo, addr 0xac897ec, size 0x4, virtual false, abstract: false, final false
static inline void PrintInfo(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  msg) ;

/// [Conditional("TRACE")]
/// @brief Method PrintWarning, addr 0xac897f8, size 0x4, virtual false, abstract: false, final false
static inline void PrintWarning(::System::Net::TraceSource*  traceSource, ::StringW  msg) ;

/// [Conditional("TRACE")]
/// @brief Method PrintWarning, addr 0xac897f4, size 0x4, virtual false, abstract: false, final false
static inline void PrintWarning(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::StringW  msg) ;

/// @brief Method get_HttpListener, addr 0xac897bc, size 0x8, virtual false, abstract: false, final false
static inline ::System::Net::TraceSource* get_HttpListener() ;

/// @brief Method get_On, addr 0xac837b4, size 0x8, virtual false, abstract: false, final false
static inline bool get_On() ;

/// @brief Method get_Sockets, addr 0xac897c4, size 0x8, virtual false, abstract: false, final false
static inline ::System::Net::TraceSource* get_Sockets() ;

/// @brief Method get_Web, addr 0xac897b4, size 0x8, virtual false, abstract: false, final false
static inline ::System::Net::TraceSource* get_Web() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logging() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Logging(Logging && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logging(Logging const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10647};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Logging) == 0x10, "Size mismatch!");

} // namespace end def System::Net
