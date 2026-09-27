#pragma once
// IWYU pragma private; include "Pathfinding/OnPathDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnPathDelegate)
namespace Pathfinding {
class Path;
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
class OnPathDelegate;
}
// Write type traits
MARK_REF_T(::Pathfinding::OnPathDelegate*);
DEFINE_IL2CPP_CLASS(::Pathfinding::OnPathDelegate*, "Pathfinding", "OnPathDelegate");
// Dependencies System.MulticastDelegate
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.OnPathDelegate
class CORDL_TYPE OnPathDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e49b50, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Pathfinding::Path*  p, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e49b70, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e49b3c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Pathfinding::Path*  p) ;

static inline ::Pathfinding::OnPathDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e49a34, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnPathDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnPathDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnPathDelegate(OnPathDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnPathDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnPathDelegate(OnPathDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21204};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::OnPathDelegate) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding
