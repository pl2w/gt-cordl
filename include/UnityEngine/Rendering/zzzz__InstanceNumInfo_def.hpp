#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceNumInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo__InstanceNums_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceNumInfo)
namespace GlobalNamespace {
struct InstanceNumInfo__InstanceNums_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceNumInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceNumInfo, "UnityEngine.Rendering", "InstanceNumInfo");
// Dependencies UnityEngine.Rendering.InstanceNumInfo::<InstanceNums>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceNumInfo
struct CORDL_TYPE InstanceNumInfo {
public:
// Declarations
using _InstanceNums_e__FixedBuffer = ::GlobalNamespace::InstanceNumInfo__InstanceNums_e__FixedBuffer;

/// @brief Method GetInstanceNum, addr 0xb2089c8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetInstanceNum(::UnityEngine::Rendering::InstanceType  type) ;

/// @brief Method GetInstanceNumIncludingChildren, addr 0xb2089d0, size 0x164, virtual false, abstract: false, final false
inline int32_t GetInstanceNumIncludingChildren(::UnityEngine::Rendering::InstanceType  type) ;

/// @brief Method GetTotalInstanceNum, addr 0xb208b34, size 0xc, virtual false, abstract: false, final false
inline int32_t GetTotalInstanceNum() ;

/// @brief Method InitDefault, addr 0xb2089b8, size 0x8, virtual false, abstract: false, final false
inline void InitDefault() ;

/// @brief Method .ctor, addr 0xb2089c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  meshRendererNum, int32_t  speedTreeNum) ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceNumInfo() ;

// Ctor Parameters [CppParam { name: "InstanceNums", ty: "::GlobalNamespace::InstanceNumInfo__InstanceNums_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr InstanceNumInfo(::GlobalNamespace::InstanceNumInfo__InstanceNums_e__FixedBuffer  InstanceNums) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [FixedBuffer(typeof(System.Int32), 2)]
/// @brief Field InstanceNums, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::InstanceNumInfo__InstanceNums_e__FixedBuffer  InstanceNums;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceNumInfo, InstanceNums) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::InstanceNumInfo) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
