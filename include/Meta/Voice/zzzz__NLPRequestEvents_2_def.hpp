#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequestEvents_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__TranscriptionRequestEvents_1_def.hpp"
CORDL_MODULE_EXPORT(NLPRequestEvents_2)
namespace Meta::Voice {
template<typename TResponseData>
class NLPRequestResponseEvent_1;
}
namespace Meta::Voice {
template<typename TResponseData>
class NLPRequestResponseValidatorEvent_1;
}
namespace Meta::Voice {
class TranscriptionRequestEvent;
}
// Forward declare root types
namespace Meta::Voice {
template<typename TUnityEvent,typename TResponseData>
class NLPRequestEvents_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequestEvents_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequestEvents_2, "Meta.Voice", "NLPRequestEvents`2");
// Dependencies Meta.Voice.TranscriptionRequestEvents`1<TUnityEvent>
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequestEvents`2<TUnityEvent,TResponseData>
class CORDL_TYPE NLPRequestEvents_2 : public ::Meta::Voice::TranscriptionRequestEvents_1<TUnityEvent> {
public:
// Declarations
 __declspec(property(get=get_OnFullResponse)) ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  OnFullResponse;

 __declspec(property(get=get_OnPartialResponse)) ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  OnPartialResponse;

 __declspec(property(get=get_OnRawResponse)) ::Meta::Voice::TranscriptionRequestEvent*  OnRawResponse;

 __declspec(property(get=get_OnValidateResponse)) ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*  OnValidateResponse;

/// @brief Field _onFullResponse, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onFullResponse, put=__cordl_internal_set__onFullResponse)) ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  _onFullResponse;

/// @brief Field _onPartialResponse, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPartialResponse, put=__cordl_internal_set__onPartialResponse)) ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  _onPartialResponse;

/// @brief Field _onRawResponse, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRawResponse, put=__cordl_internal_set__onRawResponse)) ::Meta::Voice::TranscriptionRequestEvent*  _onRawResponse;

/// @brief Field _onValidateResponse, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onValidateResponse, put=__cordl_internal_set__onValidateResponse)) ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*  _onValidateResponse;

static inline ::Meta::Voice::NLPRequestEvents_2<TUnityEvent,TResponseData>* New_ctor() ;

constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* const& __cordl_internal_get__onFullResponse() const;

constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*& __cordl_internal_get__onFullResponse() ;

constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* const& __cordl_internal_get__onPartialResponse() const;

constexpr ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*& __cordl_internal_get__onPartialResponse() ;

constexpr ::Meta::Voice::TranscriptionRequestEvent* const& __cordl_internal_get__onRawResponse() const;

constexpr ::Meta::Voice::TranscriptionRequestEvent*& __cordl_internal_get__onRawResponse() ;

constexpr ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>* const& __cordl_internal_get__onValidateResponse() const;

constexpr ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*& __cordl_internal_get__onValidateResponse() ;

constexpr void __cordl_internal_set__onFullResponse(::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  value) ;

constexpr void __cordl_internal_set__onPartialResponse(::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  value) ;

constexpr void __cordl_internal_set__onRawResponse(::Meta::Voice::TranscriptionRequestEvent*  value) ;

constexpr void __cordl_internal_set__onValidateResponse(::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnFullResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* get_OnFullResponse() ;

/// @brief Method get_OnPartialResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* get_OnPartialResponse() ;

/// @brief Method get_OnRawResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::TranscriptionRequestEvent* get_OnRawResponse() ;

/// @brief Method get_OnValidateResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>* get_OnValidateResponse() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequestEvents_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequestEvents_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequestEvents_2(NLPRequestEvents_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequestEvents_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequestEvents_2(NLPRequestEvents_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25445};

/// [Header("NLP Events")]
/// [Tooltip("Called on every request response text.")]
/// [SerializeField]
/// @brief Field _onRawResponse, offset: 0xa0, size: 0x8, def value: None
 ::Meta::Voice::TranscriptionRequestEvent*  ____onRawResponse;

/// [Tooltip("Called for partially decoded request responses.")]
/// [SerializeField]
/// @brief Field _onPartialResponse, offset: 0xa8, size: 0x8, def value: None
 ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  ____onPartialResponse;

/// [Tooltip("Called on request language processing once completely analyzed.")]
/// [SerializeField]
/// @brief Field _onFullResponse, offset: 0xb0, size: 0x8, def value: None
 ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>*  ____onFullResponse;

/// [Tooltip("Called by request to allow custom validation prior to error determination.")]
/// [SerializeField]
/// @brief Field _onValidateResponse, offset: 0xb8, size: 0x8, def value: None
 ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>*  ____onValidateResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
