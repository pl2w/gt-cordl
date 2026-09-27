#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnSoundOnEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnSoundOnEnable)
// Forward declare root types
namespace GlobalNamespace {
class SpawnSoundOnEnable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpawnSoundOnEnable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnSoundOnEnable*, "", "SpawnSoundOnEnable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnSoundOnEnable
class CORDL_TYPE SpawnSoundOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field firstEnabledOccured, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstEnabledOccured, put=__cordl_internal_set_firstEnabledOccured)) bool  firstEnabledOccured;

/// @brief Field soundSubIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundSubIndex, put=__cordl_internal_set_soundSubIndex)) int32_t  soundSubIndex;

/// @brief Field triggerOnFirstEnable, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerOnFirstEnable, put=__cordl_internal_set_triggerOnFirstEnable)) bool  triggerOnFirstEnable;

static inline ::GlobalNamespace::SpawnSoundOnEnable* New_ctor() ;

/// @brief Method OnEnable, addr 0x56fd584, size 0x280, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_firstEnabledOccured() const;

constexpr bool& __cordl_internal_get_firstEnabledOccured() ;

constexpr int32_t const& __cordl_internal_get_soundSubIndex() const;

constexpr int32_t& __cordl_internal_get_soundSubIndex() ;

constexpr bool const& __cordl_internal_get_triggerOnFirstEnable() const;

constexpr bool& __cordl_internal_get_triggerOnFirstEnable() ;

constexpr void __cordl_internal_set_firstEnabledOccured(bool  value) ;

constexpr void __cordl_internal_set_soundSubIndex(int32_t  value) ;

constexpr void __cordl_internal_set_triggerOnFirstEnable(bool  value) ;

/// @brief Method .ctor, addr 0x56fd804, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnSoundOnEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnSoundOnEnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnSoundOnEnable(SpawnSoundOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnSoundOnEnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnSoundOnEnable(SpawnSoundOnEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{147};

/// @brief Field soundSubIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___soundSubIndex;

/// @brief Field triggerOnFirstEnable, offset: 0x24, size: 0x1, def value: None
 bool  ___triggerOnFirstEnable;

/// @brief Field firstEnabledOccured, offset: 0x25, size: 0x1, def value: None
 bool  ___firstEnabledOccured;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnSoundOnEnable, ___soundSubIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnSoundOnEnable, ___triggerOnFirstEnable) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnSoundOnEnable, ___firstEnabledOccured) == 0x25, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpawnSoundOnEnable) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
