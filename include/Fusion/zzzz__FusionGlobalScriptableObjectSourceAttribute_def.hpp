#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectSourceAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionGlobalScriptableObjectSourceAttribute)
namespace Fusion {
struct FusionGlobalScriptableObjectLoadResult;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class FusionGlobalScriptableObjectSourceAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectSourceAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectSourceAttribute*, "Fusion", "FusionGlobalScriptableObjectSourceAttribute");
// [AttributeUsage((System.AttributeTargets)1, AllowMultiple = true)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectSourceAttribute
class CORDL_TYPE FusionGlobalScriptableObjectSourceAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_AllowEditMode)) bool  AllowEditMode;

 __declspec(property(get=get_AllowFallback, put=set_AllowFallback)) bool  AllowFallback;

 __declspec(property(get=get_ObjectType)) ::System::Type*  ObjectType;

 __declspec(property(get=get_Order, put=set_Order)) int32_t  Order;

/// @brief Field <AllowEditMode>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowEditMode_k__BackingField, put=__cordl_internal_set__AllowEditMode_k__BackingField)) bool  _AllowEditMode_k__BackingField;

/// @brief Field <AllowFallback>k__BackingField, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowFallback_k__BackingField, put=__cordl_internal_set__AllowFallback_k__BackingField)) bool  _AllowFallback_k__BackingField;

/// @brief Field <ObjectType>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ObjectType_k__BackingField, put=__cordl_internal_set__ObjectType_k__BackingField)) ::System::Type*  _ObjectType_k__BackingField;

/// @brief Field <Order>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Order_k__BackingField, put=__cordl_internal_set__Order_k__BackingField)) int32_t  _Order_k__BackingField;

/// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::FusionGlobalScriptableObjectLoadResult Load(::System::Type*  type) ;

static inline ::Fusion::FusionGlobalScriptableObjectSourceAttribute* New_ctor(::System::Type*  objectType) ;

constexpr bool const& __cordl_internal_get__AllowEditMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowEditMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__AllowFallback_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowFallback_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ObjectType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ObjectType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Order_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Order_k__BackingField() ;

constexpr void __cordl_internal_set__AllowEditMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__AllowFallback_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ObjectType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__Order_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f3e524, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  objectType) ;

/// [CompilerGenerated]
/// @brief Method get_AllowEditMode, addr 0x5f3e570, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowEditMode() ;

/// [CompilerGenerated]
/// @brief Method get_AllowFallback, addr 0x5f3e578, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowFallback() ;

/// [CompilerGenerated]
/// @brief Method get_ObjectType, addr 0x5f3e558, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ObjectType() ;

/// [CompilerGenerated]
/// @brief Method get_Order, addr 0x5f3e560, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Order() ;

/// [CompilerGenerated]
/// @brief Method set_AllowFallback, addr 0x5f3e580, size 0x8, virtual false, abstract: false, final false
inline void set_AllowFallback(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Order, addr 0x5f3e568, size 0x8, virtual false, abstract: false, final false
inline void set_Order(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectSourceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectSourceAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectSourceAttribute(FusionGlobalScriptableObjectSourceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectSourceAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectSourceAttribute(FusionGlobalScriptableObjectSourceAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31298};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ObjectType>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____ObjectType_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Order>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Order_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AllowEditMode>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____AllowEditMode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AllowFallback>k__BackingField, offset: 0x1d, size: 0x1, def value: None
 bool  ____AllowFallback_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectSourceAttribute, ____ObjectType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectSourceAttribute, ____Order_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectSourceAttribute, ____AllowEditMode_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectSourceAttribute, ____AllowFallback_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectSourceAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
