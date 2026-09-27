#pragma once
// IWYU pragma private; include "System/Net/AuthenticationSchemeSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationSchemeSelector)
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Net {
class HttpListenerRequest;
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
class AuthenticationSchemeSelector;
}
// Write type traits
MARK_REF_T(::System::Net::AuthenticationSchemeSelector*);
DEFINE_IL2CPP_CLASS(::System::Net::AuthenticationSchemeSelector*, "System.Net", "AuthenticationSchemeSelector");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.AuthenticationSchemeSelector
class CORDL_TYPE AuthenticationSchemeSelector : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac54c24, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::HttpListenerRequest*  httpRequest, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac54c44, size 0x28, virtual true, abstract: false, final false
inline ::System::Net::AuthenticationSchemes EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac54c10, size 0x14, virtual true, abstract: false, final false
inline ::System::Net::AuthenticationSchemes Invoke(::System::Net::HttpListenerRequest*  httpRequest) ;

static inline ::System::Net::AuthenticationSchemeSelector* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac54b60, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationSchemeSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationSchemeSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationSchemeSelector(AuthenticationSchemeSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationSchemeSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationSchemeSelector(AuthenticationSchemeSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::AuthenticationSchemeSelector) == 0x80, "Size mismatch!");

} // namespace end def System::Net
