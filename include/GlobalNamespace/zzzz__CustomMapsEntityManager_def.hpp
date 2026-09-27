#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsEntityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
CORDL_MODULE_EXPORT(CustomMapsEntityManager)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsEntityManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsEntityManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsEntityManager*, "", "CustomMapsEntityManager");
// [NetworkBehaviourWeaved(0)]
// Dependencies GameEntityManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsEntityManager
class CORDL_TYPE CustomMapsEntityManager : public ::GlobalNamespace::GameEntityManager {
public:
// Declarations
/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x59c4adc, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x59c4ae4, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method IsInZone, addr 0x59c48e4, size 0x1a0, virtual true, abstract: false, final false
inline bool IsInZone() ;

/// @brief Method IsOverrideEnabled, addr 0x59c4760, size 0xa4, virtual false, abstract: false, final false
static inline bool IsOverrideEnabled() ;

/// @brief Method IsPositionInManagerBounds, addr 0x59c4804, size 0xe0, virtual true, abstract: false, final false
inline bool IsPositionInManagerBounds(::UnityEngine::Vector3  pos) ;

static inline ::GlobalNamespace::CustomMapsEntityManager* New_ctor() ;

/// @brief Method .ctor, addr 0x59c4a84, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsEntityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsEntityManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsEntityManager(CustomMapsEntityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsEntityManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsEntityManager(CustomMapsEntityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2678};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomMapsEntityManager) == 0x240, "Size mismatch!");

} // namespace end def GlobalNamespace
