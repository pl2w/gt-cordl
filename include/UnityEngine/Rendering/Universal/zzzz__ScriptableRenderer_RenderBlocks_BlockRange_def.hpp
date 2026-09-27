#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer_RenderBlocks_BlockRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderer_RenderBlocks_BlockRange)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct RenderBlocks_ScriptableRenderer_BlockRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks/BlockRange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange
struct CORDL_TYPE RenderBlocks_ScriptableRenderer_BlockRange {
public:
// Declarations
 __declspec(property(get=get_Current)) int32_t  Current;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb24eb90, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0xb24eb64, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange GetEnumerator() ;

/// @brief Method MoveNext, addr 0xb24eb6c, size 0x1c, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xb24eb48, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(int32_t  begin, int32_t  end) ;

/// @brief Method get_Current, addr 0xb24eb88, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Current() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderBlocks_ScriptableRenderer_BlockRange() ;

// Ctor Parameters [CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderBlocks_ScriptableRenderer_BlockRange(int32_t  m_Current, int32_t  m_End) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Current, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Current;

/// @brief Field m_End, offset: 0x4, size: 0x4, def value: None
 int32_t  m_End;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange, m_Current) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange, m_End) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
