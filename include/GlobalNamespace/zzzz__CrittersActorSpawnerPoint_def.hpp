#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorSpawnerPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersActorSpawnerPoint)
namespace GlobalNamespace {
class CrittersActor;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersActorSpawnerPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersActorSpawnerPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActorSpawnerPoint*, "", "CrittersActorSpawnerPoint");
// Dependencies CrittersActor
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersActorSpawnerPoint
class CORDL_TYPE CrittersActorSpawnerPoint : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field OnSpawnChanged, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSpawnChanged, put=__cordl_internal_set_OnSpawnChanged)) ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  OnSpawnChanged;

/// @brief Field spawnedActor, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedActor, put=__cordl_internal_set_spawnedActor)) ::UnityW<::GlobalNamespace::CrittersActor>  spawnedActor;

/// @brief Field spawnedActorID, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnedActorID, put=__cordl_internal_set_spawnedActorID)) int32_t  spawnedActorID;

/// @brief Method AddActorDataToList, addr 0x55fb09c, size 0xf0, virtual true, abstract: false, final false
inline int32_t AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method Initialize, addr 0x55fad28, size 0x28, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CrittersActorSpawnerPoint* New_ctor() ;

/// @brief Method OnDisable, addr 0x55fad50, size 0x2c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SendDataByCrittersActorType, addr 0x55faf5c, size 0x58, virtual true, abstract: false, final false
inline void SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SetSpawnedActor, addr 0x55fad7c, size 0xec, virtual false, abstract: false, final false
inline void SetSpawnedActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method TotalActorDataLength, addr 0x55fb18c, size 0x18, virtual true, abstract: false, final false
inline int32_t TotalActorDataLength() ;

/// @brief Method UpdateFromRPC, addr 0x55fb1a4, size 0x100, virtual true, abstract: false, final false
inline int32_t UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateSpawnedActor, addr 0x55fae68, size 0xf4, virtual false, abstract: false, final false
inline void UpdateSpawnedActor(int32_t  newSpawnedActorID) ;

/// @brief Method UpdateSpecificActor, addr 0x55fafb4, size 0xe8, virtual true, abstract: false, final false
inline bool UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream) ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_OnSpawnChanged() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_OnSpawnChanged() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_spawnedActor() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_spawnedActor() ;

constexpr int32_t const& __cordl_internal_get_spawnedActorID() const;

constexpr int32_t& __cordl_internal_get_spawnedActorID() ;

constexpr void __cordl_internal_set_OnSpawnChanged(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_spawnedActor(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_spawnedActorID(int32_t  value) ;

/// @brief Method .ctor, addr 0x55fb2a4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnSpawnChanged, addr 0x55fabc8, size 0xb0, virtual false, abstract: false, final false
inline void add_OnSpawnChanged(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSpawnChanged, addr 0x55fac78, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnSpawnChanged(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersActorSpawnerPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSpawnerPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActorSpawnerPoint(CrittersActorSpawnerPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSpawnerPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActorSpawnerPoint(CrittersActorSpawnerPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{80};

/// @brief Field spawnedActor, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___spawnedActor;

/// @brief Field spawnedActorID, offset: 0x190, size: 0x4, def value: None
 int32_t  ___spawnedActorID;

/// [CompilerGenerated]
/// @brief Field OnSpawnChanged, offset: 0x198, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___OnSpawnChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerPoint, ___spawnedActor) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerPoint, ___spawnedActorID) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerPoint, ___OnSpawnChanged) == 0x198, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActorSpawnerPoint) == 0x1a0, "Size mismatch!");

} // namespace end def GlobalNamespace
