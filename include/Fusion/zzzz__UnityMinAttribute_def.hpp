#pragma once
// IWYU pragma private; include "Fusion/UnityMinAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityMinAttribute)
// Forward declare root types
namespace Fusion {
class UnityMinAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnityMinAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityMinAttribute*, "Fusion", "UnityMinAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// [Conditional("FUSION_UNITY")]
// [Conditional("UNITY_EDITOR")]
// [Conditional("UNITY_2020_1_OR_NEWER")]
// [UnityPropertyAttributeProxy(typeof(UnityEngine.MinAttribute))]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityMinAttribute
class CORDL_TYPE UnityMinAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <order>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__order_k__BackingField, put=__cordl_internal_set__order_k__BackingField)) int32_t  _order_k__BackingField;

 __declspec(property(get=get_order, put=set_order)) int32_t  order;

static inline ::Fusion::UnityMinAttribute* New_ctor(float_t  min) ;

constexpr int32_t const& __cordl_internal_get__order_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__order_k__BackingField() ;

constexpr void __cordl_internal_set__order_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f70454, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  min) ;

/// [CompilerGenerated]
/// @brief Method get_order, addr 0x5f70444, size 0x8, virtual false, abstract: false, final false
inline int32_t get_order() ;

/// [CompilerGenerated]
/// @brief Method set_order, addr 0x5f7044c, size 0x8, virtual false, abstract: false, final false
inline void set_order(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityMinAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityMinAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityMinAttribute(UnityMinAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityMinAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityMinAttribute(UnityMinAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18823};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <order>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____order_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::UnityMinAttribute, ____order_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::UnityMinAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
