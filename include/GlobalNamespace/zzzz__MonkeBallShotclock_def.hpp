#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallShotclock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallShotclock)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallShotclock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallShotclock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallShotclock*, "", "MonkeBallShotclock");
// Dependencies MonoBehaviourTick, UnityEngine.Material
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallShotclock
class CORDL_TYPE MonkeBallShotclock : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field _time, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) float_t  _time;

/// @brief Field _timeInt, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeInt, put=__cordl_internal_set__timeInt)) int32_t  _timeInt;

/// @brief Field backboard, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_backboard, put=__cordl_internal_set_backboard)) ::UnityW<::UnityEngine::Renderer>  backboard;

/// @brief Field neutralMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_neutralMaterial, put=__cordl_internal_set_neutralMaterial)) ::UnityW<::UnityEngine::Material>  neutralMaterial;

/// @brief Field teamMaterials, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamMaterials, put=__cordl_internal_set_teamMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  teamMaterials;

/// @brief Field timeRemainingLabel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeRemainingLabel, put=__cordl_internal_set_timeRemainingLabel)) ::UnityW<::TMPro::TextMeshPro>  timeRemainingLabel;

static inline ::GlobalNamespace::MonkeBallShotclock* New_ctor() ;

/// @brief Method SetBackboard, addr 0x57b0cc8, size 0x98, virtual false, abstract: false, final false
inline void SetBackboard(::UnityEngine::Material*  teamMaterial) ;

/// @brief Method SetTime, addr 0x57afeb0, size 0x6c, virtual false, abstract: false, final false
inline void SetTime(int32_t  teamId, float_t  time) ;

/// @brief Method Tick, addr 0x57b0b7c, size 0x5c, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdateTimeText, addr 0x57b0bd8, size 0xf0, virtual false, abstract: false, final false
inline void UpdateTimeText(float_t  time) ;

constexpr float_t const& __cordl_internal_get__time() const;

constexpr float_t& __cordl_internal_get__time() ;

constexpr int32_t const& __cordl_internal_get__timeInt() const;

constexpr int32_t& __cordl_internal_get__timeInt() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_backboard() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_backboard() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_neutralMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_neutralMaterial() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_teamMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_teamMaterials() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_timeRemainingLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_timeRemainingLabel() ;

constexpr void __cordl_internal_set__time(float_t  value) ;

constexpr void __cordl_internal_set__timeInt(int32_t  value) ;

constexpr void __cordl_internal_set_backboard(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_neutralMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_teamMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_timeRemainingLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x57b0d60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallShotclock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallShotclock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallShotclock(MonkeBallShotclock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallShotclock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallShotclock(MonkeBallShotclock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1558};

/// @brief Field backboard, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___backboard;

/// @brief Field teamMaterials, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___teamMaterials;

/// @brief Field neutralMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___neutralMaterial;

/// @brief Field timeRemainingLabel, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___timeRemainingLabel;

/// @brief Field _time, offset: 0x48, size: 0x4, def value: None
 float_t  ____time;

/// @brief Field _timeInt, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____timeInt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallShotclock, ___backboard) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallShotclock, ___teamMaterials) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallShotclock, ___neutralMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallShotclock, ___timeRemainingLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallShotclock, ____time) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallShotclock, ____timeInt) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallShotclock) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
