#pragma once
// IWYU pragma private; include "Viveport/Internal/GetLicenseCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetLicenseCallback)
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
namespace Viveport::Internal {
class GetLicenseCallback;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::GetLicenseCallback*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::GetLicenseCallback*, "Viveport.Internal", "GetLicenseCallback");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.GetLicenseCallback
class CORDL_TYPE GetLicenseCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b5920c, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  message, ::StringW  signature, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b59234, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b591f8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message, ::StringW  signature) ;

static inline ::Viveport::Internal::GetLicenseCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b59144, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLicenseCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLicenseCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLicenseCallback(GetLicenseCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLicenseCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLicenseCallback(GetLicenseCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::GetLicenseCallback) == 0x80, "Size mismatch!");

} // namespace end def Viveport::Internal
