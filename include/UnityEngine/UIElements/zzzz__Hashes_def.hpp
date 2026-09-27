#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Hashes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Hashes__hashes_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hashes)
namespace GlobalNamespace {
struct Hashes__hashes_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Hashes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Hashes);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Hashes, "UnityEngine.UIElements", "Hashes");
// Dependencies UnityEngine.UIElements.Hashes::<hashes>e__FixedBuffer
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Hashes
struct CORDL_TYPE Hashes {
public:
// Declarations
using _hashes_e__FixedBuffer = ::GlobalNamespace::Hashes__hashes_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr Hashes() ;

// Ctor Parameters [CppParam { name: "hashes", ty: "::GlobalNamespace::Hashes__hashes_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr Hashes(::GlobalNamespace::Hashes__hashes_e__FixedBuffer  hashes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8261};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kSize offset 0xffffffff size 0x4
static constexpr int32_t  kSize{static_cast<int32_t>(0x4)};

/// [FixedBuffer(typeof(System.Int32), 4)]
/// @brief Field hashes, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::Hashes__hashes_e__FixedBuffer  hashes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Hashes, hashes) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Hashes) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
