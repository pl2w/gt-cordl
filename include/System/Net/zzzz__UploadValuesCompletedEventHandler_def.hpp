#pragma once
// IWYU pragma private; include "System/Net/UploadValuesCompletedEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UploadValuesCompletedEventHandler)
namespace System::Net {
class UploadValuesCompletedEventArgs;
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
namespace System::Net {
class UploadValuesCompletedEventHandler;
}
// Write type traits
MARK_REF_T(::System::Net::UploadValuesCompletedEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Net::UploadValuesCompletedEventHandler*, "System.Net", "UploadValuesCompletedEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UploadValuesCompletedEventHandler
class CORDL_TYPE UploadValuesCompletedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac54470, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::Net::UploadValuesCompletedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac54498, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac5445c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Net::UploadValuesCompletedEventArgs*  e) ;

static inline ::System::Net::UploadValuesCompletedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac4f620, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadValuesCompletedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadValuesCompletedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadValuesCompletedEventHandler(UploadValuesCompletedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadValuesCompletedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadValuesCompletedEventHandler(UploadValuesCompletedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10468};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::UploadValuesCompletedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::Net
