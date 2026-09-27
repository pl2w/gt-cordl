#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveRelativeToTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(MoveRelativeToTarget)
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveRelativeToTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MoveRelativeToTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoveRelativeToTarget*, "", "MoveRelativeToTarget");
// Dependencies System.Object, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: false
// CS Name: MoveRelativeToTarget
class CORDL_TYPE MoveRelativeToTarget : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field _current, offset 0x10, size 0x1c 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) ::UnityEngine::Pose  _current;

/// @brief Field _offset, offset 0x64, size 0x1c 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Pose  _offset;

/// @brief Field _originalSource, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get__originalSource, put=__cordl_internal_set__originalSource)) ::UnityEngine::Pose  _originalSource;

/// @brief Field _originalTarget, offset 0x2c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__originalTarget, put=__cordl_internal_set__originalTarget)) ::UnityEngine::Pose  _originalTarget;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method MoveTo, addr 0xa42779c, size 0x54, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::GlobalNamespace::MoveRelativeToTarget* New_ctor() ;

/// @brief Method StopAndSetPose, addr 0xa427830, size 0x3c, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  source) ;

/// @brief Method Tick, addr 0xa42786c, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateTarget, addr 0xa4277f0, size 0x40, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__current() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__current() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__offset() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__originalSource() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__originalSource() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__originalTarget() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__originalTarget() ;

constexpr void __cordl_internal_set__current(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__originalSource(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__originalTarget(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa4276dc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Pose, addr 0xa427780, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0xa427794, size 0x8, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveRelativeToTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveRelativeToTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveRelativeToTarget(MoveRelativeToTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveRelativeToTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveRelativeToTarget(MoveRelativeToTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28240};

/// @brief Field _current, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____current;

/// @brief Field _originalTarget, offset: 0x2c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____originalTarget;

/// @brief Field _originalSource, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____originalSource;

/// @brief Field _offset, offset: 0x64, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoveRelativeToTarget, ____current) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveRelativeToTarget, ____originalTarget) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveRelativeToTarget, ____originalSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveRelativeToTarget, ____offset) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MoveRelativeToTarget) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
