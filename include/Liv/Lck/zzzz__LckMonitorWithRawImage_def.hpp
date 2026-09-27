#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonitorWithRawImage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__LckMonitor_def.hpp"
CORDL_MODULE_EXPORT(LckMonitorWithRawImage)
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Liv::Lck {
class LckMonitorWithRawImage;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckMonitorWithRawImage*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckMonitorWithRawImage*, "Liv.Lck", "LckMonitorWithRawImage");
// Dependencies Liv.Lck.LckMonitor
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckMonitorWithRawImage
class CORDL_TYPE LckMonitorWithRawImage : public ::Liv::Lck::LckMonitor {
public:
// Declarations
/// @brief Field _correctImageSize, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__correctImageSize, put=__cordl_internal_set__correctImageSize)) bool  _correctImageSize;

/// @brief Field _monitorImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitorImage, put=__cordl_internal_set__monitorImage)) ::UnityW<::UnityEngine::UI::RawImage>  _monitorImage;

static inline ::Liv::Lck::LckMonitorWithRawImage* New_ctor() ;

/// @brief Method OnDisable, addr 0x9ce4ce0, size 0xdc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetRenderTexture, addr 0x9ce4b04, size 0x1dc, virtual true, abstract: false, final false
inline void SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture) ;

constexpr bool const& __cordl_internal_get__correctImageSize() const;

constexpr bool& __cordl_internal_get__correctImageSize() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__monitorImage() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__monitorImage() ;

constexpr void __cordl_internal_set__correctImageSize(bool  value) ;

constexpr void __cordl_internal_set__monitorImage(::UnityW<::UnityEngine::UI::RawImage>  value) ;

/// @brief Method .ctor, addr 0x9ce4dbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMonitorWithRawImage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMonitorWithRawImage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMonitorWithRawImage(LckMonitorWithRawImage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMonitorWithRawImage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMonitorWithRawImage(LckMonitorWithRawImage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24737};

/// [SerializeField]
/// @brief Field _monitorImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ____monitorImage;

/// [SerializeField]
/// @brief Field _correctImageSize, offset: 0x38, size: 0x1, def value: None
 bool  ____correctImageSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckMonitorWithRawImage, ____monitorImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckMonitorWithRawImage, ____correctImageSize) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckMonitorWithRawImage) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck
