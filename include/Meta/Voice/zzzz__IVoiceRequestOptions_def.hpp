#pragma once
// IWYU pragma private; include "Meta/Voice/IVoiceRequestOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVoiceRequestOptions)
// Forward declare root types
namespace Meta::Voice {
class IVoiceRequestOptions;
}
// Write type traits
MARK_REF_T(::Meta::Voice::IVoiceRequestOptions*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::IVoiceRequestOptions*, "Meta.Voice", "IVoiceRequestOptions");
// Dependencies 
namespace Meta::Voice {
// Is value type: false
// CS Name: Meta.Voice.IVoiceRequestOptions
class CORDL_TYPE IVoiceRequestOptions {
public:
// Declarations
 __declspec(property(get=get_ClientUserId)) ::StringW  ClientUserId;

 __declspec(property(get=get_OperationId)) ::StringW  OperationId;

 __declspec(property(get=get_RequestId)) ::StringW  RequestId;

/// @brief Method get_ClientUserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ClientUserId() ;

/// @brief Method get_OperationId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_OperationId() ;

/// @brief Method get_RequestId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_RequestId() ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceRequestOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceRequestOptions(IVoiceRequestOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25431};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
