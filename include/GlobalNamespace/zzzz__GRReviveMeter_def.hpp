#pragma once
// IWYU pragma private; include "GlobalNamespace/GRReviveMeter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
CORDL_MODULE_EXPORT(GRReviveMeter)
namespace GlobalNamespace {
class GRReviveStation;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRReviveMeter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRReviveMeter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRReviveMeter*, "", "GRReviveMeter");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRReviveMeter
class CORDL_TYPE GRReviveMeter : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field meter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_meter, put=__cordl_internal_set_meter)) ::UnityW<::UnityEngine::Transform>  meter;

/// @brief Field reviveStation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveStation, put=__cordl_internal_set_reviveStation)) ::UnityW<::GlobalNamespace::GRReviveStation>  reviveStation;

/// @brief Method Awake, addr 0x58a981c, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRReviveMeter* New_ctor() ;

/// @brief Method Tick, addr 0x58a9820, size 0x1a8, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_meter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_meter() ;

constexpr ::UnityW<::GlobalNamespace::GRReviveStation> const& __cordl_internal_get_reviveStation() const;

constexpr ::UnityW<::GlobalNamespace::GRReviveStation>& __cordl_internal_get_reviveStation() ;

constexpr void __cordl_internal_set_meter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reviveStation(::UnityW<::GlobalNamespace::GRReviveStation>  value) ;

/// @brief Method .ctor, addr 0x58a9b38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRReviveMeter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRReviveMeter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRReviveMeter(GRReviveMeter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRReviveMeter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRReviveMeter(GRReviveMeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2019};

/// [SerializeField]
/// @brief Field reviveStation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRReviveStation>  ___reviveStation;

/// [SerializeField]
/// @brief Field meter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___meter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRReviveMeter, ___reviveStation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRReviveMeter, ___meter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRReviveMeter) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
