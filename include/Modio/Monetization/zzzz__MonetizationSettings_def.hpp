#pragma once
// IWYU pragma private; include "Modio/Monetization/MonetizationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonetizationSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Monetization {
class MonetizationSettings;
}
// Write type traits
MARK_REF_T(::Modio::Monetization::MonetizationSettings*);
DEFINE_IL2CPP_CLASS(::Modio::Monetization::MonetizationSettings*, "Modio.Monetization", "MonetizationSettings");
// Dependencies System.Object
namespace Modio::Monetization {
// Is value type: false
// CS Name: Modio.Monetization.MonetizationSettings
class CORDL_TYPE MonetizationSettings : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Monetization::MonetizationSettings* New_ctor() ;

/// @brief Method .ctor, addr 0xa0268ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonetizationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonetizationSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonetizationSettings(MonetizationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonetizationSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonetizationSettings(MonetizationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17564};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Monetization::MonetizationSettings) == 0x10, "Size mismatch!");

} // namespace end def Modio::Monetization
