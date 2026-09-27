#pragma once
// IWYU pragma private; include "Fusion/TimeProviderCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TimeProviderCallback)
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
namespace Fusion {
class TimeProviderCallback;
}
// Write type traits
MARK_REF_T(::Fusion::TimeProviderCallback*);
DEFINE_IL2CPP_CLASS(::Fusion::TimeProviderCallback*, "Fusion", "TimeProviderCallback");
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.TimeProviderCallback
class CORDL_TYPE TimeProviderCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x600b05c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x600b078, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x600b048, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Fusion::TimeProviderCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x600afac, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeProviderCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeProviderCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeProviderCallback(TimeProviderCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeProviderCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeProviderCallback(TimeProviderCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19368};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::TimeProviderCallback) == 0x80, "Size mismatch!");

} // namespace end def Fusion
