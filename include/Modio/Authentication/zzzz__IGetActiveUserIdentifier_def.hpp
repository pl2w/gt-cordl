#pragma once
// IWYU pragma private; include "Modio/Authentication/IGetActiveUserIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IGetActiveUserIdentifier)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Authentication {
class IGetActiveUserIdentifier;
}
// Write type traits
MARK_REF_T(::Modio::Authentication::IGetActiveUserIdentifier*);
DEFINE_IL2CPP_CLASS(::Modio::Authentication::IGetActiveUserIdentifier*, "Modio.Authentication", "IGetActiveUserIdentifier");
// Dependencies 
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.IGetActiveUserIdentifier
class CORDL_TYPE IGetActiveUserIdentifier {
public:
// Declarations
/// @brief Method GetActiveUserIdentifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetActiveUserIdentifier() ;

// Ctor Parameters [CppParam { name: "", ty: "IGetActiveUserIdentifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGetActiveUserIdentifier(IGetActiveUserIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Authentication
