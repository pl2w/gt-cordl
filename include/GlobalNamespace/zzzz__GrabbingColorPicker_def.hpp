#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabbingColorPicker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabbingColorPicker)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class PushableSlider;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GrabbingColorPicker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GrabbingColorPicker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabbingColorPicker*, "", "GrabbingColorPicker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabbingColorPicker
class CORDL_TYPE GrabbingColorPicker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field B_PushSlider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_B_PushSlider, put=__cordl_internal_set_B_PushSlider)) ::UnityW<::GlobalNamespace::PushableSlider>  B_PushSlider;

/// @brief Field B_SliderAudio, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_B_SliderAudio, put=__cordl_internal_set_B_SliderAudio)) ::UnityW<::UnityEngine::AudioSource>  B_SliderAudio;

/// @brief Field ColorChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColorChanged, put=__cordl_internal_set_ColorChanged)) ::System::Action*  ColorChanged;

/// @brief Field ColorSwatch, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColorSwatch, put=__cordl_internal_set_ColorSwatch)) ::UnityW<::UnityEngine::GameObject>  ColorSwatch;

/// @brief Field G_PushSlider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_G_PushSlider, put=__cordl_internal_set_G_PushSlider)) ::UnityW<::GlobalNamespace::PushableSlider>  G_PushSlider;

/// @brief Field G_SliderAudio, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_G_SliderAudio, put=__cordl_internal_set_G_SliderAudio)) ::UnityW<::UnityEngine::AudioSource>  G_SliderAudio;

/// @brief Field R_PushSlider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_R_PushSlider, put=__cordl_internal_set_R_PushSlider)) ::UnityW<::GlobalNamespace::PushableSlider>  R_PushSlider;

/// @brief Field R_SliderAudio, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_R_SliderAudio, put=__cordl_internal_set_R_SliderAudio)) ::UnityW<::UnityEngine::AudioSource>  R_SliderAudio;

 __declspec(property(get=get_Segment1, put=set_Segment1)) int32_t  Segment1;

 __declspec(property(get=get_Segment2, put=set_Segment2)) int32_t  Segment2;

 __declspec(property(get=get_Segment3, put=set_Segment3)) int32_t  Segment3;

/// @brief Field UpdateColor, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpdateColor, put=__cordl_internal_set_UpdateColor)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  UpdateColor;

/// @brief Field <Segment1>k__BackingField, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__Segment1_k__BackingField, put=__cordl_internal_set__Segment1_k__BackingField)) int32_t  _Segment1_k__BackingField;

/// @brief Field <Segment2>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Segment2_k__BackingField, put=__cordl_internal_set__Segment2_k__BackingField)) int32_t  _Segment2_k__BackingField;

/// @brief Field <Segment3>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__Segment3_k__BackingField, put=__cordl_internal_set__Segment3_k__BackingField)) int32_t  _Segment3_k__BackingField;

/// @brief Field _cachedB, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedB, put=__cordl_internal_set__cachedB)) float_t  _cachedB;

/// @brief Field _cachedG, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedG, put=__cordl_internal_set__cachedG)) float_t  _cachedG;

/// @brief Field _cachedR, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedR, put=__cordl_internal_set__cachedR)) float_t  _cachedR;

/// @brief Field hasUpdated, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasUpdated, put=__cordl_internal_set_hasUpdated)) bool  hasUpdated;

/// @brief Field setPlayerColor, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_setPlayerColor, put=__cordl_internal_set_setPlayerColor)) bool  setPlayerColor;

/// @brief Field textB, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_textB, put=__cordl_internal_set_textB)) ::UnityW<::TMPro::TextMeshPro>  textB;

/// @brief Field textG, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_textG, put=__cordl_internal_set_textG)) ::UnityW<::TMPro::TextMeshPro>  textG;

/// @brief Field textR, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_textR, put=__cordl_internal_set_textR)) ::UnityW<::TMPro::TextMeshPro>  textR;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method HandleLocalColorChanged, addr 0x5788cac, size 0x4, virtual false, abstract: false, final false
inline void HandleLocalColorChanged(::UnityEngine::Color  newColor) ;

/// @brief Method LoadColor, addr 0x5787488, size 0x308, virtual false, abstract: false, final false
inline void LoadColor(float_t  r, float_t  g, float_t  b) ;

static inline ::GlobalNamespace::GrabbingColorPicker* New_ctor() ;

/// @brief Method OnDisable, addr 0x5787cf4, size 0x300, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57879f4, size 0x300, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetSliders, addr 0x5788cb0, size 0x4, virtual false, abstract: false, final false
inline void ResetSliders(::UnityEngine::Vector3  v) ;

/// @brief Method SetPlayerColor, addr 0x5788594, size 0x3f0, virtual false, abstract: false, final false
inline void SetPlayerColor() ;

/// @brief Method SetSliderColors, addr 0x5788984, size 0x328, virtual false, abstract: false, final false
inline void SetSliderColors(float_t  r, float_t  g, float_t  b) ;

/// @brief Method SliceUpdate, addr 0x5787ff4, size 0x508, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x57873b8, size 0xd0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateDisplay, addr 0x578781c, size 0x1d8, virtual false, abstract: false, final false
inline void UpdateDisplay() ;

constexpr ::UnityW<::GlobalNamespace::PushableSlider> const& __cordl_internal_get_B_PushSlider() const;

constexpr ::UnityW<::GlobalNamespace::PushableSlider>& __cordl_internal_get_B_PushSlider() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_B_SliderAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_B_SliderAudio() ;

constexpr ::System::Action* const& __cordl_internal_get_ColorChanged() const;

constexpr ::System::Action*& __cordl_internal_get_ColorChanged() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ColorSwatch() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ColorSwatch() ;

constexpr ::UnityW<::GlobalNamespace::PushableSlider> const& __cordl_internal_get_G_PushSlider() const;

constexpr ::UnityW<::GlobalNamespace::PushableSlider>& __cordl_internal_get_G_PushSlider() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_G_SliderAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_G_SliderAudio() ;

constexpr ::UnityW<::GlobalNamespace::PushableSlider> const& __cordl_internal_get_R_PushSlider() const;

constexpr ::UnityW<::GlobalNamespace::PushableSlider>& __cordl_internal_get_R_PushSlider() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_R_SliderAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_R_SliderAudio() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_UpdateColor() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_UpdateColor() ;

constexpr int32_t const& __cordl_internal_get__Segment1_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Segment1_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Segment2_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Segment2_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Segment3_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Segment3_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__cachedB() const;

constexpr float_t& __cordl_internal_get__cachedB() ;

constexpr float_t const& __cordl_internal_get__cachedG() const;

constexpr float_t& __cordl_internal_get__cachedG() ;

constexpr float_t const& __cordl_internal_get__cachedR() const;

constexpr float_t& __cordl_internal_get__cachedR() ;

constexpr bool const& __cordl_internal_get_hasUpdated() const;

constexpr bool& __cordl_internal_get_hasUpdated() ;

constexpr bool const& __cordl_internal_get_setPlayerColor() const;

constexpr bool& __cordl_internal_get_setPlayerColor() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_textB() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_textB() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_textG() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_textG() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_textR() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_textR() ;

constexpr void __cordl_internal_set_B_PushSlider(::UnityW<::GlobalNamespace::PushableSlider>  value) ;

