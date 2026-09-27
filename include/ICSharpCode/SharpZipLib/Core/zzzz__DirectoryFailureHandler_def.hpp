#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/DirectoryFailureHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(DirectoryFailureHandler)
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
class DirectoryFailureHandler;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*, "ICSharpCode.SharpZipLib.Core", "DirectoryFailureHandler");
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler
class CORDL_TYPE DirectoryFailureHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9ffa24c, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9ffa274, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9ffa238, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*  e) ;

static inline ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ffa12c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectoryFailureHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectoryFailureHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectoryFailureHandler(DirectoryFailureHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryFailureHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectoryFailureHandler(DirectoryFailureHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
