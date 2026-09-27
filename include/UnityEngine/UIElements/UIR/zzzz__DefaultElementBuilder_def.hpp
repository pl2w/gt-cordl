#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DefaultElementBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__BaseElementBuilder_def.hpp"
CORDL_MODULE_EXPORT(DefaultElementBuilder)
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class DefaultElementBuilder;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::DefaultElementBuilder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::DefaultElementBuilder*, "UnityEngine.UIElements.UIR", "DefaultElementBuilder");
// Dependencies UnityEngine.UIElements.UIR.BaseElementBuilder
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.DefaultElementBuilder
class CORDL_TYPE DefaultElementBuilder : public ::UnityEngine::UIElements::UIR::BaseElementBuilder {
public:
// Declarations
/// @brief Field m_RenderTreeManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderTreeManager, put=__cordl_internal_set_m_RenderTreeManager)) ::UnityEngine::UIElements::UIR::RenderTreeManager*  m_RenderTreeManager;

/// @brief Method DrawVisualElementBackground, addr 0xb7d0384, size 0x1308, virtual true, abstract: false, final false
inline void DrawVisualElementBackground(Il2CppObject*  mgc) ;

/// @brief Method DrawVisualElementBorder, addr 0xb7d168c, size 0x998, virtual true, abstract: false, final false
inline void DrawVisualElementBorder(Il2CppObject*  mgc) ;

/// @brief Method DrawVisualElementStencilMask, addr 0xb7d2024, size 0x11c, virtual true, abstract: false, final false
inline void DrawVisualElementStencilMask(Il2CppObject*  mgc) ;

/// @brief Method GenerateStencilClipEntryForRoundedRectBackground, addr 0xb7d2140, size 0x714, virtual false, abstract: false, final false
static inline void GenerateStencilClipEntryForRoundedRectBackground(Il2CppObject*  mgc) ;

static inline ::UnityEngine::UIElements::UIR::DefaultElementBuilder* New_ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager) ;

/// @brief Method RequiresStencilMask, addr 0xb7d0274, size 0x110, virtual true, abstract: false, final false
inline bool RequiresStencilMask(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method ScheduleMeshGenerationJobs, addr 0xb7d2854, size 0xe4, virtual true, abstract: false, final false
inline void ScheduleMeshGenerationJobs(Il2CppObject*  mgc) ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& __cordl_internal_get_m_RenderTreeManager() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& __cordl_internal_get_m_RenderTreeManager() ;

constexpr void __cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager*  value) ;

/// @brief Method .ctor, addr 0xb7d0244, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultElementBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultElementBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultElementBuilder(DefaultElementBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultElementBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultElementBuilder(DefaultElementBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8513};

/// @brief Field m_RenderTreeManager, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeManager*  ___m_RenderTreeManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::DefaultElementBuilder, ___m_RenderTreeManager) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::DefaultElementBuilder) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
