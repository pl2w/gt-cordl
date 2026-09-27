#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipTransactionCatalogItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipTransactionCatalogItem)
namespace GlobalNamespace {
class StringIntMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipTransactionCatalogItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipTransactionCatalogItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipTransactionCatalogItem*, "", "MothershipTransactionCatalogItem");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipTransactionCatalogItem
class CORDL_TYPE MothershipTransactionCatalogItem : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_externalServiceEntitlementId, put=set_externalServiceEntitlementId)) ::StringW  externalServiceEntitlementId;

 __declspec(property(get=get_externalServiceName, put=set_externalServiceName)) ::StringW  externalServiceName;

 __declspec(property(get=get_inventoryChanges, put=set_inventoryChanges)) ::GlobalNamespace::StringIntMap*  inventoryChanges;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_sunset, put=set_sunset)) bool  sunset;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_transactionId, put=set_transactionId)) ::StringW  transactionId;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52c8ff4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52c90f0, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52c9060, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipTransactionCatalogItem* New_ctor() ;

static inline ::GlobalNamespace::MothershipTransactionCatalogItem* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52c923c, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52ca0d0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52c8ebc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52c8f1c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipTransactionCatalogItem*  obj) ;

/// @brief Method get_envId, addr 0x52c98fc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_externalServiceEntitlementId, addr 0x52c9c54, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_externalServiceEntitlementId() ;

/// @brief Method get_externalServiceName, addr 0x52c9aa8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_externalServiceName() ;

/// @brief Method get_inventoryChanges, addr 0x52c9e18, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringIntMap* get_inventoryChanges() ;

/// @brief Method get_name, addr 0x52c95a4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_sunset, addr 0x52c9ffc, size 0xd4, virtual false, abstract: false, final false
inline bool get_sunset() ;

/// @brief Method get_titleId, addr 0x52c9750, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_transactionId, addr 0x52c93f8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transactionId() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_envId, addr 0x52c9824, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_externalServiceEntitlementId, addr 0x52c9b7c, size 0xd8, virtual false, abstract: false, final false
inline void set_externalServiceEntitlementId(::StringW  value) ;

/// @brief Method set_externalServiceName, addr 0x52c99d0, size 0xd8, virtual false, abstract: false, final false
inline void set_externalServiceName(::StringW  value) ;

/// @brief Method set_inventoryChanges, addr 0x52c9d28, size 0xf0, virtual false, abstract: false, final false
inline void set_inventoryChanges(::GlobalNamespace::StringIntMap*  value) ;

/// @brief Method set_name, addr 0x52c94cc, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_sunset, addr 0x52c9f24, size 0xd8, virtual false, abstract: false, final false
inline void set_sunset(bool  value) ;

/// @brief Method set_titleId, addr 0x52c9678, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_transactionId, addr 0x52c9320, size 0xd8, virtual false, abstract: false, final false
inline void set_transactionId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52c8f5c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipTransactionCatalogItem*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipTransactionCatalogItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipTransactionCatalogItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipTransactionCatalogItem(MothershipTransactionCatalogItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipTransactionCatalogItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipTransactionCatalogItem(MothershipTransactionCatalogItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9374};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipTransactionCatalogItem, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipTransactionCatalogItem, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipTransactionCatalogItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
