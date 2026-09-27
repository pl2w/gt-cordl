#pragma once
// IWYU pragma private; include "GlobalNamespace/DragDropComponentsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DragDropComponentsAttribute)
// Forward declare root types
namespace GlobalNamespace {
class DragDropComponentsAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DragDropComponentsAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DragDropComponentsAttribute*, "", "DragDropComponentsAttribute");
// [AttributeUsage((System.AttributeTargets)384, AllowMultiple = false)]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DragDropComponentsAttribute
class CORDL_TYPE DragDropComponentsAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::DragDropComponentsAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5a1ab70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DragDropComponentsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DragDropComponentsAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DragDropComponentsAttribute(DragDropComponentsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DragDropComponentsAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DragDropComponentsAttribute(DragDropComponentsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DragDropComponentsAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
