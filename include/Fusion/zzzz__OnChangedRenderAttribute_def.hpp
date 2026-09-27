#pragma once
// IWYU pragma private; include "Fusion/OnChangedRenderAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OnChangedRenderAttribute)
// Forward declare root types
namespace Fusion {
class OnChangedRenderAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::OnChangedRenderAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::OnChangedRenderAttribute*, "Fusion", "OnChangedRenderAttribute");
// [AttributeUsage((System.AttributeTargets)128, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.OnChangedRenderAttribute
class CORDL_TYPE OnChangedRenderAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_MethodName, put=set_MethodName)) ::StringW  MethodName;

/// @brief Field <MethodName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__MethodName_k__BackingField, put=__cordl_internal_set__MethodName_k__BackingField)) ::StringW  _MethodName_k__BackingField;

static inline ::Fusion::OnChangedRenderAttribute* New_ctor(::StringW  methodName) ;

constexpr ::StringW const& __cordl_internal_get__MethodName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MethodName_k__BackingField() ;

constexpr void __cordl_internal_set__MethodName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f700c4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::StringW  methodName) ;

/// [CompilerGenerated]
/// @brief Method get_MethodName, addr 0x5f700b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MethodName() ;

/// [CompilerGenerated]
/// @brief Method set_MethodName, addr 0x5f700bc, size 0x8, virtual false, abstract: false, final false
inline void set_MethodName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnChangedRenderAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnChangedRenderAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnChangedRenderAttribute(OnChangedRenderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnChangedRenderAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnChangedRenderAttribute(OnChangedRenderAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18805};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <MethodName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____MethodName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::OnChangedRenderAttribute, ____MethodName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::OnChangedRenderAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
