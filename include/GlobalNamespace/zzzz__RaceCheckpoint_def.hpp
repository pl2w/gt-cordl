#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceCheckpoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RaceCheckpoint)
namespace GlobalNamespace {
class RaceCheckpointManager;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class RaceCheckpoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RaceCheckpoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RaceCheckpoint*, "", "RaceCheckpoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RaceCheckpoint
class CORDL_TYPE RaceCheckpoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeCheckpointMat, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCheckpointMat, put=__cordl_internal_set_activeCheckpointMat)) ::UnityW<::UnityEngine::Material>  activeCheckpointMat;

/// @brief Field banner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_banner, put=__cordl_internal_set_banner)) ::UnityW<::UnityEngine::MeshRenderer>  banner;

/// @brief Field checkpointIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkpointIndex, put=__cordl_internal_set_checkpointIndex)) int32_t  checkpointIndex;

/// @brief Field checkpointSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkpointSound, put=__cordl_internal_set_checkpointSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  checkpointSound;

/// @brief Field isCorrect, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCorrect, put=__cordl_internal_set_isCorrect)) bool  isCorrect;

/// @brief Field manager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::RaceCheckpointManager>  manager;

/// @brief Field wrongCheckpointMat, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrongCheckpointMat, put=__cordl_internal_set_wrongCheckpointMat)) ::UnityW<::UnityEngine::Material>  wrongCheckpointMat;

/// @brief Field wrongCheckpointSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrongCheckpointSound, put=__cordl_internal_set_wrongCheckpointSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  wrongCheckpointSound;

/// @brief Method Init, addr 0x568e49c, size 0x34, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::RaceCheckpointManager*  manager, int32_t  index) ;

static inline ::GlobalNamespace::RaceCheckpoint* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x568e504, size 0x120, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method SetIsCorrectCheckpoint, addr 0x568e4d0, size 0x34, virtual false, abstract: false, final false
inline void SetIsCorrectCheckpoint(bool  isCorrect) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_activeCheckpointMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_activeCheckpointMat() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_banner() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_banner() ;

constexpr int32_t const& __cordl_internal_get_checkpointIndex() const;

constexpr int32_t& __cordl_internal_get_checkpointIndex() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_checkpointSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_checkpointSound() ;

constexpr bool const& __cordl_internal_get_isCorrect() const;

constexpr bool& __cordl_internal_get_isCorrect() ;

constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager>& __cordl_internal_get_manager() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_wrongCheckpointMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_wrongCheckpointMat() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_wrongCheckpointSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_wrongCheckpointSound() ;

constexpr void __cordl_internal_set_activeCheckpointMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_banner(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_checkpointIndex(int32_t  value) ;

constexpr void __cordl_internal_set_checkpointSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_isCorrect(bool  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::RaceCheckpointManager>  value) ;

constexpr void __cordl_internal_set_wrongCheckpointMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_wrongCheckpointSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

/// @brief Method .ctor, addr 0x568e6b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaceCheckpoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaceCheckpoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaceCheckpoint(RaceCheckpoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaceCheckpoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaceCheckpoint(RaceCheckpoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{876};

/// [SerializeField]
/// @brief Field banner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___banner;

/// [SerializeField]
/// @brief Field activeCheckpointMat, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___activeCheckpointMat;

/// [SerializeField]
/// @brief Field wrongCheckpointMat, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___wrongCheckpointMat;

/// [SerializeField]
/// @brief Field checkpointSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___checkpointSound;

/// [SerializeField]
/// @brief Field wrongCheckpointSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___wrongCheckpointSound;

/// @brief Field manager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RaceCheckpointManager>  ___manager;

/// @brief Field checkpointIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___checkpointIndex;

/// @brief Field isCorrect, offset: 0x54, size: 0x1, def value: None
 bool  ___isCorrect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___banner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___activeCheckpointMat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___wrongCheckpointMat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___checkpointSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___wrongCheckpointSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___manager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___checkpointIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RaceCheckpoint, ___isCorrect) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RaceCheckpoint) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
