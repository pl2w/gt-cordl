#pragma once
// IWYU pragma private; include "GlobalNamespace/IDelayedExecListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDelayedExecListener)
// Forward declare root types
namespace GlobalNamespace {
class IDelayedExecListener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IDelayedExecListener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IDelayedExecListener*, "", "IDelayedExecListener");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IDelayedExecListener
class CORDL_TYPE IDelayedExecListener {
public:
// Declarations
/// @brief Method OnDelayedAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDelayedAction(int32_t  contextId) ;

// Ctor Parameters [CppParam { name: "", ty: "IDelayedExecListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDelayedExecListener(IDelayedExecListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
