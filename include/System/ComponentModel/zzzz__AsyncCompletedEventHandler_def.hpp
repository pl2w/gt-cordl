#pragma once
// IWYU pragma private; include "System/ComponentModel/AsyncCompletedEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AsyncCompletedEventHandler)
namespace System::ComponentModel {
class AsyncCompletedEventArgs;
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
class AsyncCompletedEventHandler;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::AsyncCompletedEventHandler*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::AsyncCompletedEventHandler*, "System.ComponentModel", "AsyncCompletedEventHandler");
// Dependencies System.MulticastDelegate
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.AsyncCompletedEventHandler
class CORDL_TYPE AsyncCompletedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xad6c7a4, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::ComponentModel::AsyncCompletedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xad6c7cc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xad6c790, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::ComponentModel::AsyncCompletedEventArgs*  e) ;

static inline ::System::ComponentModel::AsyncCompletedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xad6c684, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCompletedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCompletedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCompletedEventHandler(AsyncCompletedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCompletedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCompletedEventHandler(AsyncCompletedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::AsyncCompletedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::ComponentModel
