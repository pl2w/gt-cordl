#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResourcePool`1_ResourceLogInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphResourcePool`1_ResourceLogInfo)
// Forward declare root types
namespace GlobalNamespace {
template<typename Type>
struct RenderGraphResourcePool_1_ResourceLogInfo;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RenderGraphResourcePool_1_ResourceLogInfo);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RenderGraphResourcePool_1_ResourceLogInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphResourcePool`1/ResourceLogInfo");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename Type>
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<Type>
struct CORDL_TYPE RenderGraphResourcePool_1_ResourceLogInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphResourcePool_1_ResourceLogInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraphResourcePool_1_ResourceLogInfo(::StringW  name, int64_t  size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field size, offset: 0x8, size: 0x8, def value: None
 int64_t  size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
