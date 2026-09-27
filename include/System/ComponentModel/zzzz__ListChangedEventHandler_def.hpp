#pragma once
// IWYU pragma private; include "System/ComponentModel/ListChangedEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ListChangedEventHandler)
namespace System::ComponentModel {
class ListChangedEventArgs;
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
class ListChangedEventHandler;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ListChangedEventHandler*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ListChangedEventHandler*, "System.ComponentModel", "ListChangedEventHandler");
// Dependencies System.MulticastDelegate
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ListChangedEventHandler
class CORDL_TYPE ListChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xad5b2f0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::ComponentModel::ListChangedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xad5b318, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xad5b2dc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::ComponentModel::ListChangedEventArgs*  e) ;

static inline ::System::ComponentModel::ListChangedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xad5b1d0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListChangedEventHandler(ListChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListChangedEventHandler(ListChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10198};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::ListChangedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::ComponentModel
