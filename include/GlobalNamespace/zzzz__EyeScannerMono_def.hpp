#pragma once
// IWYU pragma private; include "GlobalNamespace/EyeScannerMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EyeScannerMono)
namespace GlobalNamespace {
class IEyeScannable;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class TextTyperAnimatorMono;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class EyeScannerMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EyeScannerMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EyeScannerMono*, "", "EyeScannerMono");
// Dependencies Cysharp.Text.Utf16ValueStringBuilder, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.Color32, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: EyeScannerMono
class CORDL_TYPE EyeScannerMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DebugData, put=set_DebugData)) ::StringW  DebugData;

 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

 __declspec(property(get=get_KeyTextColor, put=set_KeyTextColor)) ::UnityEngine::Color32  KeyTextColor;

/// @brief Field <DebugData>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__DebugData_k__BackingField, put=__cordl_internal_set__DebugData_k__BackingField)) ::StringW  _DebugData_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field _entryIndexes, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__entryIndexes, put=__cordl_internal_set__entryIndexes)) ::ArrayW<int32_t>  _entryIndexes;

/// @brief Field _firstPersonCamera, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonCamera, put=__cordl_internal_set__firstPersonCamera)) ::UnityW<::UnityEngine::Camera>  _firstPersonCamera;

/// @brief Field _has_firstPersonCamera, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__has_firstPersonCamera, put=__cordl_internal_set__has_firstPersonCamera)) bool  _has_firstPersonCamera;

/// @brief Field _keyRichTextColorTagString, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyRichTextColorTagString, put=__cordl_internal_set__keyRichTextColorTagString)) ::StringW  _keyRichTextColorTagString;

/// @brief Field _layerMask, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerMask, put=__cordl_internal_set__layerMask)) ::UnityEngine::LayerMask  _layerMask;

/// @brief Field _line, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__line, put=__cordl_internal_set__line)) ::UnityW<::UnityEngine::LineRenderer>  _line;

/// @brief Field _oldClosestScannable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__oldClosestScannable, put=__cordl_internal_set__oldClosestScannable)) ::GlobalNamespace::IEyeScannable*  _oldClosestScannable;

/// @brief Field _registeredScannableIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__registeredScannableIds, put=setStaticF__registeredScannableIds)) ::System::Collections::Generic::HashSet_1<int32_t>*  _registeredScannableIds;

/// @brief Field _registeredScannables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__registeredScannables, put=setStaticF__registeredScannables)) ::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*  _registeredScannables;

/// @brief Field _sb, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get__sb, put=__cordl_internal_set__sb)) ::Cysharp::Text::Utf16ValueStringBuilder  _sb;

/// @brief Field m_LookPrecision, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookPrecision, put=__cordl_internal_set_m_LookPrecision)) float_t  m_LookPrecision;

/// @brief Field m_keyTextColor, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_keyTextColor, put=__cordl_internal_set_m_keyTextColor)) ::UnityEngine::Color32  m_keyTextColor;

/// @brief Field m_overlay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_overlay, put=__cordl_internal_set_m_overlay)) ::UnityW<::UnityEngine::Transform>  m_overlay;

/// @brief Field m_overlayBg, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_overlayBg, put=__cordl_internal_set_m_overlayBg)) ::UnityW<::UnityEngine::GameObject>  m_overlayBg;

/// @brief Field m_overlayScale, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_overlayScale, put=__cordl_internal_set_m_overlayScale)) float_t  m_overlayScale;

/// @brief Field m_pointerOffset, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_pointerOffset, put=__cordl_internal_set_m_pointerOffset)) ::UnityEngine::Vector3  m_pointerOffset;

/// @brief Field m_position, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_position, put=__cordl_internal_set_m_position)) ::UnityEngine::Vector2  m_position;

/// @brief Field m_reticle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_reticle, put=__cordl_internal_set_m_reticle)) ::UnityW<::UnityEngine::Transform>  m_reticle;

/// @brief Field m_reticleScale, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_reticleScale, put=__cordl_internal_set_m_reticleScale)) float_t  m_reticleScale;

/// @brief Field m_scanDistanceMax, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_scanDistanceMax, put=__cordl_internal_set_m_scanDistanceMax)) float_t  m_scanDistanceMax;

/// @brief Field m_scanDistanceMin, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_scanDistanceMin, put=__cordl_internal_set_m_scanDistanceMin)) float_t  m_scanDistanceMin;

/// @brief Field m_textScale, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_textScale, put=__cordl_internal_set_m_textScale)) float_t  m_textScale;

/// @brief Field m_textTyper, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_textTyper, put=__cordl_internal_set_m_textTyper)) ::UnityW<::GlobalNamespace::TextTyperAnimatorMono>  m_textTyper;

/// @brief Field m_xrayVision, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_xrayVision, put=__cordl_internal_set_m_xrayVision)) bool  m_xrayVision;

 __declspec(property(get=get_registeredScannables)) ::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*  registeredScannables;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Awake, addr 0x57ee868, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x57eea88, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x57eea78, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x57eea90, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x57eea80, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x57eec50, size 0x694, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

/// @brief Method LateUpdate, addr 0x57efad0, size 0x28c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::EyeScannerMono* New_ctor() ;

/// @brief Method OnDespawn, addr 0x57eec34, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x57eec44, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57eec38, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x57eeaa8, size 0x18c, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Register, addr 0x57ee1c8, size 0x198, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::IEyeScannable*  scannable) ;

/// @brief Method Scannable_OnDataChange, addr 0x57efac4, size 0xc, virtual false, abstract: false, final false
inline void Scannable_OnDataChange() ;

/// @brief Method Unregister, addr 0x57ee3b4, size 0x144, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::IEyeScannable*  scannable) ;

/// @brief Method _OnScannableChanged, addr 0x57ef2e4, size 0x7e0, virtual false, abstract: false, final false
inline void _OnScannableChanged(::GlobalNamespace::IEyeScannable*  scannable, bool  typeingShow) ;

constexpr ::StringW const& __cordl_internal_get__DebugData_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DebugData_k__BackingField() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__entryIndexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__entryIndexes() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__firstPersonCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__firstPersonCamera() ;

constexpr bool const& __cordl_internal_get__has_firstPersonCamera() const;

constexpr bool& __cordl_internal_get__has_firstPersonCamera() ;

constexpr ::StringW const& __cordl_internal_get__keyRichTextColorTagString() const;

constexpr ::StringW& __cordl_internal_get__keyRichTextColorTagString() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__line() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__line() ;

constexpr ::GlobalNamespace::IEyeScannable* const& __cordl_internal_get__oldClosestScannable() const;

constexpr ::GlobalNamespace::IEyeScannable*& __cordl_internal_get__oldClosestScannable() ;

constexpr ::Cysharp::Text::Utf16ValueStringBuilder const& __cordl_internal_get__sb() const;

constexpr ::Cysharp::Text::Utf16ValueStringBuilder& __cordl_internal_get__sb() ;

constexpr float_t const& __cordl_internal_get_m_LookPrecision() const;

constexpr float_t& __cordl_internal_get_m_LookPrecision() ;

constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_keyTextColor() const;

constexpr ::UnityEngine::Color32& __cordl_internal_get_m_keyTextColor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_overlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_overlay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_overlayBg() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_overlayBg() ;

constexpr float_t const& __cordl_internal_get_m_overlayScale() const;

constexpr float_t& __cordl_internal_get_m_overlayScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_pointerOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_pointerOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_position() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_position() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_reticle() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_reticle() ;

constexpr float_t const& __cordl_internal_get_m_reticleScale() const;

constexpr float_t& __cordl_internal_get_m_reticleScale() ;

constexpr float_t const& __cordl_internal_get_m_scanDistanceMax() const;

constexpr float_t& __cordl_internal_get_m_scanDistanceMax() ;

constexpr float_t const& __cordl_internal_get_m_scanDistanceMin() const;

constexpr float_t& __cordl_internal_get_m_scanDistanceMin() ;

constexpr float_t const& __cordl_internal_get_m_textScale() const;

constexpr float_t& __cordl_internal_get_m_textScale() ;

constexpr ::UnityW<::GlobalNamespace::TextTyperAnimatorMono> const& __cordl_internal_get_m_textTyper() const;

constexpr ::UnityW<::GlobalNamespace::TextTyperAnimatorMono>& __cordl_internal_get_m_textTyper() ;

constexpr bool const& __cordl_internal_get_m_xrayVision() const;

constexpr bool& __cordl_internal_get_m_xrayVision() ;

constexpr void __cordl_internal_set__DebugData_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__entryIndexes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__firstPersonCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__has_firstPersonCamera(bool  value) ;

constexpr void __cordl_internal_set__keyRichTextColorTagString(::StringW  value) ;

constexpr void __cordl_internal_set__layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__line(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__oldClosestScannable(::GlobalNamespace::IEyeScannable*  value) ;

constexpr void __cordl_internal_set__sb(::Cysharp::Text::Utf16ValueStringBuilder  value) ;

constexpr void __cordl_internal_set_m_LookPrecision(float_t  value) ;

constexpr void __cordl_internal_set_m_keyTextColor(::UnityEngine::Color32  value) ;

constexpr void __cordl_internal_set_m_overlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_overlayBg(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_overlayScale(float_t  value) ;

constexpr void __cordl_internal_set_m_pointerOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_position(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_reticle(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_reticleScale(float_t  value) ;

constexpr void __cordl_internal_set_m_scanDistanceMax(float_t  value) ;

constexpr void __cordl_internal_set_m_scanDistanceMin(float_t  value) ;

constexpr void __cordl_internal_set_m_textScale(float_t  value) ;

constexpr void __cordl_internal_set_m_textTyper(::UnityW<::GlobalNamespace::TextTyperAnimatorMono>  value) ;

constexpr void __cordl_internal_set_m_xrayVision(bool  value) ;

/// @brief Method .ctor, addr 0x57efed8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF__registeredScannableIds() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>* getStaticF__registeredScannables() ;

/// [CompilerGenerated]
/// @brief Method get_DebugData, addr 0x57eea98, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DebugData() ;

/// @brief Method get_KeyTextColor, addr 0x57ee6ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 get_KeyTextColor() ;

/// @brief Method get_registeredScannables, addr 0x57ee810, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>* get_registeredScannables() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

static inline void setStaticF__registeredScannableIds(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

static inline void setStaticF__registeredScannables(::System::Collections::Generic::List_1<::GlobalNamespace::IEyeScannable*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DebugData, addr 0x57eeaa0, size 0x8, virtual false, abstract: false, final false
inline void set_DebugData(::StringW  value) ;

/// @brief Method set_KeyTextColor, addr 0x57ee6f4, size 0x11c, virtual false, abstract: false, final false
inline void set_KeyTextColor(::UnityEngine::Color32  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EyeScannerMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EyeScannerMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EyeScannerMono(EyeScannerMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EyeScannerMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EyeScannerMono(EyeScannerMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{183};

/// [FormerlySerializedAs("_scanDistance")]
/// [Tooltip("Any scannables with transforms beyond this distance will be automatically ignored.")]
/// [SerializeField]
/// @brief Field m_scanDistanceMax, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_scanDistanceMax;

/// [SerializeField]
/// @brief Field m_scanDistanceMin, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_scanDistanceMin;

/// [FormerlySerializedAs("_textTyper")]
/// [Tooltip("The component that handles setting text in the TextMeshPro and animates the text typing.")]
/// [SerializeField]
/// @brief Field m_textTyper, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextTyperAnimatorMono>  ___m_textTyper;

/// [SerializeField]
/// @brief Field m_reticle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_reticle;

/// [SerializeField]
/// @brief Field m_overlay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_overlay;

/// [SerializeField]
/// @brief Field m_overlayBg, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_overlayBg;

/// [SerializeField]
/// @brief Field m_reticleScale, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_reticleScale;

/// [SerializeField]
/// @brief Field m_textScale, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_textScale;

/// [SerializeField]
/// @brief Field m_overlayScale, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_overlayScale;

/// [SerializeField]
/// @brief Field m_pointerOffset, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_pointerOffset;

/// [SerializeField]
/// @brief Field m_position, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_position;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field m_keyTextColor, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::Color32  ___m_keyTextColor;

/// @brief Field _keyRichTextColorTagString, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____keyRichTextColorTagString;

/// @brief Field _oldClosestScannable, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::IEyeScannable*  ____oldClosestScannable;

/// @brief Field _sb, offset: 0x80, size: 0x10, def value: None
 ::Cysharp::Text::Utf16ValueStringBuilder  ____sb;

/// @brief Field _entryIndexes, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____entryIndexes;

/// [SerializeField]
/// @brief Field _layerMask, offset: 0x98, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layerMask;

/// @brief Field _firstPersonCamera, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____firstPersonCamera;

/// @brief Field _has_firstPersonCamera, offset: 0xa8, size: 0x1, def value: None
 bool  ____has_firstPersonCamera;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0xa9, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0xac, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DebugData>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ____DebugData_k__BackingField;

/// [SerializeField]
/// @brief Field m_LookPrecision, offset: 0xb8, size: 0x4, def value: None
 float_t  ___m_LookPrecision;

/// [SerializeField]
/// @brief Field m_xrayVision, offset: 0xbc, size: 0x1, def value: None
 bool  ___m_xrayVision;

/// @brief Field _line, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____line;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_scanDistanceMax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_scanDistanceMin) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_textTyper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_reticle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_overlay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_overlayBg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_reticleScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_textScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_overlayScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_pointerOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_position) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_keyTextColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____keyRichTextColorTagString) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____oldClosestScannable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____sb) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____entryIndexes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____layerMask) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____firstPersonCamera) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____has_firstPersonCamera) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____DebugData_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_LookPrecision) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ___m_xrayVision) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannerMono, ____line) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EyeScannerMono) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
