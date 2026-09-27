#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorYellow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DevInspectorColor_def.hpp"
CORDL_MODULE_EXPORT(DevInspectorYellow)
// Forward declare root types
namespace GlobalNamespace {
class DevInspectorYellow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevInspectorYellow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevInspectorYellow*, "", "DevInspectorYellow");
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies DevInspectorColor
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevInspectorYellow
class CORDL_TYPE DevInspectorYellow : public ::GlobalNamespace::DevInspectorColor {
public:
// Declarations
static inline ::GlobalNamespace::DevInspectorYellow* New_ctor() ;

/// @brief Method .ctor, addr 0x566f79c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevInspectorYellow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorYellow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevInspectorYellow(DevInspectorYellow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorYellow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevInspectorYellow(DevInspectorYellow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DevInspectorYellow) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
