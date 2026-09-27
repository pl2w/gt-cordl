#pragma once
// IWYU pragma private; include "Fusion/RpcStaticInvokeDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(RpcStaticInvokeDelegate)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct SimulationMessage;
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
namespace Fusion {
class RpcStaticInvokeDelegate;
}
// Write type traits
MARK_REF_T(::Fusion::RpcStaticInvokeDelegate*);
DEFINE_IL2CPP_CLASS(::Fusion::RpcStaticInvokeDelegate*, "Fusion", "RpcStaticInvokeDelegate");
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RpcStaticInvokeDelegate
class CORDL_TYPE RpcStaticInvokeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5fd1708, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5fd1730, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5fd16f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

static inline ::Fusion::RpcStaticInvokeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5fd1640, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RpcStaticInvokeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RpcStaticInvokeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RpcStaticInvokeDelegate(RpcStaticInvokeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RpcStaticInvokeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RpcStaticInvokeDelegate(RpcStaticInvokeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RpcStaticInvokeDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
