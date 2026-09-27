#pragma once
// IWYU pragma private; include "Viveport/Internal/QueryRuntimeModeCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryRuntimeModeCallback)
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
class QueryRuntimeModeCallback;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::QueryRuntimeModeCallback*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::QueryRuntimeModeCallback*, "Viveport.Internal", "QueryRuntimeModeCallback");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.QueryRuntimeModeCallback
class CORDL_TYPE QueryRuntimeModeCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b59400, size 0x7c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  nResult, int32_t  nMode, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b5947c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b593ec, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  nResult, int32_t  nMode) ;

static inline ::Viveport::Internal::QueryRuntimeModeCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b5934c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryRuntimeModeCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryRuntimeModeCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryRuntimeModeCallback(QueryRuntimeModeCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryRuntimeModeCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryRuntimeModeCallback(QueryRuntimeModeCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3792};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::QueryRuntimeModeCallback) == 0x80, "Size mismatch!");

} // namespace end def Viveport::Internal
