#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BakerySector_CaptureMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BakerySector)
namespace GlobalNamespace {
class BakerySectorCapture;
}
namespace GlobalNamespace {
struct BakerySector_CaptureMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BakerySector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakerySector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakerySector*, "", "BakerySector");
// [HelpURL("https://geom.io/bakery/wiki/index.php?title=Partial_scene_baking")]
// Dependencies BakerySector::CaptureMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakerySector
class CORDL_TYPE BakerySector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CaptureMode = ::GlobalNamespace::BakerySector_CaptureMode;

/// @brief Field allowUVPaddingAdjustment, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowUVPaddingAdjustment, put=__cordl_internal_set_allowUVPaddingAdjustment)) bool  allowUVPaddingAdjustment;

/// @brief Field captureAsset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_captureAsset, put=__cordl_internal_set_captureAsset)) ::UnityW<::GlobalNamespace::BakerySectorCapture>  captureAsset;

/// @brief Field captureAssetName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_captureAssetName, put=__cordl_internal_set_captureAssetName)) ::StringW  captureAssetName;

/// @brief Field captureMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_captureMode, put=__cordl_internal_set_captureMode)) ::GlobalNamespace::BakerySector_CaptureMode  captureMode;

/// @brief Field cpoints, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cpoints, put=__cordl_internal_set_cpoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  cpoints;

/// @brief Field tforms, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tforms, put=__cordl_internal_set_tforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  tforms;

static inline ::GlobalNamespace::BakerySector* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5f27a1c, size 0x10c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr bool const& __cordl_internal_get_allowUVPaddingAdjustment() const;

constexpr bool& __cordl_internal_get_allowUVPaddingAdjustment() ;

constexpr ::UnityW<::GlobalNamespace::BakerySectorCapture> const& __cordl_internal_get_captureAsset() const;

constexpr ::UnityW<::GlobalNamespace::BakerySectorCapture>& __cordl_internal_get_captureAsset() ;

constexpr ::StringW const& __cordl_internal_get_captureAssetName() const;

constexpr ::StringW& __cordl_internal_get_captureAssetName() ;

constexpr ::GlobalNamespace::BakerySector_CaptureMode const& __cordl_internal_get_captureMode() const;

constexpr ::GlobalNamespace::BakerySector_CaptureMode& __cordl_internal_get_captureMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_cpoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_cpoints() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_tforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_tforms() ;

constexpr void __cordl_internal_set_allowUVPaddingAdjustment(bool  value) ;

constexpr void __cordl_internal_set_captureAsset(::UnityW<::GlobalNamespace::BakerySectorCapture>  value) ;

constexpr void __cordl_internal_set_captureAssetName(::StringW  value) ;

constexpr void __cordl_internal_set_captureMode(::GlobalNamespace::BakerySector_CaptureMode  value) ;

constexpr void __cordl_internal_set_cpoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_tforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method .ctor, addr 0x5f27b28, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakerySector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakerySector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakerySector(BakerySector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakerySector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakerySector(BakerySector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32446};

/// @brief Field captureMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BakerySector_CaptureMode  ___captureMode;

/// @brief Field captureAssetName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___captureAssetName;

/// @brief Field captureAsset, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BakerySectorCapture>  ___captureAsset;

/// @brief Field allowUVPaddingAdjustment, offset: 0x38, size: 0x1, def value: None
 bool  ___allowUVPaddingAdjustment;

/// @brief Field tforms, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___tforms;

/// @brief Field cpoints, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___cpoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakerySector, ___captureMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySector, ___captureAssetName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySector, ___captureAsset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySector, ___allowUVPaddingAdjustment) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySector, ___tforms) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakerySector, ___cpoints) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakerySector) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
