#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtDummyTablet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GtDummyTablet)
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckResult;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtDummyTablet;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtDummyTablet*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtDummyTablet*, "Liv.Lck.GorillaTag", "GtDummyTablet");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtDummyTablet
class CORDL_TYPE GtDummyTablet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _body, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__body, put=__cordl_internal_set__body)) ::UnityW<::UnityEngine::GameObject>  _body;

/// @brief Field _cosmeticEmobi, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticEmobi, put=__cordl_internal_set__cosmeticEmobi)) ::UnityW<::UnityEngine::GameObject>  _cosmeticEmobi;

/// @brief Field _cosmeticTablet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticTablet, put=__cordl_internal_set__cosmeticTablet)) ::UnityW<::UnityEngine::GameObject>  _cosmeticTablet;

/// @brief Field _defaultMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultMaterial, put=__cordl_internal_set__defaultMaterial)) ::UnityW<::UnityEngine::Material>  _defaultMaterial;

/// @brief Field _ghostBody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ghostBody, put=__cordl_internal_set__ghostBody)) ::UnityW<::UnityEngine::GameObject>  _ghostBody;

/// @brief Field _isCapturing, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCapturing, put=__cordl_internal_set__isCapturing)) bool  _isCapturing;

/// @brief Field _isLCKWallCameraSpawner, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLCKWallCameraSpawner, put=__cordl_internal_set__isLCKWallCameraSpawner)) bool  _isLCKWallCameraSpawner;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _recordingButtonIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingButtonIndex, put=__cordl_internal_set__recordingButtonIndex)) int32_t  _recordingButtonIndex;

/// @brief Field _recordingIndicator, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingIndicator, put=__cordl_internal_set__recordingIndicator)) ::UnityW<::UnityEngine::GameObject>  _recordingIndicator;

/// @brief Field _recordingMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingMaterial, put=__cordl_internal_set__recordingMaterial)) ::UnityW<::UnityEngine::Material>  _recordingMaterial;

/// @brief Field _renderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::MeshRenderer>  _renderer;

static inline ::Liv::Lck::GorillaTag::GtDummyTablet* New_ctor() ;

/// @brief Method OnCaptureStarted, addr 0x9d23790, size 0x20, virtual false, abstract: false, final false
inline void OnCaptureStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnCaptureStopped, addr 0x9d237b0, size 0x8, virtual false, abstract: false, final false
inline void OnCaptureStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnDisable, addr 0x9d23428, size 0x2b0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEmobiCosmeticSpawned, addr 0x9d23274, size 0x68, virtual false, abstract: false, final false
inline void OnEmobiCosmeticSpawned(::UnityEngine::GameObject*  cosmetic) ;

/// @brief Method OnEnable, addr 0x9d22f60, size 0x2ac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTabletCosmeticSpawned, addr 0x9d2320c, size 0x68, virtual false, abstract: false, final false
inline void OnTabletCosmeticSpawned(::UnityEngine::GameObject*  cosmetic) ;

/// @brief Method SetDummyTabletBodyState, addr 0x9d232dc, size 0x14c, virtual false, abstract: false, final false
inline void SetDummyTabletBodyState(bool  isActive) ;

/// @brief Method SetState, addr 0x9d236e0, size 0xb0, virtual false, abstract: false, final false
inline void SetState(bool  isCapturing) ;

/// @brief Method Start, addr 0x9d236d8, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__body() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__body() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cosmeticEmobi() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cosmeticEmobi() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cosmeticTablet() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cosmeticTablet() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__defaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__defaultMaterial() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ghostBody() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ghostBody() ;

constexpr bool const& __cordl_internal_get__isCapturing() const;

constexpr bool& __cordl_internal_get__isCapturing() ;

constexpr bool const& __cordl_internal_get__isLCKWallCameraSpawner() const;

constexpr bool& __cordl_internal_get__isLCKWallCameraSpawner() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr int32_t const& __cordl_internal_get__recordingButtonIndex() const;

constexpr int32_t& __cordl_internal_get__recordingButtonIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__recordingIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__recordingIndicator() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__recordingMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__recordingMaterial() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer() ;

constexpr void __cordl_internal_set__body(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__cosmeticEmobi(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__cosmeticTablet(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__defaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__ghostBody(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__isCapturing(bool  value) ;

constexpr void __cordl_internal_set__isLCKWallCameraSpawner(bool  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__recordingButtonIndex(int32_t  value) ;

constexpr void __cordl_internal_set__recordingIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__recordingMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x9d237b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtDummyTablet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtDummyTablet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtDummyTablet(GtDummyTablet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtDummyTablet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtDummyTablet(GtDummyTablet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29631};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _isLCKWallCameraSpawner, offset: 0x28, size: 0x1, def value: None
 bool  ____isLCKWallCameraSpawner;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____renderer;

/// [SerializeField]
/// @brief Field _body, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____body;

/// [SerializeField]
/// @brief Field _ghostBody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ghostBody;

/// [SerializeField]
/// @brief Field _defaultMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____defaultMaterial;

/// [SerializeField]
/// @brief Field _recordingMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____recordingMaterial;

/// @brief Field _cosmeticTablet, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cosmeticTablet;

/// @brief Field _cosmeticEmobi, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cosmeticEmobi;

/// [SerializeField]
/// @brief Field _recordingButtonIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ____recordingButtonIndex;

/// [SerializeField]
/// @brief Field _recordingIndicator, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____recordingIndicator;

/// @brief Field _isCapturing, offset: 0x78, size: 0x1, def value: None
 bool  ____isCapturing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____isLCKWallCameraSpawner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____body) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____ghostBody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____defaultMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____recordingMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____cosmeticTablet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____cosmeticEmobi) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____recordingButtonIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____recordingIndicator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDummyTablet, ____isCapturing) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtDummyTablet) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
