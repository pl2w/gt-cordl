#pragma once
// IWYU pragma private; include "Fusion/RpcInvokeDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(RpcInvokeDelegate)
namespace Fusion {
class NetworkBehaviour;
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
class RpcInvokeDelegate;
}
// Write type traits
MARK_REF_T(::Fusion::RpcInvokeDelegate*);
DEFINE_IL2CPP_CLASS(::Fusion::RpcInvokeDelegate*, "Fusion", "RpcInvokeDelegate");
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RpcInvokeDelegate
class CORDL_TYPE RpcInvokeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5fd13b0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5fd13d8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5fd139c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

static inline ::Fusion::RpcInvokeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5fd1290, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RpcInvokeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RpcInvokeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RpcInvokeDelegate(RpcInvokeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RpcInvokeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RpcInvokeDelegate(RpcInvokeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RpcInvokeDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
