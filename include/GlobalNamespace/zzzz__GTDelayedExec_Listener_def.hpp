#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDelayedExec_Listener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTDelayedExec_Listener)
namespace GlobalNamespace {
class IDelayedExecListener;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTDelayedExec_Listener;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTDelayedExec_Listener);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDelayedExec_Listener, "", "GTDelayedExec/Listener");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTDelayedExec/Listener
struct CORDL_TYPE GTDelayedExec_Listener {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ac6ec8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::IDelayedExecListener*  listener, int32_t  contextId) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTDelayedExec_Listener() ;

// Ctor Parameters [CppParam { name: "listener", ty: "::GlobalNamespace::IDelayedExecListener*", modifiers: "", def_value: None, comment: None }, CppParam { name: "contextId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTDelayedExec_Listener(::GlobalNamespace::IDelayedExecListener*  listener, int32_t  contextId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field listener, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::IDelayedExecListener*  listener;

/// @brief Field contextId, offset: 0x8, size: 0x4, def value: None
 int32_t  contextId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTDelayedExec_Listener, listener) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDelayedExec_Listener, contextId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTDelayedExec_Listener) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
