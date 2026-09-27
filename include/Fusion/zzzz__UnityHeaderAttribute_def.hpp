#pragma once
// IWYU pragma private; include "Fusion/UnityHeaderAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityHeaderAttribute)
// Forward declare root types
namespace Fusion {
class UnityHeaderAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnityHeaderAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityHeaderAttribute*, "Fusion", "UnityHeaderAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// [Conditional("FUSION_UNITY")]
// [Conditional("UNITY_EDITOR")]
// [Conditional("UNITY_2020_1_OR_NEWER")]
// [UnityPropertyAttributeProxy(typeof(UnityEngine.HeaderAttribute))]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityHeaderAttribute
class CORDL_TYPE UnityHeaderAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <order>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__order_k__BackingField, put=__cordl_internal_set__order_k__BackingField)) int32_t  _order_k__BackingField;

 __declspec(property(get=get_order, put=set_order)) int32_t  order;

static inline ::Fusion::UnityHeaderAttribute* New_ctor(::StringW  header) ;

constexpr int32_t const& __cordl_internal_get__order_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__order_k__BackingField() ;

constexpr void __cordl_internal_set__order_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f7043c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  header) ;

/// [CompilerGenerated]
/// @brief Method get_order, addr 0x5f7042c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_order() ;

/// [CompilerGenerated]
/// @brief Method set_order, addr 0x5f70434, size 0x8, virtual false, abstract: false, final false
inline void set_order(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityHeaderAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityHeaderAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityHeaderAttribute(UnityHeaderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityHeaderAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityHeaderAttribute(UnityHeaderAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18822};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <order>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____order_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::UnityHeaderAttribute, ____order_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::UnityHeaderAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
