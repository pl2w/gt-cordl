#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingJob_CrossFadeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingJob_CrossFadeType)
// Forward declare root types
namespace GlobalNamespace {
struct CullingJob_CrossFadeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CullingJob_CrossFadeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CullingJob_CrossFadeType, "UnityEngine.Rendering", "CullingJob/CrossFadeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullingJob/CrossFadeType
struct CORDL_TYPE CullingJob_CrossFadeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CullingJob_CrossFadeType_Unwrapped
enum struct __CullingJob_CrossFadeType_Unwrapped : int32_t {
__E_kDisabled = static_cast<int32_t>(0x0),
__E_kCrossFadeOut = static_cast<int32_t>(0x1),
__E_kCrossFadeIn = static_cast<int32_t>(0x2),
__E_kVisible = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CullingJob_CrossFadeType_Unwrapped () const noexcept {
return static_cast<__CullingJob_CrossFadeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CullingJob_CrossFadeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CullingJob_CrossFadeType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kCrossFadeIn value: I32(2)
static ::GlobalNamespace::CullingJob_CrossFadeType const kCrossFadeIn;

/// @brief Field kCrossFadeOut value: I32(1)
static ::GlobalNamespace::CullingJob_CrossFadeType const kCrossFadeOut;

/// @brief Field kDisabled value: I32(0)
static ::GlobalNamespace::CullingJob_CrossFadeType const kDisabled;

/// @brief Field kVisible value: I32(3)
static ::GlobalNamespace::CullingJob_CrossFadeType const kVisible;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CullingJob_CrossFadeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CullingJob_CrossFadeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
