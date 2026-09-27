#pragma once
// IWYU pragma private; include "Viveport/StatusCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
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
namespace Viveport {
class StatusCallback;
}
// Write type traits
MARK_REF_T(::Viveport::StatusCallback*);
DEFINE_IL2CPP_CLASS(::Viveport::StatusCallback*, "Viveport", "StatusCallback");
// Dependencies System.MulticastDelegate
namespace Viveport {
// Is value type: false
// CS Name: Viveport.StatusCallback
class CORDL_TYPE StatusCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b4bd04, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  nResult, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b4bd60, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b4bcf0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  nResult) ;

static inline ::Viveport::StatusCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b4bc50, size 0xa0, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::StatusCallback) == 0x80, "Size mismatch!");

} // namespace end def Viveport
