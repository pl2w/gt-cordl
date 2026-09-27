#pragma once
// IWYU pragma private; include "Fusion/ReadOnlyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DecoratingPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ReadOnlyAttribute)
// Forward declare root types
namespace Fusion {
class ReadOnlyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::ReadOnlyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::ReadOnlyAttribute*, "Fusion", "ReadOnlyAttribute");
// [AttributeUsage((System.AttributeTargets)256, AllowMultiple = false)]
// Dependencies Fusion.DecoratingPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ReadOnlyAttribute
class CORDL_TYPE ReadOnlyAttribute : public ::Fusion::DecoratingPropertyAttribute {
public:
// Declarations
/// @brief Field <InEditMode>k__BackingField, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get__InEditMode_k__BackingField, put=__cordl_internal_set__InEditMode_k__BackingField)) bool  _InEditMode_k__BackingField;

/// @brief Field <InPlayMode>k__BackingField, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__InPlayMode_k__BackingField, put=__cordl_internal_set__InPlayMode_k__BackingField)) bool  _InPlayMode_k__BackingField;

static inline ::Fusion::ReadOnlyAttribute* New_ctor() ;

constexpr bool const& __cordl_internal_get__InEditMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__InEditMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__InPlayMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__InPlayMode_k__BackingField() ;

constexpr void __cordl_internal_set__InEditMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__InPlayMode_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5f3d7e4, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyAttribute(ReadOnlyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyAttribute(ReadOnlyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31279};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InPlayMode>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  ____InPlayMode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InEditMode>k__BackingField, offset: 0x16, size: 0x1, def value: None
 bool  ____InEditMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ReadOnlyAttribute, ____InPlayMode_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Fusion::ReadOnlyAttribute, ____InEditMode_k__BackingField) == 0x16, "Offset mismatch!");

static_assert(sizeof(::Fusion::ReadOnlyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
