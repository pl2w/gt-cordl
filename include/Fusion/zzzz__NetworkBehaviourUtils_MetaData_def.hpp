#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourUtils_MetaData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkBehaviourUtils_MetaData)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkBehaviourUtils_MetaData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkBehaviourUtils_MetaData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkBehaviourUtils_MetaData, "Fusion", "NetworkBehaviourUtils/MetaData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkBehaviourUtils/MetaData
#pragma pack(push, 0)
struct CORDL_TYPE NetworkBehaviourUtils_MetaData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourUtils_MetaData() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18918};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkBehaviourUtils_MetaData) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
