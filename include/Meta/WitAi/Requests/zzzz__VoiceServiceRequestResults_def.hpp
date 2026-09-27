#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequestResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceServiceRequestResults)
namespace Meta::Voice {
template<typename TResponseData>
class INLPRequestResults_1;
}
namespace Meta::Voice {
class ITranscriptionRequestResults;
}
namespace Meta::Voice {
class IVoiceRequestResults;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class VoiceServiceRequestResults;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::VoiceServiceRequestResults*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VoiceServiceRequestResults*, "Meta.WitAi.Requests", "VoiceServiceRequestResults");
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VoiceServiceRequestResults
class CORDL_TYPE VoiceServiceRequestResults : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FinalTranscriptions, put=set_FinalTranscriptions)) ::ArrayW<::StringW>  FinalTranscriptions;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

 __declspec(property(get=get_ResponseData, put=set_ResponseData)) ::Meta::WitAi::Json::WitResponseNode*  ResponseData;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) int32_t  StatusCode;

 __declspec(property(get=get_Transcription, put=set_Transcription)) ::StringW  Transcription;

/// @brief Field <FinalTranscriptions>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FinalTranscriptions_k__BackingField, put=__cordl_internal_set__FinalTranscriptions_k__BackingField)) ::ArrayW<::StringW>  _FinalTranscriptions_k__BackingField;

/// @brief Field <Message>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Message_k__BackingField, put=__cordl_internal_set__Message_k__BackingField)) ::StringW  _Message_k__BackingField;

/// @brief Field <ResponseData>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResponseData_k__BackingField, put=__cordl_internal_set__ResponseData_k__BackingField)) ::Meta::WitAi::Json::WitResponseNode*  _ResponseData_k__BackingField;

/// @brief Field <StatusCode>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__StatusCode_k__BackingField, put=__cordl_internal_set__StatusCode_k__BackingField)) int32_t  _StatusCode_k__BackingField;

/// @brief Field <Transcription>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Transcription_k__BackingField, put=__cordl_internal_set__Transcription_k__BackingField)) ::StringW  _Transcription_k__BackingField;

/// @brief Convert operator to "::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr operator  ::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept;

/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestResults"
constexpr operator  ::Meta::Voice::ITranscriptionRequestResults*() noexcept;

/// @brief Convert operator to "::Meta::Voice::IVoiceRequestResults"
constexpr operator  ::Meta::Voice::IVoiceRequestResults*() noexcept;

/// @brief [Preserve]
static inline ::Meta::WitAi::Requests::VoiceServiceRequestResults* New_ctor() ;

/// @brief Method SetCancel, addr 0x9e9216c, size 0x10, virtual true, abstract: false, final true
inline void SetCancel(::StringW  reason) ;

/// @brief Method SetError, addr 0x9e9217c, size 0x14, virtual true, abstract: false, final true
inline void SetError(int32_t  errorStatusCode, ::StringW  error) ;

/// @brief Method SetResponseData, addr 0x9e92300, size 0x8, virtual true, abstract: false, final true
inline void SetResponseData(::Meta::WitAi::Json::WitResponseNode*  responseData) ;

/// @brief Method SetTranscription, addr 0x9e92190, size 0x170, virtual true, abstract: false, final true
inline void SetTranscription(::StringW  transcription, bool  full) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__FinalTranscriptions_k__BackingField() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__FinalTranscriptions_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Message_k__BackingField() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get__ResponseData_k__BackingField() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get__ResponseData_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Transcription_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Transcription_k__BackingField() ;

constexpr void __cordl_internal_set__FinalTranscriptions_k__BackingField(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__Message_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ResponseData_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Transcription_k__BackingField(::StringW  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e9215c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FinalTranscriptions, addr 0x9e9213c, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::StringW> get_FinalTranscriptions() ;

/// [CompilerGenerated]
/// @brief Method get_Message, addr 0x9e9211c, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_ResponseData, addr 0x9e9214c, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Json::WitResponseNode* get_ResponseData() ;

/// [CompilerGenerated]
/// @brief Method get_StatusCode, addr 0x9e9210c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_StatusCode() ;

/// [CompilerGenerated]
/// @brief Method get_Transcription, addr 0x9e9212c, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Transcription() ;

/// @brief Convert to "::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>* i___Meta__Voice__INLPRequestResults_1___Meta__WitAi__Json__WitResponseNode__() noexcept;

/// @brief Convert to "::Meta::Voice::ITranscriptionRequestResults"
constexpr ::Meta::Voice::ITranscriptionRequestResults* i___Meta__Voice__ITranscriptionRequestResults() noexcept;

/// @brief Convert to "::Meta::Voice::IVoiceRequestResults"
constexpr ::Meta::Voice::IVoiceRequestResults* i___Meta__Voice__IVoiceRequestResults() noexcept;

/// [CompilerGenerated]
/// @brief Method set_FinalTranscriptions, addr 0x9e92144, size 0x8, virtual false, abstract: false, final false
inline void set_FinalTranscriptions(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0x9e92124, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ResponseData, addr 0x9e92154, size 0x8, virtual false, abstract: false, final false
inline void set_ResponseData(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [CompilerGenerated]
/// @brief Method set_StatusCode, addr 0x9e92114, size 0x8, virtual false, abstract: false, final false
inline void set_StatusCode(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Transcription, addr 0x9e92134, size 0x8, virtual false, abstract: false, final false
inline void set_Transcription(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequestResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestResults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceRequestResults(VoiceServiceRequestResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequestResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceRequestResults(VoiceServiceRequestResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25647};

/// [CompilerGenerated]
/// @brief Field <StatusCode>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____StatusCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Message_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Transcription>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Transcription_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FinalTranscriptions>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____FinalTranscriptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ResponseData>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ____ResponseData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestResults, ____StatusCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestResults, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestResults, ____Transcription_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestResults, ____FinalTranscriptions_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequestResults, ____ResponseData_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequestResults) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
