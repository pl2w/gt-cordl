#pragma once
// IWYU pragma private; include "Fusion/FixedBufferPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBufferPropertyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class FixedBufferPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::FixedBufferPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::FixedBufferPropertyAttribute*, "Fusion", "FixedBufferPropertyAttribute");
// Dependencies Fusion.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FixedBufferPropertyAttribute
class CORDL_TYPE FixedBufferPropertyAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_SurrogateType)) ::System::Type*  SurrogateType;

 __declspec(property(get=get_Type)) ::System::Type*  Type;

/// @brief Field <Capacity>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capacity_k__BackingField, put=__cordl_internal_set__Capacity_k__BackingField)) int32_t  _Capacity_k__BackingField;

/// @brief Field <SurrogateType>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__SurrogateType_k__BackingField, put=__cordl_internal_set__SurrogateType_k__BackingField)) ::System::Type*  _SurrogateType_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::System::Type*  _Type_k__BackingField;

static inline ::Fusion::FixedBufferPropertyAttribute* New_ctor(::System::Type*  fieldType, ::System::Type*  surrogateType, int32_t  capacity) ;

constexpr int32_t const& __cordl_internal_get__Capacity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Capacity_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__SurrogateType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__SurrogateType_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField() ;

constexpr void __cordl_internal_set__Capacity_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SurrogateType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5f6fffc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  fieldType, ::System::Type*  surrogateType, int32_t  capacity) ;

/// [CompilerGenerated]
/// @brief Method get_Capacity, addr 0x5f6fff4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// [CompilerGenerated]
/// @brief Method get_SurrogateType, addr 0x5f6ffec, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_SurrogateType() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x5f6ffe4, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedBufferPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedBufferPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedBufferPropertyAttribute(FixedBufferPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedBufferPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedBufferPropertyAttribute(FixedBufferPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18799};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____Type_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SurrogateType>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ____SurrogateType_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Capacity>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Capacity_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FixedBufferPropertyAttribute, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FixedBufferPropertyAttribute, ____SurrogateType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FixedBufferPropertyAttribute, ____Capacity_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::FixedBufferPropertyAttribute) == 0x30, "Size mismatch!");

} // namespace end def Fusion
