#pragma once
// IWYU pragma private; include "Modio/Unity/ModioUnityLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUnityLogger)
namespace Modio {
class IModioLogHandler;
}
namespace Modio {
struct LogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::Unity {
class ModioUnityLogger;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ModioUnityLogger*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioUnityLogger*, "Modio.Unity", "ModioUnityLogger");
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioUnityLogger
class CORDL_TYPE ModioUnityLogger : public ::System::Object {
public:
// Declarations
/// @brief Field _prefix, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefix, put=__cordl_internal_set__prefix)) ::StringW  _prefix;

/// @brief Convert operator to "::Modio::IModioLogHandler"
constexpr operator  ::Modio::IModioLogHandler*() noexcept;

/// @brief Method LogHandler, addr 0x9f95680, size 0x1bc, virtual true, abstract: false, final true
inline void LogHandler(::Modio::LogLevel  logLevel, ::System::Object*  message) ;

static inline ::Modio::Unity::ModioUnityLogger* New_ctor() ;

static inline ::Modio::Unity::ModioUnityLogger* New_ctor(::StringW  prefix) ;

constexpr ::StringW const& __cordl_internal_get__prefix() const;

constexpr ::StringW& __cordl_internal_get__prefix() ;

constexpr void __cordl_internal_set__prefix(::StringW  value) ;

/// @brief Method .ctor, addr 0x9f955f4, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f95650, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix) ;

/// @brief Convert to "::Modio::IModioLogHandler"
constexpr ::Modio::IModioLogHandler* i___Modio__IModioLogHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnityLogger(ModioUnityLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnityLogger(ModioUnityLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32066};

/// @brief Field _prefix, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____prefix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::ModioUnityLogger, ____prefix) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::ModioUnityLogger) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity
