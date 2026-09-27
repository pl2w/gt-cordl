#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipNormalizedOffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipNormalizedOffer)
namespace GlobalNamespace {
class OfferChangesMap;
}
namespace GlobalNamespace {
class SubscriptionPricingVector;
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
class MothershipNormalizedOffer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipNormalizedOffer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipNormalizedOffer*, "", "MothershipNormalizedOffer");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipNormalizedOffer
class CORDL_TYPE MothershipNormalizedOffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DisplayDescription, put=set_DisplayDescription)) ::StringW  DisplayDescription;

 __declspec(property(get=get_DisplayIndex, put=set_DisplayIndex)) int32_t  DisplayIndex;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_ExternalEntitlementId, put=set_ExternalEntitlementId)) ::StringW  ExternalEntitlementId;

 __declspec(property(get=get_ExternalService, put=set_ExternalService)) ::StringW  ExternalService;

 __declspec(property(get=get_OfferId, put=set_OfferId)) ::StringW  OfferId;

 __declspec(property(get=get_OfferName, put=set_OfferName)) ::StringW  OfferName;

 __declspec(property(get=get_PersonalCredits, put=set_PersonalCredits)) ::GlobalNamespace::OfferChangesMap*  PersonalCredits;

 __declspec(property(get=get_PersonalDebits, put=set_PersonalDebits)) ::GlobalNamespace::OfferChangesMap*  PersonalDebits;

 __declspec(property(get=get_PricingAndTerms, put=set_PricingAndTerms)) ::GlobalNamespace::SubscriptionPricingVector*  PricingAndTerms;

 __declspec(property(get=get_PurchaseAllowed, put=set_PurchaseAllowed)) bool  PurchaseAllowed;

 __declspec(property(get=get_RawCredits, put=set_RawCredits)) ::GlobalNamespace::OfferChangesMap*  RawCredits;

 __declspec(property(get=get_RawDebits, put=set_RawDebits)) ::GlobalNamespace::OfferChangesMap*  RawDebits;

 __declspec(property(get=get_SubscriptionSku, put=set_SubscriptionSku)) ::StringW  SubscriptionSku;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52abc64, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52abd60, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52abcd0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipNormalizedOffer* New_ctor() ;

static inline ::GlobalNamespace::MothershipNormalizedOffer* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52ad7a4, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52ad888, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52abb2c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52abb8c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipNormalizedOffer*  obj) ;

/// @brief Method get_DisplayDescription, addr 0x52ad17c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_DisplayDescription() ;

/// @brief Method get_DisplayIndex, addr 0x52ad328, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_DisplayIndex() ;

/// @brief Method get_DisplayName, addr 0x52acfd0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_ExternalEntitlementId, addr 0x52acacc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalEntitlementId() ;

/// @brief Method get_ExternalService, addr 0x52acc78, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalService() ;

/// @brief Method get_OfferId, addr 0x52ac920, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OfferId() ;

/// @brief Method get_OfferName, addr 0x52ace24, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OfferName() ;

/// @brief Method get_PersonalCredits, addr 0x52ac394, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferChangesMap* get_PersonalCredits() ;

/// @brief Method get_PersonalDebits, addr 0x52ac590, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferChangesMap* get_PersonalDebits() ;

/// @brief Method get_PricingAndTerms, addr 0x52ad698, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubscriptionPricingVector* get_PricingAndTerms() ;

/// @brief Method get_PurchaseAllowed, addr 0x52ac774, size 0xd4, virtual false, abstract: false, final false
inline bool get_PurchaseAllowed() ;

/// @brief Method get_RawCredits, addr 0x52abf9c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferChangesMap* get_RawCredits() ;

/// @brief Method get_RawDebits, addr 0x52ac198, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferChangesMap* get_RawDebits() ;

/// @brief Method get_SubscriptionSku, addr 0x52ad4d4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SubscriptionSku() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_DisplayDescription, addr 0x52ad0a4, size 0xd8, virtual false, abstract: false, final false
inline void set_DisplayDescription(::StringW  value) ;

/// @brief Method set_DisplayIndex, addr 0x52ad250, size 0xd8, virtual false, abstract: false, final false
inline void set_DisplayIndex(int32_t  value) ;

/// @brief Method set_DisplayName, addr 0x52acef8, size 0xd8, virtual false, abstract: false, final false
inline void set_DisplayName(::StringW  value) ;

/// @brief Method set_ExternalEntitlementId, addr 0x52ac9f4, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalEntitlementId(::StringW  value) ;

/// @brief Method set_ExternalService, addr 0x52acba0, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalService(::StringW  value) ;

/// @brief Method set_OfferId, addr 0x52ac848, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferId(::StringW  value) ;

/// @brief Method set_OfferName, addr 0x52acd4c, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferName(::StringW  value) ;

/// @brief Method set_PersonalCredits, addr 0x52ac2a4, size 0xf0, virtual false, abstract: false, final false
inline void set_PersonalCredits(::GlobalNamespace::OfferChangesMap*  value) ;

/// @brief Method set_PersonalDebits, addr 0x52ac4a0, size 0xf0, virtual false, abstract: false, final false
inline void set_PersonalDebits(::GlobalNamespace::OfferChangesMap*  value) ;

/// @brief Method set_PricingAndTerms, addr 0x52ad5a8, size 0xf0, virtual false, abstract: false, final false
inline void set_PricingAndTerms(::GlobalNamespace::SubscriptionPricingVector*  value) ;

/// @brief Method set_PurchaseAllowed, addr 0x52ac69c, size 0xd8, virtual false, abstract: false, final false
inline void set_PurchaseAllowed(bool  value) ;

/// @brief Method set_RawCredits, addr 0x52abeac, size 0xf0, virtual false, abstract: false, final false
inline void set_RawCredits(::GlobalNamespace::OfferChangesMap*  value) ;

/// @brief Method set_RawDebits, addr 0x52ac0a8, size 0xf0, virtual false, abstract: false, final false
inline void set_RawDebits(::GlobalNamespace::OfferChangesMap*  value) ;

/// @brief Method set_SubscriptionSku, addr 0x52ad3fc, size 0xd8, virtual false, abstract: false, final false
inline void set_SubscriptionSku(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52abbcc, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipNormalizedOffer*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipNormalizedOffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipNormalizedOffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipNormalizedOffer(MothershipNormalizedOffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipNormalizedOffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipNormalizedOffer(MothershipNormalizedOffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9343};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipNormalizedOffer, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipNormalizedOffer, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipNormalizedOffer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
