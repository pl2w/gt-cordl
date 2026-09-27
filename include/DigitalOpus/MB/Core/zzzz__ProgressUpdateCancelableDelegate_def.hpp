#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ProgressUpdateCancelableDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressUpdateCancelableDelegate)
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
namespace DigitalOpus::MB::Core {
class ProgressUpdateCancelableDelegate;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*, "DigitalOpus.MB.Core", "ProgressUpdateCancelableDelegate");
// Dependencies System.MulticastDelegate
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.ProgressUpdateCancelableDelegate
class CORDL_TYPE ProgressUpdateCancelableDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d7e96c, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  msg, float_t  progress, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d7e9cc, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d7e958, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::StringW  msg, float_t  progress) ;

static inline ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d7e8a4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressUpdateCancelableDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressUpdateCancelableDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressUpdateCancelableDelegate(ProgressUpdateCancelableDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressUpdateCancelableDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressUpdateCancelableDelegate(ProgressUpdateCancelableDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate) == 0x80, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
