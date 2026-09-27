#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ProgressHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ProgressHandler)
namespace ICSharpCode::SharpZipLib::Core {
class ProgressEventArgs;
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
namespace ICSharpCode::SharpZipLib::Core {
class ProgressHandler;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::ProgressHandler*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::ProgressHandler*, "ICSharpCode.SharpZipLib.Core", "ProgressHandler");
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.ProgressHandler
class CORDL_TYPE ProgressHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9ff9fa4, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9ff9fcc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9ff9f90, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*  e) ;

static inline ::ICSharpCode::SharpZipLib::Core::ProgressHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ff9e84, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressHandler(ProgressHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressHandler(ProgressHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17423};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::ProgressHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
