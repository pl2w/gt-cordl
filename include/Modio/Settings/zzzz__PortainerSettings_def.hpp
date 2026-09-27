#pragma once
// IWYU pragma private; include "Modio/Settings/PortainerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PortainerSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Settings {
class PortainerSettings;
}
// Write type traits
MARK_REF_T(::Modio::Settings::PortainerSettings*);
DEFINE_IL2CPP_CLASS(::Modio::Settings::PortainerSettings*, "Modio.Settings", "PortainerSettings");
// Dependencies Modio.LogLevel, System.Object
namespace Modio::Settings {
// Is value type: false
// CS Name: Modio.Settings.PortainerSettings
class CORDL_TYPE PortainerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field LogLevel, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogLevel, put=__cordl_internal_set_LogLevel)) ::Modio::LogLevel  LogLevel;

/// @brief Field Stack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Stack, put=__cordl_internal_set_Stack)) ::StringW  Stack;

/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Settings::PortainerSettings* New_ctor() ;

constexpr ::Modio::LogLevel const& __cordl_internal_get_LogLevel() const;

constexpr ::Modio::LogLevel& __cordl_internal_get_LogLevel() ;

constexpr ::StringW const& __cordl_internal_get_Stack() const;

constexpr ::StringW& __cordl_internal_get_Stack() ;

constexpr void __cordl_internal_set_LogLevel(::Modio::LogLevel  value) ;

constexpr void __cordl_internal_set_Stack(::StringW  value) ;

/// @brief Method .ctor, addr 0xa026894, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PortainerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PortainerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PortainerSettings(PortainerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PortainerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PortainerSettings(PortainerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17553};

/// @brief Field Stack, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Stack;

/// @brief Field LogLevel, offset: 0x18, size: 0x1, def value: None
 ::Modio::LogLevel  ___LogLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Settings::PortainerSettings, ___Stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Settings::PortainerSettings, ___LogLevel) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Settings::PortainerSettings) == 0x20, "Size mismatch!");

} // namespace end def Modio::Settings
