#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorHide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DevInspectorHide)
// Forward declare root types
namespace GlobalNamespace {
class DevInspectorHide;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevInspectorHide*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevInspectorHide*, "", "DevInspectorHide");
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevInspectorHide
class CORDL_TYPE DevInspectorHide : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::DevInspectorHide* New_ctor() ;

/// @brief Method .ctor, addr 0x566f78c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevInspectorHide() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorHide", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevInspectorHide(DevInspectorHide && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorHide", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevInspectorHide(DevInspectorHide const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DevInspectorHide) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
