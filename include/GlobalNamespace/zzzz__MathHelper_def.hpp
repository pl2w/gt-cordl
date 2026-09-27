#pragma once
// IWYU pragma private; include "GlobalNamespace/MathHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MathHelper)
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MathHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MathHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MathHelper*, "", "MathHelper");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MathHelper
class CORDL_TYPE MathHelper : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsInBounds, addr 0x5d171ac, size 0x48, virtual false, abstract: false, final false
static inline bool IsInBounds(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max) ;

/// [Extension]
/// @brief Method RoundTo, addr 0x5d170b4, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion RoundTo(::UnityEngine::Quaternion  value, float_t  increment) ;

/// [Extension]
/// @brief Method RoundTo, addr 0x5d1705c, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 RoundTo(::UnityEngine::Vector3  value, float_t  increment) ;

/// [Extension]
/// @brief Method RoundTo, addr 0x5d17044, size 0x18, virtual false, abstract: false, final false
static inline float_t RoundTo(float_t  value, float_t  increment) ;

/// [Extension]
/// @brief Method SnapToCardinal, addr 0x5d17148, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SnapToCardinal(::UnityEngine::Quaternion  value) ;

/// [Extension]
/// @brief Method SnapToInt, addr 0x5d17094, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SnapToInt(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathHelper(MathHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathHelper(MathHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{488};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MathHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
