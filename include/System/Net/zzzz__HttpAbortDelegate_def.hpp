#pragma once
// IWYU pragma private; include "System/Net/HttpAbortDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(HttpAbortDelegate)
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebException;
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
class HttpAbortDelegate;
}
// Write type traits
MARK_REF_T(::System::Net::HttpAbortDelegate*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpAbortDelegate*, "System.Net", "HttpAbortDelegate");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpAbortDelegate
class CORDL_TYPE HttpAbortDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac5b20c, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::HttpWebRequest*  request, ::System::Net::WebException*  webException, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac5b234, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac5b1f8, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::Net::HttpWebRequest*  request, ::System::Net::WebException*  webException) ;

static inline ::System::Net::HttpAbortDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac5b0ec, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpAbortDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpAbortDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpAbortDelegate(HttpAbortDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpAbortDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpAbortDelegate(HttpAbortDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpAbortDelegate) == 0x80, "Size mismatch!");

} // namespace end def System::Net
