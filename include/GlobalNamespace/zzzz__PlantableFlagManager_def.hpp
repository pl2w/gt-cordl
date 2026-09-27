#pragma once
// IWYU pragma private; include "GlobalNamespace/PlantableFlagManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlagCauldronColorer_ColorMode_def.hpp"
#include "GlobalNamespace/zzzz__FlagCauldronColorer_def.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_AppliedColors_def.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlantableFlagManager)
namespace GlobalNamespace {
class PlantableFlagManager___c;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PlantableFlagManager;
}
namespace GlobalNamespace {
class PlantableFlagManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlantableFlagManager*);
MARK_REF_T(::GlobalNamespace::PlantableFlagManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlantableFlagManager*, "", "PlantableFlagManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlantableFlagManager___c*, "", "PlantableFlagManager/<>c");
// Dependencies FlagCauldronColorer, FlagCauldronColorer::ColorMode, Photon.Pun.MonoBehaviourPun, PlantableObject, PlantableObject::AppliedColors
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlantableFlagManager
class CORDL_TYPE PlantableFlagManager : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using __c = ::GlobalNamespace::PlantableFlagManager___c;

/// @brief Field cauldrons, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cauldrons, put=__cordl_internal_set_cauldrons)) ::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>>  cauldrons;

/// @brief Field flagColors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_flagColors, put=__cordl_internal_set_flagColors)) ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>>  flagColors;

/// @brief Field flags, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>>  flags;

/// @brief Field mode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode>  mode;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0x567f7dc, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PlantableFlagManager* New_ctor() ;

/// @brief Method OnPhotonSerializeView, addr 0x567fbd4, size 0x1ac, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RainbowifyAllFlags, addr 0x567f6a0, size 0x13c, virtual false, abstract: false, final false
inline void RainbowifyAllFlags(float_t  saturation, float_t  value) ;

/// @brief Method ResetAllFlags, addr 0x567f4dc, size 0x1c4, virtual false, abstract: false, final false
inline void ResetAllFlags() ;

/// @brief Method ResetMyFlags, addr 0x567f438, size 0xa4, virtual false, abstract: false, final false
inline void ResetMyFlags() ;

/// @brief Method Update, addr 0x567f90c, size 0x1b4, virtual false, abstract: false, final false
inline void Update() ;

/// [PunRPC]
/// @brief Method UpdateFlagColorRPC, addr 0x567fac0, size 0x50, virtual false, abstract: false, final false
inline void UpdateFlagColorRPC(int32_t  flagIndex, int32_t  colorIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method UpdateFlagColors, addr 0x567fb10, size 0xc4, virtual false, abstract: false, final false
inline void UpdateFlagColors() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>> const& __cordl_internal_get_cauldrons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>>& __cordl_internal_get_cauldrons() ;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>> const& __cordl_internal_get_flagColors() const;

constexpr ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>>& __cordl_internal_get_flagColors() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>> const& __cordl_internal_get_flags() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>>& __cordl_internal_get_flags() ;

constexpr ::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode> const& __cordl_internal_get_mode() const;

constexpr ::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode>& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set_cauldrons(::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>>  value) ;

constexpr void __cordl_internal_set_flagColors(::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>>  value) ;

constexpr void __cordl_internal_set_flags(::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>>  value) ;

constexpr void __cordl_internal_set_mode(::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode>  value) ;

/// @brief Method .ctor, addr 0x567fd80, size 0xcc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlantableFlagManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlantableFlagManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlantableFlagManager(PlantableFlagManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlantableFlagManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlantableFlagManager(PlantableFlagManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{872};

/// @brief Field flags, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>>  ___flags;

/// @brief Field cauldrons, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>>  ___cauldrons;

/// @brief Field mode, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode>  ___mode;

/// @brief Field flagColors, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>>  ___flagColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlantableFlagManager, ___flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableFlagManager, ___cauldrons) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableFlagManager, ___mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlantableFlagManager, ___flagColors) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlantableFlagManager) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlantableFlagManager/<>c
class CORDL_TYPE PlantableFlagManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PlantableFlagManager___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action*  __9__2_0;

static inline ::GlobalNamespace::PlantableFlagManager___c* New_ctor() ;

/// @brief Method <ResetAllFlags>b__2_0, addr 0x568e32c, size 0x4, virtual false, abstract: false, final false
inline void _ResetAllFlags_b__2_0() ;

/// @brief Method .ctor, addr 0x568e324, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PlantableFlagManager___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__2_0() ;

static inline void setStaticF___9(::GlobalNamespace::PlantableFlagManager___c*  value) ;

static inline void setStaticF___9__2_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlantableFlagManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlantableFlagManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlantableFlagManager___c(PlantableFlagManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlantableFlagManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlantableFlagManager___c(PlantableFlagManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{871};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlantableFlagManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
