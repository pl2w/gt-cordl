#pragma once
// IWYU pragma private; include "Viveport/Internal/StatusCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatusCallback)
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
class StatusCallback;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::StatusCallback*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::StatusCallback*, "Viveport.Internal", "StatusCallback");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.StatusCallback
class CORDL_TYPE StatusCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b59254, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  nResult, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b592b0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b59240, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  nResult) ;

static inline ::Viveport::Internal::StatusCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b4c640, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatusCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatusCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StatusCallback(StatusCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatusCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatusCallback(StatusCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::StatusCallback) == 0x80, "Size mismatch!");

} // namespace end def Viveport::Internal