constexpr void __cordl_internal_set_B_SliderAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_ColorChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_ColorSwatch(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_G_PushSlider(::UnityW<::GlobalNamespace::PushableSlider>  value) ;

constexpr void __cordl_internal_set_G_SliderAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_R_PushSlider(::UnityW<::GlobalNamespace::PushableSlider>  value) ;

constexpr void __cordl_internal_set_R_SliderAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_UpdateColor(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__Segment1_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Segment2_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Segment3_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__cachedB(float_t  value) ;

constexpr void __cordl_internal_set__cachedG(float_t  value) ;

constexpr void __cordl_internal_set__cachedR(float_t  value) ;

constexpr void __cordl_internal_set_hasUpdated(bool  value) ;

constexpr void __cordl_internal_set_setPlayerColor(bool  value) ;

constexpr void __cordl_internal_set_textB(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_textG(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_textR(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x5788cb4, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ColorChanged, addr 0x5787250, size 0x9c, virtual false, abstract: false, final false
inline void add_ColorChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Segment1, addr 0x5787388, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Segment1() ;

/// [CompilerGenerated]
/// @brief Method get_Segment2, addr 0x5787398, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Segment2() ;

/// [CompilerGenerated]
/// @brief Method get_Segment3, addr 0x57873a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Segment3() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_ColorChanged, addr 0x57872ec, size 0x9c, virtual false, abstract: false, final false
inline void remove_ColorChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Segment1, addr 0x5787390, size 0x8, virtual false, abstract: false, final false
inline void set_Segment1(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Segment2, addr 0x57873a0, size 0x8, virtual false, abstract: false, final false
inline void set_Segment2(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Segment3, addr 0x57873b0, size 0x8, virtual false, abstract: false, final false
inline void set_Segment3(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabbingColorPicker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabbingColorPicker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabbingColorPicker(GrabbingColorPicker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabbingColorPicker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabbingColorPicker(GrabbingColorPicker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1415};

/// [SerializeField]
/// @brief Field setPlayerColor, offset: 0x20, size: 0x1, def value: None
 bool  ___setPlayerColor;

/// [SerializeField]
/// @brief Field R_PushSlider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PushableSlider>  ___R_PushSlider;

/// [SerializeField]
/// @brief Field G_PushSlider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PushableSlider>  ___G_PushSlider;

/// [SerializeField]
/// @brief Field B_PushSlider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PushableSlider>  ___B_PushSlider;

/// [SerializeField]
/// @brief Field R_SliderAudio, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___R_SliderAudio;

/// [SerializeField]
/// @brief Field G_SliderAudio, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___G_SliderAudio;

/// [SerializeField]
/// @brief Field B_SliderAudio, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___B_SliderAudio;

/// [SerializeField]
/// @brief Field textR, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___textR;

/// [SerializeField]
/// @brief Field textG, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___textG;

/// [SerializeField]
/// @brief Field textB, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___textB;

/// [SerializeField]
/// @brief Field ColorSwatch, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ColorSwatch;

/// [SerializeField]
/// @brief Field UpdateColor, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___UpdateColor;

/// [CompilerGenerated]
/// @brief Field ColorChanged, offset: 0x80, size: 0x8, def value: None
 ::System::Action*  ___ColorChanged;

/// [CompilerGenerated]
/// @brief Field <Segment1>k__BackingField, offset: 0x88, size: 0x4, def value: None
 int32_t  ____Segment1_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Segment2>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____Segment2_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Segment3>k__BackingField, offset: 0x90, size: 0x4, def value: None
 int32_t  ____Segment3_k__BackingField;

/// @brief Field _cachedR, offset: 0x94, size: 0x4, def value: None
 float_t  ____cachedR;

/// @brief Field _cachedG, offset: 0x98, size: 0x4, def value: None
 float_t  ____cachedG;

/// @brief Field _cachedB, offset: 0x9c, size: 0x4, def value: None
 float_t  ____cachedB;

/// @brief Field hasUpdated, offset: 0xa0, size: 0x1, def value: None
 bool  ___hasUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___setPlayerColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___R_PushSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___G_PushSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___B_PushSlider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___R_SliderAudio) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___G_SliderAudio) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___B_SliderAudio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___textR) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___textG) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___textB) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___ColorSwatch) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___UpdateColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___ColorChanged) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ____Segment1_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ____Segment2_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ____Segment3_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ____cachedR) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ____cachedG) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ____cachedB) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbingColorPicker, ___hasUpdated) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabbingColorPicker) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
