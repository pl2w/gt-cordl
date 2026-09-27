#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipBoundOfferDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipBoundOfferDisplay)
namespace GlobalNamespace {
class NormalizedOffersVector;
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
class MothershipBoundOfferDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipBoundOfferDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipBoundOfferDisplay*, "", "MothershipBoundOfferDisplay");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipBoundOfferDisplay
class CORDL_TYPE MothershipBoundOfferDisplay : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_offer_display_id, put=set_offer_display_id)) ::StringW  offer_display_id;

 __declspec(property(get=get_offers, put=set_offers)) ::GlobalNamespace::NormalizedOffersVector*  offers;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x55a0bdc, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x55a0cd8, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x55a0c48, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipBoundOfferDisplay* New_ctor() ;

static inline ::GlobalNamespace::MothershipBoundOfferDisplay* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x55a1348, size 0xdc, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x55a1424, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x55a0aa4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x55a0b04, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipBoundOfferDisplay*  obj) ;

/// @brief Method get_name, addr 0x55a0ef4, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_offer_display_id, addr 0x55a1090, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_offer_display_id() ;

/// @brief Method get_offers, addr 0x55a1244, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::NormalizedOffersVector* get_offers() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_name, addr 0x55a0e24, size 0xd0, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_offer_display_id, addr 0x55a0fc0, size 0xd0, virtual false, abstract: false, final false
inline void set_offer_display_id(::StringW  value) ;

/// @brief Method set_offers, addr 0x55a115c, size 0xe8, virtual false, abstract: false, final false
inline void set_offers(::GlobalNamespace::NormalizedOffersVector*  value) ;

/// @brief Method swigRelease, addr 0x55a0b44, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipBoundOfferDisplay*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipBoundOfferDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipBoundOfferDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipBoundOfferDisplay(MothershipBoundOfferDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipBoundOfferDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipBoundOfferDisplay(MothershipBoundOfferDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9315};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipBoundOfferDisplay, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipBoundOfferDisplay, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipBoundOfferDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
