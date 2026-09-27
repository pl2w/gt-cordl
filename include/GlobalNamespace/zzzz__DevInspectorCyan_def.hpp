#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorCyan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DevInspectorColor_def.hpp"
CORDL_MODULE_EXPORT(DevInspectorCyan)
// Forward declare root types
namespace GlobalNamespace {
class DevInspectorCyan;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevInspectorCyan*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevInspectorCyan*, "", "DevInspectorCyan");
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies DevInspectorColor
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevInspectorCyan
class CORDL_TYPE DevInspectorCyan : public ::GlobalNamespace::DevInspectorColor {
public:
// Declarations
static inline ::GlobalNamespace::DevInspectorCyan* New_ctor() ;

/// @brief Method .ctor, addr 0x566f7f8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevInspectorCyan() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorCyan", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevInspectorCyan(DevInspectorCyan && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorCyan", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevInspectorCyan(DevInspectorCyan const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DevInspectorCyan) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
