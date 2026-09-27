#pragma once
// IWYU pragma private; include "Viveport/Internal/IAPurchaseCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAPurchaseCallback)
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
class IAPurchaseCallback;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::IAPurchaseCallback*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::IAPurchaseCallback*, "Viveport.Internal", "IAPurchaseCallback");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.IAPurchaseCallback
class CORDL_TYPE IAPurchaseCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b5949c, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  code, ::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b5950c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b59488, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  code, ::StringW  message) ;

static inline ::Viveport::Internal::IAPurchaseCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b5037c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchaseCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchaseCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchaseCallback(IAPurchaseCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchaseCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchaseCallback(IAPurchaseCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::IAPurchaseCallback) == 0x80, "Size mismatch!");

} // namespace end def Viveport::Internal
