#pragma once
// IWYU pragma private; include "Modio/IModioLogHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModioLogHandler)
namespace Modio {
struct LogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio {
class IModioLogHandler;
}
// Write type traits
MARK_REF_T(::Modio::IModioLogHandler*);
DEFINE_IL2CPP_CLASS(::Modio::IModioLogHandler*, "Modio", "IModioLogHandler");
// Dependencies 
namespace Modio {
// Is value type: false
// CS Name: Modio.IModioLogHandler
class CORDL_TYPE IModioLogHandler {
public:
// Declarations
/// @brief Method LogHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogHandler(::Modio::LogLevel  logLevel, ::System::Object*  message) ;

// Ctor Parameters [CppParam { name: "", ty: "IModioLogHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioLogHandler(IModioLogHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio
