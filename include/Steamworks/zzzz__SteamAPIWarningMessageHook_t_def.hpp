#pragma once
// IWYU pragma private; include "Steamworks/SteamAPIWarningMessageHook_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamAPIWarningMessageHook_t)
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamAPIWarningMessageHook_t*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamAPIWarningMessageHook_t*, "Steamworks", "SteamAPIWarningMessageHook_t");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamAPIWarningMessageHook_t
class CORDL_TYPE SteamAPIWarningMessageHook_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x5f335ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  nSeverity, ::System::Text::StringBuilder*  pchDebugText) ;

static inline ::Steamworks::SteamAPIWarningMessageHook_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f3350c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAPIWarningMessageHook_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAPIWarningMessageHook_t", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAPIWarningMessageHook_t(SteamAPIWarningMessageHook_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAPIWarningMessageHook_t", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAPIWarningMessageHook_t(SteamAPIWarningMessageHook_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamAPIWarningMessageHook_t) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
