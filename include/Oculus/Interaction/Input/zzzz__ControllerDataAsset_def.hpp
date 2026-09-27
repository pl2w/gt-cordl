#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerDataAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__ControllerInput_def.hpp"
#include "Oculus/Interaction/Input/zzzz__PoseOrigin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(ControllerDataAsset)
namespace Oculus::Interaction::Input {
class ControllerDataSourceConfig;
}
namespace Oculus::Interaction::Input {
template<typename TSelfType>
class ICopyFrom_1;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ControllerDataAsset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerDataAsset*, "Oculus.Interaction.Input", "ControllerDataAsset");
// Dependencies Oculus.Interaction.Input.ControllerInput, Oculus.Interaction.Input.PoseOrigin, System.Object, UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ControllerDataAsset
class CORDL_TYPE ControllerDataAsset : public ::System::Object {
public:
// Declarations
/// @brief Field Config, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::Oculus::Interaction::Input::ControllerDataSourceConfig*  Config;

/// @brief Field Input, offset 0x14, size 0x1c 
 __declspec(property(get=__cordl_internal_get_Input, put=__cordl_internal_set_Input)) ::Oculus::Interaction::Input::ControllerInput  Input;

/// @brief Field IsConnected, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsConnected, put=__cordl_internal_set_IsConnected)) bool  IsConnected;

/// @brief Field IsDataValid, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDataValid, put=__cordl_internal_set_IsDataValid)) bool  IsDataValid;

/// @brief Field IsDominantHand, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDominantHand, put=__cordl_internal_set_IsDominantHand)) bool  IsDominantHand;

/// @brief Field IsTracked, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsTracked, put=__cordl_internal_set_IsTracked)) bool  IsTracked;

/// @brief Field PointerPose, offset 0x50, size 0x1c 
 __declspec(property(get=__cordl_internal_get_PointerPose, put=__cordl_internal_set_PointerPose)) ::UnityEngine::Pose  PointerPose;

/// @brief Field PointerPoseOrigin, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PointerPoseOrigin, put=__cordl_internal_set_PointerPoseOrigin)) ::Oculus::Interaction::Input::PoseOrigin  PointerPoseOrigin;

/// @brief Field RootPose, offset 0x30, size 0x1c 
 __declspec(property(get=__cordl_internal_get_RootPose, put=__cordl_internal_set_RootPose)) ::UnityEngine::Pose  RootPose;

/// @brief Field RootPoseOrigin, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RootPoseOrigin, put=__cordl_internal_set_RootPoseOrigin)) ::Oculus::Interaction::Input::PoseOrigin  RootPoseOrigin;

/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>"
constexpr operator  ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>*() noexcept;

/// @brief Method CopyFrom, addr 0xa504d94, size 0xa4, virtual true, abstract: false, final true
inline void CopyFrom(::Oculus::Interaction::Input::ControllerDataAsset*  source) ;

/// @brief Method CopyPosesAndStateFrom, addr 0xa504e38, size 0x68, virtual false, abstract: false, final false
inline void CopyPosesAndStateFrom(::Oculus::Interaction::Input::ControllerDataAsset*  source) ;

static inline ::Oculus::Interaction::Input::ControllerDataAsset* New_ctor() ;

constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig* const& __cordl_internal_get_Config() const;

constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig*& __cordl_internal_get_Config() ;

constexpr ::Oculus::Interaction::Input::ControllerInput const& __cordl_internal_get_Input() const;

constexpr ::Oculus::Interaction::Input::ControllerInput& __cordl_internal_get_Input() ;

constexpr bool const& __cordl_internal_get_IsConnected() const;

constexpr bool& __cordl_internal_get_IsConnected() ;

constexpr bool const& __cordl_internal_get_IsDataValid() const;

constexpr bool& __cordl_internal_get_IsDataValid() ;

constexpr bool const& __cordl_internal_get_IsDominantHand() const;

constexpr bool& __cordl_internal_get_IsDominantHand() ;

constexpr bool const& __cordl_internal_get_IsTracked() const;

constexpr bool& __cordl_internal_get_IsTracked() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_PointerPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_PointerPose() ;

constexpr ::Oculus::Interaction::Input::PoseOrigin const& __cordl_internal_get_PointerPoseOrigin() const;

constexpr ::Oculus::Interaction::Input::PoseOrigin& __cordl_internal_get_PointerPoseOrigin() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_RootPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_RootPose() ;

constexpr ::Oculus::Interaction::Input::PoseOrigin const& __cordl_internal_get_RootPoseOrigin() const;

constexpr ::Oculus::Interaction::Input::PoseOrigin& __cordl_internal_get_RootPoseOrigin() ;

constexpr void __cordl_internal_set_Config(::Oculus::Interaction::Input::ControllerDataSourceConfig*  value) ;

constexpr void __cordl_internal_set_Input(::Oculus::Interaction::Input::ControllerInput  value) ;

constexpr void __cordl_internal_set_IsConnected(bool  value) ;

constexpr void __cordl_internal_set_IsDataValid(bool  value) ;

constexpr void __cordl_internal_set_IsDominantHand(bool  value) ;

constexpr void __cordl_internal_set_IsTracked(bool  value) ;

constexpr void __cordl_internal_set_PointerPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_PointerPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value) ;

constexpr void __cordl_internal_set_RootPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_RootPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value) ;

/// @brief Method .ctor, addr 0xa504ea0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>* i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Input__ControllerDataAsset__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerDataAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerDataAsset(ControllerDataAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerDataAsset(ControllerDataAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16453};

/// @brief Field IsDataValid, offset: 0x10, size: 0x1, def value: None
 bool  ___IsDataValid;

/// @brief Field IsConnected, offset: 0x11, size: 0x1, def value: None
 bool  ___IsConnected;

/// @brief Field IsTracked, offset: 0x12, size: 0x1, def value: None
 bool  ___IsTracked;

/// @brief Field Input, offset: 0x14, size: 0x1c, def value: None
 ::Oculus::Interaction::Input::ControllerInput  ___Input;

/// @brief Field RootPose, offset: 0x30, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___RootPose;

/// @brief Field RootPoseOrigin, offset: 0x4c, size: 0x4, def value: None
 ::Oculus::Interaction::Input::PoseOrigin  ___RootPoseOrigin;

/// @brief Field PointerPose, offset: 0x50, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___PointerPose;

/// @brief Field PointerPoseOrigin, offset: 0x6c, size: 0x4, def value: None
 ::Oculus::Interaction::Input::PoseOrigin  ___PointerPoseOrigin;

/// @brief Field IsDominantHand, offset: 0x70, size: 0x1, def value: None
 bool  ___IsDominantHand;

/// @brief Field Config, offset: 0x78, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ControllerDataSourceConfig*  ___Config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___IsDataValid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___IsConnected) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___IsTracked) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___Input) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___RootPose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___RootPoseOrigin) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___PointerPose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___PointerPoseOrigin) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___IsDominantHand) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataAsset, ___Config) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerDataAsset) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
