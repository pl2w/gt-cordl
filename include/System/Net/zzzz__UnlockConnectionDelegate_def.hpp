#pragma once
// IWYU pragma private; include "System/Net/UnlockConnectionDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UnlockConnectionDelegate)
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
class UnlockConnectionDelegate;
}
// Write type traits
MARK_REF_T(::System::Net::UnlockConnectionDelegate*);
DEFINE_IL2CPP_CLASS(::System::Net::UnlockConnectionDelegate*, "System.Net", "UnlockConnectionDelegate");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UnlockConnectionDelegate
class CORDL_TYPE UnlockConnectionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac5b43c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac5b458, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac5b428, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::System::Net::UnlockConnectionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac5b38c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockConnectionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockConnectionDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockConnectionDelegate(UnlockConnectionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockConnectionDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockConnectionDelegate(UnlockConnectionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::UnlockConnectionDelegate) == 0x80, "Size mismatch!");

} // namespace end def System::Net
