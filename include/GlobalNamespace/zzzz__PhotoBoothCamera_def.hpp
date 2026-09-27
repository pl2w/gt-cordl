#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotoBoothCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotoBoothCamera)
namespace GlobalNamespace {
class PhotoBoothCamera___c__DisplayClass14_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotoBoothCamera;
}
namespace GlobalNamespace {
class PhotoBoothCamera___c__DisplayClass14_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotoBoothCamera*);
MARK_REF_T(::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotoBoothCamera*, "", "PhotoBoothCamera");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0*, "", "PhotoBoothCamera/<>c__DisplayClass14_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotoBoothCamera
class CORDL_TYPE PhotoBoothCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass14_0 = ::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0;

/// @brief Field OnCapture, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCapture, put=__cordl_internal_set_OnCapture)) ::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>*  OnCapture;

/// @brief Field OnCaptureImage, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCaptureImage, put=__cordl_internal_set_OnCaptureImage)) ::UnityEngine::Events::UnityEvent*  OnCaptureImage;

/// @brief Field OnSaveImage, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSaveImage, put=__cordl_internal_set_OnSaveImage)) ::UnityEngine::Events::UnityEvent*  OnSaveImage;

/// @brief Field appendDateToFile, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_appendDateToFile, put=__cordl_internal_set_appendDateToFile)) bool  appendDateToFile;

/// @brief Field cam, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cam, put=__cordl_internal_set_cam)) ::UnityW<::UnityEngine::Camera>  cam;

/// @brief Field imageDescription, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_imageDescription, put=__cordl_internal_set_imageDescription)) ::StringW  imageDescription;

/// @brief Field overlay, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlay, put=__cordl_internal_set_overlay)) ::UnityW<::UnityEngine::Texture2D>  overlay;

/// @brief Field renderTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderTexture, put=__cordl_internal_set_renderTexture)) ::UnityW<::UnityEngine::RenderTexture>  renderTexture;

/// @brief Field rt, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rt, put=__cordl_internal_set_rt)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  rt;

/// @brief Field saveImageToDevice, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveImageToDevice, put=__cordl_internal_set_saveImageToDevice)) bool  saveImageToDevice;

/// @brief Field saveName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveName, put=__cordl_internal_set_saveName)) ::StringW  saveName;

/// @brief Method Capture, addr 0x5710c80, size 0x228, virtual false, abstract: false, final false
inline void Capture(float_t  FOV) ;

/// @brief Method Clear, addr 0x5710c10, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GlobalNamespace::PhotoBoothCamera* New_ctor() ;

/// @brief Method Print, addr 0x5711330, size 0x10, virtual false, abstract: false, final false
inline void Print() ;

/// @brief Method SaveImage, addr 0x5711340, size 0x1c8, virtual false, abstract: false, final false
inline void SaveImage(::UnityEngine::Texture*  rt, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  narray, ::StringW  fileName, ::StringW  desc) ;

/// @brief Method SetSaveImageToDevice, addr 0x5710c08, size 0x8, virtual false, abstract: false, final false
inline void SetSaveImageToDevice(bool  b) ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>* const& __cordl_internal_get_OnCapture() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>*& __cordl_internal_get_OnCapture() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnCaptureImage() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnCaptureImage() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnSaveImage() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnSaveImage() ;

constexpr bool const& __cordl_internal_get_appendDateToFile() const;

constexpr bool& __cordl_internal_get_appendDateToFile() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam() ;

constexpr ::StringW const& __cordl_internal_get_imageDescription() const;

constexpr ::StringW& __cordl_internal_get_imageDescription() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_overlay() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_overlay() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_renderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_renderTexture() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_rt() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_rt() ;

constexpr bool const& __cordl_internal_get_saveImageToDevice() const;

constexpr bool& __cordl_internal_get_saveImageToDevice() ;

constexpr ::StringW const& __cordl_internal_get_saveName() const;

constexpr ::StringW& __cordl_internal_get_saveName() ;

constexpr void __cordl_internal_set_OnCapture(::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnCaptureImage(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnSaveImage(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_appendDateToFile(bool  value) ;

constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_imageDescription(::StringW  value) ;

constexpr void __cordl_internal_set_overlay(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_renderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_rt(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_saveImageToDevice(bool  value) ;

constexpr void __cordl_internal_set_saveName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5711508, size 0xd8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _print, addr 0x5710ea8, size 0x480, virtual false, abstract: false, final false
inline void _print() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoBoothCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoBoothCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoBoothCamera(PhotoBoothCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoBoothCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoBoothCamera(PhotoBoothCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1175};

/// [SerializeField]
/// @brief Field cam, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cam;

/// [SerializeField]
/// @brief Field renderTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___renderTexture;

/// [SerializeField]
/// @brief Field saveName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___saveName;

/// [SerializeField]
/// @brief Field appendDateToFile, offset: 0x38, size: 0x1, def value: None
 bool  ___appendDateToFile;

/// [SerializeField]
/// @brief Field imageDescription, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___imageDescription;

/// [SerializeField]
/// @brief Field overlay, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___overlay;

/// [SerializeField]
/// @brief Field OnCaptureImage, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnCaptureImage;

/// [SerializeField]
/// @brief Field OnSaveImage, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnSaveImage;

/// @brief Field rt, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  ___rt;

/// @brief Field OnCapture, offset: 0x68, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>*  ___OnCapture;

/// @brief Field saveImageToDevice, offset: 0x70, size: 0x1, def value: None
 bool  ___saveImageToDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___cam) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___renderTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___saveName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___appendDateToFile) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___imageDescription) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___overlay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___OnCaptureImage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___OnSaveImage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___rt) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___OnCapture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera, ___saveImageToDevice) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotoBoothCamera) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotoBoothCamera/<>c__DisplayClass14_0
class CORDL_TYPE PhotoBoothCamera___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PhotoBoothCamera>  __4__this;

/// @brief Field fileName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName, put=__cordl_internal_set_fileName)) ::StringW  fileName;

/// @brief Field narray, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_narray, put=__cordl_internal_set_narray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  narray;

/// @brief Field print, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_print, put=__cordl_internal_set_print)) ::UnityW<::UnityEngine::Texture2D>  print;

static inline ::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_fileName() const;

constexpr ::StringW& __cordl_internal_get_fileName() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> const& __cordl_internal_get_narray() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>& __cordl_internal_get_narray() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_print() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_print() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PhotoBoothCamera>  value) ;

constexpr void __cordl_internal_set_fileName(::StringW  value) ;

constexpr void __cordl_internal_set_narray(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  value) ;

constexpr void __cordl_internal_set_print(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method <_print>b__0, addr 0x57115e0, size 0x14c, virtual false, abstract: false, final false
inline void __print_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest  request) ;

/// @brief Method .ctor, addr 0x5711328, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoBoothCamera___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoBoothCamera___c__DisplayClass14_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoBoothCamera___c__DisplayClass14_0(PhotoBoothCamera___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoBoothCamera___c__DisplayClass14_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoBoothCamera___c__DisplayClass14_0(PhotoBoothCamera___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1174};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PhotoBoothCamera>  _____4__this;

/// @brief Field narray, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  ___narray;

/// @brief Field print, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___print;

/// @brief Field fileName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___fileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0, ___narray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0, ___print) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0, ___fileName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
