#pragma once
// IWYU pragma private; include "LitJson/ImporterFunc_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ImporterFunc_2)
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
template<typename TJson,typename TValue>
class ImporterFunc_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::LitJson::ImporterFunc_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::LitJson::ImporterFunc_2, "LitJson", "ImporterFunc`2");
// Dependencies System.MulticastDelegate
namespace LitJson {
// cpp template
template<typename TJson,typename TValue>
// Is value type: false
// CS Name: LitJson.ImporterFunc`2<TJson,TValue>
class CORDL_TYPE ImporterFunc_2 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(TJson  input, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TValue EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TValue Invoke(TJson  input) ;

static inline ::LitJson::ImporterFunc_2<TJson,TValue>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImporterFunc_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImporterFunc_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImporterFunc_2(ImporterFunc_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImporterFunc_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImporterFunc_2(ImporterFunc_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LitJson
