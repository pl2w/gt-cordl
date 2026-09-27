#pragma once
// IWYU pragma private; include "Fusion/DebugLogStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DebugLogStream)
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
class DebugLogStream;
}
// Write type traits
MARK_REF_T(::Fusion::DebugLogStream*);
DEFINE_IL2CPP_CLASS(::Fusion::DebugLogStream*, "Fusion", "DebugLogStream");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DebugLogStream
class CORDL_TYPE DebugLogStream : public ::System::Object {
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

/// @brief Method Dispose, addr 0x5f446c4, size 0x4c, virtual true, abstract: false, final true
inline void Dispose() ;

/// [Conditional("DEBUG")]
/// @brief Method Error, addr 0x5f44654, size 0x1c, virtual false, abstract: false, final false
inline void Error(::StringW  message) ;

/// [Conditional("DEBUG")]
/// @brief Method Error, addr 0x5f44670, size 0x1c, virtual false, abstract: false, final false
inline void Error(::System::Exception*  message) ;

/// [Conditional("DEBUG")]
/// @brief Method Error, addr 0x5f44638, size 0x1c, virtual false, abstract: false, final false
inline void Error(::Fusion::ILogSource*  source, ::StringW  message) ;

/// [Conditional("DEBUG")]
/// @brief Method Log, addr 0x5f4461c, size 0x1c, virtual false, abstract: false, final false
inline void Log(::StringW  message) ;

/// [Conditional("DEBUG")]
/// @brief Method Log, addr 0x5f44600, size 0x1c, virtual false, abstract: false, final false
inline void Log(::Fusion::ILogSource*  source, ::StringW  message) ;

static inline ::Fusion::DebugLogStream* New_ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream) ;

/// [Conditional("DEBUG")]
/// @brief Method Warn, addr 0x5f446a8, size 0x1c, virtual false, abstract: false, final false
inline void Warn(::StringW  message) ;

/// [Conditional("DEBUG")]
/// @brief Method Warn, addr 0x5f4468c, size 0x1c, virtual false, abstract: false, final false
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

/// @brief Method .ctor, addr 0x5f44504, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugLogStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugLogStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugLogStream(DebugLogStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugLogStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugLogStream(DebugLogStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32715};

/// @brief Field InfoStream, offset: 0x10, size: 0x8, def value: None
 ::Fusion::LogStream*  ___InfoStream;

/// @brief Field WarnStream, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LogStream*  ___WarnStream;

/// @brief Field ErrorStream, offset: 0x20, size: 0x8, def value: None
 ::Fusion::LogStream*  ___ErrorStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DebugLogStream, ___InfoStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::DebugLogStream, ___WarnStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::DebugLogStream, ___ErrorStream) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::DebugLogStream) == 0x28, "Size mismatch!");

} // namespace end def Fusion
