#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipEntitlementCatalogItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipEntitlementCatalogItem)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Document;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Value;
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
class MothershipEntitlementCatalogItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipEntitlementCatalogItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipEntitlementCatalogItem*, "", "MothershipEntitlementCatalogItem");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipEntitlementCatalogItem
class CORDL_TYPE MothershipEntitlementCatalogItem : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_display_description, put=set_display_description)) ::StringW  display_description;

 __declspec(property(get=get_display_name, put=set_display_name)) ::StringW  display_name;

 __declspec(property(get=get_entitlementId, put=set_entitlementId)) ::StringW  entitlementId;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_inGameId, put=set_inGameId)) ::StringW  inGameId;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_type, put=set_type)) ::StringW  type;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x529c064, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x529c160, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x529c0d0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipEntitlementCatalogItem* New_ctor() ;

static inline ::GlobalNamespace::MothershipEntitlementCatalogItem* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x529c2ac, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  body) ;

/// @brief Method ToJson, addr 0x529c390, size 0x124, virtual false, abstract: false, final false
inline bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*  catalogItem, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x529d214, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x529babc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x529b974, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipEntitlementCatalogItem*  obj) ;

/// @brief Method get_display_description, addr 0x529d140, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_description() ;

/// @brief Method get_display_name, addr 0x529cf94, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_name() ;

/// @brief Method get_entitlementId, addr 0x529c58c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_entitlementId() ;

/// @brief Method get_envId, addr 0x529cde8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_inGameId, addr 0x529c8e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_inGameId() ;

/// @brief Method get_name, addr 0x529c738, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_titleId, addr 0x529cc3c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_type, addr 0x529ca90, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_type() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_display_description, addr 0x529d068, size 0xd8, virtual false, abstract: false, final false
inline void set_display_description(::StringW  value) ;

/// @brief Method set_display_name, addr 0x529cebc, size 0xd8, virtual false, abstract: false, final false
inline void set_display_name(::StringW  value) ;

/// @brief Method set_entitlementId, addr 0x529c4b4, size 0xd8, virtual false, abstract: false, final false
inline void set_entitlementId(::StringW  value) ;

/// @brief Method set_envId, addr 0x529cd10, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_inGameId, addr 0x529c80c, size 0xd8, virtual false, abstract: false, final false
inline void set_inGameId(::StringW  value) ;

/// @brief Method set_name, addr 0x529c660, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_titleId, addr 0x529cb64, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_type, addr 0x529c9b8, size 0xd8, virtual false, abstract: false, final false
inline void set_type(::StringW  value) ;

/// @brief Method swigRelease, addr 0x529bfcc, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipEntitlementCatalogItem*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipEntitlementCatalogItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipEntitlementCatalogItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipEntitlementCatalogItem(MothershipEntitlementCatalogItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipEntitlementCatalogItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipEntitlementCatalogItem(MothershipEntitlementCatalogItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9320};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipEntitlementCatalogItem, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipEntitlementCatalogItem, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipEntitlementCatalogItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
