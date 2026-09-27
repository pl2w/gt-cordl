#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipBeginSteamCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSteamBeginLoginResponseCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipBeginSteamCallback)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipBeginSteamCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipBeginSteamCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipBeginSteamCallback*, "", "MothershipBeginSteamCallback");
// Dependencies PlayerSteamBeginLoginResponseCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipBeginSteamCallback
class CORDL_TYPE MothershipBeginSteamCallback : public ::GlobalNamespace::PlayerSteamBeginLoginResponseCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipBeginSteamCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53b9324, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53b92c4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipBeginSteamCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipBeginSteamCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipBeginSteamCallback(MothershipBeginSteamCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipBeginSteamCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipBeginSteamCallback(MothershipBeginSteamCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipBeginSteamCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
