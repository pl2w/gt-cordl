#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ShadowHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowHand)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ShadowHand;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ShadowHand*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ShadowHand*, "Oculus.Interaction.Input", "ShadowHand");
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ShadowHand
class CORDL_TYPE ShadowHand : public ::System::Object {
public:
// Declarations
/// @brief Field _dirtyMap, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dirtyMap, put=__cordl_internal_set__dirtyMap)) uint64_t  _dirtyMap;

/// @brief Field _localJointMap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__localJointMap, put=__cordl_internal_set__localJointMap)) ::ArrayW<::UnityEngine::Pose>  _localJointMap;

/// @brief Field _rootPose, offset 0x20, size 0x1c 
 __declspec(property(get=__cordl_internal_get__rootPose, put=__cordl_internal_set__rootPose)) ::UnityEngine::Pose  _rootPose;

/// @brief Field _rootScale, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootScale, put=__cordl_internal_set__rootScale)) float_t  _rootScale;

/// @brief Field _worldJointMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__worldJointMap, put=__cordl_internal_set__worldJointMap)) ::ArrayW<::UnityEngine::Pose>  _worldJointMap;

/// @brief Method CheckDirtyBit, addr 0xa512cb0, size 0x10, virtual false, abstract: false, final false
inline bool CheckDirtyBit(int32_t  i) ;

/// @brief Method ClearDirtyBit, addr 0xa512cd8, size 0x18, virtual false, abstract: false, final false
inline void ClearDirtyBit(int32_t  i) ;

/// @brief Method Copy, addr 0xa512cf0, size 0x90, virtual false, abstract: false, final false
inline void Copy(::Oculus::Interaction::Input::ShadowHand*  hand) ;

/// @brief Method GetLocalPose, addr 0xa5128d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetLocalPose(::Oculus::Interaction::Input::HandJointId  handJointId) ;

/// @brief Method GetRoot, addr 0xa512c64, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetRoot() ;

/// @brief Method GetRootScale, addr 0xa512c9c, size 0x8, virtual false, abstract: false, final false
inline float_t GetRootScale() ;

/// @brief Method GetWorldPose, addr 0xa512a40, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetWorldPose(::Oculus::Interaction::Input::HandJointId  jointId) ;

/// @brief Method GetWorldPoses, addr 0xa512c48, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Pose> GetWorldPoses() ;

/// @brief Method MarkDirty, addr 0xa51295c, size 0xe4, virtual false, abstract: false, final false
inline void MarkDirty(::Oculus::Interaction::Input::HandJointId  jointId) ;

static inline ::Oculus::Interaction::Input::ShadowHand* New_ctor() ;

/// @brief Method SetDirtyBit, addr 0xa512cc0, size 0x18, virtual false, abstract: false, final false
inline void SetDirtyBit(int32_t  i) ;

/// @brief Method SetLocalPose, addr 0xa512910, size 0x4c, virtual false, abstract: false, final false
inline void SetLocalPose(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Pose  pose) ;

/// @brief Method SetRoot, addr 0xa512c78, size 0x24, virtual false, abstract: false, final false
inline void SetRoot(::UnityEngine::Pose  rootPose) ;

/// @brief Method SetRootScale, addr 0xa512ca4, size 0xc, virtual false, abstract: false, final false
inline void SetRootScale(float_t  scale) ;

/// @brief Method UpdateDirty, addr 0xa512a98, size 0x1b0, virtual false, abstract: false, final false
inline void UpdateDirty(::Oculus::Interaction::Input::HandJointId  jointId) ;

constexpr uint64_t const& __cordl_internal_get__dirtyMap() const;

constexpr uint64_t& __cordl_internal_get__dirtyMap() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__localJointMap() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__localJointMap() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__rootPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__rootPose() ;

constexpr float_t const& __cordl_internal_get__rootScale() const;

constexpr float_t& __cordl_internal_get__rootScale() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__worldJointMap() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__worldJointMap() ;

constexpr void __cordl_internal_set__dirtyMap(uint64_t  value) ;

constexpr void __cordl_internal_set__localJointMap(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__rootPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__rootScale(float_t  value) ;

constexpr void __cordl_internal_set__worldJointMap(::ArrayW<::UnityEngine::Pose>  value) ;

/// @brief Method .ctor, addr 0xa512734, size 0x19c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShadowHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShadowHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShadowHand(ShadowHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShadowHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShadowHand(ShadowHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16503};

/// @brief Field _localJointMap, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____localJointMap;

/// @brief Field _worldJointMap, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____worldJointMap;

/// @brief Field _rootPose, offset: 0x20, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____rootPose;

/// @brief Field _rootScale, offset: 0x3c, size: 0x4, def value: None
 float_t  ____rootScale;

/// @brief Field _dirtyMap, offset: 0x40, size: 0x8, def value: None
 uint64_t  ____dirtyMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ShadowHand, ____localJointMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ShadowHand, ____worldJointMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ShadowHand, ____rootPose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ShadowHand, ____rootScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ShadowHand, ____dirtyMap) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ShadowHand) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
