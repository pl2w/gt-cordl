#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/IErrorMitigator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IErrorMitigator)
namespace Meta::Voice::Logging {
struct ErrorCode;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class IErrorMitigator;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::IErrorMitigator*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::IErrorMitigator*, "Meta.Voice.Logging", "IErrorMitigator");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.IErrorMitigator
class CORDL_TYPE IErrorMitigator {
public:
// Declarations
/// @brief Method GetMitigation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetMitigation(::Meta::Voice::Logging::ErrorCode  errorCode) ;

// Ctor Parameters [CppParam { name: "", ty: "IErrorMitigator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IErrorMitigator(IErrorMitigator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30946};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
