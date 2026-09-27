#pragma once
// IWYU pragma private; include "GorillaTag/VectorLabelTextAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VectorLabelTextAttribute)
// Forward declare root types
namespace GorillaTag {
class VectorLabelTextAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::VectorLabelTextAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::VectorLabelTextAttribute*, "GorillaTag", "VectorLabelTextAttribute");
// [AttributeUsage((System.AttributeTargets)384, AllowMultiple = false, Inherited = true)]
// [Conditional("UNITY_EDITOR")]
// Dependencies UnityEngine.PropertyAttribute
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.VectorLabelTextAttribute
class CORDL_TYPE VectorLabelTextAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::GorillaTag::VectorLabelTextAttribute* New_ctor(/* [ParamArray] */ ::ArrayW<::StringW>  labels) ;

static inline ::GorillaTag::VectorLabelTextAttribute* New_ctor(int32_t  width, /* [ParamArray] */ ::ArrayW<::StringW>  labels) ;

/// @brief Method .ctor, addr 0x5d1f790, size 0x8, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::StringW>  labels) ;

/// @brief Method .ctor, addr 0x5d1f798, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, /* [ParamArray] */ ::ArrayW<::StringW>  labels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorLabelTextAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorLabelTextAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorLabelTextAttribute(VectorLabelTextAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorLabelTextAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorLabelTextAttribute(VectorLabelTextAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::VectorLabelTextAttribute) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag
