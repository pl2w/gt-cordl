#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DevInspectorScanner)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class DevInspectorScanner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevInspectorScanner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevInspectorScanner*, "", "DevInspectorScanner");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevInspectorScanner
class CORDL_TYPE DevInspectorScanner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hintTextOutput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hintTextOutput, put=__cordl_internal_set_hintTextOutput)) ::UnityW<::UnityEngine::UI::Text>  hintTextOutput;

/// @brief Field rayPerDegree, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayPerDegree, put=__cordl_internal_set_rayPerDegree)) float_t  rayPerDegree;

/// @brief Field scanAngle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scanAngle, put=__cordl_internal_set_scanAngle)) float_t  scanAngle;

/// @brief Field scanDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_scanDistance, put=__cordl_internal_set_scanDistance)) float_t  scanDistance;

/// @brief Field scanLayerMask, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scanLayerMask, put=__cordl_internal_set_scanLayerMask)) ::UnityEngine::LayerMask  scanLayerMask;

/// @brief Field targetComponentName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetComponentName, put=__cordl_internal_set_targetComponentName)) ::StringW  targetComponentName;

static inline ::GlobalNamespace::DevInspectorScanner* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_hintTextOutput() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_hintTextOutput() ;

constexpr float_t const& __cordl_internal_get_rayPerDegree() const;

constexpr float_t& __cordl_internal_get_rayPerDegree() ;

constexpr float_t const& __cordl_internal_get_scanAngle() const;

constexpr float_t& __cordl_internal_get_scanAngle() ;

constexpr float_t const& __cordl_internal_get_scanDistance() const;

constexpr float_t& __cordl_internal_get_scanDistance() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_scanLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_scanLayerMask() ;

constexpr ::StringW const& __cordl_internal_get_targetComponentName() const;

constexpr ::StringW& __cordl_internal_get_targetComponentName() ;

constexpr void __cordl_internal_set_hintTextOutput(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_rayPerDegree(float_t  value) ;

constexpr void __cordl_internal_set_scanAngle(float_t  value) ;

constexpr void __cordl_internal_set_scanDistance(float_t  value) ;

constexpr void __cordl_internal_set_scanLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_targetComponentName(::StringW  value) ;

/// @brief Method .ctor, addr 0x566fa4c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevInspectorScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevInspectorScanner(DevInspectorScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevInspectorScanner(DevInspectorScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{813};

/// @brief Field hintTextOutput, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___hintTextOutput;

/// @brief Field scanDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___scanDistance;

/// @brief Field scanAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  ___scanAngle;

/// @brief Field scanLayerMask, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___scanLayerMask;

/// @brief Field targetComponentName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___targetComponentName;

/// @brief Field rayPerDegree, offset: 0x40, size: 0x4, def value: None
 float_t  ___rayPerDegree;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevInspectorScanner, ___hintTextOutput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspectorScanner, ___scanDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspectorScanner, ___scanAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspectorScanner, ___scanLayerMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspectorScanner, ___targetComponentName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevInspectorScanner, ___rayPerDegree) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevInspectorScanner) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
