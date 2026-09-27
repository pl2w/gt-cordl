#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Logger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace Photon::Voice {
class ILogger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class Logger;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::Logger*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::Logger*, "Photon.Voice.Unity", "Logger");
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Photon::Voice::ILogger"
constexpr operator  ::Photon::Voice::ILogger*() noexcept;

/// @brief Method LogDebug, addr 0xa75ac6c, size 0x68, virtual true, abstract: false, final true
inline void LogDebug(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogError, addr 0xa75ab34, size 0x68, virtual true, abstract: false, final true
inline void LogError(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogInfo, addr 0xa75ac04, size 0x68, virtual true, abstract: false, final true
inline void LogInfo(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarning, addr 0xa75ab9c, size 0x68, virtual true, abstract: false, final true
inline void LogWarning(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::Photon::Voice::Unity::Logger* New_ctor() ;

/// @brief Method .ctor, addr 0xa75acd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Voice::ILogger"
constexpr ::Photon::Voice::ILogger* i___Photon__Voice__ILogger() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Logger(Logger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logger(Logger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::Logger) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
