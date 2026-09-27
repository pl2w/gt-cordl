#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipEntitlementDeltaSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipEntitlementDeltaSummary)
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
class MothershipEntitlementDeltaSummary;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipEntitlementDeltaSummary*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipEntitlementDeltaSummary*, "", "MothershipEntitlementDeltaSummary");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipEntitlementDeltaSummary
class CORDL_TYPE MothershipEntitlementDeltaSummary : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_change, put=set_change)) int32_t  change;

 __declspec(property(get=get_display_description, put=set_display_description)) ::StringW  display_description;

 __declspec(property(get=get_display_name, put=set_display_name)) ::StringW  display_name;

 __declspec(property(get=get_entitlement_id, put=set_entitlement_id)) ::StringW  entitlement_id;

 __declspec(property(get=get_in_game_id, put=set_in_game_id)) ::StringW  in_game_id;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_type, put=set_type)) ::StringW  type;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x529d418, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x529d514, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x529d484, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipEntitlementDeltaSummary* New_ctor() ;

static inline ::GlobalNamespace::MothershipEntitlementDeltaSummary* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x529e214, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x529e2f8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x529d2e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x529d340, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipEntitlementDeltaSummary*  obj) ;

/// @brief Method get_change, addr 0x529e140, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_change() ;

/// @brief Method get_display_description, addr 0x529df94, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_description() ;

/// @brief Method get_display_name, addr 0x529dde8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_name() ;

/// @brief Method get_entitlement_id, addr 0x529d738, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_entitlement_id() ;

/// @brief Method get_in_game_id, addr 0x529da90, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_in_game_id() ;

/// @brief Method get_name, addr 0x529d8e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_type, addr 0x529dc3c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_type() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_change, addr 0x529e068, size 0xd8, virtual false, abstract: false, final false
inline void set_change(int32_t  value) ;

/// @brief Method set_display_description, addr 0x529debc, size 0xd8, virtual false, abstract: false, final false
inline void set_display_description(::StringW  value) ;

/// @brief Method set_display_name, addr 0x529dd10, size 0xd8, virtual false, abstract: false, final false
inline void set_display_name(::StringW  value) ;

/// @brief Method set_entitlement_id, addr 0x529d660, size 0xd8, virtual false, abstract: false, final false
inline void set_entitlement_id(::StringW  value) ;

/// @brief Method set_in_game_id, addr 0x529d9b8, size 0xd8, virtual false, abstract: false, final false
inline void set_in_game_id(::StringW  value) ;

/// @brief Method set_name, addr 0x529d80c, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_type, addr 0x529db64, size 0xd8, virtual false, abstract: false, final false
inline void set_type(::StringW  value) ;

/// @brief Method swigRelease, addr 0x529d380, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipEntitlementDeltaSummary*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipEntitlementDeltaSummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipEntitlementDeltaSummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipEntitlementDeltaSummary(MothershipEntitlementDeltaSummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipEntitlementDeltaSummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipEntitlementDeltaSummary(MothershipEntitlementDeltaSummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9321};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipEntitlementDeltaSummary, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipEntitlementDeltaSummary, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipEntitlementDeltaSummary) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
