#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTableOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkPrefabTableOptions)
// Forward declare root types
namespace Fusion {
struct NetworkPrefabTableOptions;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkPrefabTableOptions);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabTableOptions, "Fusion", "NetworkPrefabTableOptions");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkPrefabTableOptions
struct CORDL_TYPE NetworkPrefabTableOptions {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::Fusion::NetworkPrefabTableOptions  Default;

static inline ::Fusion::NetworkPrefabTableOptions getStaticF_Default() ;

static inline void setStaticF_Default(::Fusion::NetworkPrefabTableOptions  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabTableOptions() ;

// Ctor Parameters [CppParam { name: "UnloadPrefabOnReleasingLastInstance", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "UnloadUnusedPrefabsOnShutdown", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NetworkPrefabTableOptions(bool  UnloadPrefabOnReleasingLastInstance, bool  UnloadUnusedPrefabsOnShutdown) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field UnloadPrefabOnReleasingLastInstance, offset: 0x0, size: 0x1, def value: None
 bool  UnloadPrefabOnReleasingLastInstance;

/// @brief Field UnloadUnusedPrefabsOnShutdown, offset: 0x1, size: 0x1, def value: None
 bool  UnloadUnusedPrefabsOnShutdown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkPrefabTableOptions, UnloadPrefabOnReleasingLastInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTableOptions, UnloadUnusedPrefabsOnShutdown) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkPrefabTableOptions) == 0x2, "Size mismatch!");

} // namespace end def Fusion
