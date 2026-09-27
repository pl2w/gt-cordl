#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/IPixelPerfectCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPixelPerfectCamera)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IPixelPerfectCamera;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::IPixelPerfectCamera*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::IPixelPerfectCamera*, "UnityEngine.Rendering.Universal", "IPixelPerfectCamera");
// Dependencies 
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.IPixelPerfectCamera
class CORDL_TYPE IPixelPerfectCamera {
public:
// Declarations
 __declspec(property(get=get_assetsPPU)) int32_t  assetsPPU;

 __declspec(property(get=get_cropFrameX)) bool  cropFrameX;

 __declspec(property(get=get_cropFrameY)) bool  cropFrameY;

 __declspec(property(get=get_pixelSnapping)) bool  pixelSnapping;

 __declspec(property(get=get_refResolutionX)) int32_t  refResolutionX;

 __declspec(property(get=get_refResolutionY)) int32_t  refResolutionY;

 __declspec(property(get=get_stretchFill)) bool  stretchFill;

 __declspec(property(get=get_upscaleRT)) bool  upscaleRT;

/// @brief Method get_assetsPPU, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_assetsPPU() ;

/// @brief Method get_cropFrameX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_cropFrameX() ;

/// @brief Method get_cropFrameY, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_cropFrameY() ;

/// @brief Method get_pixelSnapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_pixelSnapping() ;

/// @brief Method get_refResolutionX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_refResolutionX() ;

/// @brief Method get_refResolutionY, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_refResolutionY() ;

/// @brief Method get_stretchFill, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_stretchFill() ;

/// @brief Method get_upscaleRT, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_upscaleRT() ;

// Ctor Parameters [CppParam { name: "", ty: "IPixelPerfectCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPixelPerfectCamera(IPixelPerfectCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32907};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::Universal
