#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/PlayerIdUpdatedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PlayerIdUpdatedEvent)
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
namespace Liv::Lck::Cosmetics {
class PlayerIdUpdatedEvent;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*, "Liv.Lck.Cosmetics", "PlayerIdUpdatedEvent");
// Dependencies System.MulticastDelegate
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.PlayerIdUpdatedEvent
class CORDL_TYPE PlayerIdUpdatedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d05b34, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d05b50, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d05b20, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d05a84, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerIdUpdatedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdUpdatedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerIdUpdatedEvent(PlayerIdUpdatedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdUpdatedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerIdUpdatedEvent(PlayerIdUpdatedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31956};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
