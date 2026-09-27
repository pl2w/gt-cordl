#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionMap_UniqueIdMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectionMap_UniqueIdMapping)
// Forward declare root types
namespace GlobalNamespace {
struct NetConnectionMap_UniqueIdMapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetConnectionMap_UniqueIdMapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetConnectionMap_UniqueIdMapping, "Fusion.Sockets", "NetConnectionMap/UniqueIdMapping");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnectionMap/UniqueIdMapping
struct CORDL_TYPE NetConnectionMap_UniqueIdMapping {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetConnectionMap_UniqueIdMapping() ;

// Ctor Parameters [CppParam { name: "UniqueId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Index", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnectionMap_UniqueIdMapping(int64_t  UniqueId, int16_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field UniqueId, offset: 0x0, size: 0x8, def value: None
 int64_t  UniqueId;

/// @brief Field Index, offset: 0x8, size: 0x2, def value: None
 int16_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetConnectionMap_UniqueIdMapping, UniqueId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetConnectionMap_UniqueIdMapping, Index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetConnectionMap_UniqueIdMapping) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
