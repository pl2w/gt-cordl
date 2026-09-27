#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitVRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequest_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitVRequest)
namespace GlobalNamespace {
template<typename TValue>
struct WitVRequest__RequestWitGet_d__22_1;
}
namespace GlobalNamespace {
template<typename TValue>
struct WitVRequest__RequestWitPost_d__23_1;
}
namespace GlobalNamespace {
template<typename TValue>
struct WitVRequest__Request_d__21_1;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
class VRequestDecodeDelegate_1;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
struct VRequestResponse_1;
}
namespace Meta::WitAi {
class IWitRequestConfiguration;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class WitVRequest;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::WitVRequest*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitVRequest*, "Meta.WitAi.Requests", "WitVRequest");
// Dependencies Meta.WitAi.Requests.VRequest
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitVRequest
class CORDL_TYPE WitVRequest : public ::Meta::WitAi::Requests::VRequest {
public:
// Declarations
template<typename TValue>
using _RequestWitGet_d__22_1 = ::GlobalNamespace::WitVRequest__RequestWitGet_d__22_1<TValue>;

template<typename TValue>
using _RequestWitPost_d__23_1 = ::GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>;

template<typename TValue>
using _Request_d__21_1 = ::GlobalNamespace::WitVRequest__Request_d__21_1<TValue>;

 __declspec(property(get=get_Configuration, put=set_Configuration)) ::Meta::WitAi::IWitRequestConfiguration*  Configuration;

 __declspec(property(get=get_RequestOptions, put=set_RequestOptions)) ::Meta::WitAi::Configuration::WitRequestOptions*  RequestOptions;

/// @brief Field <Configuration>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::Meta::WitAi::IWitRequestConfiguration*  _Configuration_k__BackingField;

/// @brief Field <RequestOptions>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestOptions_k__BackingField, put=__cordl_internal_set__RequestOptions_k__BackingField)) ::Meta::WitAi::Configuration::WitRequestOptions*  _RequestOptions_k__BackingField;

/// @brief Field _useServerToken, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__useServerToken, put=__cordl_internal_set__useServerToken)) bool  _useServerToken;

/// @brief Method GetHeaders, addr 0x9e8e93c, size 0x2c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetHeaders() ;

/// @brief Method GetUri, addr 0x9e90a18, size 0x30, virtual true, abstract: false, final false
inline ::System::Uri* GetUri() ;

/// @brief Method IsLocalFile, addr 0x9e909a4, size 0x74, virtual false, abstract: false, final false
inline bool IsLocalFile() ;

static inline ::Meta::WitAi::Requests::WitVRequest* New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId, bool  useServerToken) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitVRequest::<Request>d__21`1<TValue>))]
/// @brief Method Request, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* Request(::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitVRequest::<RequestWitGet>d__22`1<TValue>))]
/// @brief Method RequestWitGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* RequestWitGet(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::System::Action_1<TValue>*  onPartial) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitVRequest::<RequestWitPost>d__23`1<TValue>))]
/// @brief Method RequestWitPost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* RequestWitPost(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::StringW  payload, ::System::Action_1<TValue>*  onPartial) ;

constexpr ::Meta::WitAi::IWitRequestConfiguration* const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::Meta::WitAi::IWitRequestConfiguration*& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr ::Meta::WitAi::Configuration::WitRequestOptions* const& __cordl_internal_get__RequestOptions_k__BackingField() const;

constexpr ::Meta::WitAi::Configuration::WitRequestOptions*& __cordl_internal_get__RequestOptions_k__BackingField() ;

constexpr bool const& __cordl_internal_get__useServerToken() const;

constexpr bool& __cordl_internal_get__useServerToken() ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::Meta::WitAi::IWitRequestConfiguration*  value) ;

constexpr void __cordl_internal_set__RequestOptions_k__BackingField(::Meta::WitAi::Configuration::WitRequestOptions*  value) ;

constexpr void __cordl_internal_set__useServerToken(bool  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* __n__0(::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder) ;

/// @brief Method .ctor, addr 0x9e8e510, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId, bool  useServerToken) ;

/// [CompilerGenerated]
/// @brief Method get_Configuration, addr 0x9e90988, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::IWitRequestConfiguration* get_Configuration() ;

/// [CompilerGenerated]
/// @brief Method get_RequestOptions, addr 0x9e90978, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Configuration::WitRequestOptions* get_RequestOptions() ;

/// [CompilerGenerated]
/// @brief Method set_Configuration, addr 0x9e90990, size 0x8, virtual false, abstract: false, final false
inline void set_Configuration(::Meta::WitAi::IWitRequestConfiguration*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RequestOptions, addr 0x9e90980, size 0x8, virtual false, abstract: false, final false
inline void set_RequestOptions(::Meta::WitAi::Configuration::WitRequestOptions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitVRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitVRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitVRequest(WitVRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitVRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitVRequest(WitVRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25638};

/// [CompilerGenerated]
/// @brief Field <RequestOptions>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::Meta::WitAi::Configuration::WitRequestOptions*  ____RequestOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Configuration>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::Meta::WitAi::IWitRequestConfiguration*  ____Configuration_k__BackingField;

/// @brief Field _useServerToken, offset: 0xb8, size: 0x1, def value: None
 bool  ____useServerToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitVRequest, ____RequestOptions_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitVRequest, ____Configuration_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitVRequest, ____useServerToken) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitVRequest) == 0xc0, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
