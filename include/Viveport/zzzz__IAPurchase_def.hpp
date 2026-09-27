#pragma once
// IWYU pragma private; include "Viveport/IAPurchase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAPurchase)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Viveport::Internal {
class IAPurchaseCallback;
}
namespace Viveport {
class IAPurchase_BaseHandler;
}
namespace Viveport {
class IAPurchase_IAPHandler;
}
namespace Viveport {
class IAPurchase_IAPurchaseListener;
}
namespace Viveport {
class IAPurchase_QueryListResponse;
}
namespace Viveport {
class IAPurchase_QueryResponse2;
}
namespace Viveport {
class IAPurchase_QueryResponse;
}
namespace Viveport {
class IAPurchase_QuerySubscritionResponse;
}
namespace Viveport {
class IAPurchase_StatusDetailTransaction;
}
namespace Viveport {
class IAPurchase_StatusDetail;
}
namespace Viveport {
class IAPurchase_Subscription;
}
namespace Viveport {
class IAPurchase_TimePeriod;
}
// Forward declare root types
namespace Viveport {
class IAPurchase;
}
namespace Viveport {
class IAPurchase_BaseHandler;
}
namespace Viveport {
class IAPurchase_IAPHandler;
}
namespace Viveport {
class IAPurchase_IAPurchaseListener;
}
namespace Viveport {
class IAPurchase_QueryListResponse;
}
namespace Viveport {
class IAPurchase_QueryResponse;
}
namespace Viveport {
class IAPurchase_QueryResponse2;
}
namespace Viveport {
class IAPurchase_QuerySubscritionResponse;
}
namespace Viveport {
class IAPurchase_StatusDetail;
}
namespace Viveport {
class IAPurchase_StatusDetailTransaction;
}
namespace Viveport {
class IAPurchase_Subscription;
}
namespace Viveport {
class IAPurchase_TimePeriod;
}
// Write type traits
MARK_REF_T(::Viveport::IAPurchase*);
MARK_REF_T(::Viveport::IAPurchase_BaseHandler*);
MARK_REF_T(::Viveport::IAPurchase_IAPHandler*);
MARK_REF_T(::Viveport::IAPurchase_IAPurchaseListener*);
MARK_REF_T(::Viveport::IAPurchase_QueryListResponse*);
MARK_REF_T(::Viveport::IAPurchase_QueryResponse*);
MARK_REF_T(::Viveport::IAPurchase_QueryResponse2*);
MARK_REF_T(::Viveport::IAPurchase_QuerySubscritionResponse*);
MARK_REF_T(::Viveport::IAPurchase_StatusDetail*);
MARK_REF_T(::Viveport::IAPurchase_StatusDetailTransaction*);
MARK_REF_T(::Viveport::IAPurchase_Subscription*);
MARK_REF_T(::Viveport::IAPurchase_TimePeriod*);
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase*, "Viveport", "IAPurchase");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_BaseHandler*, "Viveport", "IAPurchase/BaseHandler");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_IAPHandler*, "Viveport", "IAPurchase/IAPHandler");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_IAPurchaseListener*, "Viveport", "IAPurchase/IAPurchaseListener");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_QueryListResponse*, "Viveport", "IAPurchase/QueryListResponse");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_QueryResponse*, "Viveport", "IAPurchase/QueryResponse");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_QueryResponse2*, "Viveport", "IAPurchase/QueryResponse2");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_QuerySubscritionResponse*, "Viveport", "IAPurchase/QuerySubscritionResponse");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_StatusDetail*, "Viveport", "IAPurchase/StatusDetail");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_StatusDetailTransaction*, "Viveport", "IAPurchase/StatusDetailTransaction");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_Subscription*, "Viveport", "IAPurchase/Subscription");
DEFINE_IL2CPP_CLASS(::Viveport::IAPurchase_TimePeriod*, "Viveport", "IAPurchase/TimePeriod");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase
class CORDL_TYPE IAPurchase : public ::System::Object {
public:
// Declarations
using BaseHandler = ::Viveport::IAPurchase_BaseHandler;

using IAPHandler = ::Viveport::IAPurchase_IAPHandler;

using IAPurchaseListener = ::Viveport::IAPurchase_IAPurchaseListener;

using QueryListResponse = ::Viveport::IAPurchase_QueryListResponse;

using QueryResponse = ::Viveport::IAPurchase_QueryResponse;

using QueryResponse2 = ::Viveport::IAPurchase_QueryResponse2;

using QuerySubscritionResponse = ::Viveport::IAPurchase_QuerySubscritionResponse;

using StatusDetail = ::Viveport::IAPurchase_StatusDetail;

using StatusDetailTransaction = ::Viveport::IAPurchase_StatusDetailTransaction;

using Subscription = ::Viveport::IAPurchase_Subscription;

using TimePeriod = ::Viveport::IAPurchase_TimePeriod;

/// @brief Field cancelSubscriptionIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancelSubscriptionIl2cppCallback, put=setStaticF_cancelSubscriptionIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  cancelSubscriptionIl2cppCallback;

/// @brief Field getBalanceIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getBalanceIl2cppCallback, put=setStaticF_getBalanceIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  getBalanceIl2cppCallback;

/// @brief Field isReadyIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isReadyIl2cppCallback, put=setStaticF_isReadyIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  isReadyIl2cppCallback;

/// @brief Field purchaseIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_purchaseIl2cppCallback, put=setStaticF_purchaseIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  purchaseIl2cppCallback;

/// @brief Field query01Il2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_query01Il2cppCallback, put=setStaticF_query01Il2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  query01Il2cppCallback;

/// @brief Field query02Il2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_query02Il2cppCallback, put=setStaticF_query02Il2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  query02Il2cppCallback;

/// @brief Field querySubscriptionIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_querySubscriptionIl2cppCallback, put=setStaticF_querySubscriptionIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  querySubscriptionIl2cppCallback;

/// @brief Field querySubscriptionListIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_querySubscriptionListIl2cppCallback, put=setStaticF_querySubscriptionListIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  querySubscriptionListIl2cppCallback;

/// @brief Field request01Il2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_request01Il2cppCallback, put=setStaticF_request01Il2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  request01Il2cppCallback;

/// @brief Field request02Il2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_request02Il2cppCallback, put=setStaticF_request02Il2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  request02Il2cppCallback;

/// @brief Field requestSubscriptionIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_requestSubscriptionIl2cppCallback, put=setStaticF_requestSubscriptionIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  requestSubscriptionIl2cppCallback;

/// @brief Field requestSubscriptionWithPlanIDIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_requestSubscriptionWithPlanIDIl2cppCallback, put=setStaticF_requestSubscriptionWithPlanIDIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  requestSubscriptionWithPlanIDIl2cppCallback;

/// @brief Field subscribeIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_subscribeIl2cppCallback, put=setStaticF_subscribeIl2cppCallback)) ::Viveport::Internal::IAPurchaseCallback*  subscribeIl2cppCallback;

/// @brief Method CancelSubscription, addr 0x5b52504, size 0xe4, virtual false, abstract: false, final false
static inline void CancelSubscription(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchSubscriptionId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method CancelSubscriptionIl2cppCallback, addr 0x5b50148, size 0x74, virtual false, abstract: false, final false
static inline void CancelSubscriptionIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method GetBalance, addr 0x5b51300, size 0xdc, virtual false, abstract: false, final false
static inline void GetBalance(::Viveport::IAPurchase_IAPurchaseListener*  listener) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method GetBalanceIl2cppCallback, addr 0x5b4fe90, size 0x74, virtual false, abstract: false, final false
static inline void GetBalanceIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method IsReady, addr 0x5b501bc, size 0xe8, virtual false, abstract: false, final false
static inline void IsReady(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchAppKey) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method IsReadyIl2cppCallback, addr 0x5b4fbd8, size 0x74, virtual false, abstract: false, final false
static inline void IsReadyIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

static inline ::Viveport::IAPurchase* New_ctor() ;

/// @brief Method Purchase, addr 0x5b50afc, size 0xe4, virtual false, abstract: false, final false
static inline void Purchase(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPurchaseId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method PurchaseIl2cppCallback, addr 0x5b4fd34, size 0x74, virtual false, abstract: false, final false
static inline void PurchaseIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method Query, addr 0x5b51084, size 0xdc, virtual false, abstract: false, final false
static inline void Query(::Viveport::IAPurchase_IAPurchaseListener*  listener) ;

/// @brief Method Query, addr 0x5b50dc0, size 0xe4, virtual false, abstract: false, final false
static inline void Query(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPurchaseId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method Query01Il2cppCallback, addr 0x5b4fda8, size 0x74, virtual false, abstract: false, final false
static inline void Query01Il2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method Query02Il2cppCallback, addr 0x5b4fe1c, size 0x74, virtual false, abstract: false, final false
static inline void Query02Il2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method QuerySubscription, addr 0x5b51fc4, size 0xe4, virtual false, abstract: false, final false
static inline void QuerySubscription(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchSubscriptionId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method QuerySubscriptionIl2cppCallback, addr 0x5b50060, size 0x74, virtual false, abstract: false, final false
static inline void QuerySubscriptionIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method QuerySubscriptionList, addr 0x5b52288, size 0xdc, virtual false, abstract: false, final false
static inline void QuerySubscriptionList(::Viveport::IAPurchase_IAPurchaseListener*  listener) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method QuerySubscriptionListIl2cppCallback, addr 0x5b500d4, size 0x74, virtual false, abstract: false, final false
static inline void QuerySubscriptionListIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method Request, addr 0x5b50594, size 0xe4, virtual false, abstract: false, final false
static inline void Request(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPrice) ;

/// @brief Method Request, addr 0x5b50858, size 0xf4, virtual false, abstract: false, final false
static inline void Request(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPrice, ::StringW  pchUserData) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method Request01Il2cppCallback, addr 0x5b4fc4c, size 0x74, virtual false, abstract: false, final false
static inline void Request01Il2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method Request02Il2cppCallback, addr 0x5b4fcc0, size 0x74, virtual false, abstract: false, final false
static inline void Request02Il2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method RequestSubscription, addr 0x5b5157c, size 0x12c, virtual false, abstract: false, final false
static inline void RequestSubscription(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPrice, ::StringW  pchFreeTrialType, int32_t  nFreeTrialValue, ::StringW  pchChargePeriodType, int32_t  nChargePeriodValue, int32_t  nNumberOfChargePeriod, ::StringW  pchPlanId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method RequestSubscriptionIl2cppCallback, addr 0x5b4ff04, size 0x74, virtual false, abstract: false, final false
static inline void RequestSubscriptionIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method RequestSubscriptionWithPlanID, addr 0x5b51a3c, size 0xe4, virtual false, abstract: false, final false
static inline void RequestSubscriptionWithPlanID(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPlanId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method RequestSubscriptionWithPlanIDIl2cppCallback, addr 0x5b4ff78, size 0x74, virtual false, abstract: false, final false
static inline void RequestSubscriptionWithPlanIDIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method Subscribe, addr 0x5b51d00, size 0xe4, virtual false, abstract: false, final false
static inline void Subscribe(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchSubscriptionId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.IAPurchaseCallback))]
/// @brief Method SubscribeIl2cppCallback, addr 0x5b4ffec, size 0x74, virtual false, abstract: false, final false
static inline void SubscribeIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method .ctor, addr 0x5b527c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_cancelSubscriptionIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_getBalanceIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_isReadyIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_purchaseIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_query01Il2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_query02Il2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_querySubscriptionIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_querySubscriptionListIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_request01Il2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_request02Il2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_requestSubscriptionIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_requestSubscriptionWithPlanIDIl2cppCallback() ;

static inline ::Viveport::Internal::IAPurchaseCallback* getStaticF_subscribeIl2cppCallback() ;

static inline void setStaticF_cancelSubscriptionIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_getBalanceIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_isReadyIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_purchaseIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_query01Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_query02Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_querySubscriptionIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_querySubscriptionListIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_request01Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_request02Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_requestSubscriptionIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_requestSubscriptionWithPlanIDIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

static inline void setStaticF_subscribeIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase(IAPurchase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase(IAPurchase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3783};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::IAPurchase) == 0x10, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/QuerySubscritionResponse
class CORDL_TYPE IAPurchase_QuerySubscritionResponse : public ::System::Object {
public:
// Declarations
/// @brief Field <message>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__message_k__BackingField, put=__cordl_internal_set__message_k__BackingField)) ::StringW  _message_k__BackingField;

/// @brief Field <statusCode>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__statusCode_k__BackingField, put=__cordl_internal_set__statusCode_k__BackingField)) int32_t  _statusCode_k__BackingField;

/// @brief Field <subscriptions>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscriptions_k__BackingField, put=__cordl_internal_set__subscriptions_k__BackingField)) ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*  _subscriptions_k__BackingField;

 __declspec(property(get=get_message, put=set_message)) ::StringW  message;

 __declspec(property(get=get_statusCode, put=set_statusCode)) int32_t  statusCode;

 __declspec(property(get=get_subscriptions, put=set_subscriptions)) ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*  subscriptions;

static inline ::Viveport::IAPurchase_QuerySubscritionResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__message_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__message_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__statusCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__statusCode_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>* const& __cordl_internal_get__subscriptions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*& __cordl_internal_get__subscriptions_k__BackingField() ;

constexpr void __cordl_internal_set__message_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__statusCode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__subscriptions_k__BackingField(::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*  value) ;

/// @brief Method .ctor, addr 0x5b575fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_message, addr 0x5b575dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_message() ;

/// [CompilerGenerated]
/// @brief Method get_statusCode, addr 0x5b575cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_statusCode() ;

/// [CompilerGenerated]
/// @brief Method get_subscriptions, addr 0x5b575ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>* get_subscriptions() ;

/// [CompilerGenerated]
/// @brief Method set_message, addr 0x5b575e4, size 0x8, virtual false, abstract: false, final false
inline void set_message(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_statusCode, addr 0x5b575d4, size 0x8, virtual false, abstract: false, final false
inline void set_statusCode(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_subscriptions, addr 0x5b575f4, size 0x8, virtual false, abstract: false, final false
inline void set_subscriptions(::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_QuerySubscritionResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QuerySubscritionResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_QuerySubscritionResponse(IAPurchase_QuerySubscritionResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QuerySubscritionResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_QuerySubscritionResponse(IAPurchase_QuerySubscritionResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3782};

/// [CompilerGenerated]
/// @brief Field <statusCode>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____statusCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <message>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____message_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <subscriptions>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*  ____subscriptions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_QuerySubscritionResponse, ____statusCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QuerySubscritionResponse, ____message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QuerySubscritionResponse, ____subscriptions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_QuerySubscritionResponse) == 0x28, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/Subscription
class CORDL_TYPE IAPurchase_Subscription : public ::System::Object {
public:
// Declarations
/// @brief Field <app_id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__app_id_k__BackingField, put=__cordl_internal_set__app_id_k__BackingField)) ::StringW  _app_id_k__BackingField;

/// @brief Field <charge_period>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__charge_period_k__BackingField, put=__cordl_internal_set__charge_period_k__BackingField)) ::Viveport::IAPurchase_TimePeriod*  _charge_period_k__BackingField;

/// @brief Field <currency>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currency_k__BackingField, put=__cordl_internal_set__currency_k__BackingField)) ::StringW  _currency_k__BackingField;

/// @brief Field <free_trial_period>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__free_trial_period_k__BackingField, put=__cordl_internal_set__free_trial_period_k__BackingField)) ::Viveport::IAPurchase_TimePeriod*  _free_trial_period_k__BackingField;

/// @brief Field <number_of_charge_period>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__number_of_charge_period_k__BackingField, put=__cordl_internal_set__number_of_charge_period_k__BackingField)) int32_t  _number_of_charge_period_k__BackingField;

/// @brief Field <order_id>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__order_id_k__BackingField, put=__cordl_internal_set__order_id_k__BackingField)) ::StringW  _order_id_k__BackingField;

/// @brief Field <plan_id>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__plan_id_k__BackingField, put=__cordl_internal_set__plan_id_k__BackingField)) ::StringW  _plan_id_k__BackingField;

/// @brief Field <plan_name>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__plan_name_k__BackingField, put=__cordl_internal_set__plan_name_k__BackingField)) ::StringW  _plan_name_k__BackingField;

/// @brief Field <price>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__price_k__BackingField, put=__cordl_internal_set__price_k__BackingField)) ::StringW  _price_k__BackingField;

/// @brief Field <status_detail>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__status_detail_k__BackingField, put=__cordl_internal_set__status_detail_k__BackingField)) ::Viveport::IAPurchase_StatusDetail*  _status_detail_k__BackingField;

/// @brief Field <status>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__status_k__BackingField, put=__cordl_internal_set__status_k__BackingField)) ::StringW  _status_k__BackingField;

/// @brief Field <subscribed_timestamp>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribed_timestamp_k__BackingField, put=__cordl_internal_set__subscribed_timestamp_k__BackingField)) int64_t  _subscribed_timestamp_k__BackingField;

/// @brief Field <subscription_id>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscription_id_k__BackingField, put=__cordl_internal_set__subscription_id_k__BackingField)) ::StringW  _subscription_id_k__BackingField;

 __declspec(property(get=get_app_id, put=set_app_id)) ::StringW  app_id;

 __declspec(property(get=get_charge_period, put=set_charge_period)) ::Viveport::IAPurchase_TimePeriod*  charge_period;

 __declspec(property(get=get_currency, put=set_currency)) ::StringW  currency;

 __declspec(property(get=get_free_trial_period, put=set_free_trial_period)) ::Viveport::IAPurchase_TimePeriod*  free_trial_period;

 __declspec(property(get=get_number_of_charge_period, put=set_number_of_charge_period)) int32_t  number_of_charge_period;

 __declspec(property(get=get_order_id, put=set_order_id)) ::StringW  order_id;

 __declspec(property(get=get_plan_id, put=set_plan_id)) ::StringW  plan_id;

 __declspec(property(get=get_plan_name, put=set_plan_name)) ::StringW  plan_name;

 __declspec(property(get=get_price, put=set_price)) ::StringW  price;

 __declspec(property(get=get_status, put=set_status)) ::StringW  status;

 __declspec(property(get=get_status_detail, put=set_status_detail)) ::Viveport::IAPurchase_StatusDetail*  status_detail;

 __declspec(property(get=get_subscribed_timestamp, put=set_subscribed_timestamp)) int64_t  subscribed_timestamp;

 __declspec(property(get=get_subscription_id, put=set_subscription_id)) ::StringW  subscription_id;

static inline ::Viveport::IAPurchase_Subscription* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__app_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__app_id_k__BackingField() ;

constexpr ::Viveport::IAPurchase_TimePeriod* const& __cordl_internal_get__charge_period_k__BackingField() const;

constexpr ::Viveport::IAPurchase_TimePeriod*& __cordl_internal_get__charge_period_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__currency_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__currency_k__BackingField() ;

constexpr ::Viveport::IAPurchase_TimePeriod* const& __cordl_internal_get__free_trial_period_k__BackingField() const;

constexpr ::Viveport::IAPurchase_TimePeriod*& __cordl_internal_get__free_trial_period_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__number_of_charge_period_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__number_of_charge_period_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__order_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__order_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__plan_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__plan_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__plan_name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__plan_name_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__price_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__price_k__BackingField() ;

constexpr ::Viveport::IAPurchase_StatusDetail* const& __cordl_internal_get__status_detail_k__BackingField() const;

constexpr ::Viveport::IAPurchase_StatusDetail*& __cordl_internal_get__status_detail_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__status_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__status_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__subscribed_timestamp_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__subscribed_timestamp_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__subscription_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__subscription_id_k__BackingField() ;

constexpr void __cordl_internal_set__app_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__charge_period_k__BackingField(::Viveport::IAPurchase_TimePeriod*  value) ;

constexpr void __cordl_internal_set__currency_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__free_trial_period_k__BackingField(::Viveport::IAPurchase_TimePeriod*  value) ;

constexpr void __cordl_internal_set__number_of_charge_period_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__order_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__plan_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__plan_name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__price_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__status_detail_k__BackingField(::Viveport::IAPurchase_StatusDetail*  value) ;

constexpr void __cordl_internal_set__status_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__subscribed_timestamp_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__subscription_id_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b575c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_app_id, addr 0x5b574f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_app_id() ;

/// [CompilerGenerated]
/// @brief Method get_charge_period, addr 0x5b57564, size 0x8, virtual false, abstract: false, final false
inline ::Viveport::IAPurchase_TimePeriod* get_charge_period() ;

/// [CompilerGenerated]
/// @brief Method get_currency, addr 0x5b57534, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_currency() ;

/// [CompilerGenerated]
/// @brief Method get_free_trial_period, addr 0x5b57554, size 0x8, virtual false, abstract: false, final false
inline ::Viveport::IAPurchase_TimePeriod* get_free_trial_period() ;

/// [CompilerGenerated]
/// @brief Method get_number_of_charge_period, addr 0x5b57574, size 0x8, virtual false, abstract: false, final false
inline int32_t get_number_of_charge_period() ;

/// [CompilerGenerated]
/// @brief Method get_order_id, addr 0x5b57504, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_order_id() ;

/// [CompilerGenerated]
/// @brief Method get_plan_id, addr 0x5b57584, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_plan_id() ;

/// [CompilerGenerated]
/// @brief Method get_plan_name, addr 0x5b57594, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_plan_name() ;

/// [CompilerGenerated]
/// @brief Method get_price, addr 0x5b57524, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_price() ;

/// [CompilerGenerated]
/// @brief Method get_status, addr 0x5b575a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_status() ;

/// [CompilerGenerated]
/// @brief Method get_status_detail, addr 0x5b575b4, size 0x8, virtual false, abstract: false, final false
inline ::Viveport::IAPurchase_StatusDetail* get_status_detail() ;

/// [CompilerGenerated]
/// @brief Method get_subscribed_timestamp, addr 0x5b57544, size 0x8, virtual false, abstract: false, final false
inline int64_t get_subscribed_timestamp() ;

/// [CompilerGenerated]
/// @brief Method get_subscription_id, addr 0x5b57514, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_subscription_id() ;

/// [CompilerGenerated]
/// @brief Method set_app_id, addr 0x5b574fc, size 0x8, virtual false, abstract: false, final false
inline void set_app_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_charge_period, addr 0x5b5756c, size 0x8, virtual false, abstract: false, final false
inline void set_charge_period(::Viveport::IAPurchase_TimePeriod*  value) ;

/// [CompilerGenerated]
/// @brief Method set_currency, addr 0x5b5753c, size 0x8, virtual false, abstract: false, final false
inline void set_currency(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_free_trial_period, addr 0x5b5755c, size 0x8, virtual false, abstract: false, final false
inline void set_free_trial_period(::Viveport::IAPurchase_TimePeriod*  value) ;

/// [CompilerGenerated]
/// @brief Method set_number_of_charge_period, addr 0x5b5757c, size 0x8, virtual false, abstract: false, final false
inline void set_number_of_charge_period(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_order_id, addr 0x5b5750c, size 0x8, virtual false, abstract: false, final false
inline void set_order_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_plan_id, addr 0x5b5758c, size 0x8, virtual false, abstract: false, final false
inline void set_plan_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_plan_name, addr 0x5b5759c, size 0x8, virtual false, abstract: false, final false
inline void set_plan_name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_price, addr 0x5b5752c, size 0x8, virtual false, abstract: false, final false
inline void set_price(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_status, addr 0x5b575ac, size 0x8, virtual false, abstract: false, final false
inline void set_status(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_status_detail, addr 0x5b575bc, size 0x8, virtual false, abstract: false, final false
inline void set_status_detail(::Viveport::IAPurchase_StatusDetail*  value) ;

/// [CompilerGenerated]
/// @brief Method set_subscribed_timestamp, addr 0x5b5754c, size 0x8, virtual false, abstract: false, final false
inline void set_subscribed_timestamp(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_subscription_id, addr 0x5b5751c, size 0x8, virtual false, abstract: false, final false
inline void set_subscription_id(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_Subscription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_Subscription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_Subscription(IAPurchase_Subscription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_Subscription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_Subscription(IAPurchase_Subscription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3781};

/// [CompilerGenerated]
/// @brief Field <app_id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____app_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <order_id>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____order_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <subscription_id>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____subscription_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <price>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____price_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <currency>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____currency_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <subscribed_timestamp>k__BackingField, offset: 0x38, size: 0x8, def value: None
 int64_t  ____subscribed_timestamp_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <free_trial_period>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Viveport::IAPurchase_TimePeriod*  ____free_trial_period_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <charge_period>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Viveport::IAPurchase_TimePeriod*  ____charge_period_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <number_of_charge_period>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____number_of_charge_period_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <plan_id>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____plan_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <plan_name>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____plan_name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <status>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <status_detail>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Viveport::IAPurchase_StatusDetail*  ____status_detail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____app_id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____order_id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____subscription_id_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____price_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____currency_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____subscribed_timestamp_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____free_trial_period_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____charge_period_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____number_of_charge_period_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____plan_id_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____plan_name_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____status_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_Subscription, ____status_detail_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_Subscription) == 0x78, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/TimePeriod
class CORDL_TYPE IAPurchase_TimePeriod : public ::System::Object {
public:
// Declarations
/// @brief Field <time_type>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__time_type_k__BackingField, put=__cordl_internal_set__time_type_k__BackingField)) ::StringW  _time_type_k__BackingField;

/// @brief Field <value>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__value_k__BackingField, put=__cordl_internal_set__value_k__BackingField)) int32_t  _value_k__BackingField;

 __declspec(property(get=get_time_type, put=set_time_type)) ::StringW  time_type;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

static inline ::Viveport::IAPurchase_TimePeriod* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__time_type_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__time_type_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__value_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__value_k__BackingField() ;

constexpr void __cordl_internal_set__time_type_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__value_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b574ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_time_type, addr 0x5b574cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_time_type() ;

/// [CompilerGenerated]
/// @brief Method get_value, addr 0x5b574dc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_value() ;

/// [CompilerGenerated]
/// @brief Method set_time_type, addr 0x5b574d4, size 0x8, virtual false, abstract: false, final false
inline void set_time_type(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_value, addr 0x5b574e4, size 0x8, virtual false, abstract: false, final false
inline void set_value(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_TimePeriod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_TimePeriod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_TimePeriod(IAPurchase_TimePeriod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_TimePeriod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_TimePeriod(IAPurchase_TimePeriod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3780};

/// [CompilerGenerated]
/// @brief Field <time_type>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____time_type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <value>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_TimePeriod, ____time_type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_TimePeriod, ____value_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_TimePeriod) == 0x20, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object, Viveport.IAPurchase::StatusDetailTransaction
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/StatusDetail
class CORDL_TYPE IAPurchase_StatusDetail : public ::System::Object {
public:
// Declarations
/// @brief Field <cancel_reason>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancel_reason_k__BackingField, put=__cordl_internal_set__cancel_reason_k__BackingField)) ::StringW  _cancel_reason_k__BackingField;

/// @brief Field <date_next_charge>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__date_next_charge_k__BackingField, put=__cordl_internal_set__date_next_charge_k__BackingField)) int64_t  _date_next_charge_k__BackingField;

/// @brief Field <transactions>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__transactions_k__BackingField, put=__cordl_internal_set__transactions_k__BackingField)) ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>  _transactions_k__BackingField;

 __declspec(property(get=get_cancel_reason, put=set_cancel_reason)) ::StringW  cancel_reason;

 __declspec(property(get=get_date_next_charge, put=set_date_next_charge)) int64_t  date_next_charge;

 __declspec(property(get=get_transactions, put=set_transactions)) ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>  transactions;

static inline ::Viveport::IAPurchase_StatusDetail* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__cancel_reason_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__cancel_reason_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__date_next_charge_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__date_next_charge_k__BackingField() ;

constexpr ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*> const& __cordl_internal_get__transactions_k__BackingField() const;

constexpr ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>& __cordl_internal_get__transactions_k__BackingField() ;

constexpr void __cordl_internal_set__cancel_reason_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__date_next_charge_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__transactions_k__BackingField(::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>  value) ;

/// @brief Method .ctor, addr 0x5b574c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_cancel_reason, addr 0x5b574b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_cancel_reason() ;

/// [CompilerGenerated]
/// @brief Method get_date_next_charge, addr 0x5b57494, size 0x8, virtual false, abstract: false, final false
inline int64_t get_date_next_charge() ;

/// [CompilerGenerated]
/// @brief Method get_transactions, addr 0x5b574a4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*> get_transactions() ;

/// [CompilerGenerated]
/// @brief Method set_cancel_reason, addr 0x5b574bc, size 0x8, virtual false, abstract: false, final false
inline void set_cancel_reason(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_date_next_charge, addr 0x5b5749c, size 0x8, virtual false, abstract: false, final false
inline void set_date_next_charge(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_transactions, addr 0x5b574ac, size 0x8, virtual false, abstract: false, final false
inline void set_transactions(::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_StatusDetail() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_StatusDetail", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_StatusDetail(IAPurchase_StatusDetail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_StatusDetail", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_StatusDetail(IAPurchase_StatusDetail const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3779};

/// [CompilerGenerated]
/// @brief Field <date_next_charge>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____date_next_charge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <transactions>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>  ____transactions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <cancel_reason>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____cancel_reason_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_StatusDetail, ____date_next_charge_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_StatusDetail, ____transactions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_StatusDetail, ____cancel_reason_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_StatusDetail) == 0x28, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/StatusDetailTransaction
class CORDL_TYPE IAPurchase_StatusDetailTransaction : public ::System::Object {
public:
// Declarations
/// @brief Field <create_time>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__create_time_k__BackingField, put=__cordl_internal_set__create_time_k__BackingField)) int64_t  _create_time_k__BackingField;

/// @brief Field <payment_method>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__payment_method_k__BackingField, put=__cordl_internal_set__payment_method_k__BackingField)) ::StringW  _payment_method_k__BackingField;

/// @brief Field <status>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__status_k__BackingField, put=__cordl_internal_set__status_k__BackingField)) ::StringW  _status_k__BackingField;

 __declspec(property(get=get_create_time, put=set_create_time)) int64_t  create_time;

 __declspec(property(get=get_payment_method, put=set_payment_method)) ::StringW  payment_method;

 __declspec(property(get=get_status, put=set_status)) ::StringW  status;

static inline ::Viveport::IAPurchase_StatusDetailTransaction* New_ctor() ;

constexpr int64_t const& __cordl_internal_get__create_time_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__create_time_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__payment_method_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__payment_method_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__status_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__status_k__BackingField() ;

constexpr void __cordl_internal_set__create_time_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__payment_method_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__status_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b5748c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_create_time, addr 0x5b5745c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_create_time() ;

/// [CompilerGenerated]
/// @brief Method get_payment_method, addr 0x5b5746c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_payment_method() ;

/// [CompilerGenerated]
/// @brief Method get_status, addr 0x5b5747c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_status() ;

/// [CompilerGenerated]
/// @brief Method set_create_time, addr 0x5b57464, size 0x8, virtual false, abstract: false, final false
inline void set_create_time(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_payment_method, addr 0x5b57474, size 0x8, virtual false, abstract: false, final false
inline void set_payment_method(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_status, addr 0x5b57484, size 0x8, virtual false, abstract: false, final false
inline void set_status(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_StatusDetailTransaction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_StatusDetailTransaction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_StatusDetailTransaction(IAPurchase_StatusDetailTransaction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_StatusDetailTransaction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_StatusDetailTransaction(IAPurchase_StatusDetailTransaction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3778};

/// [CompilerGenerated]
/// @brief Field <create_time>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____create_time_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <payment_method>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____payment_method_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <status>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____status_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_StatusDetailTransaction, ____create_time_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_StatusDetailTransaction, ____payment_method_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_StatusDetailTransaction, ____status_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_StatusDetailTransaction) == 0x28, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/QueryListResponse
class CORDL_TYPE IAPurchase_QueryListResponse : public ::System::Object {
public:
// Declarations
/// @brief Field <from>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__from_k__BackingField, put=__cordl_internal_set__from_k__BackingField)) int32_t  _from_k__BackingField;

/// @brief Field <to>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__to_k__BackingField, put=__cordl_internal_set__to_k__BackingField)) int32_t  _to_k__BackingField;

/// @brief Field <total>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__total_k__BackingField, put=__cordl_internal_set__total_k__BackingField)) int32_t  _total_k__BackingField;

 __declspec(property(get=get_from, put=set_from)) int32_t  from;

/// @brief Field purchaseList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseList, put=__cordl_internal_set_purchaseList)) ::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>*  purchaseList;

 __declspec(property(get=get_to, put=set_to)) int32_t  to;

 __declspec(property(get=get_total, put=set_total)) int32_t  total;

static inline ::Viveport::IAPurchase_QueryListResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__from_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__from_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__to_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__to_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__total_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__total_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>* const& __cordl_internal_get_purchaseList() const;

constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>*& __cordl_internal_get_purchaseList() ;

constexpr void __cordl_internal_set__from_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__to_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__total_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_purchaseList(::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>*  value) ;

/// @brief Method .ctor, addr 0x5b5514c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_from, addr 0x5b5743c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_from() ;

/// [CompilerGenerated]
/// @brief Method get_to, addr 0x5b5744c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_to() ;

/// [CompilerGenerated]
/// @brief Method get_total, addr 0x5b5742c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_total() ;

/// [CompilerGenerated]
/// @brief Method set_from, addr 0x5b57444, size 0x8, virtual false, abstract: false, final false
inline void set_from(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_to, addr 0x5b57454, size 0x8, virtual false, abstract: false, final false
inline void set_to(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_total, addr 0x5b57434, size 0x8, virtual false, abstract: false, final false
inline void set_total(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_QueryListResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QueryListResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_QueryListResponse(IAPurchase_QueryListResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QueryListResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_QueryListResponse(IAPurchase_QueryListResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3777};

/// [CompilerGenerated]
/// @brief Field <total>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____total_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <from>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____from_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <to>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____to_k__BackingField;

/// @brief Field purchaseList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>*  ___purchaseList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_QueryListResponse, ____total_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryListResponse, ____from_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryListResponse, ____to_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryListResponse, ___purchaseList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_QueryListResponse) == 0x28, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/QueryResponse2
class CORDL_TYPE IAPurchase_QueryResponse2 : public ::System::Object {
public:
// Declarations
/// @brief Field <app_id>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__app_id_k__BackingField, put=__cordl_internal_set__app_id_k__BackingField)) ::StringW  _app_id_k__BackingField;

/// @brief Field <currency>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currency_k__BackingField, put=__cordl_internal_set__currency_k__BackingField)) ::StringW  _currency_k__BackingField;

/// @brief Field <order_id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__order_id_k__BackingField, put=__cordl_internal_set__order_id_k__BackingField)) ::StringW  _order_id_k__BackingField;

/// @brief Field <paid_timestamp>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__paid_timestamp_k__BackingField, put=__cordl_internal_set__paid_timestamp_k__BackingField)) int64_t  _paid_timestamp_k__BackingField;

/// @brief Field <price>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__price_k__BackingField, put=__cordl_internal_set__price_k__BackingField)) ::StringW  _price_k__BackingField;

/// @brief Field <purchase_id>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchase_id_k__BackingField, put=__cordl_internal_set__purchase_id_k__BackingField)) ::StringW  _purchase_id_k__BackingField;

/// @brief Field <user_data>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__user_data_k__BackingField, put=__cordl_internal_set__user_data_k__BackingField)) ::StringW  _user_data_k__BackingField;

 __declspec(property(get=get_app_id, put=set_app_id)) ::StringW  app_id;

 __declspec(property(get=get_currency, put=set_currency)) ::StringW  currency;

 __declspec(property(get=get_order_id, put=set_order_id)) ::StringW  order_id;

 __declspec(property(get=get_paid_timestamp, put=set_paid_timestamp)) int64_t  paid_timestamp;

 __declspec(property(get=get_price, put=set_price)) ::StringW  price;

 __declspec(property(get=get_purchase_id, put=set_purchase_id)) ::StringW  purchase_id;

 __declspec(property(get=get_user_data, put=set_user_data)) ::StringW  user_data;

static inline ::Viveport::IAPurchase_QueryResponse2* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__app_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__app_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__currency_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__currency_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__order_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__order_id_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__paid_timestamp_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__paid_timestamp_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__price_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__price_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__purchase_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__purchase_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__user_data_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__user_data_k__BackingField() ;

constexpr void __cordl_internal_set__app_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__currency_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__order_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__paid_timestamp_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__price_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__purchase_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__user_data_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b55124, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_app_id, addr 0x5b573cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_app_id() ;

/// [CompilerGenerated]
/// @brief Method get_currency, addr 0x5b5740c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_currency() ;

/// [CompilerGenerated]
/// @brief Method get_order_id, addr 0x5b573bc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_order_id() ;

/// [CompilerGenerated]
/// @brief Method get_paid_timestamp, addr 0x5b5741c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_paid_timestamp() ;

/// [CompilerGenerated]
/// @brief Method get_price, addr 0x5b573fc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_price() ;

/// [CompilerGenerated]
/// @brief Method get_purchase_id, addr 0x5b573dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_purchase_id() ;

/// [CompilerGenerated]
/// @brief Method get_user_data, addr 0x5b573ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_user_data() ;

/// [CompilerGenerated]
/// @brief Method set_app_id, addr 0x5b573d4, size 0x8, virtual false, abstract: false, final false
inline void set_app_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_currency, addr 0x5b57414, size 0x8, virtual false, abstract: false, final false
inline void set_currency(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_order_id, addr 0x5b573c4, size 0x8, virtual false, abstract: false, final false
inline void set_order_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_paid_timestamp, addr 0x5b57424, size 0x8, virtual false, abstract: false, final false
inline void set_paid_timestamp(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_price, addr 0x5b57404, size 0x8, virtual false, abstract: false, final false
inline void set_price(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_purchase_id, addr 0x5b573e4, size 0x8, virtual false, abstract: false, final false
inline void set_purchase_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_user_data, addr 0x5b573f4, size 0x8, virtual false, abstract: false, final false
inline void set_user_data(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_QueryResponse2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QueryResponse2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_QueryResponse2(IAPurchase_QueryResponse2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QueryResponse2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_QueryResponse2(IAPurchase_QueryResponse2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3776};

/// [CompilerGenerated]
/// @brief Field <order_id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____order_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <app_id>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____app_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <purchase_id>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____purchase_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <user_data>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____user_data_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <price>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____price_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <currency>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____currency_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <paid_timestamp>k__BackingField, offset: 0x40, size: 0x8, def value: None
 int64_t  ____paid_timestamp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_QueryResponse2, ____order_id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse2, ____app_id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse2, ____purchase_id_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse2, ____user_data_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse2, ____price_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse2, ____currency_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse2, ____paid_timestamp_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_QueryResponse2) == 0x48, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/QueryResponse
class CORDL_TYPE IAPurchase_QueryResponse : public ::System::Object {
public:
// Declarations
/// @brief Field <currency>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currency_k__BackingField, put=__cordl_internal_set__currency_k__BackingField)) ::StringW  _currency_k__BackingField;

/// @brief Field <order_id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__order_id_k__BackingField, put=__cordl_internal_set__order_id_k__BackingField)) ::StringW  _order_id_k__BackingField;

/// @brief Field <paid_timestamp>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__paid_timestamp_k__BackingField, put=__cordl_internal_set__paid_timestamp_k__BackingField)) int64_t  _paid_timestamp_k__BackingField;

/// @brief Field <price>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__price_k__BackingField, put=__cordl_internal_set__price_k__BackingField)) ::StringW  _price_k__BackingField;

/// @brief Field <purchase_id>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchase_id_k__BackingField, put=__cordl_internal_set__purchase_id_k__BackingField)) ::StringW  _purchase_id_k__BackingField;

/// @brief Field <status>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__status_k__BackingField, put=__cordl_internal_set__status_k__BackingField)) ::StringW  _status_k__BackingField;

 __declspec(property(get=get_currency, put=set_currency)) ::StringW  currency;

 __declspec(property(get=get_order_id, put=set_order_id)) ::StringW  order_id;

 __declspec(property(get=get_paid_timestamp, put=set_paid_timestamp)) int64_t  paid_timestamp;

 __declspec(property(get=get_price, put=set_price)) ::StringW  price;

 __declspec(property(get=get_purchase_id, put=set_purchase_id)) ::StringW  purchase_id;

 __declspec(property(get=get_status, put=set_status)) ::StringW  status;

static inline ::Viveport::IAPurchase_QueryResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__currency_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__currency_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__order_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__order_id_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__paid_timestamp_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__paid_timestamp_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__price_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__price_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__purchase_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__purchase_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__status_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__status_k__BackingField() ;

constexpr void __cordl_internal_set__currency_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__order_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__paid_timestamp_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__price_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__purchase_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__status_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b541e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_currency, addr 0x5b5739c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_currency() ;

/// [CompilerGenerated]
/// @brief Method get_order_id, addr 0x5b5735c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_order_id() ;

/// [CompilerGenerated]
/// @brief Method get_paid_timestamp, addr 0x5b573ac, size 0x8, virtual false, abstract: false, final false
inline int64_t get_paid_timestamp() ;

/// [CompilerGenerated]
/// @brief Method get_price, addr 0x5b5738c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_price() ;

/// [CompilerGenerated]
/// @brief Method get_purchase_id, addr 0x5b5736c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_purchase_id() ;

/// [CompilerGenerated]
/// @brief Method get_status, addr 0x5b5737c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_status() ;

/// [CompilerGenerated]
/// @brief Method set_currency, addr 0x5b573a4, size 0x8, virtual false, abstract: false, final false
inline void set_currency(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_order_id, addr 0x5b57364, size 0x8, virtual false, abstract: false, final false
inline void set_order_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_paid_timestamp, addr 0x5b573b4, size 0x8, virtual false, abstract: false, final false
inline void set_paid_timestamp(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_price, addr 0x5b57394, size 0x8, virtual false, abstract: false, final false
inline void set_price(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_purchase_id, addr 0x5b57374, size 0x8, virtual false, abstract: false, final false
inline void set_purchase_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_status, addr 0x5b57384, size 0x8, virtual false, abstract: false, final false
inline void set_status(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_QueryResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QueryResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_QueryResponse(IAPurchase_QueryResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_QueryResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_QueryResponse(IAPurchase_QueryResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3775};

/// [CompilerGenerated]
/// @brief Field <order_id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____order_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <purchase_id>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____purchase_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <status>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <price>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____price_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <currency>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____currency_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <paid_timestamp>k__BackingField, offset: 0x38, size: 0x8, def value: None
 int64_t  ____paid_timestamp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::IAPurchase_QueryResponse, ____order_id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse, ____purchase_id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse, ____status_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse, ____price_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse, ____currency_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Viveport::IAPurchase_QueryResponse, ____paid_timestamp_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Viveport::IAPurchase_QueryResponse) == 0x40, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/IAPurchaseListener
class CORDL_TYPE IAPurchase_IAPurchaseListener : public ::System::Object {
public:
// Declarations
static inline ::Viveport::IAPurchase_IAPurchaseListener* New_ctor() ;

/// @brief Method OnBalanceSuccess, addr 0x5b57334, size 0x4, virtual true, abstract: false, final false
inline void OnBalanceSuccess(::StringW  pchBalance) ;

/// @brief Method OnCancelSubscriptionSuccess, addr 0x5b57350, size 0x4, virtual true, abstract: false, final false
inline void OnCancelSubscriptionSuccess(bool  bCanceled) ;

/// @brief Method OnFailure, addr 0x5b57338, size 0x4, virtual true, abstract: false, final false
inline void OnFailure(int32_t  nCode, ::StringW  pchMessage) ;

/// @brief Method OnPurchaseSuccess, addr 0x5b57328, size 0x4, virtual true, abstract: false, final false
inline void OnPurchaseSuccess(::StringW  pchPurchaseId) ;

/// @brief Method OnQuerySubscriptionListSuccess, addr 0x5b5734c, size 0x4, virtual true, abstract: false, final false
inline void OnQuerySubscriptionListSuccess(::ArrayW<::Viveport::IAPurchase_Subscription*>  subscriptionlist) ;

/// @brief Method OnQuerySubscriptionSuccess, addr 0x5b57348, size 0x4, virtual true, abstract: false, final false
inline void OnQuerySubscriptionSuccess(::ArrayW<::Viveport::IAPurchase_Subscription*>  subscriptionlist) ;

/// @brief Method OnQuerySuccess, addr 0x5b57330, size 0x4, virtual true, abstract: false, final false
inline void OnQuerySuccess(::Viveport::IAPurchase_QueryListResponse*  response) ;

/// @brief Method OnQuerySuccess, addr 0x5b5732c, size 0x4, virtual true, abstract: false, final false
inline void OnQuerySuccess(::Viveport::IAPurchase_QueryResponse*  response) ;

/// @brief Method OnRequestSubscriptionSuccess, addr 0x5b5733c, size 0x4, virtual true, abstract: false, final false
inline void OnRequestSubscriptionSuccess(::StringW  pchSubscriptionId) ;

/// @brief Method OnRequestSubscriptionWithPlanIDSuccess, addr 0x5b57340, size 0x4, virtual true, abstract: false, final false
inline void OnRequestSubscriptionWithPlanIDSuccess(::StringW  pchSubscriptionId) ;

/// @brief Method OnRequestSuccess, addr 0x5b57324, size 0x4, virtual true, abstract: false, final false
inline void OnRequestSuccess(::StringW  pchPurchaseId) ;

/// @brief Method OnSubscribeSuccess, addr 0x5b57344, size 0x4, virtual true, abstract: false, final false
inline void OnSubscribeSuccess(::StringW  pchSubscriptionId) ;

/// @brief Method OnSuccess, addr 0x5b57320, size 0x4, virtual true, abstract: false, final false
inline void OnSuccess(::StringW  pchCurrencyName) ;

/// @brief Method .ctor, addr 0x5b57354, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_IAPurchaseListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_IAPurchaseListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_IAPurchaseListener(IAPurchase_IAPurchaseListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_IAPurchaseListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_IAPurchaseListener(IAPurchase_IAPurchaseListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3774};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::IAPurchase_IAPurchaseListener) == 0x10, "Size mismatch!");

} // namespace end def Viveport
// Dependencies Viveport.IAPurchase::BaseHandler
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/IAPHandler
class CORDL_TYPE IAPurchase_IAPHandler : public ::Viveport::IAPurchase_BaseHandler {
public:
// Declarations
/// @brief Field listener, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_listener, put=setStaticF_listener)) ::Viveport::IAPurchase_IAPurchaseListener*  listener;

/// @brief Method BalanceHandler, addr 0x5b55154, size 0x52c, virtual true, abstract: false, final false
inline void BalanceHandler(int32_t  code, ::StringW  message) ;

/// @brief Method CancelSubscriptionHandler, addr 0x5b56f74, size 0x3ac, virtual true, abstract: false, final false
inline void CancelSubscriptionHandler(int32_t  code, ::StringW  message) ;

/// @brief Method IsReadyHandler, addr 0x5b527d8, size 0x4b0, virtual true, abstract: false, final false
inline void IsReadyHandler(int32_t  code, ::StringW  message) ;

static inline ::Viveport::IAPurchase_IAPHandler* New_ctor(::Viveport::IAPurchase_IAPurchaseListener*  cb) ;

/// @brief Method PurchaseHandler, addr 0x5b53368, size 0x524, virtual true, abstract: false, final false
inline void PurchaseHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QueryHandler, addr 0x5b538f8, size 0x8f0, virtual true, abstract: false, final false
inline void QueryHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QueryListHandler, addr 0x5b541f0, size 0xf24, virtual true, abstract: false, final false
inline void QueryListHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QuerySubscriptionHandler, addr 0x5b565dc, size 0x4cc, virtual true, abstract: false, final false
inline void QuerySubscriptionHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QuerySubscriptionListHandler, addr 0x5b56aa8, size 0x4cc, virtual true, abstract: false, final false
inline void QuerySubscriptionListHandler(int32_t  code, ::StringW  message) ;

/// @brief Method RequestHandler, addr 0x5b52eb8, size 0x4b0, virtual true, abstract: false, final false
inline void RequestHandler(int32_t  code, ::StringW  message) ;

/// @brief Method RequestSubscriptionHandler, addr 0x5b55680, size 0x494, virtual true, abstract: false, final false
inline void RequestSubscriptionHandler(int32_t  code, ::StringW  message) ;

/// @brief Method RequestSubscriptionWithPlanIDHandler, addr 0x5b55b14, size 0x494, virtual true, abstract: false, final false
inline void RequestSubscriptionWithPlanIDHandler(int32_t  code, ::StringW  message) ;

/// @brief Method SubscribeHandler, addr 0x5b55fa8, size 0x634, virtual true, abstract: false, final false
inline void SubscribeHandler(int32_t  code, ::StringW  message) ;

/// @brief Method .ctor, addr 0x5b502a4, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Viveport::IAPurchase_IAPurchaseListener*  cb) ;

/// @brief Method getBalanceHandler, addr 0x5b513dc, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getBalanceHandler() ;

/// @brief Method getCancelSubscriptionHandler, addr 0x5b525e8, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getCancelSubscriptionHandler() ;

/// @brief Method getIsReadyHandler, addr 0x5b50314, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getIsReadyHandler() ;

/// @brief Method getPurchaseHandler, addr 0x5b50be0, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getPurchaseHandler() ;

/// @brief Method getQueryHandler, addr 0x5b50ea4, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getQueryHandler() ;

/// @brief Method getQueryListHandler, addr 0x5b51160, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getQueryListHandler() ;

/// @brief Method getQuerySubscriptionHandler, addr 0x5b520a8, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getQuerySubscriptionHandler() ;

/// @brief Method getQuerySubscriptionListHandler, addr 0x5b52364, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getQuerySubscriptionListHandler() ;

/// @brief Method getRequestHandler, addr 0x5b50678, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getRequestHandler() ;

/// @brief Method getRequestSubscriptionHandler, addr 0x5b516a8, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getRequestSubscriptionHandler() ;

/// @brief Method getRequestSubscriptionWithPlanIDHandler, addr 0x5b51b20, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getRequestSubscriptionWithPlanIDHandler() ;

static inline ::Viveport::IAPurchase_IAPurchaseListener* getStaticF_listener() ;

/// @brief Method getSubscribeHandler, addr 0x5b51de4, size 0x68, virtual false, abstract: false, final false
inline ::Viveport::Internal::IAPurchaseCallback* getSubscribeHandler() ;

static inline void setStaticF_listener(::Viveport::IAPurchase_IAPurchaseListener*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_IAPHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_IAPHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_IAPHandler(IAPurchase_IAPHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_IAPHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_IAPHandler(IAPurchase_IAPHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3772};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::IAPurchase_IAPHandler) == 0x10, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.IAPurchase/BaseHandler
class CORDL_TYPE IAPurchase_BaseHandler : public ::System::Object {
public:
// Declarations
/// @brief Method BalanceHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BalanceHandler(int32_t  code, ::StringW  message) ;

/// @brief Method CancelSubscriptionHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CancelSubscriptionHandler(int32_t  code, ::StringW  message) ;

/// @brief Method IsReadyHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void IsReadyHandler(int32_t  code, ::StringW  message) ;

static inline ::Viveport::IAPurchase_BaseHandler* New_ctor() ;

/// @brief Method PurchaseHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PurchaseHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QueryHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void QueryHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QueryListHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void QueryListHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QuerySubscriptionHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void QuerySubscriptionHandler(int32_t  code, ::StringW  message) ;

/// @brief Method QuerySubscriptionListHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void QuerySubscriptionListHandler(int32_t  code, ::StringW  message) ;

/// @brief Method RequestHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RequestHandler(int32_t  code, ::StringW  message) ;

/// @brief Method RequestSubscriptionHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RequestSubscriptionHandler(int32_t  code, ::StringW  message) ;

/// @brief Method RequestSubscriptionWithPlanIDHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RequestSubscriptionWithPlanIDHandler(int32_t  code, ::StringW  message) ;

/// @brief Method SubscribeHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SubscribeHandler(int32_t  code, ::StringW  message) ;

/// @brief Method .ctor, addr 0x5b527d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase_BaseHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_BaseHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase_BaseHandler(IAPurchase_BaseHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase_BaseHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase_BaseHandler(IAPurchase_BaseHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::IAPurchase_BaseHandler) == 0x10, "Size mismatch!");

} // namespace end def Viveport
