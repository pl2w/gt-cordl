#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/DisplayUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DisplayUtility)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class DisplayUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "DisplayUtility");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.DisplayUtility
class CORDL_TYPE DisplayUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_OneOverScreenDpi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_OneOverScreenDpi, put=setStaticF_s_OneOverScreenDpi)) float_t  s_OneOverScreenDpi;

/// @brief Field s_ScreenDpi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ScreenDpi, put=setStaticF_s_ScreenDpi)) float_t  s_ScreenDpi;

/// @brief Field s_ScreenDpiChecked, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_ScreenDpiChecked, put=setStaticF_s_ScreenDpiChecked)) bool  s_ScreenDpiChecked;

/// @brief Method CacheScreenDpi, addr 0xb4251dc, size 0x114, virtual false, abstract: false, final false
static inline void CacheScreenDpi() ;

/// @brief Method InchesToPixels, addr 0xb4253ac, size 0x60, virtual false, abstract: false, final false
static inline float_t InchesToPixels(float_t  inches) ;

/// @brief Method PixelsToInches, addr 0xb42534c, size 0x60, virtual false, abstract: false, final false
static inline float_t PixelsToInches(float_t  pixels) ;

static inline float_t getStaticF_s_OneOverScreenDpi() ;

static inline float_t getStaticF_s_ScreenDpi() ;

static inline bool getStaticF_s_ScreenDpiChecked() ;

/// @brief Method get_screenDpi, addr 0xb425180, size 0x5c, virtual false, abstract: false, final false
static inline float_t get_screenDpi() ;

/// @brief Method get_screenDpiRatio, addr 0xb4252f0, size 0x5c, virtual false, abstract: false, final false
static inline float_t get_screenDpiRatio() ;

static inline void setStaticF_s_OneOverScreenDpi(float_t  value) ;

static inline void setStaticF_s_ScreenDpi(float_t  value) ;

static inline void setStaticF_s_ScreenDpiChecked(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisplayUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisplayUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisplayUtility(DisplayUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisplayUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisplayUtility(DisplayUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
