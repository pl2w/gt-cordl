#pragma once
// IWYU pragma private; include "GlobalNamespace/DemoSpheresRotate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PerformanceSystems/zzzz__TimeSliceControllerAsset_def.hpp"
#include "PerformanceSystems/zzzz__TimeSliceLodBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DemoSpheresRotate)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class DemoSpheresRotate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DemoSpheresRotate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DemoSpheresRotate*, "", "DemoSpheresRotate");
// Dependencies PerformanceSystems.TimeSliceControllerAsset, PerformanceSystems.TimeSliceLodBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DemoSpheresRotate
class CORDL_TYPE DemoSpheresRotate : public ::PerformanceSystems::TimeSliceLodBehaviour {
public:
// Declarations
/// @brief Field _black, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__black, put=__cordl_internal_set__black)) ::UnityW<::UnityEngine::Material>  _black;

/// @brief Field _green, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__green, put=__cordl_internal_set__green)) ::UnityW<::UnityEngine::Material>  _green;

/// @brief Field _red, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__red, put=__cordl_internal_set__red)) ::UnityW<::UnityEngine::Material>  _red;

/// @brief Field _renderer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _rotationSpeed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Field _timeSliceControllerAssets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSliceControllerAssets, put=__cordl_internal_set__timeSliceControllerAssets)) ::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>>  _timeSliceControllerAssets;

static inline ::GlobalNamespace::DemoSpheresRotate* New_ctor() ;

/// @brief Method OnLod0Enter, addr 0x5ae0180, size 0x4c, virtual false, abstract: false, final false
inline void OnLod0Enter() ;

/// @brief Method OnLod1Enter, addr 0x5ae02d4, size 0x4c, virtual false, abstract: false, final false
inline void OnLod1Enter() ;

/// @brief Method OnLod2Enter, addr 0x5ae0320, size 0x4c, virtual false, abstract: false, final false
inline void OnLod2Enter() ;

/// @brief Method OnLodExit, addr 0x5ae036c, size 0x24, virtual false, abstract: false, final false
inline void OnLodExit() ;

/// @brief Method SliceUpdate, addr 0x5ae0390, size 0x94, virtual true, abstract: false, final false
inline void SliceUpdate(float_t  deltaTime) ;

/// @brief Method SwapToTimeSlicer, addr 0x5ae01cc, size 0x108, virtual false, abstract: false, final false
inline void SwapToTimeSlicer(int32_t  index) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__black() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__black() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__green() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__green() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__red() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__red() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr ::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>> const& __cordl_internal_get__timeSliceControllerAssets() const;

constexpr ::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>>& __cordl_internal_get__timeSliceControllerAssets() ;

constexpr void __cordl_internal_set__black(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__green(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__red(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__timeSliceControllerAssets(::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>>  value) ;

/// @brief Method .ctor, addr 0x5ae0424, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DemoSpheresRotate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DemoSpheresRotate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DemoSpheresRotate(DemoSpheresRotate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DemoSpheresRotate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DemoSpheresRotate(DemoSpheresRotate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3450};

/// [SerializeField]
/// @brief Field _timeSliceControllerAssets, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>>  ____timeSliceControllerAssets;

/// [SerializeField]
/// @brief Field _rotationSpeed, offset: 0x60, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// [SerializeField]
/// @brief Field _red, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____red;

/// [SerializeField]
/// @brief Field _green, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____green;

/// [SerializeField]
/// @brief Field _black, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____black;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DemoSpheresRotate, ____timeSliceControllerAssets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoSpheresRotate, ____rotationSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoSpheresRotate, ____red) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoSpheresRotate, ____green) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoSpheresRotate, ____black) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoSpheresRotate, ____renderer) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DemoSpheresRotate) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
