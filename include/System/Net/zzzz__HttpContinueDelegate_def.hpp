#pragma once
// IWYU pragma private; include "System/Net/HttpContinueDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContinueDelegate)
namespace System::Net {
class WebHeaderCollection;
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
class HttpContinueDelegate;
}
// Write type traits
MARK_REF_T(::System::Net::HttpContinueDelegate*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpContinueDelegate*, "System.Net", "HttpContinueDelegate");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpContinueDelegate
class CORDL_TYPE HttpContinueDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac5b310, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  StatusCode, ::System::Net::WebHeaderCollection*  httpHeaders, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac5b380, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac5b2fc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  StatusCode, ::System::Net::WebHeaderCollection*  httpHeaders) ;

static inline ::System::Net::HttpContinueDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac5b25c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpContinueDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpContinueDelegate(HttpContinueDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpContinueDelegate(HttpContinueDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpContinueDelegate) == 0x80, "Size mismatch!");

} // namespace end def System::Net
