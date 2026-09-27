#pragma once
// IWYU pragma private; include "System/ComponentModel/DoWorkEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(DoWorkEventHandler)
namespace System::ComponentModel {
class DoWorkEventArgs;
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
class DoWorkEventHandler;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::DoWorkEventHandler*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::DoWorkEventHandler*, "System.ComponentModel", "DoWorkEventHandler");
// Dependencies System.MulticastDelegate
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DoWorkEventHandler
class CORDL_TYPE DoWorkEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xad716c8, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::ComponentModel::DoWorkEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xad716f0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xad716b4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::ComponentModel::DoWorkEventArgs*  e) ;

static inline ::System::ComponentModel::DoWorkEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xad715a8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoWorkEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoWorkEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoWorkEventHandler(DoWorkEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoWorkEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoWorkEventHandler(DoWorkEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::DoWorkEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::ComponentModel
