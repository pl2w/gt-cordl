#pragma once
// IWYU pragma private; include "GlobalNamespace/FlickerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlickerManager)
// Forward declare root types
namespace GlobalNamespace {
class FlickerManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlickerManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlickerManager*, "", "FlickerManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlickerManager
class CORDL_TYPE FlickerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field FlickerDurations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FlickerDurations, put=__cordl_internal_set_FlickerDurations)) ::ArrayW<float_t>  FlickerDurations;

/// @brief Field FlickerFadeInDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_FlickerFadeInDuration, put=__cordl_internal_set_FlickerFadeInDuration)) float_t  FlickerFadeInDuration;

/// @brief Field FlickerFadeOutDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FlickerFadeOutDuration, put=__cordl_internal_set_FlickerFadeOutDuration)) float_t  FlickerFadeOutDuration;

/// @brief Field LightmapIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_LightmapIndex, put=__cordl_internal_set_LightmapIndex)) int32_t  LightmapIndex;

/// @brief Field _flickerIndex, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__flickerIndex, put=__cordl_internal_set__flickerIndex)) int32_t  _flickerIndex;

/// @brief Field _nextFlickerTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextFlickerTime, put=__cordl_internal_set__nextFlickerTime)) float_t  _nextFlickerTime;

/// @brief Method Awake, addr 0x579abf8, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetServerTime, addr 0x579ae50, size 0x108, virtual false, abstract: false, final false
static inline float_t GetServerTime() ;

static inline ::GlobalNamespace::FlickerManager* New_ctor() ;

/// @brief Method Update, addr 0x579ad58, size 0xf8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_FlickerDurations() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_FlickerDurations() ;

constexpr float_t const& __cordl_internal_get_FlickerFadeInDuration() const;

constexpr float_t& __cordl_internal_get_FlickerFadeInDuration() ;

constexpr float_t const& __cordl_internal_get_FlickerFadeOutDuration() const;

constexpr float_t& __cordl_internal_get_FlickerFadeOutDuration() ;

constexpr int32_t const& __cordl_internal_get_LightmapIndex() const;

constexpr int32_t& __cordl_internal_get_LightmapIndex() ;

constexpr int32_t const& __cordl_internal_get__flickerIndex() const;

constexpr int32_t& __cordl_internal_get__flickerIndex() ;

constexpr float_t const& __cordl_internal_get__nextFlickerTime() const;

constexpr float_t& __cordl_internal_get__nextFlickerTime() ;

constexpr void __cordl_internal_set_FlickerDurations(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_FlickerFadeInDuration(float_t  value) ;

constexpr void __cordl_internal_set_FlickerFadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set_LightmapIndex(int32_t  value) ;

constexpr void __cordl_internal_set__flickerIndex(int32_t  value) ;

constexpr void __cordl_internal_set__nextFlickerTime(float_t  value) ;

/// @brief Method .ctor, addr 0x579af58, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlickerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlickerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlickerManager(FlickerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlickerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlickerManager(FlickerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1480};

/// @brief Field FlickerDurations, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___FlickerDurations;

/// @brief Field FlickerFadeInDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___FlickerFadeInDuration;

/// @brief Field FlickerFadeOutDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___FlickerFadeOutDuration;

/// @brief Field LightmapIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___LightmapIndex;

/// @brief Field _flickerIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  ____flickerIndex;

/// @brief Field _nextFlickerTime, offset: 0x38, size: 0x4, def value: None
 float_t  ____nextFlickerTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlickerManager, ___FlickerDurations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickerManager, ___FlickerFadeInDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickerManager, ___FlickerFadeOutDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickerManager, ___LightmapIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickerManager, ____flickerIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlickerManager, ____nextFlickerTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlickerManager) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
