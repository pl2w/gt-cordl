#pragma once
// IWYU pragma private; include "Modio/Customizations/ISocketConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ISocketConnection)
namespace Modio::Customizations {
struct WssMessages;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Modio::Customizations {
class ISocketConnection;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::ISocketConnection*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::ISocketConnection*, "Modio.Customizations", "ISocketConnection");
// Dependencies 
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.ISocketConnection
class CORDL_TYPE ISocketConnection {
public:
// Declarations
/// @brief Method CloseConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* CloseConnection() ;

/// @brief Method Connected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Connected() ;

/// @brief Method SendData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SendData(::Modio::Customizations::WssMessages  message) ;

/// @brief Method SetupConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SetupConnection(::StringW  url, ::System::Action_1<::Modio::Customizations::WssMessages>*  onReceiveMessage, ::System::Action*  onDisconnect) ;

// Ctor Parameters [CppParam { name: "", ty: "ISocketConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISocketConnection(ISocketConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Customizations
