#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils_DefaultKeyGetter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CoreUnsafeUtils_DefaultKeyGetter_1)
namespace UnityEngine::Rendering {
template<typename TValue,typename TKey>
class CoreUnsafeUtils_IKeyGetter_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct CoreUnsafeUtils_DefaultKeyGetter_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1, "UnityEngine.Rendering", "CoreUnsafeUtils/DefaultKeyGetter`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/DefaultKeyGetter`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE CoreUnsafeUtils_DefaultKeyGetter_1 {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
constexpr operator  ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>*() ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T Get(::by_ref<T>  v) ;

/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>* i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_T_T_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CoreUnsafeUtils_DefaultKeyGetter_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
