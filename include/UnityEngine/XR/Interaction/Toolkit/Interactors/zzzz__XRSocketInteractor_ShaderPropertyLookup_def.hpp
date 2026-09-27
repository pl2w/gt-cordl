#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRSocketInteractor_ShaderPropertyLookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSocketInteractor_ShaderPropertyLookup)
// Forward declare root types
namespace GlobalNamespace {
struct XRSocketInteractor_ShaderPropertyLookup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRSocketInteractor_ShaderPropertyLookup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRSocketInteractor_ShaderPropertyLookup, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRSocketInteractor/ShaderPropertyLookup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRSocketInteractor/ShaderPropertyLookup
#pragma pack(push, 0)
struct CORDL_TYPE XRSocketInteractor_ShaderPropertyLookup {
public:
// Declarations
/// @brief Field baseColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_baseColor, put=setStaticF_baseColor)) int32_t  baseColor;

/// @brief Field color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_color, put=setStaticF_color)) int32_t  color;

/// @brief Field dstBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_dstBlend, put=setStaticF_dstBlend)) int32_t  dstBlend;

/// @brief Field mode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mode, put=setStaticF_mode)) int32_t  mode;

/// @brief Field srcBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_srcBlend, put=setStaticF_srcBlend)) int32_t  srcBlend;

/// @brief Field surface, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_surface, put=setStaticF_surface)) int32_t  surface;

/// @brief Field zWrite, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_zWrite, put=setStaticF_zWrite)) int32_t  zWrite;

static inline int32_t getStaticF_baseColor() ;

static inline int32_t getStaticF_color() ;

static inline int32_t getStaticF_dstBlend() ;

static inline int32_t getStaticF_mode() ;

static inline int32_t getStaticF_srcBlend() ;

static inline int32_t getStaticF_surface() ;

static inline int32_t getStaticF_zWrite() ;

static inline void setStaticF_baseColor(int32_t  value) ;

static inline void setStaticF_color(int32_t  value) ;

static inline void setStaticF_dstBlend(int32_t  value) ;

static inline void setStaticF_mode(int32_t  value) ;

static inline void setStaticF_srcBlend(int32_t  value) ;

static inline void setStaticF_surface(int32_t  value) ;

static inline void setStaticF_zWrite(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRSocketInteractor_ShaderPropertyLookup() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11470};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::XRSocketInteractor_ShaderPropertyLookup) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
