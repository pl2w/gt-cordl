#pragma once
// IWYU pragma private; include "System/Net/OpenWriteCompletedEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OpenWriteCompletedEventHandler)
namespace System::Net {
class OpenWriteCompletedEventArgs;
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
namespace System::Net {
class OpenWriteCompletedEventHandler;
}
// Write type traits
MARK_REF_T(::System::Net::OpenWriteCompletedEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Net::OpenWriteCompletedEventHandler*, "System.Net", "OpenWriteCompletedEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.OpenWriteCompletedEventHandler
class CORDL_TYPE OpenWriteCompletedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac542c0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::Net::OpenWriteCompletedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac542e8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac542ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Net::OpenWriteCompletedEventArgs*  e) ;

static inline ::System::Net::OpenWriteCompletedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac4e268, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenWriteCompletedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenWriteCompletedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenWriteCompletedEventHandler(OpenWriteCompletedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenWriteCompletedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenWriteCompletedEventHandler(OpenWriteCompletedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::OpenWriteCompletedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::Net
