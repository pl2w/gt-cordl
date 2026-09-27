#pragma once
// IWYU pragma private; include "System/Configuration/SettingsLoadedEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SettingsLoadedEventHandler)
namespace System::Configuration {
class SettingsLoadedEventArgs;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class SettingsLoadedEventHandler;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsLoadedEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsLoadedEventHandler*, "System.Configuration", "SettingsLoadedEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsLoadedEventHandler
class CORDL_TYPE SettingsLoadedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xacfbf58, size 0x38, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::Configuration::SettingsLoadedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xacfbf90, size 0x38, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xacfbf20, size 0x38, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Configuration::SettingsLoadedEventArgs*  e) ;

static inline ::System::Configuration::SettingsLoadedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xacfbee8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsLoadedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsLoadedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsLoadedEventHandler(SettingsLoadedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsLoadedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsLoadedEventHandler(SettingsLoadedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11018};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsLoadedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::Configuration
