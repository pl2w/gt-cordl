#pragma once
// IWYU pragma private; include "Fusion/ScriptHelpAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
#include "Fusion/zzzz__ScriptHeaderBackColor_def.hpp"
#include "Fusion/zzzz__ScriptHeaderStyle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScriptHelpAttribute)
namespace Fusion {
struct ScriptHeaderBackColor;
}
// Forward declare root types
namespace Fusion {
class ScriptHelpAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::ScriptHelpAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::ScriptHelpAttribute*, "Fusion", "ScriptHelpAttribute");
// [AttributeUsage((System.AttributeTargets)12)]
// Dependencies Fusion.PropertyAttribute, Fusion.ScriptHeaderBackColor, Fusion.ScriptHeaderStyle
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ScriptHelpAttribute
class CORDL_TYPE ScriptHelpAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
 __declspec(property(put=set_BackColor)) ::Fusion::ScriptHeaderBackColor  BackColor;

 __declspec(property(put=set_Url)) ::StringW  Url;

/// @brief Field <BackColor>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__BackColor_k__BackingField, put=__cordl_internal_set__BackColor_k__BackingField)) ::Fusion::ScriptHeaderBackColor  _BackColor_k__BackingField;

/// @brief Field <Style>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Style_k__BackingField, put=__cordl_internal_set__Style_k__BackingField)) ::Fusion::ScriptHeaderStyle  _Style_k__BackingField;

/// @brief Field <Url>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Url_k__BackingField, put=__cordl_internal_set__Url_k__BackingField)) ::StringW  _Url_k__BackingField;

static inline ::Fusion::ScriptHelpAttribute* New_ctor() ;

constexpr ::Fusion::ScriptHeaderBackColor const& __cordl_internal_get__BackColor_k__BackingField() const;

constexpr ::Fusion::ScriptHeaderBackColor& __cordl_internal_get__BackColor_k__BackingField() ;

constexpr ::Fusion::ScriptHeaderStyle const& __cordl_internal_get__Style_k__BackingField() const;

constexpr ::Fusion::ScriptHeaderStyle& __cordl_internal_get__Style_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Url_k__BackingField() ;

constexpr void __cordl_internal_set__BackColor_k__BackingField(::Fusion::ScriptHeaderBackColor  value) ;

constexpr void __cordl_internal_set__Style_k__BackingField(::Fusion::ScriptHeaderStyle  value) ;

constexpr void __cordl_internal_set__Url_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f3d824, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method set_BackColor, addr 0x5f3d81c, size 0x8, virtual false, abstract: false, final false
inline void set_BackColor(::Fusion::ScriptHeaderBackColor  value) ;

/// [CompilerGenerated]
/// @brief Method set_Url, addr 0x5f3d814, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptHelpAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptHelpAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptHelpAttribute(ScriptHelpAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptHelpAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptHelpAttribute(ScriptHelpAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31281};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Url>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Url_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <BackColor>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Fusion::ScriptHeaderBackColor  ____BackColor_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Style>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::Fusion::ScriptHeaderStyle  ____Style_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ScriptHelpAttribute, ____Url_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ScriptHelpAttribute, ____BackColor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ScriptHelpAttribute, ____Style_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Fusion::ScriptHelpAttribute) == 0x28, "Size mismatch!");

} // namespace end def Fusion
