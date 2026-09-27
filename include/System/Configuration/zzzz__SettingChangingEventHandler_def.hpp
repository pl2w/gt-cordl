#pragma once
// IWYU pragma private; include "System/Configuration/SettingChangingEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SettingChangingEventHandler)
namespace System::Configuration {
class SettingChangingEventArgs;
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
class SettingChangingEventHandler;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingChangingEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingChangingEventHandler*, "System.Configuration", "SettingChangingEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingChangingEventHandler
class CORDL_TYPE SettingChangingEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xacfbd60, size 0x38, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::Configuration::SettingChangingEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xacfbd98, size 0x38, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xacfbd28, size 0x38, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Configuration::SettingChangingEventArgs*  e) ;

static inline ::System::Configuration::SettingChangingEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xacfbcf0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingChangingEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingChangingEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingChangingEventHandler(SettingChangingEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingChangingEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingChangingEventHandler(SettingChangingEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingChangingEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::Configuration
