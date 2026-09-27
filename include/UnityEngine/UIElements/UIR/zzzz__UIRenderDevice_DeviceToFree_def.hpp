#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_DeviceToFree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRenderDevice_DeviceToFree)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
// Forward declare root types
namespace GlobalNamespace {
struct UIRenderDevice_DeviceToFree;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UIRenderDevice_DeviceToFree);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIRenderDevice_DeviceToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/DeviceToFree");
// Dependencies System.Collections.Generic.List`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree
struct CORDL_TYPE UIRenderDevice_DeviceToFree {
public:
// Declarations
/// @brief Method Dispose, addr 0xb7fa218, size 0x1e0, virtual false, abstract: false, final false
inline void Dispose() ;

// Ctor Parameters []
// @brief default ctor
constexpr UIRenderDevice_DeviceToFree() ;

// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "commandLists", ty: "::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>", modifiers: "", def_value: None, comment: None }]
constexpr UIRenderDevice_DeviceToFree(uint32_t  handle, ::UnityEngine::UIElements::UIR::Page*  page, ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>  commandLists) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8604};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field handle, offset: 0x0, size: 0x4, def value: None
 uint32_t  handle;

/// @brief Field page, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::Page*  page;

/// @brief Field commandLists, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>  commandLists;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DeviceToFree, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DeviceToFree, page) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DeviceToFree, commandLists) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIRenderDevice_DeviceToFree) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
