#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPurchaseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipPurchaseResult)
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
class MothershipPurchaseResult;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipPurchaseResult*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipPurchaseResult*, "", "MothershipPurchaseResult");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipPurchaseResult
class CORDL_TYPE MothershipPurchaseResult : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_display_description, put=set_display_description)) ::StringW  display_description;

 __declspec(property(get=get_display_name, put=set_display_name)) ::StringW  display_name;

 __declspec(property(get=get_entitlement_id, put=set_entitlement_id)) ::StringW  entitlement_id;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_in_game_id, put=set_in_game_id)) ::StringW  in_game_id;

 __declspec(property(get=get_inventory_entry_id, put=set_inventory_entry_id)) ::StringW  inventory_entry_id;

 __declspec(property(get=get_last_updated_at, put=set_last_updated_at)) ::StringW  last_updated_at;

 __declspec(property(get=get_most_recent_ledger_run, put=set_most_recent_ledger_run)) ::StringW  most_recent_ledger_run;

 __declspec(property(get=get_mothership_player_id, put=set_mothership_player_id)) ::StringW  mothership_player_id;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_quantity, put=set_quantity)) int32_t  quantity;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52b2734, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52b2830, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52b27a0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipPurchaseResult* New_ctor() ;

static inline ::GlobalNamespace::MothershipPurchaseResult* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52b3d8c, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  string_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b3e70, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52b25fc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52b265c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipPurchaseResult*  obj) ;

/// @brief Method get_display_description, addr 0x52b3cb8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_description() ;

/// @brief Method get_display_name, addr 0x52b3b0c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_name() ;

/// @brief Method get_entitlement_id, addr 0x52b3104, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_entitlement_id() ;

/// @brief Method get_env_id, addr 0x52b2dac, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_in_game_id, addr 0x52b3960, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_in_game_id() ;

/// @brief Method get_inventory_entry_id, addr 0x52b2a54, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_inventory_entry_id() ;

/// @brief Method get_last_updated_at, addr 0x52b3608, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_updated_at() ;

/// @brief Method get_most_recent_ledger_run, addr 0x52b345c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_most_recent_ledger_run() ;

/// @brief Method get_mothership_player_id, addr 0x52b2f58, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Method get_name, addr 0x52b37b4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_quantity, addr 0x52b32b0, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_quantity() ;

/// @brief Method get_title_id, addr 0x52b2c00, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_display_description, addr 0x52b3be0, size 0xd8, virtual false, abstract: false, final false
inline void set_display_description(::StringW  value) ;

/// @brief Method set_display_name, addr 0x52b3a34, size 0xd8, virtual false, abstract: false, final false
inline void set_display_name(::StringW  value) ;

/// @brief Method set_entitlement_id, addr 0x52b302c, size 0xd8, virtual false, abstract: false, final false
inline void set_entitlement_id(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52b2cd4, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_in_game_id, addr 0x52b3888, size 0xd8, virtual false, abstract: false, final false
inline void set_in_game_id(::StringW  value) ;

/// @brief Method set_inventory_entry_id, addr 0x52b297c, size 0xd8, virtual false, abstract: false, final false
inline void set_inventory_entry_id(::StringW  value) ;

/// @brief Method set_last_updated_at, addr 0x52b3530, size 0xd8, virtual false, abstract: false, final false
inline void set_last_updated_at(::StringW  value) ;

/// @brief Method set_most_recent_ledger_run, addr 0x52b3384, size 0xd8, virtual false, abstract: false, final false
inline void set_most_recent_ledger_run(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x52b2e80, size 0xd8, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method set_name, addr 0x52b36dc, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_quantity, addr 0x52b31d8, size 0xd8, virtual false, abstract: false, final false
inline void set_quantity(int32_t  value) ;

/// @brief Method set_title_id, addr 0x52b2b28, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52b269c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipPurchaseResult*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipPurchaseResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipPurchaseResult(MothershipPurchaseResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipPurchaseResult(MothershipPurchaseResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9351};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipPurchaseResult, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipPurchaseResult, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipPurchaseResult) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
