#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ProgressUpdateDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressUpdateDelegate)
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
namespace DigitalOpus::MB::Core {
class ProgressUpdateDelegate;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::ProgressUpdateDelegate*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, "DigitalOpus.MB.Core", "ProgressUpdateDelegate");
// Dependencies System.MulticastDelegate
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.ProgressUpdateDelegate
class CORDL_TYPE ProgressUpdateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d7e838, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  msg, float_t  progress, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d7e898, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d7e824, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  msg, float_t  progress) ;

static inline ::DigitalOpus::MB::Core::ProgressUpdateDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d7e770, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressUpdateDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressUpdateDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressUpdateDelegate(ProgressUpdateDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressUpdateDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressUpdateDelegate(ProgressUpdateDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22592};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::ProgressUpdateDelegate) == 0x80, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
