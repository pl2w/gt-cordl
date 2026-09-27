#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitMessageVRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__WitVRequest_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitMessageVRequest)
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
// Forward declare root types
namespace Meta::WitAi::Requests {
class WitMessageVRequest;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::WitMessageVRequest*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitMessageVRequest*, "Meta.WitAi.Requests", "WitMessageVRequest");
// Dependencies Meta.WitAi.Requests.WitVRequest
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitMessageVRequest
class CORDL_TYPE WitMessageVRequest : public ::Meta::WitAi::Requests::WitVRequest {
public:
// Declarations
/// @brief Method MessageRequest, addr 0x9e8e70c, size 0x148, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>* MessageRequest(::StringW  endpoint, bool  post, ::StringW  text, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::System::Action_1<::StringW>*  onPartial) ;

static inline ::Meta::WitAi::Requests::WitMessageVRequest* New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId) ;

/// @brief Method .ctor, addr 0x9e8e508, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitMessageVRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitMessageVRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitMessageVRequest(WitMessageVRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitMessageVRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitMessageVRequest(WitMessageVRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25627};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Requests::WitMessageVRequest) == 0xc0, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
