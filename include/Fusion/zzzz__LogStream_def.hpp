#pragma once
// IWYU pragma private; include "Fusion/LogStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogStream)
namespace Fusion {
class ILogSource;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Fusion {
class LogStream;
}
// Write type traits
MARK_REF_T(::Fusion::LogStream*);
DEFINE_IL2CPP_CLASS(::Fusion::LogStream*, "Fusion", "LogStream");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.LogStream
class CORDL_TYPE LogStream : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5f45258, size 0x4, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Log(::System::Exception*  error) ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Log(::StringW  message) ;

/// @brief Method Log, addr 0x5f45248, size 0x10, virtual true, abstract: false, final false
inline void Log(::Fusion::ILogSource*  source, ::System::Exception*  error) ;

/// @brief Method Log, addr 0x5f45238, size 0x10, virtual true, abstract: false, final false
inline void Log(::Fusion::ILogSource*  source, ::StringW  message) ;

static inline ::Fusion::LogStream* New_ctor() ;

/// [CanBeNull]
/// @brief Method Once, addr 0x5f4525c, size 0x1c, virtual false, abstract: false, final false
inline ::Fusion::LogStream* Once(::by_ref<bool>  flag) ;

/// @brief Method .ctor, addr 0x5f45278, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogStream(LogStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogStream(LogStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::LogStream) == 0x10, "Size mismatch!");

} // namespace end def Fusion
