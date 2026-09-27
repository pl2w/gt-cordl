#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvasManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayCanvasManager)
namespace GlobalNamespace {
class OVROverlayCanvasManager___c;
}
namespace GlobalNamespace {
class OVROverlayCanvas;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVROverlayCanvasManager;
}
namespace GlobalNamespace {
class OVROverlayCanvasManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVROverlayCanvasManager*);
MARK_REF_T(::GlobalNamespace::OVROverlayCanvasManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvasManager*, "", "OVROverlayCanvasManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvasManager___c*, "", "OVROverlayCanvasManager/<>c");
// [ExecuteInEditMode]
// [DefaultExecutionOrder(-99)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvasManager
class CORDL_TYPE OVROverlayCanvasManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::OVROverlayCanvasManager___c;

 __declspec(property(get=get_Canvases)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  Canvases;

/// @brief Field _canvases, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvases, put=__cordl_internal_set__canvases)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  _canvases;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::OVROverlayCanvasManager>  _instance;

/// @brief Method AddCanvas, addr 0xa601968, size 0xbc, virtual false, abstract: false, final false
static inline void AddCanvas(::GlobalNamespace::OVROverlayCanvas*  canvas) ;

/// @brief Method Awake, addr 0xa604784, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsCanvasPriority, addr 0xa600314, size 0x9c, virtual false, abstract: false, final false
inline bool IsCanvasPriority(::GlobalNamespace::OVROverlayCanvas*  canvas) ;

static inline ::GlobalNamespace::OVROverlayCanvasManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa604918, size 0xb4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveCanvas, addr 0xa601ac4, size 0x84, virtual false, abstract: false, final false
static inline void RemoveCanvas(::GlobalNamespace::OVROverlayCanvas*  canvas) ;

/// @brief Method Update, addr 0xa604814, size 0x104, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>* const& __cordl_internal_get__canvases() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*& __cordl_internal_get__canvases() ;

constexpr void __cordl_internal_set__canvases(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  value) ;

/// @brief Method .ctor, addr 0xa6049cc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasManager> getStaticF__instance() ;

/// @brief Method get_Canvases, addr 0xa60477c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>* get_Canvases() ;

/// @brief Method get_Instance, addr 0xa6001c4, size 0x150, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OVROverlayCanvasManager> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVROverlayCanvasManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvasManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvasManager(OVROverlayCanvasManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvasManager(OVROverlayCanvasManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12015};

/// @brief Field _canvases, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  ____canvases;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvasManager, ____canvases) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvasManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvasManager/<>c
class CORDL_TYPE OVROverlayCanvasManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::OVROverlayCanvasManager___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  __9__10_0;

static inline ::GlobalNamespace::OVROverlayCanvasManager___c* New_ctor() ;

/// @brief Method <Update>b__10_0, addr 0xa604ac4, size 0x130, virtual false, abstract: false, final false
inline int32_t _Update_b__10_0(::GlobalNamespace::OVROverlayCanvas*  a, ::GlobalNamespace::OVROverlayCanvas*  b) ;

/// @brief Method .ctor, addr 0xa604abc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVROverlayCanvasManager___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>* getStaticF___9__10_0() ;

static inline void setStaticF___9(::GlobalNamespace::OVROverlayCanvasManager___c*  value) ;

static inline void setStaticF___9__10_0(::System::Comparison_1<::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvasManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvasManager___c(OVROverlayCanvasManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvasManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvasManager___c(OVROverlayCanvasManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12014};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVROverlayCanvasManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
