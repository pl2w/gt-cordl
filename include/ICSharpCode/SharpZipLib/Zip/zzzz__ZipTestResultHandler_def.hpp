#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipTestResultHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZipTestResultHandler)
namespace ICSharpCode::SharpZipLib::Zip {
class TestStatus;
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
namespace ICSharpCode::SharpZipLib::Zip {
class ZipTestResultHandler;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*, "ICSharpCode.SharpZipLib.Zip", "ZipTestResultHandler");
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler
class CORDL_TYPE ZipTestResultHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f83c5c, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ICSharpCode::SharpZipLib::Zip::TestStatus*  status, ::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f83c84, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f83c48, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ICSharpCode::SharpZipLib::Zip::TestStatus*  status, ::StringW  message) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f83b3c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipTestResultHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipTestResultHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipTestResultHandler(ZipTestResultHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipTestResultHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipTestResultHandler(ZipTestResultHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
