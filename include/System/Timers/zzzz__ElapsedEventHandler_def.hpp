#pragma once
// IWYU pragma private; include "System/Timers/ElapsedEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ElapsedEventHandler)
namespace System::Timers {
class ElapsedEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Timers {
class ElapsedEventHandler;
}
// Write type traits
MARK_REF_T(::System::Timers::ElapsedEventHandler*);
DEFINE_IL2CPP_CLASS(::System::Timers::ElapsedEventHandler*, "System.Timers", "ElapsedEventHandler");
// Dependencies System.MulticastDelegate
namespace System::Timers {
// Is value type: false
// CS Name: System.Timers.ElapsedEventHandler
class CORDL_TYPE ElapsedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xad084bc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Timers::ElapsedEventArgs*  e) ;

static inline ::System::Timers::ElapsedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xad083b0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElapsedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElapsedEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ElapsedEventHandler(ElapsedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElapsedEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElapsedEventHandler(ElapsedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Timers::ElapsedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def System::Timers
