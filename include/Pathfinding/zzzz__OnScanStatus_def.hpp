#pragma once
// IWYU pragma private; include "Pathfinding/OnScanStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnScanStatus)
namespace Pathfinding {
struct Progress;
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
namespace Pathfinding {
class OnScanStatus;
}
// Write type traits
MARK_REF_T(::Pathfinding::OnScanStatus*);
DEFINE_IL2CPP_CLASS(::Pathfinding::OnScanStatus*, "Pathfinding", "OnScanStatus");
// Dependencies System.MulticastDelegate
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.OnScanStatus
class CORDL_TYPE OnScanStatus : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e49ec0, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Pathfinding::Progress  progress, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e49f44, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e49eac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Pathfinding::Progress  progress) ;

static inline ::Pathfinding::OnScanStatus* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e49e0c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnScanStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnScanStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnScanStatus(OnScanStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnScanStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnScanStatus(OnScanStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::OnScanStatus) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding
