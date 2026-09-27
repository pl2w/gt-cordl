#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionGlobalScriptableObjectAttribute)
// Forward declare root types
namespace Fusion {
class FusionGlobalScriptableObjectAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectAttribute*, "Fusion", "FusionGlobalScriptableObjectAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectAttribute
class CORDL_TYPE FusionGlobalScriptableObjectAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(put=set_DefaultContentsGeneratorMethod)) ::StringW  DefaultContentsGeneratorMethod;

 __declspec(property(get=get_DefaultPath)) ::StringW  DefaultPath;

/// @brief Field <DefaultContentsGeneratorMethod>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultContentsGeneratorMethod_k__BackingField, put=__cordl_internal_set__DefaultContentsGeneratorMethod_k__BackingField)) ::StringW  _DefaultContentsGeneratorMethod_k__BackingField;

/// @brief Field <DefaultPath>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultPath_k__BackingField, put=__cordl_internal_set__DefaultPath_k__BackingField)) ::StringW  _DefaultPath_k__BackingField;

static inline ::Fusion::FusionGlobalScriptableObjectAttribute* New_ctor(::StringW  defaultPath) ;

constexpr ::StringW const& __cordl_internal_get__DefaultContentsGeneratorMethod_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DefaultContentsGeneratorMethod_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DefaultPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DefaultPath_k__BackingField() ;

constexpr void __cordl_internal_set__DefaultContentsGeneratorMethod_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DefaultPath_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f3e4e4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  defaultPath) ;

/// [CompilerGenerated]
/// @brief Method get_DefaultPath, addr 0x5f3e514, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DefaultPath() ;

/// [CompilerGenerated]
/// @brief Method set_DefaultContentsGeneratorMethod, addr 0x5f3e51c, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultContentsGeneratorMethod(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectAttribute(FusionGlobalScriptableObjectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectAttribute(FusionGlobalScriptableObjectAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31297};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <DefaultPath>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____DefaultPath_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <DefaultContentsGeneratorMethod>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____DefaultContentsGeneratorMethod_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectAttribute, ____DefaultPath_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectAttribute, ____DefaultContentsGeneratorMethod_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
