#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBagSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActorSettings_def.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_def.hpp"
CORDL_MODULE_EXPORT(CrittersBagSettings)
namespace GlobalNamespace {
struct CrittersActor_CrittersActorType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersBagSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersBagSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersBagSettings*, "", "CrittersBagSettings");
// Dependencies CrittersActorSettings, CrittersAttachPoint::AnchoredLocationTypes
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersBagSettings
class CORDL_TYPE CrittersBagSettings : public ::GlobalNamespace::CrittersActorSettings {
public:
// Declarations
/// @brief Field anchorLocation, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_anchorLocation, put=__cordl_internal_set_anchorLocation)) ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  anchorLocation;

/// @brief Field attachDisableColliders, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachDisableColliders, put=__cordl_internal_set_attachDisableColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  attachDisableColliders;

/// @brief Field attachSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachSound, put=__cordl_internal_set_attachSound)) ::UnityW<::UnityEngine::AudioClip>  attachSound;

/// @brief Field attachableCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachableCollider, put=__cordl_internal_set_attachableCollider)) ::UnityW<::UnityEngine::Collider>  attachableCollider;

/// @brief Field blockAttachTypes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockAttachTypes, put=__cordl_internal_set_blockAttachTypes)) ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  blockAttachTypes;

/// @brief Field detachSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_detachSound, put=__cordl_internal_set_detachSound)) ::UnityW<::UnityEngine::AudioClip>  detachSound;

/// @brief Field dropCube, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropCube, put=__cordl_internal_set_dropCube)) ::UnityW<::UnityEngine::BoxCollider>  dropCube;

static inline ::GlobalNamespace::CrittersBagSettings* New_ctor() ;

/// @brief Method UpdateActorSettings, addr 0x55fc670, size 0xec, virtual true, abstract: false, final false
inline void UpdateActorSettings() ;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& __cordl_internal_get_anchorLocation() const;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& __cordl_internal_get_anchorLocation() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_attachDisableColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_attachDisableColliders() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_attachSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_attachSound() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_attachableCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_attachableCollider() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>* const& __cordl_internal_get_blockAttachTypes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*& __cordl_internal_get_blockAttachTypes() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_detachSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_detachSound() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_dropCube() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_dropCube() ;

constexpr void __cordl_internal_set_anchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value) ;

constexpr void __cordl_internal_set_attachDisableColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_attachSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_attachableCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_blockAttachTypes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  value) ;

constexpr void __cordl_internal_set_detachSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_dropCube(::UnityW<::UnityEngine::BoxCollider>  value) ;

/// @brief Method .ctor, addr 0x55fc75c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersBagSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersBagSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersBagSettings(CrittersBagSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersBagSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersBagSettings(CrittersBagSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{87};

/// @brief Field attachableCollider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___attachableCollider;

/// @brief Field dropCube, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___dropCube;

/// @brief Field anchorLocation, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  ___anchorLocation;

/// @brief Field attachDisableColliders, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___attachDisableColliders;

/// @brief Field attachSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___attachSound;

/// @brief Field detachSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___detachSound;

/// @brief Field blockAttachTypes, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  ___blockAttachTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersBagSettings, ___attachableCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBagSettings, ___dropCube) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBagSettings, ___anchorLocation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBagSettings, ___attachDisableColliders) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBagSettings, ___attachSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBagSettings, ___detachSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBagSettings, ___blockAttachTypes) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersBagSettings) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
