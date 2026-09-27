#pragma once
// IWYU pragma private; include "Fusion/CapacityAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CapacityAttribute)
// Forward declare root types
namespace Fusion {
class CapacityAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::CapacityAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::CapacityAttribute*, "Fusion", "CapacityAttribute");
// [AttributeUsage((System.AttributeTargets)128, Inherited = false, AllowMultiple = true)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CapacityAttribute
class CORDL_TYPE CapacityAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field <Length>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length_k__BackingField, put=__cordl_internal_set__Length_k__BackingField)) int32_t  _Length_k__BackingField;

static inline ::Fusion::CapacityAttribute* New_ctor(int32_t  length) ;

constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Length_k__BackingField() ;

constexpr void __cordl_internal_set__Length_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f6ff5c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  length) ;

/// [CompilerGenerated]
/// @brief Method get_Length, addr 0x5f6ff54, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapacityAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapacityAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CapacityAttribute(CapacityAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapacityAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapacityAttribute(CapacityAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18797};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Length>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Length_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CapacityAttribute, ____Length_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CapacityAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
