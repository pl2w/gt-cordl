#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBankSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SoundBankSO)
// Forward declare root types
namespace GlobalNamespace {
class SoundBankSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundBankSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundBankSO*, "", "SoundBankSO");
// [CreateAssetMenu(menuName = "Gorilla Tag/SoundBankSO")]
// Dependencies UnityEngine.AudioClip, UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundBankSO
class CORDL_TYPE SoundBankSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field pitchRange, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchRange, put=__cordl_internal_set_pitchRange)) ::UnityEngine::Vector2  pitchRange;

/// @brief Field sounds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sounds, put=__cordl_internal_set_sounds)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  sounds;

/// @brief Field volumeRange, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumeRange, put=__cordl_internal_set_volumeRange)) ::UnityEngine::Vector2  volumeRange;

static inline ::GlobalNamespace::SoundBankSO* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pitchRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pitchRange() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_sounds() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_sounds() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_volumeRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_volumeRange() ;

constexpr void __cordl_internal_set_pitchRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_sounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_volumeRange(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x5b0f448, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundBankSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundBankSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundBankSO(SoundBankSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundBankSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundBankSO(SoundBankSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3547};

/// @brief Field sounds, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___sounds;

/// @brief Field volumeRange, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___volumeRange;

/// @brief Field pitchRange, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pitchRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundBankSO, ___sounds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankSO, ___volumeRange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankSO, ___pitchRange) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundBankSO) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
