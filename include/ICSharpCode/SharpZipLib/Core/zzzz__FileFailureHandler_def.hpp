#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/FileFailureHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(FileFailureHandler)
namespace ICSharpCode::SharpZipLib::Core {
class ScanFailureEventArgs;
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
class FileFailureHandler;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::FileFailureHandler*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::FileFailureHandler*, "ICSharpCode.SharpZipLib.Core", "FileFailureHandler");
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.FileFailureHandler
class CORDL_TYPE FileFailureHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9ffa3a0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9ffa3c8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9ffa38c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*  e) ;

static inline ::ICSharpCode::SharpZipLib::Core::FileFailureHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ffa280, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileFailureHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileFailureHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FileFailureHandler(FileFailureHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileFailureHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileFailureHandler(FileFailureHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::FileFailureHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
