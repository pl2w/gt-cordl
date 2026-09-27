#pragma once
// IWYU pragma private; include "Fusion/UnityLogStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__LogFlags_def.hpp"
#include "Fusion/zzzz__LogLevel_def.hpp"
#include "Fusion/zzzz__LogStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityLogStream)
namespace Fusion {
class FusionUnityLoggerBase;
}
namespace Fusion {
class ILogSource;
}
namespace Fusion {
struct LogFlags;
}
namespace Fusion {
struct LogLevel;
}
namespace Fusion {
struct TraceChannels;
}
namespace Fusion {
class UnityLogStream___c__DisplayClass10_0;
}
namespace Fusion {
class UnityLogStream___c__DisplayClass9_0;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Fusion {
class UnityLogStream;
}
namespace Fusion {
class UnityLogStream___c__DisplayClass10_0;
}
namespace Fusion {
class UnityLogStream___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::Fusion::UnityLogStream*);
MARK_REF_T(::Fusion::UnityLogStream___c__DisplayClass10_0*);
MARK_REF_T(::Fusion::UnityLogStream___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityLogStream*, "Fusion", "UnityLogStream");
DEFINE_IL2CPP_CLASS(::Fusion::UnityLogStream___c__DisplayClass10_0*, "Fusion", "UnityLogStream/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::Fusion::UnityLogStream___c__DisplayClass9_0*, "Fusion", "UnityLogStream/<>c__DisplayClass9_0");
// Dependencies Fusion.LogFlags, Fusion.LogLevel, Fusion.LogStream
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityLogStream
class CORDL_TYPE UnityLogStream : public ::Fusion::LogStream {
public:
// Declarations
using __c__DisplayClass10_0 = ::Fusion::UnityLogStream___c__DisplayClass10_0;

using __c__DisplayClass9_0 = ::Fusion::UnityLogStream___c__DisplayClass9_0;

/// @brief Field _flags, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__flags, put=__cordl_internal_set__flags)) ::Fusion::LogFlags  _flags;

/// @brief Field _logLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__logLevel, put=__cordl_internal_set__logLevel)) ::Fusion::LogLevel  _logLevel;

/// @brief Field _logger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__logger, put=__cordl_internal_set__logger)) ::Fusion::FusionUnityLoggerBase*  _logger;

/// @brief Field _prefix, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefix, put=__cordl_internal_set__prefix)) ::StringW  _prefix;

/// @brief Method Log, addr 0x5f468a4, size 0x28c, virtual true, abstract: false, final false
inline void Log(::System::Exception*  error) ;

/// @brief Method Log, addr 0x5f464fc, size 0x110, virtual true, abstract: false, final false
inline void Log(::StringW  message) ;

/// @brief Method Log, addr 0x5f4660c, size 0x290, virtual true, abstract: false, final false
inline void Log(::Fusion::ILogSource*  source, ::System::Exception*  error) ;

/// @brief Method Log, addr 0x5f463e0, size 0x11c, virtual true, abstract: false, final false
inline void Log(::Fusion::ILogSource*  source, ::StringW  message) ;

static inline ::Fusion::UnityLogStream* New_ctor(::Fusion::FusionUnityLoggerBase*  logger, ::Fusion::LogLevel  logLevel, ::Fusion::TraceChannels  channel, ::Fusion::LogFlags  flags) ;

constexpr ::Fusion::LogFlags const& __cordl_internal_get__flags() const;

constexpr ::Fusion::LogFlags& __cordl_internal_get__flags() ;

constexpr ::Fusion::LogLevel const& __cordl_internal_get__logLevel() const;

constexpr ::Fusion::LogLevel& __cordl_internal_get__logLevel() ;

constexpr ::Fusion::FusionUnityLoggerBase* const& __cordl_internal_get__logger() const;

constexpr ::Fusion::FusionUnityLoggerBase*& __cordl_internal_get__logger() ;

constexpr ::StringW const& __cordl_internal_get__prefix() const;

constexpr ::StringW& __cordl_internal_get__prefix() ;

constexpr void __cordl_internal_set__flags(::Fusion::LogFlags  value) ;

constexpr void __cordl_internal_set__logLevel(::Fusion::LogLevel  value) ;

constexpr void __cordl_internal_set__logger(::Fusion::FusionUnityLoggerBase*  value) ;

constexpr void __cordl_internal_set__prefix(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f45734, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::Fusion::FusionUnityLoggerBase*  logger, ::Fusion::LogLevel  logLevel, ::Fusion::TraceChannels  channel, ::Fusion::LogFlags  flags) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLogStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLogStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLogStream(UnityLogStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLogStream(UnityLogStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32731};

/// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
 ::Fusion::FusionUnityLoggerBase*  ____logger;

/// @brief Field _logLevel, offset: 0x18, size: 0x4, def value: None
 ::Fusion::LogLevel  ____logLevel;

/// @brief Field _prefix, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____prefix;

/// @brief Field _flags, offset: 0x28, size: 0x4, def value: None
 ::Fusion::LogFlags  ____flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::UnityLogStream, ____logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::UnityLogStream, ____logLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::UnityLogStream, ____prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::UnityLogStream, ____flags) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::UnityLogStream) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityLogStream/<>c__DisplayClass9_0
class CORDL_TYPE UnityLogStream___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field edi, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_edi, put=__cordl_internal_set_edi)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  edi;

static inline ::Fusion::UnityLogStream___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <Log>b__0, addr 0x5f46b50, size 0x18, virtual false, abstract: false, final false
inline void _Log_b__0() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_edi() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_edi() ;

constexpr void __cordl_internal_set_edi(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

/// @brief Method .ctor, addr 0x5f4689c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLogStream___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLogStream___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLogStream___c__DisplayClass9_0(UnityLogStream___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogStream___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLogStream___c__DisplayClass9_0(UnityLogStream___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32730};

/// @brief Field edi, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___edi;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::UnityLogStream___c__DisplayClass9_0, ___edi) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::UnityLogStream___c__DisplayClass9_0) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityLogStream/<>c__DisplayClass10_0
class CORDL_TYPE UnityLogStream___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field edi, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_edi, put=__cordl_internal_set_edi)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  edi;

static inline ::Fusion::UnityLogStream___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <Log>b__0, addr 0x5f46b38, size 0x18, virtual false, abstract: false, final false
inline void _Log_b__0() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_edi() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_edi() ;

constexpr void __cordl_internal_set_edi(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

/// @brief Method .ctor, addr 0x5f46b30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLogStream___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLogStream___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLogStream___c__DisplayClass10_0(UnityLogStream___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogStream___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLogStream___c__DisplayClass10_0(UnityLogStream___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32729};

/// @brief Field edi, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___edi;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::UnityLogStream___c__DisplayClass10_0, ___edi) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::UnityLogStream___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def Fusion
