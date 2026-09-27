#pragma once
// IWYU pragma private; include "Modio/IModioServiceSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModioServiceSettings)
// Forward declare root types
namespace Modio {
class IModioServiceSettings;
}
// Write type traits
MARK_REF_T(::Modio::IModioServiceSettings*);
DEFINE_IL2CPP_CLASS(::Modio::IModioServiceSettings*, "Modio", "IModioServiceSettings");
// Dependencies 
namespace Modio {
// Is value type: false
// CS Name: Modio.IModioServiceSettings
class CORDL_TYPE IModioServiceSettings {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IModioServiceSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioServiceSettings(IModioServiceSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17450};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio
