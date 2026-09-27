#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomAudioStart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RandomAudioStart)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAudioStart;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomAudioStart*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomAudioStart*, "", "RandomAudioStart");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomAudioStart
class CORDL_TYPE RandomAudioStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// [ContextMenu("Assign Audio Source")]
/// @brief Method AssignAudioSource, addr 0x5778a50, size 0x58, virtual false, abstract: false, final false
inline void AssignAudioSource() ;

/// @brief Method BuildValidationCheck, addr 0x5778918, size 0xd8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

static inline ::GlobalNamespace::RandomAudioStart* New_ctor() ;

/// @brief Method OnEnable, addr 0x57789f0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x5778aa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomAudioStart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomAudioStart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomAudioStart(RandomAudioStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomAudioStart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomAudioStart(RandomAudioStart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1385};

/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomAudioStart, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomAudioStart) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
