#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystemEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__StaticHashWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RoomSystemEffect)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GorillaTag {
struct StaticHashWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomSystemEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomSystemEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystemEffect*, "", "RoomSystemEffect");
// Dependencies GorillaTag.StaticHashWrapper, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomSystemEffect
class CORDL_TYPE RoomSystemEffect : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Registered, put=set_Registered)) bool  Registered;

/// @brief Field <Registered>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Registered_k__BackingField, put=__cordl_internal_set__Registered_k__BackingField)) bool  _Registered_k__BackingField;

 __declspec(property(get=get_ID)) ::GorillaTag::StaticHashWrapper  _cordl_ID;

/// @brief Field m_Id, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Id, put=__cordl_internal_set_m_Id)) ::GorillaTag::StaticHashWrapper  m_Id;

/// @brief Method DisableNetworking, addr 0x5adbf14, size 0x54, virtual false, abstract: false, final false
inline void DisableNetworking() ;

/// @brief Method EnableNetworking, addr 0x5adbec0, size 0x54, virtual false, abstract: false, final false
inline void EnableNetworking() ;

static inline ::GlobalNamespace::RoomSystemEffect* New_ctor() ;

/// @brief Method PlayEffectLocal, addr 0x5adbe3c, size 0x4, virtual false, abstract: false, final false
inline void PlayEffectLocal(::GlobalNamespace::RigContainer*  player) ;

/// @brief Method PlayEffectNetworked, addr 0x5adbe40, size 0x80, virtual false, abstract: false, final false
inline void PlayEffectNetworked(::GlobalNamespace::RigContainer*  player) ;

/// @brief Method PlayNetworkedEffect, addr 0x5ad4f28, size 0x4, virtual false, abstract: false, final false
inline void PlayNetworkedEffect(::GlobalNamespace::RigContainer*  target, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr bool const& __cordl_internal_get__Registered_k__BackingField() const;

constexpr bool& __cordl_internal_get__Registered_k__BackingField() ;

constexpr ::GorillaTag::StaticHashWrapper const& __cordl_internal_get_m_Id() const;

constexpr ::GorillaTag::StaticHashWrapper& __cordl_internal_get_m_Id() ;

constexpr void __cordl_internal_set__Registered_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_Id(::GorillaTag::StaticHashWrapper  value) ;

/// @brief Method .ctor, addr 0x5adbf68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ID, addr 0x5adbe34, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTag::StaticHashWrapper get_ID() ;

/// [CompilerGenerated]
/// @brief Method get_Registered, addr 0x5adbe24, size 0x8, virtual false, abstract: false, final false
inline bool get_Registered() ;

/// [CompilerGenerated]
/// @brief Method set_Registered, addr 0x5adbe2c, size 0x8, virtual false, abstract: false, final false
inline void set_Registered(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomSystemEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomSystemEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomSystemEffect(RoomSystemEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomSystemEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomSystemEffect(RoomSystemEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3403};

/// [CompilerGenerated]
/// @brief Field <Registered>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Registered_k__BackingField;

/// [SerializeField]
/// @brief Field m_Id, offset: 0x14, size: 0x4, def value: None
 ::GorillaTag::StaticHashWrapper  ___m_Id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystemEffect, ____Registered_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemEffect, ___m_Id) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystemEffect) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
