#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Debug_.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Debug_)
namespace System {
class Exception;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class Debug_;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Debug_*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Debug_*, "Fusion.Photon.Realtime", "Debug_");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Debug_
class CORDL_TYPE Debug_ : public ::System::Object {
public:
// Declarations
/// [Conditional("DEBUG")]
/// @brief Method Log, addr 0x5f4b31c, size 0x74, virtual false, abstract: false, final false
static inline void Log(::StringW  msg) ;

/// [Conditional("DEBUG")]
/// @brief Method LogError, addr 0x5f4b3f8, size 0x68, virtual false, abstract: false, final false
static inline void LogError(::StringW  msg) ;

/// [Conditional("DEBUG")]
/// @brief Method LogException, addr 0x5f4b460, size 0x68, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  ex) ;

/// [Conditional("DEBUG")]
/// @brief Method LogWarning, addr 0x5f4b390, size 0x68, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debug_() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debug_", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug_(Debug_ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug_", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug_(Debug_ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::Debug_) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
