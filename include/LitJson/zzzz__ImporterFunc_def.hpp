#pragma once
// IWYU pragma private; include "LitJson/ImporterFunc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ImporterFunc)
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
namespace LitJson {
class ImporterFunc;
}
// Write type traits
MARK_REF_T(::LitJson::ImporterFunc*);
DEFINE_IL2CPP_CLASS(::LitJson::ImporterFunc*, "LitJson", "ImporterFunc");
// Dependencies System.MulticastDelegate
namespace LitJson {
// Is value type: false
// CS Name: LitJson.ImporterFunc
class CORDL_TYPE ImporterFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b5fbc0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  input, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b5fbe0, size 0xc, virtual true, abstract: false, final false
inline ::System::Object* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b5fbac, size 0x14, virtual true, abstract: false, final false
inline ::System::Object* Invoke(::System::Object*  input) ;

static inline ::LitJson::ImporterFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b5faa4, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImporterFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImporterFunc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImporterFunc(ImporterFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImporterFunc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImporterFunc(ImporterFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LitJson::ImporterFunc) == 0x80, "Size mismatch!");

} // namespace end def LitJson
