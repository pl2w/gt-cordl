#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils_UlongKeyGetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUnsafeUtils_UlongKeyGetter)
namespace UnityEngine::Rendering {
template<typename TValue,typename TKey>
class CoreUnsafeUtils_IKeyGetter_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct CoreUnsafeUtils_UlongKeyGetter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter, "UnityEngine.Rendering", "CoreUnsafeUtils/UlongKeyGetter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/UlongKeyGetter
#pragma pack(push, 0)
struct CORDL_TYPE CoreUnsafeUtils_UlongKeyGetter {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
constexpr operator  ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>*() ;

/// @brief Method Get, addr 0xb1234b8, size 0x8, virtual true, abstract: false, final true
inline uint64_t Get(::by_ref<uint64_t>  v) ;

/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>* i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_uint64_t_uint64_t_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CoreUnsafeUtils_UlongKeyGetter() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
