#pragma once
// IWYU pragma private; include "PlayFab/Internal/Log.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Log)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::Internal {
class Log;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::Log*);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::Log*, "PlayFab.Internal", "Log");
// [Obsolete("This logging utility has been deprecated. Use UnityEngine.Debug.Log")]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.Log
class CORDL_TYPE Log : public ::System::Object {
public:
// Declarations
/// [Obsolete("Debug is deprecated.")]
/// @brief Method Debug, addr 0xa843d58, size 0x10c, virtual false, abstract: false, final false
static inline void Debug(::StringW  text, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Obsolete("Error is deprecated.")]
/// @brief Method Error, addr 0xa844154, size 0x10c, virtual false, abstract: false, final false
static inline void Error(::StringW  text, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Obsolete("Info is deprecated.")]
/// @brief Method Info, addr 0xa843f3c, size 0x10c, virtual false, abstract: false, final false
static inline void Info(::StringW  text, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Obsolete("Warning is deprecated.")]
/// @brief Method Warning, addr 0xa844048, size 0x10c, virtual false, abstract: false, final false
static inline void Warning(::StringW  text, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Log() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Log(Log && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Log(Log const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Internal::Log) == 0x10, "Size mismatch!");

} // namespace end def PlayFab::Internal
