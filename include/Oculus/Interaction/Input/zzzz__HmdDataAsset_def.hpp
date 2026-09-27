#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HmdDataAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HmdDataAsset)
namespace Oculus::Interaction::Input {
class HmdDataSourceConfig;
}
namespace Oculus::Interaction::Input {
template<typename TSelfType>
class ICopyFrom_1;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HmdDataAsset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HmdDataAsset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HmdDataAsset*, "Oculus.Interaction.Input", "HmdDataAsset");
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HmdDataAsset
class CORDL_TYPE HmdDataAsset : public ::System::Object {
public:
// Declarations
/// @brief Field Config, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::Oculus::Interaction::Input::HmdDataSourceConfig*  Config;

/// @brief Field FrameId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_FrameId, put=__cordl_internal_set_FrameId)) int32_t  FrameId;

/// @brief Field IsTracked, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsTracked, put=__cordl_internal_set_IsTracked)) bool  IsTracked;

/// @brief Field Root, offset 0x10, size 0x1c 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::UnityEngine::Pose  Root;

/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>"
constexpr operator  ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>*() noexcept;

/// @brief Method CopyFrom, addr 0xa513694, size 0x44, virtual true, abstract: false, final true
inline void CopyFrom(::Oculus::Interaction::Input::HmdDataAsset*  source) ;

static inline ::Oculus::Interaction::Input::HmdDataAsset* New_ctor() ;

constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig* const& __cordl_internal_get_Config() const;

constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig*& __cordl_internal_get_Config() ;

constexpr int32_t const& __cordl_internal_get_FrameId() const;

constexpr int32_t& __cordl_internal_get_FrameId() ;

constexpr bool const& __cordl_internal_get_IsTracked() const;

constexpr bool& __cordl_internal_get_IsTracked() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_Root() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_Root() ;

constexpr void __cordl_internal_set_Config(::Oculus::Interaction::Input::HmdDataSourceConfig*  value) ;

constexpr void __cordl_internal_set_FrameId(int32_t  value) ;

constexpr void __cordl_internal_set_IsTracked(bool  value) ;

constexpr void __cordl_internal_set_Root(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa5136d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>* i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Input__HmdDataAsset__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HmdDataAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HmdDataAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HmdDataAsset(HmdDataAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HmdDataAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HmdDataAsset(HmdDataAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16507};

/// @brief Field Root, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___Root;

/// @brief Field IsTracked, offset: 0x2c, size: 0x1, def value: None
 bool  ___IsTracked;

/// @brief Field FrameId, offset: 0x30, size: 0x4, def value: None
 int32_t  ___FrameId;

/// @brief Field Config, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HmdDataSourceConfig*  ___Config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HmdDataAsset, ___Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HmdDataAsset, ___IsTracked) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HmdDataAsset, ___FrameId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HmdDataAsset, ___Config) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HmdDataAsset) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
