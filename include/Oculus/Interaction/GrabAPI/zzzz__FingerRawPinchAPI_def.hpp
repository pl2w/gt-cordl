#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerRawPinchAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FingerRawPinchAPI)
namespace Oculus::Interaction::GrabAPI {
class FingerRawPinchAPI_FingerPinchData;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class FingerRawPinchAPI;
}
namespace Oculus::Interaction::GrabAPI {
class FingerRawPinchAPI_FingerPinchData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*);
MARK_REF_T(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*, "Oculus.Interaction.GrabAPI", "FingerRawPinchAPI");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*, "Oculus.Interaction.GrabAPI", "FingerRawPinchAPI/FingerPinchData");
// Dependencies Oculus.Interaction.GrabAPI.FingerRawPinchAPI::FingerPinchData, System.Object
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.FingerRawPinchAPI
class CORDL_TYPE FingerRawPinchAPI : public ::System::Object {
public:
// Declarations
using FingerPinchData = ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData;

/// @brief Field _fingersPinchData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingersPinchData, put=__cordl_internal_set__fingersPinchData)) ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>  _fingersPinchData;

/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr operator  ::Oculus::Interaction::IFingerAPI*() noexcept;

/// @brief Method ClearState, addr 0xa4fde04, size 0x4c, virtual false, abstract: false, final false
inline void ClearState() ;

/// @brief Method GetFingerGrabScore, addr 0xa4fdd6c, size 0x38, virtual true, abstract: false, final true
inline float_t GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbing, addr 0xa4fdc3c, size 0x38, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbingChanged, addr 0xa4fdd18, size 0x54, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState) ;

/// @brief Method GetWristOffsetLocal, addr 0xa4fdc74, size 0xa4, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetWristOffsetLocal() ;

static inline ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI* New_ctor() ;

/// @brief Method Update, addr 0xa4fdda4, size 0x60, virtual true, abstract: false, final true
inline void Update(::Oculus::Interaction::Input::IHand*  hand) ;

constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*> const& __cordl_internal_get__fingersPinchData() const;

constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>& __cordl_internal_get__fingersPinchData() ;

constexpr void __cordl_internal_set__fingersPinchData(::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>  value) ;

/// @brief Method .ctor, addr 0xa4fdfa0, size 0x204, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* i___Oculus__Interaction__IFingerAPI() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerRawPinchAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerRawPinchAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerRawPinchAPI(FingerRawPinchAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerRawPinchAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerRawPinchAPI(FingerRawPinchAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16426};

/// @brief Field _fingersPinchData, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>  ____fingersPinchData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI, ____fingersPinchData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
// Dependencies Oculus.Interaction.Input.HandFinger, Oculus.Interaction.Input.HandJointId, System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData
class CORDL_TYPE FingerRawPinchAPI_FingerPinchData : public ::System::Object {
public:
// Declarations
/// @brief Field IsPinching, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPinching, put=__cordl_internal_set_IsPinching)) bool  IsPinching;

 __declspec(property(get=get_IsPinchingChanged, put=set_IsPinchingChanged)) bool  IsPinchingChanged;

/// @brief Field PinchStrength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PinchStrength, put=__cordl_internal_set_PinchStrength)) float_t  PinchStrength;

 __declspec(property(get=get_TipPosition, put=set_TipPosition)) ::UnityEngine::Vector3  TipPosition;

/// @brief Field <IsPinchingChanged>k__BackingField, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPinchingChanged_k__BackingField, put=__cordl_internal_set__IsPinchingChanged_k__BackingField)) bool  _IsPinchingChanged_k__BackingField;

/// @brief Field <TipPosition>k__BackingField, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__TipPosition_k__BackingField, put=__cordl_internal_set__TipPosition_k__BackingField)) ::UnityEngine::Vector3  _TipPosition_k__BackingField;

/// @brief Field _finger, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__finger, put=__cordl_internal_set__finger)) ::Oculus::Interaction::Input::HandFinger  _finger;

/// @brief Field _tipId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__tipId, put=__cordl_internal_set__tipId)) ::Oculus::Interaction::Input::HandJointId  _tipId;

/// @brief Method ClearState, addr 0xa4fdf98, size 0x8, virtual false, abstract: false, final false
inline void ClearState() ;

static inline ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData* New_ctor(::Oculus::Interaction::Input::HandFinger  fingerId) ;

/// @brief Method UpdateIsPinching, addr 0xa4fde50, size 0x148, virtual false, abstract: false, final false
inline void UpdateIsPinching(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method UpdateTipPosition, addr 0xa4fe24c, size 0xdc, virtual false, abstract: false, final false
inline void UpdateTipPosition(::Oculus::Interaction::Input::IHand*  hand) ;

constexpr bool const& __cordl_internal_get_IsPinching() const;

constexpr bool& __cordl_internal_get_IsPinching() ;

constexpr float_t const& __cordl_internal_get_PinchStrength() const;

constexpr float_t& __cordl_internal_get_PinchStrength() ;

constexpr bool const& __cordl_internal_get__IsPinchingChanged_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPinchingChanged_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TipPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TipPosition_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get__finger() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get__finger() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__tipId() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__tipId() ;

constexpr void __cordl_internal_set_IsPinching(bool  value) ;

constexpr void __cordl_internal_set_PinchStrength(float_t  value) ;

constexpr void __cordl_internal_set__IsPinchingChanged_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TipPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__finger(::Oculus::Interaction::Input::HandFinger  value) ;

constexpr void __cordl_internal_set__tipId(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method .ctor, addr 0xa4fe1a4, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::HandFinger  fingerId) ;

/// [CompilerGenerated]
/// @brief Method get_IsPinchingChanged, addr 0xa4fe224, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPinchingChanged() ;

/// [CompilerGenerated]
/// @brief Method get_TipPosition, addr 0xa4fe234, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TipPosition() ;

/// [CompilerGenerated]
/// @brief Method set_IsPinchingChanged, addr 0xa4fe22c, size 0x8, virtual false, abstract: false, final false
inline void set_IsPinchingChanged(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TipPosition, addr 0xa4fe240, size 0xc, virtual false, abstract: false, final false
inline void set_TipPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerRawPinchAPI_FingerPinchData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerRawPinchAPI_FingerPinchData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerRawPinchAPI_FingerPinchData(FingerRawPinchAPI_FingerPinchData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerRawPinchAPI_FingerPinchData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerRawPinchAPI_FingerPinchData(FingerRawPinchAPI_FingerPinchData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16425};

/// @brief Field _finger, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ____finger;

/// @brief Field _tipId, offset: 0x14, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____tipId;

/// @brief Field PinchStrength, offset: 0x18, size: 0x4, def value: None
 float_t  ___PinchStrength;

/// @brief Field IsPinching, offset: 0x1c, size: 0x1, def value: None
 bool  ___IsPinching;

/// [CompilerGenerated]
/// @brief Field <IsPinchingChanged>k__BackingField, offset: 0x1d, size: 0x1, def value: None
 bool  ____IsPinchingChanged_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TipPosition>k__BackingField, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TipPosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData, ____finger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData, ____tipId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData, ___PinchStrength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData, ___IsPinching) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData, ____IsPinchingChanged_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData, ____TipPosition_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
