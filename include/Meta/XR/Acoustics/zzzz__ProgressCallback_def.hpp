#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/ProgressCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressCallback)
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
namespace Meta::XR::Acoustics {
class ProgressCallback;
}
// Write type traits
MARK_REF_T(::Meta::XR::Acoustics::ProgressCallback*);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::ProgressCallback*, "Meta.XR.Acoustics", "ProgressCallback");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Meta::XR::Acoustics {
// Is value type: false
// CS Name: Meta.XR.Acoustics.ProgressCallback
class CORDL_TYPE ProgressCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9ebf760, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  userData, ::StringW  description, float_t  progress, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9ebf7e4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9ebf74c, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::IntPtr  userData, ::StringW  description, float_t  progress) ;

static inline ::Meta::XR::Acoustics::ProgressCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ebf6ac, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressCallback(ProgressCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressCallback(ProgressCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::Acoustics::ProgressCallback) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
