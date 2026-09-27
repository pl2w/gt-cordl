#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/RegisterAssetReferenceAttributeForwardToChildAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RegisterAssetReferenceAttributeForwardToChildAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Sirenix::OdinInspector {
class RegisterAssetReferenceAttributeForwardToChildAttribute;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute*, "Sirenix.OdinInspector", "RegisterAssetReferenceAttributeForwardToChildAttribute");
// [Conditional("UNITY_EDITOR")]
// [AttributeUsage((System.AttributeTargets)1, AllowMultiple = true)]
// Dependencies System.Attribute
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.RegisterAssetReferenceAttributeForwardToChildAttribute
class CORDL_TYPE RegisterAssetReferenceAttributeForwardToChildAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field AttributeType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AttributeType, put=__cordl_internal_set_AttributeType)) ::System::Type*  AttributeType;

static inline ::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute* New_ctor(::System::Type*  attributeType) ;

constexpr ::System::Type* const& __cordl_internal_get_AttributeType() const;

constexpr ::System::Type*& __cordl_internal_get_AttributeType() ;

constexpr void __cordl_internal_set_AttributeType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xa84e978, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  attributeType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterAssetReferenceAttributeForwardToChildAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterAssetReferenceAttributeForwardToChildAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterAssetReferenceAttributeForwardToChildAttribute(RegisterAssetReferenceAttributeForwardToChildAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterAssetReferenceAttributeForwardToChildAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterAssetReferenceAttributeForwardToChildAttribute(RegisterAssetReferenceAttributeForwardToChildAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33128};

/// @brief Field AttributeType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___AttributeType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute, ___AttributeType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute) == 0x18, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector
