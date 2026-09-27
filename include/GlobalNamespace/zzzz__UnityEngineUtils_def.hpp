#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityEngineUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityEngineUtils)
namespace GlobalNamespace {
struct Id128;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Hash128;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngineUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityEngineUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityEngineUtils*, "", "UnityEngineUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityEngineUtils
class CORDL_TYPE UnityEngineUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Color32ToId, addr 0x5b1b35c, size 0x58, virtual false, abstract: false, final false
static inline int32_t Color32ToId(::UnityEngine::Color32  c, bool  distinct) ;

/// [Extension]
/// @brief Method CopyTo, addr 0x5b1b908, size 0xc, virtual false, abstract: false, final false
static inline void CopyTo(::by_ref<::UnityEngine::Quaternion>  q, ::by_ref<::UnityEngine::Vector4>  v) ;

/// [Extension]
/// @brief Method EqualsColor, addr 0x5b1b134, size 0x10, virtual false, abstract: false, final false
static inline bool EqualsColor(::UnityEngine::Color32  c, ::UnityEngine::Color32  other) ;

/// [Extension]
/// @brief Method IdToColor32, addr 0x5b1b1e8, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 IdToColor32(int32_t  id, int32_t  alpha, bool  distinct) ;

/// [Extension]
/// @brief Method IdToColor32, addr 0x5b1b144, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 IdToColor32(::UnityEngine::Object*  obj, int32_t  alpha, bool  distinct) ;

/// @brief Method MergeTo64, addr 0x5b1b8f8, size 0xc, virtual false, abstract: false, final false
static inline uint64_t MergeTo64(int32_t  a, int32_t  b) ;

/// [Extension]
/// @brief Method QuantizedHash128, addr 0x5b1b3b4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 QuantizedHash128(::UnityEngine::Matrix4x4  m) ;

/// [Extension]
/// @brief Method QuantizedHash128, addr 0x5b1b3dc, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 QuantizedHash128(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method QuantizedHash64, addr 0x5b1b600, size 0x2f8, virtual false, abstract: false, final false
static inline int64_t QuantizedHash64(::UnityEngine::Matrix4x4  m) ;

/// [Extension]
/// @brief Method QuantizedHash64, addr 0x5b1b550, size 0xb0, virtual false, abstract: false, final false
static inline int64_t QuantizedHash64(::UnityEngine::Vector4  v) ;

/// [Extension]
/// @brief Method QuantizedId128, addr 0x5b1b44c, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 QuantizedId128(::UnityEngine::Matrix4x4  m) ;

/// [Extension]
/// @brief Method QuantizedId128, addr 0x5b1b490, size 0xc0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 QuantizedId128(::UnityEngine::Quaternion  q) ;

/// [Extension]
/// @brief Method QuantizedId128, addr 0x5b1b410, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 QuantizedId128(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToHighViz, addr 0x5b1b2d8, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 ToHighViz(::UnityEngine::Color32  c) ;

/// [Extension]
/// @brief Method ToVector, addr 0x5b1b904, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 ToVector(::UnityEngine::Quaternion  q) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEngineUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEngineUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEngineUtils(UnityEngineUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngineUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEngineUtils(UnityEngineUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityEngineUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
