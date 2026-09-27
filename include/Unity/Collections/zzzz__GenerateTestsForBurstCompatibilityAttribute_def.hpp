#pragma once
// IWYU pragma private; include "Unity/Collections/GenerateTestsForBurstCompatibilityAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenerateTestsForBurstCompatibilityAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Collections {
class GenerateTestsForBurstCompatibilityAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*, "Unity.Collections", "GenerateTestsForBurstCompatibilityAttribute");
// [AttributeUsage((System.AttributeTargets)236, AllowMultiple = true)]
// Dependencies System.Attribute, System.Type
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.GenerateTestsForBurstCompatibilityAttribute
class CORDL_TYPE GenerateTestsForBurstCompatibilityAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(put=set_GenericTypeArguments)) ::ArrayW<::System::Type*>  GenericTypeArguments;

/// @brief Field RequiredUnityDefine, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RequiredUnityDefine, put=__cordl_internal_set_RequiredUnityDefine)) ::StringW  RequiredUnityDefine;

/// @brief Field <GenericTypeArguments>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__GenericTypeArguments_k__BackingField, put=__cordl_internal_set__GenericTypeArguments_k__BackingField)) ::ArrayW<::System::Type*>  _GenericTypeArguments_k__BackingField;

static inline ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_RequiredUnityDefine() const;

constexpr ::StringW& __cordl_internal_get_RequiredUnityDefine() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__GenericTypeArguments_k__BackingField() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__GenericTypeArguments_k__BackingField() ;

constexpr void __cordl_internal_set_RequiredUnityDefine(::StringW  value) ;

constexpr void __cordl_internal_set__GenericTypeArguments_k__BackingField(::ArrayW<::System::Type*>  value) ;

/// @brief Method .ctor, addr 0xaf06a88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method set_GenericTypeArguments, addr 0xaf06a80, size 0x8, virtual false, abstract: false, final false
inline void set_GenericTypeArguments(::ArrayW<::System::Type*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenerateTestsForBurstCompatibilityAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenerateTestsForBurstCompatibilityAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenerateTestsForBurstCompatibilityAttribute(GenerateTestsForBurstCompatibilityAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenerateTestsForBurstCompatibilityAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenerateTestsForBurstCompatibilityAttribute(GenerateTestsForBurstCompatibilityAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30150};

/// [CompilerGenerated]
/// @brief Field <GenericTypeArguments>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ____GenericTypeArguments_k__BackingField;

/// @brief Field RequiredUnityDefine, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___RequiredUnityDefine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute, ____GenericTypeArguments_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute, ___RequiredUnityDefine) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute) == 0x20, "Size mismatch!");

} // namespace end def Unity::Collections
