#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectAddressAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionGlobalScriptableObjectSourceAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionGlobalScriptableObjectAddressAttribute)
namespace Fusion {
class FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0;
}
namespace Fusion {
struct FusionGlobalScriptableObjectLoadResult;
}
namespace Fusion {
class FusionGlobalScriptableObject;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class FusionGlobalScriptableObjectAddressAttribute;
}
namespace Fusion {
class FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectAddressAttribute*);
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectAddressAttribute*, "Fusion", "FusionGlobalScriptableObjectAddressAttribute");
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0*, "Fusion", "FusionGlobalScriptableObjectAddressAttribute/<>c__DisplayClass4_0");
// [Preserve]
// Dependencies Fusion.FusionGlobalScriptableObjectSourceAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectAddressAttribute
class CORDL_TYPE FusionGlobalScriptableObjectAddressAttribute : public ::Fusion::FusionGlobalScriptableObjectSourceAttribute {
public:
// Declarations
using __c__DisplayClass4_0 = ::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0;

 __declspec(property(get=get_Address)) ::StringW  Address;

/// @brief Field <Address>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Address_k__BackingField, put=__cordl_internal_set__Address_k__BackingField)) ::StringW  _Address_k__BackingField;

/// @brief Method Load, addr 0x60e0354, size 0x188, virtual true, abstract: false, final false
inline ::Fusion::FusionGlobalScriptableObjectLoadResult Load(::System::Type*  type) ;

static inline ::Fusion::FusionGlobalScriptableObjectAddressAttribute* New_ctor(::System::Type*  objectType, ::StringW  address) ;

constexpr ::StringW const& __cordl_internal_get__Address_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Address_k__BackingField() ;

constexpr void __cordl_internal_set__Address_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x60e031c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  objectType, ::StringW  address) ;

/// [CompilerGenerated]
/// @brief Method get_Address, addr 0x60e034c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Address() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectAddressAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectAddressAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectAddressAttribute(FusionGlobalScriptableObjectAddressAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectAddressAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectAddressAttribute(FusionGlobalScriptableObjectAddressAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23418};

/// [CompilerGenerated]
/// @brief Field <Address>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Address_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectAddressAttribute, ____Address_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectAddressAttribute) == 0x28, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectAddressAttribute/<>c__DisplayClass4_0
class CORDL_TYPE FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field op, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_op, put=__cordl_internal_set_op)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>>  op;

static inline ::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <Load>b__0, addr 0x60e04e4, size 0x98, virtual false, abstract: false, final false
inline void _Load_b__0(::Fusion::FusionGlobalScriptableObject*  x) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>> const& __cordl_internal_get_op() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>>& __cordl_internal_get_op() ;

constexpr void __cordl_internal_set_op(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>>  value) ;

/// @brief Method .ctor, addr 0x60e04dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0(FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0(FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23417};

/// @brief Field op, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>>  ___op;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0, ___op) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0) == 0x28, "Size mismatch!");

} // namespace end def Fusion
