#pragma once
// IWYU pragma private; include "UnityEngine/Resolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RefreshRate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Resolution)
namespace UnityEngine {
struct RefreshRate;
}
// Forward declare root types
namespace UnityEngine {
struct Resolution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Resolution);
DEFINE_IL2CPP_CLASS(::UnityEngine::Resolution, "UnityEngine", "Resolution");
// [RequiredByNativeCode]
// Dependencies UnityEngine.RefreshRate
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Resolution
struct CORDL_TYPE Resolution {
public:
// Declarations
 __declspec(property(get=get_refreshRateRatio)) ::UnityEngine::RefreshRate  refreshRateRatio;

/// @brief Method ToString, addr 0xb581714, size 0xcc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_refreshRateRatio, addr 0xb58170c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::RefreshRate get_refreshRateRatio() ;

// Ctor Parameters []
// @brief default ctor
constexpr Resolution() ;

// Ctor Parameters [CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RefreshRate", ty: "::UnityEngine::RefreshRate", modifiers: "", def_value: None, comment: None }]
constexpr Resolution(int32_t  m_Width, int32_t  m_Height, ::UnityEngine::RefreshRate  m_RefreshRate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Width, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Width;

/// @brief Field m_Height, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Height;

/// @brief Field m_RefreshRate, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::RefreshRate  m_RefreshRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Resolution, m_Width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Resolution, m_Height) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Resolution, m_RefreshRate) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Resolution) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
