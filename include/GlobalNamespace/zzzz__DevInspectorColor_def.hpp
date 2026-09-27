#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DevInspectorColor)
// Forward declare root types
namespace GlobalNamespace {
class DevInspectorColor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevInspectorColor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevInspectorColor*, "", "DevInspectorColor");
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevInspectorColor
class CORDL_TYPE DevInspectorColor : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Color)) ::StringW  Color;

/// @brief Field <Color>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::StringW  _Color_k__BackingField;

static inline ::GlobalNamespace::DevInspectorColor* New_ctor(::StringW  color) ;

constexpr ::StringW const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Color_k__BackingField() ;

constexpr void __cordl_internal_set__Color_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x566f75c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  color) ;

/// [CompilerGenerated]
/// @brief Method get_Color, addr 0x566f754, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Color() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevInspectorColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorColor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevInspectorColor(DevInspectorColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorColor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevInspectorColor(DevInspectorColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{805};

/// [CompilerGenerated]
/// @brief Field <Color>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Color_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevInspectorColor, ____Color_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevInspectorColor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
