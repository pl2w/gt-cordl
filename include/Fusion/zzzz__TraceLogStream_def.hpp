#pragma once
// IWYU pragma private; include "Fusion/TraceLogStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TraceLogStream)
namespace Fusion {
class ILogSource;
}
namespace Fusion {
class LogStream;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Fusion {
class TraceLogStream;
}
// Write type traits
MARK_REF_T(::Fusion::TraceLogStream*);
DEFINE_IL2CPP_CLASS(::Fusion::TraceLogStream*, "Fusion", "TraceLogStream");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.TraceLogStream
class CORDL_TYPE TraceLogStream : public ::System::Object {
public:
// Declarations
/// @brief Field ErrorStream, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorStream, put=__cordl_internal_set_ErrorStream)) ::Fusion::LogStream*  ErrorStream;

/// @brief Field InfoStream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoStream, put=__cordl_internal_set_InfoStream)) ::Fusion::LogStream*  InfoStream;

/// @brief Field WarnStream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_WarnStream, put=__cordl_internal_set_WarnStream)) ::Fusion::LogStream*  WarnStream;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5f46394, size 0x4c, virtual true, abstract: false, final true
inline void Dispose() ;

/// [Conditional("TRACE")]
/// @brief Method Error, addr 0x5f46324, size 0x1c, virtual false, abstract: false, final false
inline void Error(::StringW  message) ;

/// [Conditional("TRACE")]
/// @brief Method Error, addr 0x5f46340, size 0x1c, virtual false, abstract: false, final false
inline void Error(::System::Exception*  message) ;

/// [Conditional("TRACE")]
/// @brief Method Info, addr 0x5f46308, size 0x1c, virtual false, abstract: false, final false
inline void Info(::StringW  message) ;

/// [Conditional("TRACE")]
/// @brief Method Log, addr 0x5f462ec, size 0x1c, virtual false, abstract: false, final false
inline void Log(::StringW  message) ;

/// [Conditional("TRACE")]
/// @brief Method Log, addr 0x5f462d0, size 0x1c, virtual false, abstract: false, final false
inline void Log(::Fusion::ILogSource*  source, ::StringW  message) ;

static inline ::Fusion::TraceLogStream* New_ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream) ;

/// [Conditional("TRACE")]
/// @brief Method Warn, addr 0x5f46378, size 0x1c, virtual false, abstract: false, final false
inline void Warn(::StringW  message) ;

/// [Conditional("TRACE")]
/// @brief Method Warn, addr 0x5f4635c, size 0x1c, virtual false, abstract: false, final false
inline void Warn(::Fusion::ILogSource*  source, ::StringW  message) ;

constexpr ::Fusion::LogStream* const& __cordl_internal_get_ErrorStream() const;

constexpr ::Fusion::LogStream*& __cordl_internal_get_ErrorStream() ;

constexpr ::Fusion::LogStream* const& __cordl_internal_get_InfoStream() const;

constexpr ::Fusion::LogStream*& __cordl_internal_get_InfoStream() ;

constexpr ::Fusion::LogStream* const& __cordl_internal_get_WarnStream() const;

constexpr ::Fusion::LogStream*& __cordl_internal_get_WarnStream() ;

constexpr void __cordl_internal_set_ErrorStream(::Fusion::LogStream*  value) ;

constexpr void __cordl_internal_set_InfoStream(::Fusion::LogStream*  value) ;

constexpr void __cordl_internal_set_WarnStream(::Fusion::LogStream*  value) ;

/// @brief Method .ctor, addr 0x5f4513c, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceLogStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceLogStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceLogStream(TraceLogStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceLogStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceLogStream(TraceLogStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32728};

/// @brief Field InfoStream, offset: 0x10, size: 0x8, def value: None
 ::Fusion::LogStream*  ___InfoStream;

/// @brief Field WarnStream, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LogStream*  ___WarnStream;

/// @brief Field ErrorStream, offset: 0x20, size: 0x8, def value: None
 ::Fusion::LogStream*  ___ErrorStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TraceLogStream, ___InfoStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::TraceLogStream, ___WarnStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::TraceLogStream, ___ErrorStream) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::TraceLogStream) == 0x28, "Size mismatch!");

} // namespace end def Fusion
