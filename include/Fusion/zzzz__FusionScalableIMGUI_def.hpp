#pragma once
// IWYU pragma private; include "Fusion/FusionScalableIMGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionScalableIMGUI)
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace UnityEngine {
class GUISkin;
}
// Forward declare root types
namespace Fusion {
class FusionScalableIMGUI;
}
// Write type traits
MARK_REF_T(::Fusion::FusionScalableIMGUI*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionScalableIMGUI*, "Fusion", "FusionScalableIMGUI");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionScalableIMGUI
class CORDL_TYPE FusionScalableIMGUI : public ::System::Object {
public:
// Declarations
/// @brief Field _scalableSkin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__scalableSkin, put=setStaticF__scalableSkin)) ::UnityW<::UnityEngine::GUISkin>  _scalableSkin;

/// @brief Method GetScaledSkin, addr 0x60e6058, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GUISkin> GetScaledSkin(::UnityEngine::GUISkin*  baseSkin, ::by_ref<float_t>  height, ::by_ref<float_t>  width, ::by_ref<int32_t>  padding, ::by_ref<int32_t>  margin, ::by_ref<float_t>  boxLeft) ;

/// @brief Method InitializedGUIStyles, addr 0x60e5c2c, size 0x42c, virtual false, abstract: false, final false
static inline void InitializedGUIStyles(::UnityEngine::GUISkin*  baseSkin) ;

/// @brief Method ScaleGuiSkinToScreenHeight, addr 0x60e614c, size 0x3cc, virtual false, abstract: false, final false
static inline ::System::ValueTuple_5<float_t,float_t,int32_t,int32_t,float_t> ScaleGuiSkinToScreenHeight() ;

static inline ::UnityW<::UnityEngine::GUISkin> getStaticF__scalableSkin() ;

static inline void setStaticF__scalableSkin(::UnityW<::UnityEngine::GUISkin>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionScalableIMGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionScalableIMGUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionScalableIMGUI(FusionScalableIMGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionScalableIMGUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionScalableIMGUI(FusionScalableIMGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23450};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionScalableIMGUI) == 0x10, "Size mismatch!");

} // namespace end def Fusion
