#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/CompletedFileHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(CompletedFileHandler)
namespace ICSharpCode::SharpZipLib::Core {
class ScanEventArgs;
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
class CompletedFileHandler;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*, "ICSharpCode.SharpZipLib.Core", "CompletedFileHandler");
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.CompletedFileHandler
class CORDL_TYPE CompletedFileHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9ffa0f8, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9ffa120, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9ffa0e4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*  e) ;

static inline ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ff9fd8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompletedFileHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompletedFileHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompletedFileHandler(CompletedFileHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompletedFileHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompletedFileHandler(CompletedFileHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17424};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::CompletedFileHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
