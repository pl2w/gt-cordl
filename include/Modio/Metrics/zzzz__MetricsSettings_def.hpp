#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetricsSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Metrics {
class MetricsSettings;
}
// Write type traits
MARK_REF_T(::Modio::Metrics::MetricsSettings*);
DEFINE_IL2CPP_CLASS(::Modio::Metrics::MetricsSettings*, "Modio.Metrics", "MetricsSettings");
// Dependencies System.Object
namespace Modio::Metrics {
// Is value type: false
// CS Name: Modio.Metrics.MetricsSettings
class CORDL_TYPE MetricsSettings : public ::System::Object {
public:
// Declarations
/// @brief Field Secret, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Secret, put=__cordl_internal_set_Secret)) ::StringW  Secret;

/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Metrics::MetricsSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Secret() const;

constexpr ::StringW& __cordl_internal_get_Secret() ;

constexpr void __cordl_internal_set_Secret(::StringW  value) ;

/// @brief Method .ctor, addr 0xa040420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsSettings(MetricsSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsSettings(MetricsSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17633};

/// @brief Field Secret, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Secret;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Metrics::MetricsSettings, ___Secret) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Metrics::MetricsSettings) == 0x18, "Size mismatch!");

} // namespace end def Modio::Metrics
