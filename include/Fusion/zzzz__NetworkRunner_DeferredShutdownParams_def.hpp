#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_DeferredShutdownParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkRunner_DeferredShutdownParams)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_DeferredShutdownParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_DeferredShutdownParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_DeferredShutdownParams, "Fusion", "NetworkRunner/DeferredShutdownParams");
// Dependencies Fusion.ShutdownReason
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/DeferredShutdownParams
struct CORDL_TYPE NetworkRunner_DeferredShutdownParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_DeferredShutdownParams() ;

// Ctor Parameters [CppParam { name: "ShutdownRequested", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShutdownReason", ty: "::Fusion::ShutdownReason", modifiers: "", def_value: None, comment: None }, CppParam { name: "DestroyGO", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_DeferredShutdownParams(bool  ShutdownRequested, ::Fusion::ShutdownReason  ShutdownReason, bool  DestroyGO) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field ShutdownRequested, offset: 0x0, size: 0x1, def value: None
 bool  ShutdownRequested;

/// @brief Field ShutdownReason, offset: 0x4, size: 0x4, def value: None
 ::Fusion::ShutdownReason  ShutdownReason;

/// @brief Field DestroyGO, offset: 0x8, size: 0x1, def value: None
 bool  DestroyGO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_DeferredShutdownParams, ShutdownRequested) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_DeferredShutdownParams, ShutdownReason) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_DeferredShutdownParams, DestroyGO) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_DeferredShutdownParams) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
