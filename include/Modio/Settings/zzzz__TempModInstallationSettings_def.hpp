#pragma once
// IWYU pragma private; include "Modio/Settings/TempModInstallationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TempModInstallationSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Settings {
class TempModInstallationSettings;
}
// Write type traits
MARK_REF_T(::Modio::Settings::TempModInstallationSettings*);
DEFINE_IL2CPP_CLASS(::Modio::Settings::TempModInstallationSettings*, "Modio.Settings", "TempModInstallationSettings");
// Dependencies System.Object
namespace Modio::Settings {
// Is value type: false
// CS Name: Modio.Settings.TempModInstallationSettings
class CORDL_TYPE TempModInstallationSettings : public ::System::Object {
public:
// Declarations
/// @brief Field LifeTimeDays, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LifeTimeDays, put=__cordl_internal_set_LifeTimeDays)) int32_t  LifeTimeDays;

/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Settings::TempModInstallationSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_LifeTimeDays() const;

constexpr int32_t& __cordl_internal_get_LifeTimeDays() ;

constexpr void __cordl_internal_set_LifeTimeDays(int32_t  value) ;

/// @brief Method .ctor, addr 0xa0268a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TempModInstallationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempModInstallationSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TempModInstallationSettings(TempModInstallationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempModInstallationSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempModInstallationSettings(TempModInstallationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17554};

/// @brief Field LifeTimeDays, offset: 0x10, size: 0x4, def value: None
 int32_t  ___LifeTimeDays;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Settings::TempModInstallationSettings, ___LifeTimeDays) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Settings::TempModInstallationSettings) == 0x18, "Size mismatch!");

} // namespace end def Modio::Settings
