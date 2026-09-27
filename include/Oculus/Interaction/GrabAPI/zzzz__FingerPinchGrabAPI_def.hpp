#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerPinchGrabAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerPinchGrabAPI)
namespace GlobalNamespace {
struct FingerPinchGrabAPI_ReturnValue;
}
namespace Oculus::Interaction::GrabAPI {
class HandPinchData;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace Oculus::Interaction::Input {
struct PinchGrabParam;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class FingerPinchGrabAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*, "Oculus.Interaction.GrabAPI", "FingerPinchGrabAPI");
// Dependencies System.Object
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.FingerPinchGrabAPI
class CORDL_TYPE FingerPinchGrabAPI : public ::System::Object {
public:
// Declarations
using ReturnValue = ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue;

/// @brief Field _fingerPinchGrabApiHandle, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingerPinchGrabApiHandle, put=__cordl_internal_set__fingerPinchGrabApiHandle)) int32_t  _fingerPinchGrabApiHandle;

/// @brief Field _hmd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::Oculus::Interaction::Input::IHmd*  _hmd;

/// @brief Field _pinchData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinchData, put=__cordl_internal_set__pinchData)) ::Oculus::Interaction::GrabAPI::HandPinchData*  _pinchData;

/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr operator  ::Oculus::Interaction::IFingerAPI*() noexcept;

/// @brief Method GetFingerGrabScore, addr 0xa4fd7e0, size 0x44, virtual true, abstract: false, final true
inline float_t GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbing, addr 0xa4fd67c, size 0x44, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbingChanged, addr 0xa4fd78c, size 0x54, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState) ;

/// @brief Method GetFingerPinchDistance, addr 0xa4fd704, size 0x44, virtual false, abstract: false, final false
inline float_t GetFingerPinchDistance(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchPercent, addr 0xa4fd6c0, size 0x44, virtual false, abstract: false, final false
inline float_t GetFingerPinchPercent(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetHandle, addr 0xa4fd594, size 0x24, virtual false, abstract: false, final false
inline int32_t GetHandle() ;

/// @brief Method GetIsPinchVisibilityGood, addr 0xa4fd640, size 0x3c, virtual false, abstract: false, final false
inline bool GetIsPinchVisibilityGood() ;

/// @brief Method GetPinchGrabParam, addr 0xa4fd5fc, size 0x44, virtual false, abstract: false, final false
inline float_t GetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId) ;

/// @brief Method GetWristOffsetLocal, addr 0xa4fd748, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetWristOffsetLocal() ;

static inline ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI* New_ctor(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method SetPinchGrabParam, addr 0xa4fd5b8, size 0x44, virtual false, abstract: false, final false
inline void SetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId, float_t  paramVal) ;

/// @brief Method Update, addr 0xa4fd824, size 0x1b0, virtual true, abstract: false, final true
inline void Update(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method Update, addr 0xa4fd9d4, size 0x268, virtual false, abstract: false, final false
inline void Update(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  handPoses, ::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Pose  wristPose) ;

constexpr int32_t const& __cordl_internal_get__fingerPinchGrabApiHandle() const;

constexpr int32_t& __cordl_internal_get__fingerPinchGrabApiHandle() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__hmd() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__hmd() ;

constexpr ::Oculus::Interaction::GrabAPI::HandPinchData* const& __cordl_internal_get__pinchData() const;

constexpr ::Oculus::Interaction::GrabAPI::HandPinchData*& __cordl_internal_get__pinchData() ;

constexpr void __cordl_internal_set__fingerPinchGrabApiHandle(int32_t  value) ;

constexpr void __cordl_internal_set__hmd(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__pinchData(::Oculus::Interaction::GrabAPI::HandPinchData*  value) ;

/// @brief Method .ctor, addr 0xa4fd508, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* i___Oculus__Interaction__IFingerAPI() noexcept;

/// @brief Method isdk_Common_GetVersion, addr 0xa4fd2cc, size 0x7c, virtual false, abstract: false, final false
static inline int32_t isdk_Common_GetVersion(::by_ref<::System::IntPtr>  versionStringPtr) ;

/// @brief Method isdk_FingerPinchGrabAPI_Create, addr 0xa4fcc9c, size 0x64, virtual false, abstract: false, final false
static inline int32_t isdk_FingerPinchGrabAPI_Create() ;

/// @brief Method isdk_FingerPinchGrabAPI_GetCenterOffset, addr 0xa4fd248, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_GetCenterOffset(int32_t  handle, ::by_ref<::UnityEngine::Vector3>  outCenter) ;

/// @brief Method isdk_FingerPinchGrabAPI_GetFingerGrabScore, addr 0xa4fd1b4, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_GetFingerGrabScore(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, ::by_ref<float_t>  outScore) ;

/// @brief Method isdk_FingerPinchGrabAPI_GetFingerIsGrabbing, addr 0xa4fcf34, size 0xa8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_GetFingerIsGrabbing(int32_t  handle, int32_t  index, ::by_ref<bool>  grabbing) ;

/// @brief Method isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged, addr 0xa4fd104, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged(int32_t  handle, int32_t  index, bool  targetState, ::by_ref<bool>  grabbing) ;

/// @brief Method isdk_FingerPinchGrabAPI_GetFingerPinchDistance, addr 0xa4fd070, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_GetFingerPinchDistance(int32_t  handle, int32_t  index, ::by_ref<float_t>  pinchDistance) ;

/// @brief Method isdk_FingerPinchGrabAPI_GetFingerPinchPercent, addr 0xa4fcfdc, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_GetFingerPinchPercent(int32_t  handle, int32_t  index, ::by_ref<float_t>  pinchPercent) ;

/// @brief Method isdk_FingerPinchGrabAPI_GetPinchGrabParam, addr 0xa4fd348, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_GetPinchGrabParam(int32_t  handle, ::Oculus::Interaction::Input::PinchGrabParam  paramId, ::by_ref<float_t>  outParam) ;

/// @brief Method isdk_FingerPinchGrabAPI_GetString, addr 0xa4fce80, size 0xb4, virtual false, abstract: false, final false
static inline bool isdk_FingerPinchGrabAPI_GetString(int32_t  handle, ::StringW  name, ::by_ref<::System::IntPtr>  val) ;

/// @brief Method isdk_FingerPinchGrabAPI_IsPinchVisibilityGood, addr 0xa4fd470, size 0x98, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_IsPinchVisibilityGood(int32_t  handle, ::by_ref<bool>  outVal) ;

/// @brief Method isdk_FingerPinchGrabAPI_SetPinchGrabParam, addr 0xa4fd3dc, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_SetPinchGrabParam(int32_t  handle, ::Oculus::Interaction::Input::PinchGrabParam  paramId, float_t  param) ;

/// @brief Method isdk_FingerPinchGrabAPI_UpdateHandData, addr 0xa4fcd00, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_UpdateHandData(int32_t  handle, ::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>  data) ;

/// @brief Method isdk_FingerPinchGrabAPI_UpdateHandWristHMDData, addr 0xa4fcdb4, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue isdk_FingerPinchGrabAPI_UpdateHandWristHMDData(int32_t  handle, ::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>  data, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  wristForward, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  hmdForward) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerPinchGrabAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerPinchGrabAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerPinchGrabAPI(FingerPinchGrabAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerPinchGrabAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerPinchGrabAPI(FingerPinchGrabAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16424};

/// @brief Field _fingerPinchGrabApiHandle, offset: 0x10, size: 0x4, def value: None
 int32_t  ____fingerPinchGrabApiHandle;

/// @brief Field _pinchData, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::GrabAPI::HandPinchData*  ____pinchData;

/// @brief Field _hmd, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____hmd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI, ____fingerPinchGrabApiHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI, ____pinchData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI, ____hmd) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
