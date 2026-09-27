#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCoconutCameraController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtCoconutCameraController)
namespace Liv::Lck::GorillaTag {
class CoconutCamera;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckResult;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtCoconutCameraController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtCoconutCameraController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtCoconutCameraController*, "Liv.Lck.GorillaTag", "GtCoconutCameraController");
// [DefaultExecutionOrder(100)]
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtCoconutCameraController
class CORDL_TYPE GtCoconutCameraController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cocoCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cocoCamera, put=__cordl_internal_set__cocoCamera)) ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  _cocoCamera;

/// @brief Field _hideOnStart, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideOnStart, put=__cordl_internal_set__hideOnStart)) bool  _hideOnStart;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

static inline ::Liv::Lck::GorillaTag::GtCoconutCameraController* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d21b48, size 0x1a8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d21940, size 0x1e4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRecordingStarted, addr 0x9d21cf0, size 0x18, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingStopped, addr 0x9d21d08, size 0x18, virtual false, abstract: false, final false
inline void OnRecordingStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method Start, addr 0x9d21b24, size 0x24, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera> const& __cordl_internal_get__cocoCamera() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>& __cordl_internal_get__cocoCamera() ;

constexpr bool const& __cordl_internal_get__hideOnStart() const;

constexpr bool& __cordl_internal_get__hideOnStart() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr void __cordl_internal_set__cocoCamera(::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  value) ;

constexpr void __cordl_internal_set__hideOnStart(bool  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

/// @brief Method .ctor, addr 0x9d21d20, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtCoconutCameraController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtCoconutCameraController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtCoconutCameraController(GtCoconutCameraController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtCoconutCameraController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtCoconutCameraController(GtCoconutCameraController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29624};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _cocoCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  ____cocoCamera;

/// [SerializeField]
/// @brief Field _hideOnStart, offset: 0x30, size: 0x1, def value: None
 bool  ____hideOnStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtCoconutCameraController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCoconutCameraController, ____cocoCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCoconutCameraController, ____hideOnStart) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtCoconutCameraController) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
