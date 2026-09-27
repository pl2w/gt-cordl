#pragma once
// IWYU pragma private; include "Fusion/UnityNonSerializedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnityNonSerializedAttribute)
// Forward declare root types
namespace Fusion {
class UnityNonSerializedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnityNonSerializedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityNonSerializedAttribute*, "Fusion", "UnityNonSerializedAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// [Conditional("FUSION_UNITY")]
// [Conditional("UNITY_EDITOR")]
// [Conditional("UNITY_2020_1_OR_NEWER")]
// [UnityPropertyAttributeProxy(typeof(System.NonSerializedAttribute))]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityNonSerializedAttribute
class CORDL_TYPE UnityNonSerializedAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::UnityNonSerializedAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f704e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityNonSerializedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityNonSerializedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityNonSerializedAttribute(UnityNonSerializedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityNonSerializedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityNonSerializedAttribute(UnityNonSerializedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UnityNonSerializedAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
