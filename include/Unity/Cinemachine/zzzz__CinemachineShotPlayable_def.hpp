#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineShotPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CinemachineShotPlayable)
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineShotPlayable;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineShotPlayable*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineShotPlayable*, "Unity.Cinemachine", "CinemachineShotPlayable");
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineShotPlayable
class CORDL_TYPE CinemachineShotPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field VirtualCamera, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCamera, put=__cordl_internal_set_VirtualCamera)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  VirtualCamera;

static inline ::Unity::Cinemachine::CinemachineShotPlayable* New_ctor() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_VirtualCamera() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_VirtualCamera() ;

constexpr void __cordl_internal_set_VirtualCamera(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

/// @brief Method .ctor, addr 0xaf011b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xaf00890, size 0x60, virtual false, abstract: false, final false
inline bool get_IsValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineShotPlayable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineShotPlayable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineShotPlayable(CinemachineShotPlayable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineShotPlayable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineShotPlayable(CinemachineShotPlayable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22533};

/// @brief Field VirtualCamera, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___VirtualCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineShotPlayable, ___VirtualCamera) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineShotPlayable) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
