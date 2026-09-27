#pragma once
// IWYU pragma private; include "Modio/Authentication/IEmailCodePrompter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IEmailCodePrompter)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Authentication {
class IEmailCodePrompter;
}
// Write type traits
MARK_REF_T(::Modio::Authentication::IEmailCodePrompter*);
DEFINE_IL2CPP_CLASS(::Modio::Authentication::IEmailCodePrompter*, "Modio.Authentication", "IEmailCodePrompter");
// Dependencies 
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.IEmailCodePrompter
class CORDL_TYPE IEmailCodePrompter {
public:
// Declarations
/// @brief Method ShowCodePrompt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ShowCodePrompt() ;

// Ctor Parameters [CppParam { name: "", ty: "IEmailCodePrompter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEmailCodePrompter(IEmailCodePrompter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17760};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Authentication
