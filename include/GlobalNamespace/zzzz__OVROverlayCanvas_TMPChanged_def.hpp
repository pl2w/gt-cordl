#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas_TMPChanged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVROverlayCanvas_TMPChanged)
namespace GlobalNamespace {
class OVROverlayCanvas;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OVROverlayCanvas_TMPChanged;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVROverlayCanvas_TMPChanged*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvas_TMPChanged*, "", "OVROverlayCanvas_TMPChanged");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvas_TMPChanged
class CORDL_TYPE OVROverlayCanvas_TMPChanged : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TargetCanvas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetCanvas, put=__cordl_internal_set_TargetCanvas)) ::UnityW<::GlobalNamespace::OVROverlayCanvas>  TargetCanvas;

/// @brief Field _textObjectToCanvas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__textObjectToCanvas, put=setStaticF__textObjectToCanvas)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  _textObjectToCanvas;

static inline ::GlobalNamespace::OVROverlayCanvas_TMPChanged* New_ctor() ;

/// @brief Method OnDisable, addr 0xa605248, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa6051b4, size 0x94, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method OnLoad, addr 0xa605000, size 0xc4, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method OnTextChanged, addr 0xa6050c4, size 0xf0, virtual false, abstract: false, final false
static inline void OnTextChanged(::UnityEngine::Object*  target) ;

constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas> const& __cordl_internal_get_TargetCanvas() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas>& __cordl_internal_get_TargetCanvas() ;

constexpr void __cordl_internal_set_TargetCanvas(::UnityW<::GlobalNamespace::OVROverlayCanvas>  value) ;

/// @brief Method .ctor, addr 0xa6052d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>* getStaticF__textObjectToCanvas() ;

static inline void setStaticF__textObjectToCanvas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas_TMPChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas_TMPChanged", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvas_TMPChanged(OVROverlayCanvas_TMPChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas_TMPChanged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvas_TMPChanged(OVROverlayCanvas_TMPChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12017};

/// @brief Field TargetCanvas, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlayCanvas>  ___TargetCanvas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas_TMPChanged, ___TargetCanvas) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvas_TMPChanged) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
