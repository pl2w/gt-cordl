#pragma once
// IWYU pragma private; include "Fusion/UnitySerializeField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnitySerializeField)
// Forward declare root types
namespace Fusion {
class UnitySerializeField;
}
// Write type traits
MARK_REF_T(::Fusion::UnitySerializeField*);
DEFINE_IL2CPP_CLASS(::Fusion::UnitySerializeField*, "Fusion", "UnitySerializeField");
// [AttributeUsage((System.AttributeTargets)128)]
// [Conditional("FUSION_UNITY")]
// [Conditional("UNITY_EDITOR")]
// [Conditional("UNITY_2020_1_OR_NEWER")]
// [UnityPropertyAttributeProxy(typeof(UnityEngine.SerializeField))]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnitySerializeField
class CORDL_TYPE UnitySerializeField : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::UnitySerializeField* New_ctor() ;

/// @brief Method .ctor, addr 0x5f704a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySerializeField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySerializeField", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySerializeField(UnitySerializeField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySerializeField", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySerializeField(UnitySerializeField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UnitySerializeField) == 0x10, "Size mismatch!");

} // namespace end def Fusion
