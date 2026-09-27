#pragma once
// IWYU pragma private; include "LitJson/ExporterFunc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ExporterFunc)
namespace LitJson {
class JsonWriter;
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
namespace LitJson {
class ExporterFunc;
}
// Write type traits
MARK_REF_T(::LitJson::ExporterFunc*);
DEFINE_IL2CPP_CLASS(::LitJson::ExporterFunc*, "LitJson", "ExporterFunc");
// Dependencies System.MulticastDelegate
namespace LitJson {
// Is value type: false
// CS Name: LitJson.ExporterFunc
class CORDL_TYPE ExporterFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b5fa70, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  obj, ::LitJson::JsonWriter*  writer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b5fa98, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b5fa5c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  obj, ::LitJson::JsonWriter*  writer) ;

static inline ::LitJson::ExporterFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b5f950, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExporterFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExporterFunc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExporterFunc(ExporterFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExporterFunc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExporterFunc(ExporterFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3825};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LitJson::ExporterFunc) == 0x80, "Size mismatch!");

} // namespace end def LitJson
