#pragma once
// IWYU pragma private; include "Fusion/RenderAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__RenderSource_def.hpp"
#include "Fusion/zzzz__RenderTimeframe_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RenderAttribute)
namespace Fusion {
struct RenderSource;
}
namespace Fusion {
struct RenderTimeframe;
}
// Forward declare root types
namespace Fusion {
class RenderAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::RenderAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::RenderAttribute*, "Fusion", "RenderAttribute");
// [AttributeUsage((System.AttributeTargets)128, AllowMultiple = false, Inherited = false)]
// Dependencies Fusion.RenderSource, Fusion.RenderTimeframe, System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RenderAttribute
class CORDL_TYPE RenderAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Method, put=set_Method)) ::StringW  Method;

 __declspec(property(get=get_Source, put=set_Source)) ::Fusion::RenderSource  Source;

 __declspec(property(get=get_Timeframe, put=set_Timeframe)) ::Fusion::RenderTimeframe  Timeframe;

/// @brief Field <Method>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Method_k__BackingField, put=__cordl_internal_set__Method_k__BackingField)) ::StringW  _Method_k__BackingField;

/// @brief Field <Source>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Source_k__BackingField, put=__cordl_internal_set__Source_k__BackingField)) ::Fusion::RenderSource  _Source_k__BackingField;

/// @brief Field <Timeframe>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Timeframe_k__BackingField, put=__cordl_internal_set__Timeframe_k__BackingField)) ::Fusion::RenderTimeframe  _Timeframe_k__BackingField;

static inline ::Fusion::RenderAttribute* New_ctor() ;

static inline ::Fusion::RenderAttribute* New_ctor(::Fusion::RenderTimeframe  timeframe, ::Fusion::RenderSource  source) ;

constexpr ::StringW const& __cordl_internal_get__Method_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Method_k__BackingField() ;

constexpr ::Fusion::RenderSource const& __cordl_internal_get__Source_k__BackingField() const;

constexpr ::Fusion::RenderSource& __cordl_internal_get__Source_k__BackingField() ;

constexpr ::Fusion::RenderTimeframe const& __cordl_internal_get__Timeframe_k__BackingField() const;

constexpr ::Fusion::RenderTimeframe& __cordl_internal_get__Timeframe_k__BackingField() ;

constexpr void __cordl_internal_set__Method_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Source_k__BackingField(::Fusion::RenderSource  value) ;

constexpr void __cordl_internal_set__Timeframe_k__BackingField(::Fusion::RenderTimeframe  value) ;

/// @brief Method .ctor, addr 0x5f703b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f703b8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::RenderTimeframe  timeframe, ::Fusion::RenderSource  source) ;

/// [CompilerGenerated]
/// @brief Method get_Method, addr 0x5f703a0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Method() ;

/// [CompilerGenerated]
/// @brief Method get_Source, addr 0x5f70390, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::RenderSource get_Source() ;

/// [CompilerGenerated]
/// @brief Method get_Timeframe, addr 0x5f70380, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::RenderTimeframe get_Timeframe() ;

/// [CompilerGenerated]
/// @brief Method set_Method, addr 0x5f703a8, size 0x8, virtual false, abstract: false, final false
inline void set_Method(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Source, addr 0x5f70398, size 0x8, virtual false, abstract: false, final false
inline void set_Source(::Fusion::RenderSource  value) ;

/// [CompilerGenerated]
/// @brief Method set_Timeframe, addr 0x5f70388, size 0x8, virtual false, abstract: false, final false
inline void set_Timeframe(::Fusion::RenderTimeframe  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderAttribute(RenderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderAttribute(RenderAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18816};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Timeframe>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Fusion::RenderTimeframe  ____Timeframe_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Source>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::Fusion::RenderSource  ____Source_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Method>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Method_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RenderAttribute, ____Timeframe_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::RenderAttribute, ____Source_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::RenderAttribute, ____Method_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::RenderAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
