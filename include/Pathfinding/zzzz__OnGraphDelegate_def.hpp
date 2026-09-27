#pragma once
// IWYU pragma private; include "Pathfinding/OnGraphDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnGraphDelegate)
namespace Pathfinding {
class NavGraph;
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
class OnGraphDelegate;
}
// Write type traits
MARK_REF_T(::Pathfinding::OnGraphDelegate*);
DEFINE_IL2CPP_CLASS(::Pathfinding::OnGraphDelegate*, "Pathfinding", "OnGraphDelegate");
// Dependencies System.MulticastDelegate
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.OnGraphDelegate
class CORDL_TYPE OnGraphDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5e49c98, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Pathfinding::NavGraph*  graph, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5e49cb8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5e49c84, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Pathfinding::NavGraph*  graph) ;

static inline ::Pathfinding::OnGraphDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5e49b7c, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnGraphDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnGraphDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnGraphDelegate(OnGraphDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnGraphDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnGraphDelegate(OnGraphDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21205};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::OnGraphDelegate) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding
