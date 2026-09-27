#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_LightCookieMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieManager_LightCookieMapping)
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieMapping_LightCookieManager___c;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
struct LightCookieManager_LightCookieMapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightCookieManager_LightCookieMapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightCookieManager_LightCookieMapping, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieMapping");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct CORDL_TYPE LightCookieManager_LightCookieMapping {
public:
// Declarations
using __c = ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c;

/// @brief Field s_CompareByBufferIndex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CompareByBufferIndex, put=setStaticF_s_CompareByBufferIndex)) ::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*  s_CompareByBufferIndex;

/// @brief Field s_CompareByCookieSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CompareByCookieSize, put=setStaticF_s_CompareByCookieSize)) ::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*  s_CompareByCookieSize;

static inline ::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>* getStaticF_s_CompareByBufferIndex() ;

static inline ::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>* getStaticF_s_CompareByCookieSize() ;

static inline void setStaticF_s_CompareByBufferIndex(::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*  value) ;

static inline void setStaticF_s_CompareByCookieSize(::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager_LightCookieMapping() ;

// Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightBufferIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "light", ty: "::UnityW<::UnityEngine::Light>", modifiers: "", def_value: None, comment: None }]
constexpr LightCookieManager_LightCookieMapping(uint16_t  visibleLightIndex, uint16_t  lightBufferIndex, ::UnityW<::UnityEngine::Light>  light) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field visibleLightIndex, offset: 0x0, size: 0x2, def value: None
 uint16_t  visibleLightIndex;

/// @brief Field lightBufferIndex, offset: 0x2, size: 0x2, def value: None
 uint16_t  lightBufferIndex;

/// @brief Field light, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  light;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightCookieManager_LightCookieMapping, visibleLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightCookieManager_LightCookieMapping, lightBufferIndex) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightCookieManager_LightCookieMapping, light) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightCookieManager_LightCookieMapping) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
