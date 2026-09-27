#pragma once
// IWYU pragma private; include "Viveport/SubscriptionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Viveport/zzzz__SubscriptionStatus_TransactionType_def.hpp"
CORDL_MODULE_EXPORT(SubscriptionStatus)
namespace GlobalNamespace {
struct SubscriptionStatus_Platform;
}
namespace GlobalNamespace {
struct SubscriptionStatus_TransactionType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Viveport {
class SubscriptionStatus;
}
// Write type traits
MARK_REF_T(::Viveport::SubscriptionStatus*);
DEFINE_IL2CPP_CLASS(::Viveport::SubscriptionStatus*, "Viveport", "SubscriptionStatus");
// Dependencies System.Object, Viveport.SubscriptionStatus::TransactionType
namespace Viveport {
// Is value type: false
// CS Name: Viveport.SubscriptionStatus
class CORDL_TYPE SubscriptionStatus : public ::System::Object {
public:
// Declarations
using Platform = ::GlobalNamespace::SubscriptionStatus_Platform;

using TransactionType = ::GlobalNamespace::SubscriptionStatus_TransactionType;

 __declspec(property(get=get_Platforms, put=set_Platforms)) ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*  Platforms;

 __declspec(property(get=get_Type, put=set_Type)) ::GlobalNamespace::SubscriptionStatus_TransactionType  Type;

/// @brief Field <Platforms>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Platforms_k__BackingField, put=__cordl_internal_set__Platforms_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*  _Platforms_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::GlobalNamespace::SubscriptionStatus_TransactionType  _Type_k__BackingField;

static inline ::Viveport::SubscriptionStatus* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>* const& __cordl_internal_get__Platforms_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*& __cordl_internal_get__Platforms_k__BackingField() ;

constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType& __cordl_internal_get__Type_k__BackingField() ;

constexpr void __cordl_internal_set__Platforms_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::GlobalNamespace::SubscriptionStatus_TransactionType  value) ;

/// @brief Method .ctor, addr 0x5b4c030, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Platforms, addr 0x5b4c010, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>* get_Platforms() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x5b4c020, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubscriptionStatus_TransactionType get_Type() ;

/// [CompilerGenerated]
/// @brief Method set_Platforms, addr 0x5b4c018, size 0x8, virtual false, abstract: false, final false
inline void set_Platforms(::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0x5b4c028, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::GlobalNamespace::SubscriptionStatus_TransactionType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionStatus(SubscriptionStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionStatus(SubscriptionStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3760};

/// [CompilerGenerated]
/// @brief Field <Platforms>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*  ____Platforms_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::SubscriptionStatus_TransactionType  ____Type_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::SubscriptionStatus, ____Platforms_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::SubscriptionStatus, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Viveport::SubscriptionStatus) == 0x20, "Size mismatch!");

} // namespace end def Viveport
