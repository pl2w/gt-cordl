#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitResponseHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WitResponseHandler)
namespace Meta::WitAi::CallbackHandlers {
class ConfidenceRange;
}
namespace Meta::WitAi::Data {
class VoiceSession;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class VoiceService;
}
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
class WitResponseHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CallbackHandlers::WitResponseHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::WitResponseHandler*, "Meta.WitAi.CallbackHandlers", "WitResponseHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::CallbackHandlers {
// Is value type: false
// CS Name: Meta.WitAi.CallbackHandlers.WitResponseHandler
class CORDL_TYPE WitResponseHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ValidateEarly, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_ValidateEarly, put=__cordl_internal_set_ValidateEarly)) bool  ValidateEarly;

/// @brief Field Voice, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Voice, put=__cordl_internal_set_Voice)) ::UnityW<::Meta::WitAi::VoiceService>  Voice;

/// @brief Field _validated, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__validated, put=__cordl_internal_set__validated)) bool  _validated;

/// @brief Method HandleFinalResponse, addr 0x9e9d8a8, size 0x7c, virtual true, abstract: false, final false
inline void HandleFinalResponse(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method HandleValidateEarlyResponse, addr 0x9e9d830, size 0x78, virtual true, abstract: false, final false
inline void HandleValidateEarlyResponse(::Meta::WitAi::Data::VoiceSession*  session) ;

static inline ::Meta::WitAi::CallbackHandlers::WitResponseHandler* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e9d59c, size 0x1e4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e9d1fc, size 0x318, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRequestSend, addr 0x9e9d828, size 0x8, virtual true, abstract: false, final false
inline void OnRequestSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnResponseInvalid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnResponseInvalid(::Meta::WitAi::Json::WitResponseNode*  response, ::StringW  error) ;

/// @brief Method OnResponseSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnResponseSuccess(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method OnValidate, addr 0x9e9d780, size 0xa8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnValidateResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse) ;

/// @brief Method RefreshConfidenceRange, addr 0x9e9cbc0, size 0xe0, virtual false, abstract: false, final false
static inline bool RefreshConfidenceRange(float_t  confidence, ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  confidenceRanges, bool  allowConfidenceOverlap) ;

constexpr bool const& __cordl_internal_get_ValidateEarly() const;

constexpr bool& __cordl_internal_get_ValidateEarly() ;

constexpr ::UnityW<::Meta::WitAi::VoiceService> const& __cordl_internal_get_Voice() const;

constexpr ::UnityW<::Meta::WitAi::VoiceService>& __cordl_internal_get_Voice() ;

constexpr bool const& __cordl_internal_get__validated() const;

constexpr bool& __cordl_internal_get__validated() ;

constexpr void __cordl_internal_set_ValidateEarly(bool  value) ;

constexpr void __cordl_internal_set_Voice(::UnityW<::Meta::WitAi::VoiceService>  value) ;

constexpr void __cordl_internal_set__validated(bool  value) ;

/// @brief Method .ctor, addr 0x9e9cab4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseHandler(WitResponseHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseHandler(WitResponseHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25730};

/// [FormerlySerializedAs("wit")]
/// [SerializeField]
/// @brief Field Voice, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::VoiceService>  ___Voice;

/// [SerializeField]
/// @brief Field ValidateEarly, offset: 0x28, size: 0x1, def value: None
 bool  ___ValidateEarly;

/// @brief Field _validated, offset: 0x29, size: 0x1, def value: None
 bool  ____validated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseHandler, ___Voice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseHandler, ___ValidateEarly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CallbackHandlers::WitResponseHandler, ____validated) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::WitResponseHandler) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
