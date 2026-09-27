#pragma once
// IWYU pragma private; include "GlobalNamespace/GREntityDebugCanvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GREntityDebugCanvas)
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GREntityDebugCanvas;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREntityDebugCanvas*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREntityDebugCanvas*, "", "GREntityDebugCanvas");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREntityDebugCanvas
class CORDL_TYPE GREntityDebugCanvas : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field builder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_builder, put=__cordl_internal_set_builder)) ::System::Text::StringBuilder*  builder;

/// @brief Field fontSize, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fontSize, put=__cordl_internal_set_fontSize)) float_t  fontSize;

/// @brief Field prefabAttachOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_prefabAttachOffset, put=__cordl_internal_set_prefabAttachOffset)) ::UnityEngine::Vector3  prefabAttachOffset;

/// @brief Field text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Field textPanelPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textPanelPrefab, put=__cordl_internal_set_textPanelPrefab)) ::UnityW<::UnityEngine::GameObject>  textPanelPrefab;

/// @brief Method Awake, addr 0x5899fd4, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GREntityDebugCanvas* New_ctor() ;

/// @brief Method Start, addr 0x589a038, size 0x240, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x589a344, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActive, addr 0x589a278, size 0xcc, virtual false, abstract: false, final false
inline bool UpdateActive() ;

/// @brief Method UpdateText, addr 0x589a348, size 0x428, virtual false, abstract: false, final false
inline void UpdateText() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_builder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_builder() ;

constexpr float_t const& __cordl_internal_get_fontSize() const;

constexpr float_t& __cordl_internal_get_fontSize() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prefabAttachOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prefabAttachOffset() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_textPanelPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_textPanelPrefab() ;

constexpr void __cordl_internal_set_builder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_fontSize(float_t  value) ;

constexpr void __cordl_internal_set_prefabAttachOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_textPanelPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x589a770, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREntityDebugCanvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREntityDebugCanvas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREntityDebugCanvas(GREntityDebugCanvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREntityDebugCanvas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREntityDebugCanvas(GREntityDebugCanvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1971};

/// [SerializeField]
/// @brief Field text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// @brief Field textPanelPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___textPanelPrefab;

/// @brief Field prefabAttachOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prefabAttachOffset;

/// @brief Field fontSize, offset: 0x3c, size: 0x4, def value: None
 float_t  ___fontSize;

/// @brief Field builder, offset: 0x40, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREntityDebugCanvas, ___text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREntityDebugCanvas, ___textPanelPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREntityDebugCanvas, ___prefabAttachOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREntityDebugCanvas, ___fontSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREntityDebugCanvas, ___builder) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREntityDebugCanvas) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
