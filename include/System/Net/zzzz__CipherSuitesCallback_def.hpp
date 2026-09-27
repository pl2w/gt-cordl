#pragma once
// IWYU pragma private; include "System/Net/CipherSuitesCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CipherSuitesCallback)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Net {
struct SecurityProtocolType;
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
class CipherSuitesCallback;
}
// Write type traits
MARK_REF_T(::System::Net::CipherSuitesCallback*);
DEFINE_IL2CPP_CLASS(::System::Net::CipherSuitesCallback*, "System.Net", "CipherSuitesCallback");
// [Obsolete("This API is no longer supported.")]
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CipherSuitesCallback
class CORDL_TYPE CipherSuitesCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xacb1974, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::SecurityProtocolType  protocol, ::System::Collections::Generic::IEnumerable_1<::StringW>*  allCiphers, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xacb1a08, size 0xc, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xacb1960, size 0x14, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Invoke(::System::Net::SecurityProtocolType  protocol, ::System::Collections::Generic::IEnumerable_1<::StringW>*  allCiphers) ;

static inline ::System::Net::CipherSuitesCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xacb18c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CipherSuitesCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CipherSuitesCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CipherSuitesCallback(CipherSuitesCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CipherSuitesCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CipherSuitesCallback(CipherSuitesCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10719};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::CipherSuitesCallback) == 0x80, "Size mismatch!");

} // namespace end def System::Net
