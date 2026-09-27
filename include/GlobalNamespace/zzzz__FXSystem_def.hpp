#pragma once
// IWYU pragma private; include "GlobalNamespace/FXSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FXSArgs_def.hpp"
#include "GlobalNamespace/zzzz__IFXEffectContextObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FXSystem)
namespace GlobalNamespace {
class FXSystemSettings;
}
namespace GlobalNamespace {
struct FXType;
}
namespace GlobalNamespace {
template<typename T>
class IFXContextParems_1;
}
namespace GlobalNamespace {
class IFXContext;
}
namespace GlobalNamespace {
class IFXEffectContextObject;
}
namespace GlobalNamespace {
template<typename T>
class IFXEffectContext_1;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FXSystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FXSystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FXSystem*, "", "FXSystem");
// Dependencies FXSArgs, IFXEffectContextObject, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FXSystem
class CORDL_TYPE FXSystem : public ::System::Object {
public:
// Declarations
/// @brief Method CheckCallSpam, addr 0x5ac455c, size 0x6c, virtual false, abstract: false, final false
static inline bool CheckCallSpam(::GlobalNamespace::FXSystemSettings*  settings, int32_t  index, double_t  serverTime) ;

/// @brief Method PlayFX, addr 0x5ac46e0, size 0x5b4, virtual false, abstract: false, final false
static inline void PlayFX(::GlobalNamespace::IFXEffectContextObject*  effectContext) ;

/// @brief Method PlayFX, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::FXSArgs*>)
static inline void PlayFX(::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXContextParems_1<T>*  context, T  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayFXForRig, addr 0x5ac43e4, size 0x178, virtual false, abstract: false, final false
static inline void PlayFXForRig(::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXContext*  context, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayFXForRig, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IFXEffectContextObject*>)
static inline void PlayFXForRig(::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXEffectContext_1<T>*  context, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayFXForRigValidated, addr 0x5ac45c8, size 0x118, virtual false, abstract: false, final false
static inline void PlayFXForRigValidated(::System::Collections::Generic::List_1<int32_t>*  hashes, ::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXContext*  context, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FXSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FXSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FXSystem(FXSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FXSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FXSystem(FXSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FXSystem) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
