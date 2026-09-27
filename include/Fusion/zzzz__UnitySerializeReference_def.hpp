#pragma once
// IWYU pragma private; include "Fusion/UnitySerializeReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnitySerializeReference)
// Forward declare root types
namespace Fusion {
class UnitySerializeReference;
}
// Write type traits
MARK_REF_T(::Fusion::UnitySerializeReference*);
DEFINE_IL2CPP_CLASS(::Fusion::UnitySerializeReference*, "Fusion", "UnitySerializeReference");
// [AttributeUsage((System.AttributeTargets)128)]
// [Conditional("FUSION_UNITY")]
// [Conditional("UNITY_EDITOR")]
// [Conditional("UNITY_2020_1_OR_NEWER")]
// [UnityPropertyAttributeProxy(typeof(UnityEngine.SerializeReference))]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnitySerializeReference
class CORDL_TYPE UnitySerializeReference : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::UnitySerializeReference* New_ctor() ;

/// @brief Method .ctor, addr 0x5f704ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySerializeReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySerializeReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySerializeReference(UnitySerializeReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySerializeReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySerializeReference(UnitySerializeReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UnitySerializeReference) == 0x10, "Size mismatch!");

} // namespace end def Fusion
