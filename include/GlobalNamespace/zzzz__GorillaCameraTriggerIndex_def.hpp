#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraTriggerIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaCameraTriggerIndex)
namespace GlobalNamespace {
class GorillaCameraSceneTrigger;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaCameraTriggerIndex;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaCameraTriggerIndex*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaCameraTriggerIndex*, "", "GorillaCameraTriggerIndex");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaCameraTriggerIndex
class CORDL_TYPE GorillaCameraTriggerIndex : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field parentTrigger, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTrigger, put=__cordl_internal_set_parentTrigger)) ::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger>  parentTrigger;

/// @brief Field sceneTriggerIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneTriggerIndex, put=__cordl_internal_set_sceneTriggerIndex)) int32_t  sceneTriggerIndex;

static inline ::GlobalNamespace::GorillaCameraTriggerIndex* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x579d7dc, size 0x98, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x579d874, size 0x84, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x579d784, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger> const& __cordl_internal_get_parentTrigger() const;

constexpr ::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger>& __cordl_internal_get_parentTrigger() ;

constexpr int32_t const& __cordl_internal_get_sceneTriggerIndex() const;

constexpr int32_t& __cordl_internal_get_sceneTriggerIndex() ;

constexpr void __cordl_internal_set_parentTrigger(::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger>  value) ;

constexpr void __cordl_internal_set_sceneTriggerIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x579d8f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCameraTriggerIndex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraTriggerIndex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCameraTriggerIndex(GorillaCameraTriggerIndex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraTriggerIndex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCameraTriggerIndex(GorillaCameraTriggerIndex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1500};

/// @brief Field sceneTriggerIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___sceneTriggerIndex;

/// @brief Field parentTrigger, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger>  ___parentTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaCameraTriggerIndex, ___sceneTriggerIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraTriggerIndex, ___parentTrigger) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaCameraTriggerIndex) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
