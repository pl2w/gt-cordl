#pragma once
// IWYU pragma private; include "GlobalNamespace/ReleaseCageWhenUpsideDown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReleaseCageWhenUpsideDown)
namespace GlobalNamespace {
class CrittersCage;
}
// Forward declare root types
namespace GlobalNamespace {
class ReleaseCageWhenUpsideDown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReleaseCageWhenUpsideDown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReleaseCageWhenUpsideDown*, "", "ReleaseCageWhenUpsideDown");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReleaseCageWhenUpsideDown
class CORDL_TYPE ReleaseCageWhenUpsideDown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cage, put=__cordl_internal_set_cage)) ::UnityW<::GlobalNamespace::CrittersCage>  cage;

/// @brief Field releaseCritterThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseCritterThreshold, put=__cordl_internal_set_releaseCritterThreshold)) float_t  releaseCritterThreshold;

/// @brief Method Awake, addr 0x56fcf6c, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ReleaseCageWhenUpsideDown* New_ctor() ;

/// @brief Method Update, addr 0x56fcfc4, size 0x180, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::CrittersCage> const& __cordl_internal_get_cage() const;

constexpr ::UnityW<::GlobalNamespace::CrittersCage>& __cordl_internal_get_cage() ;

constexpr float_t const& __cordl_internal_get_releaseCritterThreshold() const;

constexpr float_t& __cordl_internal_get_releaseCritterThreshold() ;

constexpr void __cordl_internal_set_cage(::UnityW<::GlobalNamespace::CrittersCage>  value) ;

constexpr void __cordl_internal_set_releaseCritterThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x56fd144, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReleaseCageWhenUpsideDown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReleaseCageWhenUpsideDown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReleaseCageWhenUpsideDown(ReleaseCageWhenUpsideDown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReleaseCageWhenUpsideDown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReleaseCageWhenUpsideDown(ReleaseCageWhenUpsideDown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{145};

/// @brief Field cage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersCage>  ___cage;

/// [FormerlySerializedAs("dumpThreshold")]
/// [FormerlySerializedAs("angle")]
/// @brief Field releaseCritterThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___releaseCritterThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReleaseCageWhenUpsideDown, ___cage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseCageWhenUpsideDown, ___releaseCritterThreshold) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReleaseCageWhenUpsideDown) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
