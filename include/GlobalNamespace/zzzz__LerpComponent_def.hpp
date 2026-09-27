#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LerpComponent)
namespace GlobalNamespace {
class LerpChangedEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class LerpComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LerpComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LerpComponent*, "", "LerpComponent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LerpComponent
class CORDL_TYPE LerpComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanRender)) bool  CanRender;

 __declspec(property(get=get_Lerp, put=set_Lerp)) float_t  Lerp;

 __declspec(property(get=get_LerpTime, put=set_LerpTime)) float_t  LerpTime;

/// @brief Field _cancelPreview, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__cancelPreview, put=__cordl_internal_set__cancelPreview)) bool  _cancelPreview;

/// @brief Field _lastState, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastState, put=__cordl_internal_set__lastState)) int32_t  _lastState;

/// @brief Field _lerp, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerp, put=__cordl_internal_set__lerp)) float_t  _lerp;

/// @brief Field _lerpLength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpLength, put=__cordl_internal_set__lerpLength)) float_t  _lerpLength;

/// @brief Field _onLerpChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLerpChanged, put=__cordl_internal_set__onLerpChanged)) ::GlobalNamespace::LerpChangedEvent*  _onLerpChanged;

/// @brief Field _prevLerpFrom, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevLerpFrom, put=__cordl_internal_set__prevLerpFrom)) float_t  _prevLerpFrom;

/// @brief Field _prevLerpTo, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevLerpTo, put=__cordl_internal_set__prevLerpTo)) float_t  _prevLerpTo;

/// @brief Field _previewInEditor, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__previewInEditor, put=__cordl_internal_set__previewInEditor)) bool  _previewInEditor;

/// @brief Field _previewing, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__previewing, put=__cordl_internal_set__previewing)) bool  _previewing;

/// @brief Field _rendering, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get__rendering, put=__cordl_internal_set__rendering)) bool  _rendering;

/// @brief Method GetState, addr 0x5a1d494, size 0x98, virtual true, abstract: false, final false
inline int32_t GetState() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method LerpToOne, addr 0x5a1d548, size 0x4, virtual false, abstract: false, final false
inline void LerpToOne() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method LerpToZero, addr 0x5a1d54c, size 0x4, virtual false, abstract: false, final false
inline void LerpToZero() ;

static inline ::GlobalNamespace::LerpComponent* New_ctor() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method OnDrawGizmosSelected, addr 0x5a1d540, size 0x4, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnLerp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLerp(float_t  t) ;

/// @brief Method RenderLerp, addr 0x5a1d484, size 0x10, virtual false, abstract: false, final false
inline void RenderLerp() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method StartPreview, addr 0x5a1d550, size 0x4, virtual false, abstract: false, final false
inline void StartPreview(float_t  lerpFrom, float_t  lerpTo) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method TryEditorRender, addr 0x5a1d544, size 0x4, virtual false, abstract: false, final false
inline void TryEditorRender(bool  playModeCheck) ;

/// @brief Method Validate, addr 0x5a1d52c, size 0x14, virtual true, abstract: false, final false
inline void Validate() ;

constexpr bool const& __cordl_internal_get__cancelPreview() const;

constexpr bool& __cordl_internal_get__cancelPreview() ;

constexpr int32_t const& __cordl_internal_get__lastState() const;

constexpr int32_t& __cordl_internal_get__lastState() ;

constexpr float_t const& __cordl_internal_get__lerp() const;

constexpr float_t& __cordl_internal_get__lerp() ;

constexpr float_t const& __cordl_internal_get__lerpLength() const;

constexpr float_t& __cordl_internal_get__lerpLength() ;

constexpr ::GlobalNamespace::LerpChangedEvent* const& __cordl_internal_get__onLerpChanged() const;

constexpr ::GlobalNamespace::LerpChangedEvent*& __cordl_internal_get__onLerpChanged() ;

constexpr float_t const& __cordl_internal_get__prevLerpFrom() const;

constexpr float_t& __cordl_internal_get__prevLerpFrom() ;

constexpr float_t const& __cordl_internal_get__prevLerpTo() const;

constexpr float_t& __cordl_internal_get__prevLerpTo() ;

constexpr bool const& __cordl_internal_get__previewInEditor() const;

constexpr bool& __cordl_internal_get__previewInEditor() ;

constexpr bool const& __cordl_internal_get__previewing() const;

constexpr bool& __cordl_internal_get__previewing() ;

constexpr bool const& __cordl_internal_get__rendering() const;

constexpr bool& __cordl_internal_get__rendering() ;

constexpr void __cordl_internal_set__cancelPreview(bool  value) ;

constexpr void __cordl_internal_set__lastState(int32_t  value) ;

constexpr void __cordl_internal_set__lerp(float_t  value) ;

constexpr void __cordl_internal_set__lerpLength(float_t  value) ;

constexpr void __cordl_internal_set__onLerpChanged(::GlobalNamespace::LerpChangedEvent*  value) ;

constexpr void __cordl_internal_set__prevLerpFrom(float_t  value) ;

constexpr void __cordl_internal_set__prevLerpTo(float_t  value) ;

constexpr void __cordl_internal_set__previewInEditor(bool  value) ;

constexpr void __cordl_internal_set__previewing(bool  value) ;

constexpr void __cordl_internal_set__rendering(bool  value) ;

/// @brief Method .ctor, addr 0x5a1d554, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanRender, addr 0x5a1d47c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRender() ;

/// @brief Method get_Lerp, addr 0x5a1d360, size 0x8, virtual false, abstract: false, final false
inline float_t get_Lerp() ;

/// @brief Method get_LerpTime, addr 0x5a1d454, size 0x8, virtual false, abstract: false, final false
inline float_t get_LerpTime() ;

/// @brief Method set_Lerp, addr 0x5a1d368, size 0xec, virtual false, abstract: false, final false
inline void set_Lerp(float_t  value) ;

/// @brief Method set_LerpTime, addr 0x5a1d45c, size 0x20, virtual false, abstract: false, final false
inline void set_LerpTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LerpComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LerpComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LerpComponent(LerpComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LerpComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LerpComponent(LerpComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2820};

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _lerp, offset: 0x20, size: 0x4, def value: None
 float_t  ____lerp;

/// [SerializeField]
/// @brief Field _lerpLength, offset: 0x24, size: 0x4, def value: None
 float_t  ____lerpLength;

/// [Space]
/// [SerializeField]
/// @brief Field _onLerpChanged, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::LerpChangedEvent*  ____onLerpChanged;

/// [SerializeField]
/// @brief Field _previewInEditor, offset: 0x30, size: 0x1, def value: None
 bool  ____previewInEditor;

/// @brief Field _previewing, offset: 0x31, size: 0x1, def value: None
 bool  ____previewing;

/// @brief Field _cancelPreview, offset: 0x32, size: 0x1, def value: None
 bool  ____cancelPreview;

/// @brief Field _rendering, offset: 0x33, size: 0x1, def value: None
 bool  ____rendering;

/// @brief Field _lastState, offset: 0x34, size: 0x4, def value: None
 int32_t  ____lastState;

/// @brief Field _prevLerpFrom, offset: 0x38, size: 0x4, def value: None
 float_t  ____prevLerpFrom;

/// @brief Field _prevLerpTo, offset: 0x3c, size: 0x4, def value: None
 float_t  ____prevLerpTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LerpComponent, ____lerp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____lerpLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____onLerpChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____previewInEditor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____previewing) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____cancelPreview) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____rendering) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____lastState) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____prevLerpFrom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpComponent, ____prevLerpTo) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LerpComponent) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
