#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequestOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceServiceRequestOptions)
namespace Meta::Voice {
class INLPRequestOptions;
}
namespace Meta::Voice {
class ITranscriptionRequestOptions;
}
namespace Meta::Voice {
class IVoiceRequestOptions;
}
namespace Meta::Voice {
struct NLPRequestInputType;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestOptions_QueryParam;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class VoiceServiceRequestOptions;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestOptions_QueryParam;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::VoiceServiceRequestOptions*);
MARK_REF_T(::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VoiceServiceRequestOptions*, "Meta.WitAi.Requests", "VoiceServiceRequestOptions");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*, "Meta.WitAi.Requests", "VoiceServiceRequestOptions/QueryParam");
// Dependencies Meta.Voice.NLPRequestInputType, System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VoiceServiceRequestOptions
class CORDL_TYPE VoiceServiceRequestOptions : public ::System::Object {
public:
// Declarations
using QueryParam = ::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam;

 __declspec(property(get=get_ClientUserId, put=set_ClientUserId)) ::StringW  ClientUserId;

 __declspec(property(get=get_InputType, put=set_InputType)) ::Meta::Voice::NLPRequestInputType  InputType;

 __declspec(property(get=get_OperationId, put=set_OperationId)) ::StringW  OperationId;

 __declspec(property(get=get_QueryParams, put=set_QueryParams)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  QueryParams;

 __declspec(property(get=get_RequestId, put=set_RequestId)) ::StringW  RequestId;

 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

 __declspec(property(get=get_TimeoutMs, put=set_TimeoutMs)) int32_t  TimeoutMs;

/// @brief Field <AudioThreshold>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__AudioThreshold_k__BackingField, put=__cordl_internal_set__AudioThreshold_k__BackingField)) float_t  _AudioThreshold_k__BackingField;

/// @brief Field <ClientUserId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClientUserId_k__BackingField, put=__cordl_internal_set__ClientUserId_k__BackingField)) ::StringW  _ClientUserId_k__BackingField;

/// @brief Field <InputType>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__InputType_k__BackingField, put=__cordl_internal_set__InputType_k__BackingField)) ::Meta::Voice::NLPRequestInputType  _InputType_k__BackingField;

/// @brief Field <OperationId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__OperationId_k__BackingField, put=__cordl_internal_set__OperationId_k__BackingField)) ::StringW  _OperationId_k__BackingField;

/// @brief Field <QueryParams>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryParams_k__BackingField, put=__cordl_internal_set__QueryParams_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _QueryParams_k__BackingField;

/// @brief Field <RequestId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestId_k__BackingField, put=__cordl_internal_set__RequestId_k__BackingField)) ::StringW  _RequestId_k__BackingField;

/// @brief Field <Text>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Text_k__BackingField, put=__cordl_internal_set__Text_k__BackingField)) ::StringW  _Text_k__BackingField;

/// @brief Field <TimeoutMs>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeoutMs_k__BackingField, put=__cordl_internal_set__TimeoutMs_k__BackingField)) int32_t  _TimeoutMs_k__BackingField;

/// @brief Convert operator to "::Meta::Voice::INLPRequestOptions"
constexpr operator  ::Meta::Voice::INLPRequestOptions*() noexcept;

/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr operator  ::Meta::Voice::ITranscriptionRequestOptions*() noexcept;

/// @brief Convert operator to "::Meta::Voice::IVoiceRequestOptions"
constexpr operator  ::Meta::Voice::IVoiceRequestOptions*() noexcept;

/// @brief Method ConvertQueryParams, addr 0x9e91fcc, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* ConvertQueryParams(::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

static inline ::Meta::WitAi::Requests::VoiceServiceRequestOptions* New_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

static inline ::Meta::WitAi::Requests::VoiceServiceRequestOptions* New_ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

static inline ::Meta::WitAi::Requests::VoiceServiceRequestOptions* New_ctor(::StringW  newRequestId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

constexpr float_t const& __cordl_internal_get__AudioThreshold_k__BackingField() const;

constexpr float_t& __cordl_internal_get__AudioThreshold_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ClientUserId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ClientUserId_k__BackingField() ;

constexpr ::Meta::Voice::NLPRequestInputType const& __cordl_internal_get__InputType_k__BackingField() const;

constexpr ::Meta::Voice::NLPRequestInputType& __cordl_internal_get__InputType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__OperationId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__OperationId_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__QueryParams_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__QueryParams_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Text_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Text_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TimeoutMs_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TimeoutMs_k__BackingField() ;

constexpr void __cordl_internal_set__AudioThreshold_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ClientUserId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__InputType_k__BackingField(::Meta::Voice::NLPRequestInputType  value) ;

constexpr void __cordl_internal_set__OperationId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__QueryParams_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Text_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TimeoutMs_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e920e8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

/// @brief Method .ctor, addr 0x9e91e78, size 0x154, virtual false, abstract: false, final false
inline void _ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

/// @brief Method .ctor, addr 0x9e920fc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  newRequestId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

/// [CompilerGenerated]
/// @brief Method get_ClientUserId, addr 0x9e91e18, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_ClientUserId() ;

/// [CompilerGenerated]
/// @brief Method get_InputType, addr 0x9e91e58, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::NLPRequestInputType get_InputType() ;

/// [CompilerGenerated]
/// @brief Method get_OperationId, addr 0x9e91e28, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_OperationId() ;

/// [CompilerGenerated]
/// @brief Method get_QueryParams, addr 0x9e91e48, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_QueryParams() ;

/// [CompilerGenerated]
/// @brief Method get_RequestId, addr 0x9e91e08, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_RequestId() ;

/// [CompilerGenerated]
/// @brief Method get_Text, addr 0x9e91e68, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Text() ;

/// [CompilerGenerated]
/// @brief Method get_TimeoutMs, addr 0x9e91e38, size 0x8, virtual true, abstract: false, final true
inline int32_t get_TimeoutMs() ;

/// @brief Convert to "::Meta::Voice::INLPRequestOptions"
constexpr ::Meta::Voice::INLPRequestOptions* i___Meta__Voice__INLPRequestOptions() noexcept;

/// @brief Convert to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr ::Meta::Voice::ITranscriptionRequestOptions* i___Meta__Voice__ITranscriptionRequestOptions() noexcept;

/// @brief Convert to "::Meta::Voice::IVoiceRequestOptions"
constexpr ::Meta::Voice::IVoiceRequestOptions* i___Meta__Voice__IVoiceRequestOptions() noexcept;

/// [CompilerGenerated]
/// @brief Method set_ClientUserId, addr 0x9e91e20, size 0x8, virtual false, abstract: false, final false
inline void set_ClientUserId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_InputType, addr 0x9e91e60, size 0x8, virtual true, abstract: false, final true
inline void set_InputType(::Meta::Voice::NLPRequestInputType  value) ;

/// [CompilerGenerated]
/// @brief Method set_OperationId, addr 0x9e91e30, size 0x8, virtual false, abstract: false, final false
inline void set_OperationId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_QueryParams, addr 0x9e91e50, size 0x8, virtual false, abstract: false, final false
inline void set_QueryParams(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RequestId, addr 0x9e91e10, size 0x8, virtual false, abstract: false, final false
inline void set_RequestId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Text, addr 0x9e91e70, size 0x8, virtual true, abstract: false, final true
inline void set_Text(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TimeoutMs, addr 0x9e91e40, size 0x8, virtual true, abstract: false, final true
inline void set_TimeoutMs(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequestOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceRequestOptions(VoiceServiceRequestOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceRequestOptions(VoiceServiceRequestOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25646};

/// [CompilerGenerated]
/// @brief Field <RequestId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____RequestId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ClientUserId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ClientUserId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OperationId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____OperationId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TimeoutMs>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____TimeoutMs_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <QueryParams>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____QueryParams_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InputType>k__BackingField, offset: 0x38, size: 0x4, def value: None
 ::Meta::Voice::NLPRequestInputType  ____InputType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Text>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____Text_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioThreshold>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____AudioThreshold_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____RequestId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____ClientUserId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____OperationId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____TimeoutMs_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____QueryParams_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____InputType_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____Text_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions, ____AudioThreshold_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequestOptions) == 0x50, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
class CORDL_TYPE VoiceServiceRequestOptions_QueryParam : public ::System::Object {
public:
// Declarations
/// @brief Field key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::StringW  key;

/// @brief Field value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::StringW  value;

constexpr ::StringW const& __cordl_internal_get_key() const;

constexpr ::StringW& __cordl_internal_get_key() ;

constexpr ::StringW const& __cordl_internal_get_value() const;

constexpr ::StringW& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_key(::StringW  value) ;

constexpr void __cordl_internal_set_value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequestOptions_QueryParam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestOptions_QueryParam", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceRequestOptions_QueryParam(VoiceServiceRequestOptions_QueryParam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestOptions_QueryParam", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceRequestOptions_QueryParam(VoiceServiceRequestOptions_QueryParam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25645};

/// @brief Field key, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___key;

/// @brief Field value, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam, ___value) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
