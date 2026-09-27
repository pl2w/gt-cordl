#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSerializerScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSerializer_def.hpp"
CORDL_MODULE_EXPORT(GorillaSerializerScene)
namespace GlobalNamespace {
class IGorillaSerializeableScene;
}
namespace Photon::Pun {
class IOnPhotonViewPreNetDestroy;
}
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSerializerScene;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSerializerScene*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSerializerScene*, "", "GorillaSerializerScene");
// Dependencies GorillaSerializer
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSerializerScene
class CORDL_TYPE GorillaSerializerScene : public ::GlobalNamespace::GorillaSerializer {
public:
// Declarations
 __declspec(property(get=get_HasAuthority)) bool  HasAuthority;

/// @brief Field sceneSerializeTarget, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneSerializeTarget, put=__cordl_internal_set_sceneSerializeTarget)) ::GlobalNamespace::IGorillaSerializeableScene*  sceneSerializeTarget;

/// @brief Field targetComponent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetComponent, put=__cordl_internal_set_targetComponent)) ::UnityW<::UnityEngine::MonoBehaviour>  targetComponent;

/// @brief Field transferrable, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_transferrable, put=__cordl_internal_set_transferrable)) bool  transferrable;

/// @brief Field validDisable, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_validDisable, put=__cordl_internal_set_validDisable)) bool  validDisable;

/// @brief Convert operator to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr operator  ::Photon::Pun::IOnPhotonViewPreNetDestroy*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr operator  ::Photon::Pun::IPhotonViewCallback*() noexcept;

static inline ::GlobalNamespace::GorillaSerializerScene* New_ctor() ;

/// @brief Method OnDisable, addr 0x58f502c, size 0x24, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58f4f5c, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPhotonInstantiate, addr 0x58f50f4, size 0x134, virtual true, abstract: false, final false
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnValidDisable, addr 0x58f5050, size 0xa4, virtual true, abstract: false, final false
inline void OnValidDisable() ;

/// @brief Method OnValidEnable, addr 0x58f4f88, size 0xa4, virtual true, abstract: false, final false
inline void OnValidEnable() ;

/// @brief Method Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy, addr 0x58f5228, size 0x8, virtual true, abstract: false, final true
inline void Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView) ;

/// @brief Method Start, addr 0x58f4db4, size 0x1a8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ValidOnSerialize, addr 0x58f5230, size 0x8c, virtual true, abstract: false, final false
inline bool ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info) ;

constexpr ::GlobalNamespace::IGorillaSerializeableScene* const& __cordl_internal_get_sceneSerializeTarget() const;

constexpr ::GlobalNamespace::IGorillaSerializeableScene*& __cordl_internal_get_sceneSerializeTarget() ;

constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_targetComponent() const;

constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_targetComponent() ;

constexpr bool const& __cordl_internal_get_transferrable() const;

constexpr bool& __cordl_internal_get_transferrable() ;

constexpr bool const& __cordl_internal_get_validDisable() const;

constexpr bool& __cordl_internal_get_validDisable() ;

constexpr void __cordl_internal_set_sceneSerializeTarget(::GlobalNamespace::IGorillaSerializeableScene*  value) ;

constexpr void __cordl_internal_set_targetComponent(::UnityW<::UnityEngine::MonoBehaviour>  value) ;

constexpr void __cordl_internal_set_transferrable(bool  value) ;

constexpr void __cordl_internal_set_validDisable(bool  value) ;

/// @brief Method .ctor, addr 0x58f52bc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasAuthority, addr 0x58f4d9c, size 0x18, virtual false, abstract: false, final false
inline bool get_HasAuthority() ;

/// @brief Convert to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr ::Photon::Pun::IOnPhotonViewPreNetDestroy* i___Photon__Pun__IOnPhotonViewPreNetDestroy() noexcept;

/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSerializerScene() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSerializerScene", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSerializerScene(GorillaSerializerScene && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSerializerScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSerializerScene(GorillaSerializerScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2124};

/// [SerializeField]
/// @brief Field transferrable, offset: 0x48, size: 0x1, def value: None
 bool  ___transferrable;

/// [SerializeField]
/// @brief Field targetComponent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  ___targetComponent;

/// @brief Field sceneSerializeTarget, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::IGorillaSerializeableScene*  ___sceneSerializeTarget;

/// @brief Field validDisable, offset: 0x60, size: 0x1, def value: None
 bool  ___validDisable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSerializerScene, ___transferrable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSerializerScene, ___targetComponent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSerializerScene, ___sceneSerializeTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSerializerScene, ___validDisable) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSerializerScene) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
