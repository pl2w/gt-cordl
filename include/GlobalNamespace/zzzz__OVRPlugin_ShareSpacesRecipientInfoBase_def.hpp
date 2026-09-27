#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ShareSpacesRecipientInfoBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_ShareSpacesRecipientInfoBase)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesRecipientInfoBase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase, "", "OVRPlugin/ShareSpacesRecipientInfoBase");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ShareSpacesRecipientInfoBase
struct CORDL_TYPE OVRPlugin_ShareSpacesRecipientInfoBase {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ShareSpacesRecipientInfoBase() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12222};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
