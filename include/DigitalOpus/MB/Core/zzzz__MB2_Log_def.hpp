#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_Log.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB2_Log)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB2_Log;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB2_Log*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_Log*, "DigitalOpus.MB.Core", "MB2_Log");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_Log
class CORDL_TYPE MB2_Log : public ::System::Object {
public:
// Declarations
/// @brief Method Error, addr 0x9d7ec18, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW Error(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Info, addr 0x9d7edd8, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW Info(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Log, addr 0x9d7e9f4, size 0x224, virtual false, abstract: false, final false
static inline void Log(::DigitalOpus::MB::Core::MB2_LogLevel  l, ::StringW  msg, ::DigitalOpus::MB::Core::MB2_LogLevel  currentThreshold) ;

/// @brief Method LogDebug, addr 0x9d7eeb8, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW LogDebug(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::DigitalOpus::MB::Core::MB2_Log* New_ctor() ;

/// @brief Method Trace, addr 0x9d7ef98, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW Trace(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Warn, addr 0x9d7ecf8, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW Warn(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method .ctor, addr 0x9d7f078, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_Log() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_Log", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_Log(MB2_Log && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_Log", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_Log(MB2_Log const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB2_Log) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
