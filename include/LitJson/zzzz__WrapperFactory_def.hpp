#pragma once
// IWYU pragma private; include "LitJson/WrapperFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(WrapperFactory)
namespace LitJson {
class IJsonWrapper;
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
class WrapperFactory;
}
// Write type traits
MARK_REF_T(::LitJson::WrapperFactory*);
DEFINE_IL2CPP_CLASS(::LitJson::WrapperFactory*, "LitJson", "WrapperFactory");
// Dependencies System.MulticastDelegate
namespace LitJson {
// Is value type: false
// CS Name: LitJson.WrapperFactory
class CORDL_TYPE WrapperFactory : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b5fc9c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b5fcb8, size 0xc, virtual true, abstract: false, final false
inline ::LitJson::IJsonWrapper* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b5fc88, size 0x14, virtual true, abstract: false, final false
inline ::LitJson::IJsonWrapper* Invoke() ;

static inline ::LitJson::WrapperFactory* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b5fbec, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WrapperFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WrapperFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WrapperFactory(WrapperFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WrapperFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WrapperFactory(WrapperFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LitJson::WrapperFactory) == 0x80, "Size mismatch!");

} // namespace end def LitJson
