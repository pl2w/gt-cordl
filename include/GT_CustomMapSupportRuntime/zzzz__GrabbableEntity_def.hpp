#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GrabbableEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabbableEntity)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class GrabbableEntity;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::GrabbableEntity*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::GrabbableEntity*, "GT_CustomMapSupportRuntime", "GrabbableEntity");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies GT_CustomMapSupportRuntime.MapEntity
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.GrabbableEntity
class CORDL_TYPE GrabbableEntity : public ::GT_CustomMapSupportRuntime::MapEntity {
public:
// Declarations
/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field catchSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchSound, put=__cordl_internal_set_catchSound)) ::UnityW<::UnityEngine::AudioClip>  catchSound;

/// @brief Field catchSoundVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchSoundVolume, put=__cordl_internal_set_catchSoundVolume)) float_t  catchSoundVolume;

/// @brief Field throwSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwSound, put=__cordl_internal_set_throwSound)) ::UnityW<::UnityEngine::AudioClip>  throwSound;

/// @brief Field throwSoundVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwSoundVolume, put=__cordl_internal_set_throwSoundVolume)) float_t  throwSoundVolume;

/// @brief Method GetPackedCreateData, addr 0x9cb6c88, size 0x10, virtual true, abstract: false, final false
inline int64_t GetPackedCreateData() ;

static inline ::GT_CustomMapSupportRuntime::GrabbableEntity* New_ctor() ;

/// @brief Method UnpackCreateData, addr 0x9cb6c98, size 0x10, virtual false, abstract: false, final false
static inline void UnpackCreateData(int64_t  data, ::by_ref<uint8_t>  entityTypeID, ::by_ref<int16_t>  luaAgentID) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_catchSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_catchSound() ;

constexpr float_t const& __cordl_internal_get_catchSoundVolume() const;

constexpr float_t& __cordl_internal_get_catchSoundVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_throwSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_throwSound() ;

constexpr float_t const& __cordl_internal_get_throwSoundVolume() const;

constexpr float_t& __cordl_internal_get_throwSoundVolume() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_catchSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_catchSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_throwSoundVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x9cb6ca8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabbableEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabbableEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabbableEntity(GrabbableEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabbableEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabbableEntity(GrabbableEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30896};

/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field catchSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___catchSound;

/// @brief Field catchSoundVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ___catchSoundVolume;

/// @brief Field throwSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___throwSound;

/// @brief Field throwSoundVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___throwSoundVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::GrabbableEntity, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GrabbableEntity, ___catchSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GrabbableEntity, ___catchSoundVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GrabbableEntity, ___throwSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GrabbableEntity, ___throwSoundVolume) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::GrabbableEntity) == 0x50, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
