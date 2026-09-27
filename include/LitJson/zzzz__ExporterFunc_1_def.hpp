#pragma once
// IWYU pragma private; include "LitJson/ExporterFunc_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ExporterFunc_1)
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
template<typename T>
class ExporterFunc_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::LitJson::ExporterFunc_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::LitJson::ExporterFunc_1, "LitJson", "ExporterFunc`1");
// Dependencies System.MulticastDelegate
namespace LitJson {
// cpp template
template<typename T>
// Is value type: false
// CS Name: LitJson.ExporterFunc`1<T>
class CORDL_TYPE ExporterFunc_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  obj, ::LitJson::JsonWriter*  writer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  obj, ::LitJson::JsonWriter*  writer) ;

static inline ::LitJson::ExporterFunc_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExporterFunc_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExporterFunc_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExporterFunc_1(ExporterFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExporterFunc_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExporterFunc_1(ExporterFunc_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LitJson
