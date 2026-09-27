#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressDisplay)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressDisplay*, "", "ProgressDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressDisplay
class CORDL_TYPE ProgressDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field largestNumberToShow, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_largestNumberToShow, put=__cordl_internal_set_largestNumberToShow)) int32_t  largestNumberToShow;

/// @brief Field progressImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressImage, put=__cordl_internal_set_progressImage)) ::UnityW<::UnityEngine::UI::Image>  progressImage;

/// @brief Field root, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::GameObject>  root;

/// @brief Field text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

static inline ::GlobalNamespace::ProgressDisplay* New_ctor() ;

/// @brief Method Reset, addr 0x5628884, size 0x24, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetProgress, addr 0x5628938, size 0x18, virtual false, abstract: false, final false
inline void SetProgress(float_t  progress) ;

/// @brief Method SetProgress, addr 0x5624fd4, size 0x18c, virtual false, abstract: false, final false
inline void SetProgress(int32_t  progress, int32_t  total) ;

/// @brief Method SetTextVisible, addr 0x56288c4, size 0x74, virtual false, abstract: false, final false
inline void SetTextVisible(bool  visible) ;

/// @brief Method SetVisible, addr 0x56288a8, size 0x1c, virtual false, abstract: false, final false
inline void SetVisible(bool  visible) ;

constexpr int32_t const& __cordl_internal_get_largestNumberToShow() const;

constexpr int32_t& __cordl_internal_get_largestNumberToShow() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_progressImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_progressImage() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_root() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set_largestNumberToShow(int32_t  value) ;

constexpr void __cordl_internal_set_progressImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5628950, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressDisplay(ProgressDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressDisplay(ProgressDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{597};

/// [SerializeField]
/// @brief Field root, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___root;

/// [SerializeField]
/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// [SerializeField]
/// @brief Field progressImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___progressImage;

/// [SerializeField]
/// @brief Field largestNumberToShow, offset: 0x38, size: 0x4, def value: None
 int32_t  ___largestNumberToShow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___root) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___progressImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressDisplay, ___largestNumberToShow) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressDisplay) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
