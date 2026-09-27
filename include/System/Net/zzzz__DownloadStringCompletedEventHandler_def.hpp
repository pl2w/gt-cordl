#pragma once
// IWYU pragma private; include "System/Net/DownloadStringCompletedEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(DownloadStringCompletedEventHandler)
namespace System::Net {
class DownloadStringCompletedEventArgs;
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
class DownloadStringCompletedEventHandler;
}
// Write type traits
MARK_REF_T(::System::Net::DownloadStringCompletedEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Net::DownloadStringCompletedEventHandler*, "System.Net", "DownloadStringCompletedEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DownloadStringCompletedEventHandler
class CORDL_TYPE DownloadStringCompletedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac54308, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::Net::DownloadStringCompletedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac54330, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac542f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Net::DownloadStringCompletedEventArgs*  e) ;

static inline ::System::Net::DownloadStringCompletedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac4dbd0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadStringCompletedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadStringCompletedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadStringCompletedEventHandler(DownloadStringCompletedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadStringCompletedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadStringCompletedEventHandler(DownloadStringCompletedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::DownloadStringCompletedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::Net
