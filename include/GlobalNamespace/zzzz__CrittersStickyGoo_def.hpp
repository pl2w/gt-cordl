#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersStickyGoo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersStickyGoo)
namespace GlobalNamespace {
class CrittersPawn;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersStickyGoo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersStickyGoo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersStickyGoo*, "", "CrittersStickyGoo");
// Dependencies CrittersActor
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersStickyGoo
class CORDL_TYPE CrittersStickyGoo : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field destroyOnApply, offset 0x194, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyOnApply, put=__cordl_internal_set_destroyOnApply)) bool  destroyOnApply;

/// @brief Field range, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Field readyToDisable, offset 0x195, size 0x1 
 __declspec(property(get=__cordl_internal_get_readyToDisable, put=__cordl_internal_set_readyToDisable)) bool  readyToDisable;

/// @brief Field slowDuration, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowDuration, put=__cordl_internal_set_slowDuration)) float_t  slowDuration;

/// @brief Field slowModifier, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowModifier, put=__cordl_internal_set_slowModifier)) float_t  slowModifier;

/// @brief Method CanAffect, addr 0x56f4574, size 0xc8, virtual false, abstract: false, final false
inline bool CanAffect(::UnityEngine::Vector3  position) ;

/// @brief Method EffectApplied, addr 0x56f463c, size 0x104, virtual false, abstract: false, final false
inline void EffectApplied(::GlobalNamespace::CrittersPawn*  critter) ;

/// @brief Method Initialize, addr 0x56f4558, size 0x1c, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CrittersStickyGoo* New_ctor() ;

/// @brief Method ProcessLocal, addr 0x56f4740, size 0x48, virtual true, abstract: false, final false
inline bool ProcessLocal() ;

constexpr bool const& __cordl_internal_get_destroyOnApply() const;

constexpr bool& __cordl_internal_get_destroyOnApply() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr bool const& __cordl_internal_get_readyToDisable() const;

constexpr bool& __cordl_internal_get_readyToDisable() ;

constexpr float_t const& __cordl_internal_get_slowDuration() const;

constexpr float_t& __cordl_internal_get_slowDuration() ;

constexpr float_t const& __cordl_internal_get_slowModifier() const;

constexpr float_t& __cordl_internal_get_slowModifier() ;

constexpr void __cordl_internal_set_destroyOnApply(bool  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

constexpr void __cordl_internal_set_readyToDisable(bool  value) ;

constexpr void __cordl_internal_set_slowDuration(float_t  value) ;

constexpr void __cordl_internal_set_slowModifier(float_t  value) ;

/// @brief Method .ctor, addr 0x56f4788, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersStickyGoo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersStickyGoo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersStickyGoo(CrittersStickyGoo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersStickyGoo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersStickyGoo(CrittersStickyGoo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{122};

/// [Header("Sticky Goo")]
/// @brief Field range, offset: 0x188, size: 0x4, def value: None
 float_t  ___range;

/// @brief Field slowModifier, offset: 0x18c, size: 0x4, def value: None
 float_t  ___slowModifier;

/// @brief Field slowDuration, offset: 0x190, size: 0x4, def value: None
 float_t  ___slowDuration;

/// @brief Field destroyOnApply, offset: 0x194, size: 0x1, def value: None
 bool  ___destroyOnApply;

/// @brief Field readyToDisable, offset: 0x195, size: 0x1, def value: None
 bool  ___readyToDisable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersStickyGoo, ___range) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersStickyGoo, ___slowModifier) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersStickyGoo, ___slowDuration) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersStickyGoo, ___destroyOnApply) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersStickyGoo, ___readyToDisable) == 0x195, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersStickyGoo) == 0x198, "Size mismatch!");

} // namespace end def GlobalNamespace
