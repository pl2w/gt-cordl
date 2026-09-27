#pragma once
// IWYU pragma private; include "GlobalNamespace/SubscriptionPricingAndTerms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionPricingAndTerms)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
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
class SubscriptionPricingAndTerms;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SubscriptionPricingAndTerms*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionPricingAndTerms*, "", "SubscriptionPricingAndTerms");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SubscriptionPricingAndTerms
class CORDL_TYPE SubscriptionPricingAndTerms : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PriceInUSDCents, put=set_PriceInUSDCents)) int32_t  PriceInUSDCents;

 __declspec(property(get=get_SubscriptionBillingFrequency, put=set_SubscriptionBillingFrequency)) int32_t  SubscriptionBillingFrequency;

 __declspec(property(get=get_SubscriptionBillingFrequencyUnit, put=set_SubscriptionBillingFrequencyUnit)) ::StringW  SubscriptionBillingFrequencyUnit;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x53523f0, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x53524ec, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x535245c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::SubscriptionPricingAndTerms* New_ctor() ;

static inline ::GlobalNamespace::SubscriptionPricingAndTerms* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x5352c20, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

/// @brief Method ParseFromString, addr 0x5352b3c, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  string_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5352d1c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53522b8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5352318, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SubscriptionPricingAndTerms*  obj) ;

/// @brief Method get_PriceInUSDCents, addr 0x5352710, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_PriceInUSDCents() ;

/// @brief Method get_SubscriptionBillingFrequency, addr 0x53528bc, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_SubscriptionBillingFrequency() ;

/// @brief Method get_SubscriptionBillingFrequencyUnit, addr 0x5352a68, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SubscriptionBillingFrequencyUnit() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_PriceInUSDCents, addr 0x5352638, size 0xd8, virtual false, abstract: false, final false
inline void set_PriceInUSDCents(int32_t  value) ;

/// @brief Method set_SubscriptionBillingFrequency, addr 0x53527e4, size 0xd8, virtual false, abstract: false, final false
inline void set_SubscriptionBillingFrequency(int32_t  value) ;

/// @brief Method set_SubscriptionBillingFrequencyUnit, addr 0x5352990, size 0xd8, virtual false, abstract: false, final false
inline void set_SubscriptionBillingFrequencyUnit(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5352358, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SubscriptionPricingAndTerms*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionPricingAndTerms() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionPricingAndTerms", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionPricingAndTerms(SubscriptionPricingAndTerms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionPricingAndTerms", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionPricingAndTerms(SubscriptionPricingAndTerms const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9576};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionPricingAndTerms, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionPricingAndTerms, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionPricingAndTerms) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
