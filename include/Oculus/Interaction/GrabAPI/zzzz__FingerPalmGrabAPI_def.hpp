#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerPalmGrabAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerPalmGrabAPI)
namespace GlobalNamespace {
struct FingerPalmGrabAPI_ReturnValue;
}
namespace Oculus::Interaction::GrabAPI {
class FingerPalmGrabAPI_HandData;
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
struct PalmGrabParamID;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class FingerPalmGrabAPI;
}
namespace Oculus::Interaction::GrabAPI {
class FingerPalmGrabAPI_HandData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*);
MARK_REF_T(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*, "Oculus.Interaction.GrabAPI", "FingerPalmGrabAPI");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*, "Oculus.Interaction.GrabAPI", "FingerPalmGrabAPI/HandData");
// Dependencies System.Object
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI
class CORDL_TYPE FingerPalmGrabAPI : public ::System::Object {
public:
// Declarations
using ReturnValue = ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue;

using HandData = ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData;

/// @brief Field apiHandle_, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_apiHandle_, put=__cordl_internal_set_apiHandle_)) int32_t  apiHandle_;

/// @brief Field handData_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_handData_, put=__cordl_internal_set_handData_)) ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*  handData_;

/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr operator  ::Oculus::Interaction::IFingerAPI*() noexcept;

/// @brief Method GetConfigParamFloat, addr 0xa4fc910, size 0x44, virtual false, abstract: false, final false
inline float_t GetConfigParamFloat(::Oculus::Interaction::Input::PalmGrabParamID  paramId) ;

/// @brief Method GetConfigParamVec3, addr 0xa4fc9b0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetConfigParamVec3(::Oculus::Interaction::Input::PalmGrabParamID  paramId) ;

/// @brief Method GetFingerGrabScore, addr 0xa4fc494, size 0x44, virtual true, abstract: false, final true
inline float_t GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbing, addr 0xa4fc3fc, size 0x44, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbingChanged, addr 0xa4fc440, size 0x54, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetGrabState) ;

/// @brief Method GetHandle, addr 0xa4fc3d8, size 0x24, virtual false, abstract: false, final false
inline int32_t GetHandle() ;

/// @brief Method GetWristOffsetLocal, addr 0xa4fc888, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetWristOffsetLocal() ;

static inline ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI* New_ctor() ;

/// @brief Method SetConfigParamFloat, addr 0xa4fc8cc, size 0x44, virtual false, abstract: false, final false
inline void SetConfigParamFloat(::Oculus::Interaction::Input::PalmGrabParamID  paramId, float_t  paramVal) ;

/// @brief Method SetConfigParamVec3, addr 0xa4fc954, size 0x5c, virtual false, abstract: false, final false
inline void SetConfigParamVec3(::Oculus::Interaction::Input::PalmGrabParamID  paramId, ::UnityEngine::Vector3  paramVal) ;

/// @brief Method Update, addr 0xa4fc4d8, size 0x1e8, virtual true, abstract: false, final true
inline void Update(::Oculus::Interaction::Input::IHand*  hand) ;

constexpr int32_t const& __cordl_internal_get_apiHandle_() const;

constexpr int32_t& __cordl_internal_get_apiHandle_() ;

constexpr ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData* const& __cordl_internal_get_handData_() const;

constexpr ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*& __cordl_internal_get_handData_() ;

constexpr void __cordl_internal_set_apiHandle_(int32_t  value) ;

constexpr void __cordl_internal_set_handData_(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*  value) ;

/// @brief Method .ctor, addr 0xa4fc304, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* i___Oculus__Interaction__IFingerAPI() noexcept;

/// @brief Method isdk_FingerPalmGrabAPI_Create, addr 0xa4fbd14, size 0x64, virtual false, abstract: false, final false
static inline int32_t isdk_FingerPalmGrabAPI_Create() ;

/// @brief Method isdk_FingerPalmGrabAPI_GetCenterOffset, addr 0xa4fc018, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_GetCenterOffset(int32_t  handle, ::by_ref<::UnityEngine::Vector3>  score) ;

/// @brief Method isdk_FingerPalmGrabAPI_GetConfigParamFloat, addr 0xa4fc09c, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_GetConfigParamFloat(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, ::by_ref<float_t>  outVal) ;

/// @brief Method isdk_FingerPalmGrabAPI_GetConfigParamVec3, addr 0xa4fc1c4, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_GetConfigParamVec3(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, ::by_ref<::UnityEngine::Vector3>  outVal) ;

/// @brief Method isdk_FingerPalmGrabAPI_GetFingerGrabScore, addr 0xa4fbf84, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_GetFingerGrabScore(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, ::by_ref<float_t>  score) ;

/// @brief Method isdk_FingerPalmGrabAPI_GetFingerIsGrabbing, addr 0xa4fbe2c, size 0xa8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_GetFingerIsGrabbing(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, ::by_ref<bool>  grabbing) ;

/// @brief Method isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged, addr 0xa4fbed4, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, bool  targetGrabState, ::by_ref<bool>  changed) ;

/// @brief Method isdk_FingerPalmGrabAPI_SetConfigParamFloat, addr 0xa4fc130, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_SetConfigParamFloat(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, float_t  inVal) ;

/// @brief Method isdk_FingerPalmGrabAPI_SetConfigParamVec3, addr 0xa4fc258, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_SetConfigParamVec3(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, ::UnityEngine::Vector3  inVal) ;

/// @brief Method isdk_FingerPalmGrabAPI_UpdateHandData, addr 0xa4fbd78, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue isdk_FingerPalmGrabAPI_UpdateHandData(int32_t  handle, ::ByRefConst<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerPalmGrabAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerPalmGrabAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerPalmGrabAPI(FingerPalmGrabAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerPalmGrabAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerPalmGrabAPI(FingerPalmGrabAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16421};

/// @brief Field apiHandle_, offset: 0x10, size: 0x4, def value: None
 int32_t  ___apiHandle_;

/// @brief Field handData_, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*  ___handData_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI, ___apiHandle_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI, ___handData_) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
// Dependencies System.Object
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
class CORDL_TYPE FingerPalmGrabAPI_HandData : public ::System::Object {
public:
// Declarations
/// @brief Field _handedness, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__handedness, put=__cordl_internal_set__handedness)) int32_t  _handedness;

/// @brief Field _rootPosX, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootPosX, put=__cordl_internal_set__rootPosX)) float_t  _rootPosX;

/// @brief Field _rootPosY, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootPosY, put=__cordl_internal_set__rootPosY)) float_t  _rootPosY;

/// @brief Field _rootPosZ, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootPosZ, put=__cordl_internal_set__rootPosZ)) float_t  _rootPosZ;

/// @brief Field _rootRotW, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootRotW, put=__cordl_internal_set__rootRotW)) float_t  _rootRotW;

/// @brief Field _rootRotX, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootRotX, put=__cordl_internal_set__rootRotX)) float_t  _rootRotX;

/// @brief Field _rootRotY, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootRotY, put=__cordl_internal_set__rootRotY)) float_t  _rootRotY;

/// @brief Field _rootRotZ, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootRotZ, put=__cordl_internal_set__rootRotZ)) float_t  _rootRotZ;

/// @brief Field jointValues, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_jointValues, put=__cordl_internal_set_jointValues)) ::ArrayW<float_t>  jointValues;

static inline ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData* New_ctor() ;

/// @brief Method SetData, addr 0xa4fc6c0, size 0x1c8, virtual false, abstract: false, final false
inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  joints, ::UnityEngine::Pose  root, ::Oculus::Interaction::Input::Handedness  handedness) ;

constexpr int32_t const& __cordl_internal_get__handedness() const;

constexpr int32_t& __cordl_internal_get__handedness() ;

constexpr float_t const& __cordl_internal_get__rootPosX() const;

constexpr float_t& __cordl_internal_get__rootPosX() ;

constexpr float_t const& __cordl_internal_get__rootPosY() const;

constexpr float_t& __cordl_internal_get__rootPosY() ;

constexpr float_t const& __cordl_internal_get__rootPosZ() const;

constexpr float_t& __cordl_internal_get__rootPosZ() ;

constexpr float_t const& __cordl_internal_get__rootRotW() const;

constexpr float_t& __cordl_internal_get__rootRotW() ;

constexpr float_t const& __cordl_internal_get__rootRotX() const;

constexpr float_t& __cordl_internal_get__rootRotX() ;

constexpr float_t const& __cordl_internal_get__rootRotY() const;

constexpr float_t& __cordl_internal_get__rootRotY() ;

constexpr float_t const& __cordl_internal_get__rootRotZ() const;

constexpr float_t& __cordl_internal_get__rootRotZ() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_jointValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_jointValues() ;

constexpr void __cordl_internal_set__handedness(int32_t  value) ;

constexpr void __cordl_internal_set__rootPosX(float_t  value) ;

constexpr void __cordl_internal_set__rootPosY(float_t  value) ;

constexpr void __cordl_internal_set__rootPosZ(float_t  value) ;

constexpr void __cordl_internal_set__rootRotW(float_t  value) ;

constexpr void __cordl_internal_set__rootRotX(float_t  value) ;

constexpr void __cordl_internal_set__rootRotY(float_t  value) ;

constexpr void __cordl_internal_set__rootRotZ(float_t  value) ;

constexpr void __cordl_internal_set_jointValues(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0xa4fc374, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerPalmGrabAPI_HandData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerPalmGrabAPI_HandData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerPalmGrabAPI_HandData(FingerPalmGrabAPI_HandData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerPalmGrabAPI_HandData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerPalmGrabAPI_HandData(FingerPalmGrabAPI_HandData const& ) = delete;

/// @brief Field NumHandJoints offset 0xffffffff size 0x4
static constexpr int32_t  NumHandJoints{static_cast<int32_t>(0x18)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16419};

/// @brief Field jointValues, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ___jointValues;

/// @brief Field _rootRotX, offset: 0x18, size: 0x4, def value: None
 float_t  ____rootRotX;

/// @brief Field _rootRotY, offset: 0x1c, size: 0x4, def value: None
 float_t  ____rootRotY;

/// @brief Field _rootRotZ, offset: 0x20, size: 0x4, def value: None
 float_t  ____rootRotZ;

/// @brief Field _rootRotW, offset: 0x24, size: 0x4, def value: None
 float_t  ____rootRotW;

/// @brief Field _rootPosX, offset: 0x28, size: 0x4, def value: None
 float_t  ____rootPosX;

/// @brief Field _rootPosY, offset: 0x2c, size: 0x4, def value: None
 float_t  ____rootPosY;

/// @brief Field _rootPosZ, offset: 0x30, size: 0x4, def value: None
 float_t  ____rootPosZ;

/// @brief Field _handedness, offset: 0x34, size: 0x4, def value: None
 int32_t  ____handedness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ___jointValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____rootRotX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____rootRotY) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____rootRotZ) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____rootRotW) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____rootPosX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____rootPosY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____rootPosZ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData, ____handedness) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
