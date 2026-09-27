#pragma once
// IWYU pragma private; include "System/ComponentModel/HandledEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(HandledEventHandler)
namespace System::ComponentModel {
class HandledEventArgs;
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
namespace System::ComponentModel {
class HandledEventHandler;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::HandledEventHandler*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::HandledEventHandler*, "System.ComponentModel", "HandledEventHandler");
// Dependencies System.MulticastDelegate
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.HandledEventHandler
class CORDL_TYPE HandledEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xad587b8, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::ComponentModel::HandledEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xad587e0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xad587a4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::ComponentModel::HandledEventArgs*  e) ;

static inline ::System::ComponentModel::HandledEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xad58698, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandledEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandledEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandledEventHandler(HandledEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandledEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandledEventHandler(HandledEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::HandledEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::ComponentModel
