#pragma once
// IWYU pragma private; include "Fusion/UnityFormerlySerializedAsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityFormerlySerializedAsAttribute)
// Forward declare root types
namespace Fusion {
class UnityFormerlySerializedAsAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnityFormerlySerializedAsAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityFormerlySerializedAsAttribute*, "Fusion", "UnityFormerlySerializedAsAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// [Conditional("FUSION_UNITY")]
// [Conditional("UNITY_EDITOR")]
// [Conditional("UNITY_2020_1_OR_NEWER")]
// [UnityPropertyAttributeProxy(typeof(UnityEngine.Serialization.FormerlySerializedAsAttribute))]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityFormerlySerializedAsAttribute
class CORDL_TYPE UnityFormerlySerializedAsAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::UnityFormerlySerializedAsAttribute* New_ctor(::StringW  oldName) ;

/// @brief Method .ctor, addr 0x5f704ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  oldName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityFormerlySerializedAsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityFormerlySerializedAsAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityFormerlySerializedAsAttribute(UnityFormerlySerializedAsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityFormerlySerializedAsAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityFormerlySerializedAsAttribute(UnityFormerlySerializedAsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UnityFormerlySerializedAsAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
