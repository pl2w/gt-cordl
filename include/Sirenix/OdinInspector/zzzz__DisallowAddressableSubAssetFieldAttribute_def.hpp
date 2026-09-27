#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/DisallowAddressableSubAssetFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DisallowAddressableSubAssetFieldAttribute)
// Forward declare root types
namespace Sirenix::OdinInspector {
class DisallowAddressableSubAssetFieldAttribute;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute*, "Sirenix.OdinInspector", "DisallowAddressableSubAssetFieldAttribute");
// [Conditional("UNITY_EDITOR")]
// [AttributeUsage((System.AttributeTargets)10624)]
// Dependencies System.Attribute
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.DisallowAddressableSubAssetFieldAttribute
class CORDL_TYPE DisallowAddressableSubAssetFieldAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e970, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisallowAddressableSubAssetFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisallowAddressableSubAssetFieldAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisallowAddressableSubAssetFieldAttribute(DisallowAddressableSubAssetFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisallowAddressableSubAssetFieldAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisallowAddressableSubAssetFieldAttribute(DisallowAddressableSubAssetFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute) == 0x10, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector
