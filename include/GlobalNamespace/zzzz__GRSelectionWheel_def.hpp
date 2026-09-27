#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSelectionWheel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSelectionWheel)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSelectionWheel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSelectionWheel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSelectionWheel*, "", "GRSelectionWheel");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSelectionWheel
class CORDL_TYPE GRSelectionWheel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field audioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field currentAngle, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAngle, put=__cordl_internal_set_currentAngle)) float_t  currentAngle;

/// @brief Field deltaAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaAngle, put=__cordl_internal_set_deltaAngle)) float_t  deltaAngle;

/// @brief Field isBeingDrivenRemotely, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBeingDrivenRemotely, put=__cordl_internal_set_isBeingDrivenRemotely)) bool  isBeingDrivenRemotely;

/// @brief Field lastAngle, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngle, put=__cordl_internal_set_lastAngle)) float_t  lastAngle;

/// @brief Field lastPlayedAudioTickPage, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPlayedAudioTickPage, put=__cordl_internal_set_lastPlayedAudioTickPage)) int32_t  lastPlayedAudioTickPage;

/// @brief Field pointerOffsetAngle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_pointerOffsetAngle, put=__cordl_internal_set_pointerOffsetAngle)) float_t  pointerOffsetAngle;

/// @brief Field rotSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotSpeed, put=__cordl_internal_set_rotSpeed)) float_t  rotSpeed;

/// @brief Field rotSpeedMult, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotSpeedMult, put=__cordl_internal_set_rotSpeedMult)) float_t  rotSpeedMult;

/// @brief Field rotationWheel, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationWheel, put=__cordl_internal_set_rotationWheel)) ::UnityW<::UnityEngine::Transform>  rotationWheel;

/// @brief Field shelfNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelfNames, put=__cordl_internal_set_shelfNames)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  shelfNames;

/// @brief Field targetPage, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetPage, put=__cordl_internal_set_targetPage)) int32_t  targetPage;

/// @brief Field templateText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateText, put=__cordl_internal_set_templateText)) ::UnityW<::TMPro::TMP_Text>  templateText;

/// @brief Field textHorizOffset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_textHorizOffset, put=__cordl_internal_set_textHorizOffset)) float_t  textHorizOffset;

/// @brief Field wheelTextPairOffset, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_wheelTextPairOffset, put=__cordl_internal_set_wheelTextPairOffset)) float_t  wheelTextPairOffset;

/// @brief Field wheelTextRadius, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_wheelTextRadius, put=__cordl_internal_set_wheelTextRadius)) float_t  wheelTextRadius;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method InitFromNameList, addr 0x58af588, size 0x1f0, virtual false, abstract: false, final false
inline void InitFromNameList(::System::Collections::Generic::List_1<::StringW>*  shelves) ;

static inline ::GlobalNamespace::GRSelectionWheel* New_ctor() ;

/// @brief Method OnDisable, addr 0x58af3dc, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58af370, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetRotationSpeed, addr 0x58afc1c, size 0x18, virtual false, abstract: false, final false
inline void SetRotationSpeed(float_t  speed) ;

/// @brief Method SetTargetAngle, addr 0x58afc5c, size 0x8, virtual false, abstract: false, final false
inline void SetTargetAngle(float_t  angle) ;

/// @brief Method SetTargetShelf, addr 0x58afc34, size 0x28, virtual false, abstract: false, final false
inline void SetTargetShelf(int32_t  shelf) ;

/// @brief Method ShowText, addr 0x58af448, size 0x140, virtual false, abstract: false, final false
inline void ShowText(bool  showText) ;

/// @brief Method Start, addr 0x58af368, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x58afa58, size 0x1c4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateVisuals, addr 0x58af778, size 0x2e0, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_currentAngle() const;

constexpr float_t& __cordl_internal_get_currentAngle() ;

constexpr float_t const& __cordl_internal_get_deltaAngle() const;

constexpr float_t& __cordl_internal_get_deltaAngle() ;

constexpr bool const& __cordl_internal_get_isBeingDrivenRemotely() const;

constexpr bool& __cordl_internal_get_isBeingDrivenRemotely() ;

constexpr float_t const& __cordl_internal_get_lastAngle() const;

constexpr float_t& __cordl_internal_get_lastAngle() ;

constexpr int32_t const& __cordl_internal_get_lastPlayedAudioTickPage() const;

constexpr int32_t& __cordl_internal_get_lastPlayedAudioTickPage() ;

constexpr float_t const& __cordl_internal_get_pointerOffsetAngle() const;

constexpr float_t& __cordl_internal_get_pointerOffsetAngle() ;

constexpr float_t const& __cordl_internal_get_rotSpeed() const;

constexpr float_t& __cordl_internal_get_rotSpeed() ;

constexpr float_t const& __cordl_internal_get_rotSpeedMult() const;

constexpr float_t& __cordl_internal_get_rotSpeedMult() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rotationWheel() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rotationWheel() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& __cordl_internal_get_shelfNames() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& __cordl_internal_get_shelfNames() ;

constexpr int32_t const& __cordl_internal_get_targetPage() const;

constexpr int32_t& __cordl_internal_get_targetPage() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_templateText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_templateText() ;

constexpr float_t const& __cordl_internal_get_textHorizOffset() const;

constexpr float_t& __cordl_internal_get_textHorizOffset() ;

constexpr float_t const& __cordl_internal_get_wheelTextPairOffset() const;

constexpr float_t& __cordl_internal_get_wheelTextPairOffset() ;

constexpr float_t const& __cordl_internal_get_wheelTextRadius() const;

constexpr float_t& __cordl_internal_get_wheelTextRadius() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentAngle(float_t  value) ;

constexpr void __cordl_internal_set_deltaAngle(float_t  value) ;

constexpr void __cordl_internal_set_isBeingDrivenRemotely(bool  value) ;

constexpr void __cordl_internal_set_lastAngle(float_t  value) ;

constexpr void __cordl_internal_set_lastPlayedAudioTickPage(int32_t  value) ;

constexpr void __cordl_internal_set_pointerOffsetAngle(float_t  value) ;

constexpr void __cordl_internal_set_rotSpeed(float_t  value) ;

constexpr void __cordl_internal_set_rotSpeedMult(float_t  value) ;

constexpr void __cordl_internal_set_rotationWheel(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shelfNames(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  value) ;

constexpr void __cordl_internal_set_targetPage(int32_t  value) ;

constexpr void __cordl_internal_set_templateText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_textHorizOffset(float_t  value) ;

constexpr void __cordl_internal_set_wheelTextPairOffset(float_t  value) ;

constexpr void __cordl_internal_set_wheelTextRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x58afc64, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x58af358, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x58af360, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSelectionWheel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSelectionWheel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSelectionWheel(GRSelectionWheel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSelectionWheel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSelectionWheel(GRSelectionWheel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2030};

/// @brief Field shelfNames, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  ___shelfNames;

/// @brief Field templateText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___templateText;

/// @brief Field deltaAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ___deltaAngle;

/// @brief Field pointerOffsetAngle, offset: 0x34, size: 0x4, def value: None
 float_t  ___pointerOffsetAngle;

/// @brief Field wheelTextRadius, offset: 0x38, size: 0x4, def value: None
 float_t  ___wheelTextRadius;

/// @brief Field textHorizOffset, offset: 0x3c, size: 0x4, def value: None
 float_t  ___textHorizOffset;

/// @brief Field rotSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___rotSpeed;

/// @brief Field isBeingDrivenRemotely, offset: 0x44, size: 0x1, def value: None
 bool  ___isBeingDrivenRemotely;

/// @brief Field audioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field lastPlayedAudioTickPage, offset: 0x50, size: 0x4, def value: None
 int32_t  ___lastPlayedAudioTickPage;

/// @brief Field wheelTextPairOffset, offset: 0x54, size: 0x4, def value: None
 float_t  ___wheelTextPairOffset;

/// @brief Field rotationWheel, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rotationWheel;

/// @brief Field lastAngle, offset: 0x60, size: 0x4, def value: None
 float_t  ___lastAngle;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x64, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field targetPage, offset: 0x68, size: 0x4, def value: None
 int32_t  ___targetPage;

/// @brief Field currentAngle, offset: 0x6c, size: 0x4, def value: None
 float_t  ___currentAngle;

/// @brief Field rotSpeedMult, offset: 0x70, size: 0x4, def value: None
 float_t  ___rotSpeedMult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___shelfNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___templateText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___deltaAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___pointerOffsetAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___wheelTextRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___textHorizOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___rotSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___isBeingDrivenRemotely) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___audioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___lastPlayedAudioTickPage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___wheelTextPairOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___rotationWheel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___lastAngle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ____TickRunning_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___targetPage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___currentAngle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSelectionWheel, ___rotSpeedMult) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSelectionWheel) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
