#pragma once
// IWYU pragma private; include "Viveport/Internal/StatusCallback2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatusCallback2)
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
class StatusCallback2;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::StatusCallback2*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::StatusCallback2*, "Viveport.Internal", "StatusCallback2");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.StatusCallback2
class CORDL_TYPE StatusCallback2 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b592d0, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  nResult, ::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b59340, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b592bc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  nResult, ::StringW  message) ;

static inline ::Viveport::Internal::StatusCallback2* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b57868, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatusCallback2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatusCallback2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StatusCallback2(StatusCallback2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatusCallback2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatusCallback2(StatusCallback2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::StatusCallback2) == 0x80, "Size mismatch!");

} // namespace end def Viveport::Internal
