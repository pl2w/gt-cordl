#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHydratedTransactionCatalogItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipHydratedTransactionCatalogItem)
namespace GlobalNamespace {
class HydratedInventoryChangeMap;
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
class MothershipHydratedTransactionCatalogItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipHydratedTransactionCatalogItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipHydratedTransactionCatalogItem*, "", "MothershipHydratedTransactionCatalogItem");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipHydratedTransactionCatalogItem
class CORDL_TYPE MothershipHydratedTransactionCatalogItem : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_display_description, put=set_display_description)) ::StringW  display_description;

 __declspec(property(get=get_display_name, put=set_display_name)) ::StringW  display_name;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_inventoryChanges, put=set_inventoryChanges)) ::GlobalNamespace::HydratedInventoryChangeMap*  inventoryChanges;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_transactionId, put=set_transactionId)) ::StringW  transactionId;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52a79ac, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52a7aa8, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52a7a18, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipHydratedTransactionCatalogItem* New_ctor() ;

static inline ::GlobalNamespace::MothershipHydratedTransactionCatalogItem* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52a7bf4, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52a89b0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52a7874, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52a78d4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipHydratedTransactionCatalogItem*  obj) ;

/// @brief Method get_display_description, addr 0x52a8808, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_description() ;

/// @brief Method get_display_name, addr 0x52a865c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_name() ;

/// @brief Method get_envId, addr 0x52a82b4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_inventoryChanges, addr 0x52a8478, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HydratedInventoryChangeMap* get_inventoryChanges() ;

/// @brief Method get_name, addr 0x52a7f5c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_titleId, addr 0x52a8108, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_transactionId, addr 0x52a7db0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transactionId() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method isEmpty, addr 0x52a88dc, size 0xd4, virtual false, abstract: false, final false
inline bool isEmpty() ;

/// @brief Method set_display_description, addr 0x52a8730, size 0xd8, virtual false, abstract: false, final false
inline void set_display_description(::StringW  value) ;

/// @brief Method set_display_name, addr 0x52a8584, size 0xd8, virtual false, abstract: false, final false
inline void set_display_name(::StringW  value) ;

/// @brief Method set_envId, addr 0x52a81dc, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_inventoryChanges, addr 0x52a8388, size 0xf0, virtual false, abstract: false, final false
inline void set_inventoryChanges(::GlobalNamespace::HydratedInventoryChangeMap*  value) ;

/// @brief Method set_name, addr 0x52a7e84, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_titleId, addr 0x52a8030, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_transactionId, addr 0x52a7cd8, size 0xd8, virtual false, abstract: false, final false
inline void set_transactionId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52a7914, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipHydratedTransactionCatalogItem*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipHydratedTransactionCatalogItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipHydratedTransactionCatalogItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipHydratedTransactionCatalogItem(MothershipHydratedTransactionCatalogItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipHydratedTransactionCatalogItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipHydratedTransactionCatalogItem(MothershipHydratedTransactionCatalogItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9337};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipHydratedTransactionCatalogItem, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHydratedTransactionCatalogItem, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipHydratedTransactionCatalogItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
