#pragma once
// IWYU pragma private; include "System/Configuration/SettingsSavingEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SettingsSavingEventHandler)
namespace System::ComponentModel {
class CancelEventArgs;
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
class SettingsSavingEventHandler;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsSavingEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsSavingEventHandler*, "System.Configuration", "SettingsSavingEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsSavingEventHandler
class CORDL_TYPE SettingsSavingEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xacfc0a8, size 0x38, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::ComponentModel::CancelEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xacfc0e0, size 0x38, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xacfc070, size 0x38, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::ComponentModel::CancelEventArgs*  e) ;

static inline ::System::Configuration::SettingsSavingEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xacfc038, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsSavingEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsSavingEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsSavingEventHandler(SettingsSavingEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSavingEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsSavingEventHandler(SettingsSavingEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsSavingEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::Configuration
