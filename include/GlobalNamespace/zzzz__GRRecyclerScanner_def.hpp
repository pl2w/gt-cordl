#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRecyclerScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRRecyclerScanner)
namespace GlobalNamespace {
class GRRecycler;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GRRecyclerScanner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRRecyclerScanner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRRecyclerScanner*, "", "GRRecyclerScanner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRRecyclerScanner
class CORDL_TYPE GRRecyclerScanner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field annotationText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_annotationText, put=__cordl_internal_set_annotationText)) ::UnityW<::TMPro::TextMeshPro>  annotationText;

/// @brief Field audioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field descriptionText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_descriptionText, put=__cordl_internal_set_descriptionText)) ::UnityW<::TMPro::TextMeshPro>  descriptionText;

/// @brief Field recycleValueText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_recycleValueText, put=__cordl_internal_set_recycleValueText)) ::UnityW<::TMPro::TextMeshPro>  recycleValueText;

/// @brief Field recycler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_recycler, put=__cordl_internal_set_recycler)) ::UnityW<::GlobalNamespace::GRRecycler>  recycler;

/// @brief Field recyclerBarcodeAudio, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_recyclerBarcodeAudio, put=__cordl_internal_set_recyclerBarcodeAudio)) ::UnityW<::UnityEngine::AudioClip>  recyclerBarcodeAudio;

/// @brief Field recyclerBarcodeAudioVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_recyclerBarcodeAudioVolume, put=__cordl_internal_set_recyclerBarcodeAudioVolume)) float_t  recyclerBarcodeAudioVolume;

/// @brief Field titleText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleText, put=__cordl_internal_set_titleText)) ::UnityW<::TMPro::TextMeshPro>  titleText;

/// @brief Method Awake, addr 0x58a8680, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRRecyclerScanner* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x58a8730, size 0x13c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method ScanItem, addr 0x58a7b0c, size 0x334, virtual false, abstract: false, final false
inline void ScanItem(::GlobalNamespace::GameEntityId  id) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_annotationText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_annotationText() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_descriptionText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_descriptionText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_recycleValueText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_recycleValueText() ;

constexpr ::UnityW<::GlobalNamespace::GRRecycler> const& __cordl_internal_get_recycler() const;

constexpr ::UnityW<::GlobalNamespace::GRRecycler>& __cordl_internal_get_recycler() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_recyclerBarcodeAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_recyclerBarcodeAudio() ;

constexpr float_t const& __cordl_internal_get_recyclerBarcodeAudioVolume() const;

constexpr float_t& __cordl_internal_get_recyclerBarcodeAudioVolume() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_titleText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_titleText() ;

constexpr void __cordl_internal_set_annotationText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_descriptionText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_recycleValueText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_recycler(::UnityW<::GlobalNamespace::GRRecycler>  value) ;

constexpr void __cordl_internal_set_recyclerBarcodeAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_recyclerBarcodeAudioVolume(float_t  value) ;

constexpr void __cordl_internal_set_titleText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x58a886c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRRecyclerScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRRecyclerScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRRecyclerScanner(GRRecyclerScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRRecyclerScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRRecyclerScanner(GRRecyclerScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2017};

/// @brief Field recycler, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRRecycler>  ___recycler;

/// [SerializeField]
/// @brief Field titleText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___titleText;

/// [SerializeField]
/// @brief Field descriptionText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___descriptionText;

/// [SerializeField]
/// @brief Field annotationText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___annotationText;

/// [SerializeField]
/// @brief Field recycleValueText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___recycleValueText;

/// @brief Field audioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field recyclerBarcodeAudio, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___recyclerBarcodeAudio;

/// @brief Field recyclerBarcodeAudioVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___recyclerBarcodeAudioVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___recycler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___titleText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___descriptionText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___annotationText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___recycleValueText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___audioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___recyclerBarcodeAudio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecyclerScanner, ___recyclerBarcodeAudioVolume) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRRecyclerScanner) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
