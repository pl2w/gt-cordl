#pragma once
// IWYU pragma private; include "GlobalNamespace/LckRawImageFillCanvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LckRawImageFillCanvas_ScaleType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckRawImageFillCanvas)
namespace GlobalNamespace {
struct LckRawImageFillCanvas_ScaleType;
}
namespace UnityEngine::UI {
class RawImage;
}
// Forward declare root types
namespace GlobalNamespace {
class LckRawImageFillCanvas;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckRawImageFillCanvas*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckRawImageFillCanvas*, "", "LckRawImageFillCanvas");
// [ExecuteInEditMode]
// Dependencies LckRawImageFillCanvas::ScaleType, UnityEngine.EventSystems.UIBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckRawImageFillCanvas
class CORDL_TYPE LckRawImageFillCanvas : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using ScaleType = ::GlobalNamespace::LckRawImageFillCanvas_ScaleType;

/// @brief Field _rawImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rawImage, put=__cordl_internal_set__rawImage)) ::UnityW<::UnityEngine::UI::RawImage>  _rawImage;

/// @brief Field _scaleType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleType, put=__cordl_internal_set__scaleType)) ::GlobalNamespace::LckRawImageFillCanvas_ScaleType  _scaleType;

static inline ::GlobalNamespace::LckRawImageFillCanvas* New_ctor() ;

/// @brief Method OnEnable, addr 0x56c9a48, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x56c9c00, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSizeDelta, addr 0x56c9a4c, size 0x1b4, virtual false, abstract: false, final false
inline void UpdateSizeDelta() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__rawImage() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__rawImage() ;

constexpr ::GlobalNamespace::LckRawImageFillCanvas_ScaleType const& __cordl_internal_get__scaleType() const;

constexpr ::GlobalNamespace::LckRawImageFillCanvas_ScaleType& __cordl_internal_get__scaleType() ;

constexpr void __cordl_internal_set__rawImage(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set__scaleType(::GlobalNamespace::LckRawImageFillCanvas_ScaleType  value) ;

/// @brief Method .ctor, addr 0x56c9c04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckRawImageFillCanvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRawImageFillCanvas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRawImageFillCanvas(LckRawImageFillCanvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRawImageFillCanvas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRawImageFillCanvas(LckRawImageFillCanvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1035};

/// [SerializeField]
/// @brief Field _rawImage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ____rawImage;

/// [SerializeField]
/// @brief Field _scaleType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::LckRawImageFillCanvas_ScaleType  ____scaleType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckRawImageFillCanvas, ____rawImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckRawImageFillCanvas, ____scaleType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckRawImageFillCanvas) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
