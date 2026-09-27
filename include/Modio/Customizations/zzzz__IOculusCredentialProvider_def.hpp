#pragma once
// IWYU pragma private; include "Modio/Customizations/IOculusCredentialProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IOculusCredentialProvider)
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Customizations {
class IOculusCredentialProvider;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::IOculusCredentialProvider*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::IOculusCredentialProvider*, "Modio.Customizations", "IOculusCredentialProvider");
// Dependencies 
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.IOculusCredentialProvider
class CORDL_TYPE IOculusCredentialProvider {
public:
// Declarations
/// @brief Method GetOculusAccessToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetOculusAccessToken() ;

/// @brief Method GetOculusDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetOculusDevice() ;

/// @brief Method GetOculusUserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* GetOculusUserId() ;

/// @brief Method GetOculusUserProof, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetOculusUserProof() ;

// Ctor Parameters [CppParam { name: "", ty: "IOculusCredentialProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOculusCredentialProvider(IOculusCredentialProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17721};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Customizations
