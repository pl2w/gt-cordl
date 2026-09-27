#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/ProgressMessageHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProgressMessageHandler)
namespace ICSharpCode::SharpZipLib::Tar {
class TarArchive;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarEntry;
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
namespace ICSharpCode::SharpZipLib::Tar {
class ProgressMessageHandler;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler*, "ICSharpCode.SharpZipLib.Tar", "ProgressMessageHandler");
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler
class CORDL_TYPE ProgressMessageHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9fda898, size 0x34, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ICSharpCode::SharpZipLib::Tar::TarArchive*  archive, ::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, ::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9fda8cc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9fda884, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ICSharpCode::SharpZipLib::Tar::TarArchive*  archive, ::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry, ::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9fda778, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressMessageHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressMessageHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressMessageHandler(ProgressMessageHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressMessageHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressMessageHandler(ProgressMessageHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::ProgressMessageHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
